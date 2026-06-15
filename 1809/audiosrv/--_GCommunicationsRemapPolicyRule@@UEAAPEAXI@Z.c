/*
 * XREFs of ??_GCommunicationsRemapPolicyRule@@UEAAPEAXI@Z @ 0x18011D5D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180060C94 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1PolicyRule@@UEAA@XZ @ 0x18011D4F0 (--1PolicyRule@@UEAA@XZ.c)
 */

CommunicationsRemapPolicyRule *__fastcall CommunicationsRemapPolicyRule::`scalar deleting destructor'(
        CommunicationsRemapPolicyRule *this,
        char a2)
{
  *(_QWORD *)this = &RemapPolicyRule::`vftable';
  PolicyRule::~PolicyRule(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x160);
  return this;
}
