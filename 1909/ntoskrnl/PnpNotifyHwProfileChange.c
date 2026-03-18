/*
 * XREFs of PnpNotifyHwProfileChange @ 0x14085F82C
 * Callers:
 *     PnpDeviceEventWorker @ 0x140699360 (PnpDeviceEventWorker.c)
 *     PnpRequestHwProfileChangeNotification @ 0x14085FAF4 (PnpRequestHwProfileChangeNotification.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     RtlCopyUnicodeString @ 0x140043EC0 (RtlCopyUnicodeString.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1401CCD70 (RtlCompareMemory.c)
 *     PnpDereferenceNotify @ 0x140737C68 (PnpDereferenceNotify.c)
 *     PnpNotifyDriverCallback @ 0x140737E98 (PnpNotifyDriverCallback.c)
 */

__int64 __fastcall PnpNotifyHwProfileChange(GUID *Source1, _DWORD *a2, UNICODE_STRING *a3)
{
  int v4; // esi
  PVOID *v7; // rdi
  PVOID **v8; // r13
  struct _KTHREAD *CurrentThread; // rax
  GUID v10; // xmm0
  int v11; // ebx
  PVOID **v12; // rsi
  PVOID **v13; // rbx
  struct _KTHREAD *v14; // rax
  int v16; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v17[20]; // [rsp+28h] [rbp-28h] BYREF

  memset(v17, 0, sizeof(v17));
  v4 = 0;
  v16 = 0;
  ExAcquireFastMutex(&PnpHwProfileNotifyLock);
  v7 = (PVOID *)PnpProfileNotifyList;
  while ( v7 != &PnpProfileNotifyList )
  {
    ++*((_WORD *)v7 + 28);
    v8 = (PVOID **)v7;
    KeReleaseGuardedMutex(&PnpHwProfileNotifyLock);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)v7[9], 1u);
    if ( *((_BYTE *)v7 + 58) )
    {
      ExReleaseResourceLite((PERESOURCE)v7[9]);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v4 = v16;
    }
    else
    {
      v10 = *Source1;
      *(_DWORD *)v17 = 1310721;
      *(GUID *)&v17[4] = v10;
      v11 = PnpNotifyDriverCallback((__int64)v7, (__int64)v17, &v16);
      ExReleaseResourceLite((PERESOURCE)v7[9]);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v4 = v16;
      if ( v11 < 0 )
        v4 = 0;
      v16 = v4;
      if ( v4 < 0
        && (Source1 == &GUID_HWPROFILE_QUERY_CHANGE
         || RtlCompareMemory(Source1, &GUID_HWPROFILE_QUERY_CHANGE, 0x10uLL) == 16) )
      {
        if ( a2 )
          *a2 = 7;
        if ( a3 )
        {
          a3->Length = 0;
          RtlCopyUnicodeString(a3, (PCUNICODE_STRING)((char *)v7[6] + 56));
        }
        *(_WORD *)&v17[2] = 16;
        v12 = (PVOID **)v7;
        *(GUID *)&v17[4] = GUID_HWPROFILE_CHANGE_CANCELLED;
        ExAcquireFastMutex(&PnpHwProfileNotifyLock);
        do
        {
          ++*((_WORD *)v7 + 28);
          v13 = (PVOID **)v7;
          KeReleaseGuardedMutex(&PnpHwProfileNotifyLock);
          v14 = KeGetCurrentThread();
          --v14->KernelApcDisable;
          ExAcquireResourceExclusiveLite((PERESOURCE)v7[9], 1u);
          if ( !*((_BYTE *)v7 + 58) )
            PnpNotifyDriverCallback((__int64)v7, (__int64)v17, 0LL);
          ExReleaseResourceLite((PERESOURCE)v7[9]);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          ExAcquireFastMutex(&PnpHwProfileNotifyLock);
          v7 = (PVOID *)v7[1];
          PnpDereferenceNotify(v13);
          if ( v13 == v12 )
            PnpDereferenceNotify(v13);
        }
        while ( v7 != &PnpProfileNotifyList );
        v4 = v16;
        break;
      }
    }
    ExAcquireFastMutex(&PnpHwProfileNotifyLock);
    v7 = (PVOID *)*v7;
    PnpDereferenceNotify(v8);
  }
  KeReleaseGuardedMutex(&PnpHwProfileNotifyLock);
  return (unsigned int)v4;
}
