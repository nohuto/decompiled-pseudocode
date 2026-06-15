/*
 * XREFs of ??_GRemapPolicyRule@@UEAAPEAXI@Z @ 0x180129CA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800652C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1PolicyRule@@UEAA@XZ @ 0x180129B04 (--1PolicyRule@@UEAA@XZ.c)
 */

RemapPolicyRule *__fastcall RemapPolicyRule::`scalar deleting destructor'(RemapPolicyRule *this, char a2)
{
  *(_QWORD *)this = &RemapPolicyRule::`vftable';
  PolicyRule::~PolicyRule(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x158);
  return this;
}
