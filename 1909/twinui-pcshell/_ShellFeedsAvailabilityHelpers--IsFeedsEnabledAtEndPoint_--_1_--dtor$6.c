/*
 * XREFs of _ShellFeedsAvailabilityHelpers::IsFeedsEnabledAtEndPoint_::_1_::dtor$6 @ 0x1800D2948
 * Callers:
 *     <none>
 * Callees:
 *     ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18012DB20 (--1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall ShellFeedsAvailabilityHelpers::IsFeedsEnabledAtEndPoint_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 52) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 52) &= ~1u;
    Microsoft::WRL::Wrappers::HStringReference::~HStringReference((Microsoft::WRL::Wrappers::HStringReference *)(a2 + 128));
  }
}
