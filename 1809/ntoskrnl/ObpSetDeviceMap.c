/*
 * XREFs of ObpSetDeviceMap @ 0x1406C7C1C
 * Callers:
 *     SeGetTokenDeviceMap @ 0x1406A405C (SeGetTokenDeviceMap.c)
 *     ObpSetSiloDeviceMap @ 0x14072D4A8 (ObpSetSiloDeviceMap.c)
 *     ObSetProcessDeviceMap @ 0x140865090 (ObSetProcessDeviceMap.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     PsGetServerSiloGlobals @ 0x1400922CC (PsGetServerSiloGlobals.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ObpCloseHandle @ 0x1405F673C (ObpCloseHandle.c)
 *     ObOpenObjectByPointer @ 0x1406480E0 (ObOpenObjectByPointer.c)
 *     ObfDereferenceDeviceMap @ 0x140672B80 (ObfDereferenceDeviceMap.c)
 */

NTSTATUS __fastcall ObpSetDeviceMap(PVOID Object, __int64 a2, void *a3, KPROCESSOR_MODE a4, char a5, _QWORD *a6)
{
  NTSTATUS result; // eax
  PVOID v9; // rdi
  _QWORD *PoolWithTag; // rax
  _QWORD *v11; // rbx
  NTSTATUS v12; // ebp
  void *v13; // rbp
  unsigned __int64 *v14; // rdi
  void ***ServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rcx
  void ***v17; // rsi
  _QWORD *v18; // rcx
  __int64 v19; // rax
  _QWORD *v20; // rdx
  int v21; // ebx
  void *v22; // rcx
  PVOID Objecta; // [rsp+40h] [rbp-28h] BYREF

  result = ObReferenceObjectByHandle(a3, 2u, ObpDirectoryObjectType, a4, &Objecta, 0LL);
  if ( result < 0 )
    return result;
  v9 = Objecta;
  if ( (a5 & 4) == 0 && (*((_DWORD *)Objecta + 84) & 4) != 0 )
  {
    v21 = -1073741811;
LABEL_25:
    ObfDereferenceObject(v9);
    return v21;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x6D44624Fu);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v21 = -1073741670;
    goto LABEL_25;
  }
  memset(PoolWithTag, 0, 0x48uLL);
  *((_DWORD *)v11 + 6) = 1;
  *v11 = v9;
  v12 = ObOpenObjectByPointer(v9, 0x200u, 0LL, 0xF000Fu, ObpDirectoryObjectType, 0, (PHANDLE)v11 + 2);
  if ( v12 < 0 )
  {
    ObfDereferenceObject(v9);
    ExFreePoolWithTag(v11, 0x6D44624Fu);
    return v12;
  }
  else
  {
    if ( Object )
    {
      ObfReferenceObjectWithTag(Object, 0x6D44624Fu);
      v11[8] = Object;
    }
    v13 = 0LL;
    v14 = 0LL;
    ServerSiloGlobals = (void ***)PsGetServerSiloGlobals((__int64)Object);
    CurrentThread = KeGetCurrentThread();
    v17 = ServerSiloGlobals;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(ServerSiloGlobals + 15), 0LL);
    v18 = Objecta;
    v19 = *((_QWORD *)Objecta + 38);
    if ( v19 )
    {
      v14 = v11;
      v11 = (_QWORD *)*((_QWORD *)Objecta + 38);
      _InterlockedIncrement((volatile signed __int32 *)(v19 + 24));
    }
    else
    {
      if ( (a5 & 1) != 0 )
        *v17 = (void **)v11;
      v18[38] = v11;
      if ( (a5 & 2) != 0 )
      {
        v20 = **v17;
        if ( v18 != v20 )
          v11[1] = v20;
      }
    }
    if ( a2 )
    {
      v13 = *(void **)(a2 + 1072);
      *(_QWORD *)(a2 + 1072) = v11;
    }
    ExReleasePushLockEx((ULONG_PTR)(v17 + 15), 0LL);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    if ( v14 )
    {
      ObpCloseHandle(v14[2], 0);
      ObfDereferenceObject(Objecta);
      v22 = (void *)v11[8];
      if ( v22 )
        ObfDereferenceObjectWithTag(v22, 0x6D44624Fu);
      ExFreePoolWithTag(v14, 0x6D44624Fu);
    }
    if ( v13 )
      ObfDereferenceDeviceMap(v13);
    if ( a6 )
      *a6 = v11;
    return 0;
  }
}
