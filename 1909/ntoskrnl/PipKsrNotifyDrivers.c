/*
 * XREFs of PipKsrNotifyDrivers @ 0x140875998
 * Callers:
 *     PipKsrCallback @ 0x140875940 (PipKsrCallback.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     PnpDereferenceNotify @ 0x140737C68 (PnpDereferenceNotify.c)
 *     PnpNotifyDriverCallback @ 0x140737E98 (PnpNotifyDriverCallback.c)
 */

__int64 __fastcall PipKsrNotifyDrivers(_QWORD *a1)
{
  unsigned int v2; // esi
  PVOID *v3; // rbx
  PVOID **v4; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int128 v8; // xmm0
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  int v14; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v15[20]; // [rsp+28h] [rbp-28h] BYREF

  v2 = 0;
  memset(v15, 0, sizeof(v15));
  v14 = 0;
  ExAcquireFastMutex(&PnpKsrNotifyLock);
  v3 = (PVOID *)PnpKsrNotifyList;
  if ( PnpKsrNotifyList != &PnpKsrNotifyList )
  {
    do
    {
      ++*((_WORD *)v3 + 28);
      v4 = (PVOID **)v3;
      KeReleaseGuardedMutex(&PnpKsrNotifyLock);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite((PERESOURCE)v3[9], 1u);
      if ( *((_BYTE *)v3 + 58) )
        goto LABEL_21;
      v6 = *a1 - *(_QWORD *)&GUID_KERNEL_SOFT_RESTART_CANCEL.Data1;
      if ( *a1 == *(_QWORD *)&GUID_KERNEL_SOFT_RESTART_CANCEL.Data1 )
        v6 = a1[1] - *(_QWORD *)GUID_KERNEL_SOFT_RESTART_CANCEL.Data4;
      if ( !v6 && !*((_BYTE *)v3 + 80) )
        goto LABEL_21;
      v7 = *a1 - *(_QWORD *)&GUID_KERNEL_SOFT_RESTART_PREPARE.Data1;
      if ( *a1 == *(_QWORD *)&GUID_KERNEL_SOFT_RESTART_PREPARE.Data1 )
        v7 = a1[1] - *(_QWORD *)GUID_KERNEL_SOFT_RESTART_PREPARE.Data4;
      if ( v7 || !*((_BYTE *)v3 + 80) )
      {
        v8 = *(_OWORD *)a1;
        *(_DWORD *)v15 = 1310721;
        *(_OWORD *)&v15[4] = v8;
        v9 = PnpNotifyDriverCallback((__int64)v3, (__int64)v15, &v14);
        if ( v9 < 0 )
        {
          v14 = v9;
        }
        else
        {
          v10 = *a1 - *(_QWORD *)&GUID_KERNEL_SOFT_RESTART_PREPARE.Data1;
          if ( *a1 == *(_QWORD *)&GUID_KERNEL_SOFT_RESTART_PREPARE.Data1 )
            v10 = a1[1] - *(_QWORD *)GUID_KERNEL_SOFT_RESTART_PREPARE.Data4;
          if ( v10 )
          {
            v11 = *a1 - *(_QWORD *)&GUID_KERNEL_SOFT_RESTART_CANCEL.Data1;
            if ( *a1 == *(_QWORD *)&GUID_KERNEL_SOFT_RESTART_CANCEL.Data1 )
              v11 = a1[1] - *(_QWORD *)GUID_KERNEL_SOFT_RESTART_CANCEL.Data4;
            if ( !v11 )
              *((_BYTE *)v3 + 80) = 0;
          }
          else
          {
            *((_BYTE *)v3 + 80) = 1;
          }
        }
      }
      else
      {
LABEL_21:
        v14 = 0;
      }
      ExReleaseResourceLite((PERESOURCE)v3[9]);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      ExAcquireFastMutex(&PnpKsrNotifyLock);
      v3 = (PVOID *)*v3;
      PnpDereferenceNotify(v4);
      v2 = v14;
      if ( v14 < 0 )
      {
        v12 = *a1 - *(_QWORD *)&GUID_KERNEL_SOFT_RESTART_PREPARE.Data1;
        if ( *a1 == *(_QWORD *)&GUID_KERNEL_SOFT_RESTART_PREPARE.Data1 )
          v12 = a1[1] - *(_QWORD *)GUID_KERNEL_SOFT_RESTART_PREPARE.Data4;
        if ( !v12 )
          break;
      }
    }
    while ( v3 != &PnpKsrNotifyList );
  }
  KeReleaseGuardedMutex(&PnpKsrNotifyLock);
  return v2;
}
