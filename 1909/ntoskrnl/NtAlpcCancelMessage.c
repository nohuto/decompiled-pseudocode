/*
 * XREFs of NtAlpcCancelMessage @ 0x1406EEF00
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     AlpcpLookupMessage @ 0x1405E3E30 (AlpcpLookupMessage.c)
 *     AlpcpUnlockMessage @ 0x1405E5210 (AlpcpUnlockMessage.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     AlpcpCancelMessage @ 0x14065B22C (AlpcpCancelMessage.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtAlpcCancelMessage(void *a1, int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r9
  unsigned int v6; // edi
  int v7; // r15d
  __int64 v8; // rsi
  int v9; // ebx
  __int64 v10; // r9
  __int64 v11; // rdx
  _DWORD *v12; // rdi
  PVOID Object; // [rsp+40h] [rbp-28h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( (a2 & 0xFFFFFFF0) != 0 )
  {
    v9 = -1073741811;
    goto LABEL_17;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (a2 & 4) != 0 )
    {
      if ( (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v6 = *(_DWORD *)(a3 + 12);
      v7 = *(_DWORD *)(a3 + 16);
      v8 = *(unsigned int *)(a3 + 4);
    }
    else
    {
      if ( (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v6 = *(_DWORD *)(a3 + 20);
      v7 = *(_DWORD *)(a3 + 24);
      v8 = *(_QWORD *)(a3 + 8);
    }
  }
  else
  {
    v6 = *(_DWORD *)(a3 + 20);
    v7 = *(_DWORD *)(a3 + 24);
    v8 = *(_QWORD *)(a3 + 8);
  }
  if ( !v6 )
  {
    v9 = -1073741559;
    goto LABEL_17;
  }
  v9 = ObReferenceObjectByHandle(a1, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v9 >= 0 )
  {
    v11 = v6;
    v12 = Object;
    v9 = AlpcpLookupMessage((__int64)Object, v11, v7, v10, &BugCheckParameter2);
    if ( v9 >= 0 )
    {
      if ( (a2 & 8) == 0 )
        goto LABEL_14;
      if ( (v12[104] & 6) == 4 )
      {
        if ( v8 == *(_QWORD *)(BugCheckParameter2 + 104) )
        {
LABEL_14:
          if ( (*(_DWORD *)(BugCheckParameter2 + 40) & 0x80u) != 0 )
          {
            AlpcpUnlockMessage(BugCheckParameter2);
            v9 = -1073740029;
          }
          else
          {
            v9 = AlpcpCancelMessage((__int64)v12, BugCheckParameter2, a2);
          }
          goto LABEL_16;
        }
      }
      else if ( v8 == *(_QWORD *)(BugCheckParameter2 + 112) )
      {
        goto LABEL_14;
      }
      AlpcpUnlockMessage(BugCheckParameter2);
      v9 = -1073740007;
    }
LABEL_16:
    ObfDereferenceObject(v12);
  }
LABEL_17:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v9;
}
