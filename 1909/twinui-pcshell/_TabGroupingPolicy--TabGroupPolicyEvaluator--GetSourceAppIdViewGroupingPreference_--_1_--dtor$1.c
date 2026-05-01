/*
 * XREFs of _TabGroupingPolicy::TabGroupPolicyEvaluator::GetSourceAppIdViewGroupingPreference_::_1_::dtor$1 @ 0x180263C10
 * Callers:
 *     <none>
 * Callees:
 *     ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18012DB20 (--1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall TabGroupingPolicy::TabGroupPolicyEvaluator::GetSourceAppIdViewGroupingPreference_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 72) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 72) &= ~1u;
    Microsoft::WRL::Wrappers::HStringReference::~HStringReference((Microsoft::WRL::Wrappers::HStringReference *)(a2 + 104));
  }
}
