/*
 * XREFs of ??_GPersistedEndpointPolicyRule@@UEAAPEAXI@Z @ 0x18012A064
 * Callers:
 *     ??_EPersistedEndpointPolicyRule@@W7EAAPEAXI@Z @ 0x18006C2A0 (--_EPersistedEndpointPolicyRule@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800642D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

PersistedEndpointPolicyRule *__fastcall PersistedEndpointPolicyRule::`scalar deleting destructor'(
        PersistedEndpointPolicyRule *this,
        char a2)
{
  *(_QWORD *)this = &PersistedEndpointPolicyRule::`vftable'{for `IPolicyRule'};
  *((_QWORD *)this + 1) = &CUnknown::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
