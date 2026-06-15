/*
 * XREFs of ?AtmosCodecsStatusChanged@MyAtmosCheckCallback@@UEAAXXZ @ 0x180124DF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MyAtmosCheckCallback::AtmosCodecsStatusChanged(MyAtmosCheckCallback *this)
{
  void (*v1)(void); // rbx

  if ( MyAtmosCheckCallback::m_pCallback )
  {
    EnterCriticalSection(&CSpatialAudioTech::s_atmosLock);
    v1 = 0LL;
    if ( CSpatialAudioTech::s_spAtmosCheck )
      v1 = (void (*)(void))MyAtmosCheckCallback::m_pCallback;
    LeaveCriticalSection(&CSpatialAudioTech::s_atmosLock);
    if ( v1 )
      v1();
  }
}
