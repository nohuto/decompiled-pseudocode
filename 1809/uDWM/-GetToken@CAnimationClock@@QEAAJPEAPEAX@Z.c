/*
 * XREFs of ?GetToken@CAnimationClock@@QEAAJPEAPEAX@Z @ 0x180006AC4
 * Callers:
 *     ?OnGetAnimationClockToken@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAX@Z @ 0x180006A60 (-OnGetAnimationClockToken@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800245C0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationClock::GetToken(CAnimationClock *this, void **a2)
{
  int v4; // edi
  char *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = (char *)this + 24;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  *a2 = 0LL;
  if ( *((_QWORD *)this + 13)
    || (v4 = (*(__int64 (__fastcall **)(_QWORD, GUID *, char *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                  + 26)
                                                               + 216LL))(
               *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26),
               &GUID_64217f82_b1ca_430c_8a88_6cedec74c860,
               (char *)this + 104),
        v4 >= 0) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                               + 26)
                                                            + 224LL))(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26),
           *((_QWORD *)this + 13),
           a2);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v6);
  return (unsigned int)v4;
}
