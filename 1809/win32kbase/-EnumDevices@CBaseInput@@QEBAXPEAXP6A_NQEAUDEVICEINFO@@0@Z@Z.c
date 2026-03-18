/*
 * XREFs of ?EnumDevices@CBaseInput@@QEBAXPEAXP6A_NQEAUDEVICEINFO@@0@Z@Z @ 0x1C003CDF0
 * Callers:
 *     ?EnvironmentChanged@CPTPProcessor@@SAXXZ @ 0x1C003CDB0 (-EnvironmentChanged@CPTPProcessor@@SAXXZ.c)
 *     ?TraceEnvironment@CPTPProcessor@@SAXXZ @ 0x1C014C26C (-TraceEnvironment@CPTPProcessor@@SAXXZ.c)
 * Callees:
 *     ??0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C003D37C (--0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBaseInput::EnumDevices(
        CBaseInput *this,
        struct CInpPushLock *a2,
        unsigned __int8 (__fastcall *a3)(struct DEVICEINFO *, struct CInpPushLock *))
{
  struct DEVICEINFO *i; // rbx
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]

  CInpLockSharedIfNeeded::CInpLockSharedIfNeeded((CInpLockSharedIfNeeded *)&v6, a2);
  for ( i = CBaseInput::_spDevList; i && a3(i, a2); i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
    ;
  if ( !v7 )
  {
    ExReleasePushLockSharedEx(v6, 0LL);
    KeLeaveCriticalRegion();
  }
}
