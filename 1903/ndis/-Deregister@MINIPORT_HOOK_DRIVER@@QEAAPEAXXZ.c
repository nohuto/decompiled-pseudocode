/*
 * XREFs of ?Deregister@MINIPORT_HOOK_DRIVER@@QEAAPEAXXZ @ 0x1C01281C4
 * Callers:
 *     ?ndisMpHookNmrClientDetachProvider@@YAJPEAX@Z @ 0x1C00C76C0 (-ndisMpHookNmrClientDetachProvider@@YAJPEAX@Z.c)
 *     ?DeregisterAsync@MINIPORT_HOOK_DRIVER@@AEAAXXZ @ 0x1C0128260 (-DeregisterAsync@MINIPORT_HOOK_DRIVER@@AEAAXXZ.c)
 * Callees:
 *     memset @ 0x1C0041440 (memset.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FCD0C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FCF64 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C010A050 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?WaitForAllHookedDriversToDeregister@MINIPORT_HOOK_DRIVER@@AEAAXXZ @ 0x1C0128368 (-WaitForAllHookedDriversToDeregister@MINIPORT_HOOK_DRIVER@@AEAAXXZ.c)
 */

unsigned __int64 __fastcall MINIPORT_HOOK_DRIVER::Deregister(struct _EX_RUNDOWN_REF *this)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 Count; // rbx
  KLockHolder v5; // [rsp+20h] [rbp-28h] BYREF

  MINIPORT_HOOK_DRIVER::WaitForAllHookedDriversToDeregister((MINIPORT_HOOK_DRIVER *)this);
  v2 = 0LL;
  v5.m_Lock = (KPushLockBase *)&g_MiniportHookDriversLock;
  v5.m_State = Unlocked;
  v5.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v5);
  if ( LOBYTE(this->Count) )
  {
    Count = this[2].Count;
    LOBYTE(this->Count) = 0;
    ExReInitializeRundownProtection(this + 1);
    this[3].Count = 0LL;
    this[2].Count = 0LL;
    memset(&this[4], 0, 0x28uLL);
    KLockHolder::ReleaseExclusive(&v5);
    v2 = Count;
  }
  KLockHolder::~KLockHolder(&v5);
  return v2;
}
