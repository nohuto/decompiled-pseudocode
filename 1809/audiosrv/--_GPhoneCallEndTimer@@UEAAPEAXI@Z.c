/*
 * XREFs of ??_GPhoneCallEndTimer@@UEAAPEAXI@Z @ 0x18011AFA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180060C94 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?StopTimer@RoutingTimer@@UEAAXXZ @ 0x18011CAC0 (-StopTimer@RoutingTimer@@UEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
PhoneCallEndTimer *__fastcall PhoneCallEndTimer::`scalar deleting destructor'(PhoneCallEndTimer *this, char a2)
{
  *(_QWORD *)this = &RoutingTimer::`vftable';
  if ( *((_QWORD *)this + 3) )
    RoutingTimer::StopTimer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
