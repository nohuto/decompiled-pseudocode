/*
 * XREFs of NtAlpcCancelMessage @ 0x1406CE090
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B79B0 (KiLeaveCriticalRegionUnsafe.c)
 *     ObReferenceObjectByHandle @ 0x1405E8350 (ObReferenceObjectByHandle.c)
 *     AlpcpCancelMessage @ 0x14061590C (AlpcpCancelMessage.c)
 *     AlpcpUnlockMessage @ 0x140615E4C (AlpcpUnlockMessage.c)
 *     AlpcpLookupMessage @ 0x140636970 (AlpcpLookupMessage.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D65C0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtAlpcCancelMessage(void *a1, int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r9
  int v6; // edi
  int v7; // r15d
  __int64 v8; // rsi
  int v9; // ebx
  int v10; // edx
  _DWORD *v11; // rdi
  PVOID Object; // [rsp+40h] [rbp-28h] BYREF
  ULONG_PTR v14; // [rsp+88h] [rbp+20h] BYREF

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
    v10 = v6;
    v11 = Object;
    v9 = AlpcpLookupMessage((__int64)Object, v10, v7, &v14);
    if ( v9 >= 0 )
    {
      if ( (a2 & 8) == 0 )
        goto LABEL_14;
      if ( (v11[104] & 6) == 4 )
      {
        if ( v8 == *(_QWORD *)(v14 + 104) )
        {
LABEL_14:
          if ( (*(_DWORD *)(v14 + 40) & 0x80u) != 0 )
          {
            AlpcpUnlockMessage(v14);
            v9 = -1073740029;
          }
          else
          {
            v9 = AlpcpCancelMessage((__int64)v11, v14, a2);
          }
          goto LABEL_16;
        }
      }
      else if ( v8 == *(_QWORD *)(v14 + 112) )
      {
        goto LABEL_14;
      }
      AlpcpUnlockMessage(v14);
      v9 = -1073740007;
    }
LABEL_16:
    ObfDereferenceObject(v11);
  }
LABEL_17:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v9;
}
