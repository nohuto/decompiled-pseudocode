/*
 * XREFs of NtAlpcRevokeSecurityContext @ 0x14084A160
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     ObReferenceObjectByHandle @ 0x1405E8350 (ObReferenceObjectByHandle.c)
 *     AlpcReferenceBlobByHandle @ 0x140618368 (AlpcReferenceBlobByHandle.c)
 *     AlpcpDereferenceBlobEx @ 0x140618C70 (AlpcpDereferenceBlobEx.c)
 */

__int64 __fastcall NtAlpcRevokeSecurityContext(void *a1, int a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v5; // edi
  PVOID v6; // rbp
  ULONG_PTR v7; // rax
  ULONG_PTR v8; // rsi
  volatile signed __int64 *v9; // rbp
  int v10; // eax
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a2 )
  {
    v5 = -1073741811;
  }
  else
  {
    v5 = ObReferenceObjectByHandle(a1, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
    if ( v5 >= 0 )
    {
      v6 = Object;
      v7 = AlpcReferenceBlobByHandle((_QWORD *)(*((_QWORD *)Object + 2) + 40LL), a3, AlpcSecurityType);
      v8 = v7;
      if ( v7 )
      {
        if ( v6 == *(PVOID *)(v7 + 24) )
        {
          v9 = (volatile signed __int64 *)(v7 - 16);
          ExAcquirePushLockExclusiveEx(v7 - 16, 0LL);
          v10 = *(_DWORD *)(v8 + 104);
          if ( (v10 & 2) != 0 )
          {
            v5 = -1073741823;
          }
          else
          {
            *(_DWORD *)(v8 + 104) = v10 | 1;
            v5 = 0;
          }
          if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v9);
          KeAbPostRelease((ULONG_PTR)v9);
          v6 = Object;
        }
        else
        {
          v5 = -1073741790;
        }
        AlpcpDereferenceBlobEx(v8, 1);
      }
      else
      {
        v5 = -1073741816;
      }
      ObfDereferenceObject(v6);
    }
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v5;
}
