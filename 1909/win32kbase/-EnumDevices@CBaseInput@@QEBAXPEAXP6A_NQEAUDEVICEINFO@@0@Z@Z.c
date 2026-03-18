/*
 * XREFs of ?EnumDevices@CBaseInput@@QEBAXPEAXP6A_NQEAUDEVICEINFO@@0@Z@Z @ 0x1C00537C0
 * Callers:
 *     ?EnvironmentChanged@CPTPProcessor@@SAXXZ @ 0x1C0053780 (-EnvironmentChanged@CPTPProcessor@@SAXXZ.c)
 *     ?TraceEnvironment@CPTPProcessor@@SAXXZ @ 0x1C017A0C4 (-TraceEnvironment@CPTPProcessor@@SAXXZ.c)
 * Callees:
 *     ??0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C0053848 (--0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBaseInput::EnumDevices(
        CBaseInput *this,
        void *a2,
        unsigned __int8 (__fastcall *a3)(struct RIMDEV *, void *))
{
  struct RIMDEV *i; // rbx
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]

  CInpLockSharedIfNeeded::CInpLockSharedIfNeeded(
    (CInpLockSharedIfNeeded *)&v6,
    (struct CInpPushLock *)&CBaseInput::_sLock);
  for ( i = CBaseInput::_spDevList; i && a3(i, a2); i = (struct RIMDEV *)*((_QWORD *)i + 7) )
    ;
  if ( !v7 )
  {
    ExReleasePushLockSharedEx(v6, 0LL);
    KeLeaveCriticalRegion();
  }
}
