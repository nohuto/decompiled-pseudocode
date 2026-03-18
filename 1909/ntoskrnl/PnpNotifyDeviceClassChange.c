/*
 * XREFs of PnpNotifyDeviceClassChange @ 0x140737AD8
 * Callers:
 *     PnpDeviceEventWorker @ 0x140699360 (PnpDeviceEventWorker.c)
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x140002320 (PsGetServerSiloServiceSessionId.c)
 *     PsGetCurrentServerSilo @ 0x140006560 (PsGetCurrentServerSilo.c)
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1401CCD70 (RtlCompareMemory.c)
 *     PnpDereferenceNotify @ 0x140737C68 (PnpDereferenceNotify.c)
 *     IopGetSessionIdFromSymbolicName @ 0x140737D04 (IopGetSessionIdFromSymbolicName.c)
 *     PnpNotifyDriverCallback @ 0x140737E98 (PnpNotifyDriverCallback.c)
 */

__int64 __fastcall PnpNotifyDeviceClassChange(__int128 *a1, _DWORD *a2, __int64 a3)
{
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  int SessionIdFromSymbolicName; // edi
  _QWORD *v8; // r14
  _QWORD *v9; // rbx
  void *v10; // rbp
  unsigned __int64 CurrentServerSilo; // rax
  struct _KTHREAD *CurrentThread; // rcx
  _BYTE v14[8]; // [rsp+20h] [rbp-78h] BYREF
  int v15; // [rsp+28h] [rbp-70h] BYREF
  __int128 v16; // [rsp+2Ch] [rbp-6Ch]
  __int128 v17; // [rsp+3Ch] [rbp-5Ch]
  int v18; // [rsp+4Ch] [rbp-4Ch]
  __int64 v19; // [rsp+50h] [rbp-48h]

  v3 = *a1;
  v18 = 0;
  v4 = *(_OWORD *)a2;
  v16 = v3;
  SessionIdFromSymbolicName = -1;
  v17 = v4;
  v15 = 3145729;
  v19 = a3;
  ExAcquireFastMutex(&PnpDeviceClassNotifyLock);
  v8 = (_QWORD *)((char *)&PnpDeviceClassNotifyList + 16 * ((*a2 + a2[1] + a2[2] + a2[3]) % 0xDu));
  v9 = (_QWORD *)*v8;
  while ( v9 != v8 )
  {
    v10 = v9;
    CurrentServerSilo = PsGetCurrentServerSilo();
    if ( *((_DWORD *)v9 + 5) != (unsigned int)PsGetServerSiloServiceSessionId(CurrentServerSilo) )
      SessionIdFromSymbolicName = IopGetSessionIdFromSymbolicName(a3);
    ++*((_WORD *)v9 + 28);
    KeReleaseGuardedMutex(&PnpDeviceClassNotifyLock);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)v9[9], 1u);
    if ( (SessionIdFromSymbolicName == -1 || *((_DWORD *)v9 + 5) == SessionIdFromSymbolicName)
      && !*((_BYTE *)v9 + 58)
      && (v9 + 10 == (_QWORD *)a2 || RtlCompareMemory(v9 + 10, a2, 0x10uLL) == 16) )
    {
      PnpNotifyDriverCallback(v9, &v15, v14);
    }
    ExReleaseResourceLite((PERESOURCE)v9[9]);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    ExAcquireFastMutex(&PnpDeviceClassNotifyLock);
    v9 = (_QWORD *)*v9;
    PnpDereferenceNotify(v10);
  }
  KeReleaseGuardedMutex(&PnpDeviceClassNotifyLock);
  return 0LL;
}
