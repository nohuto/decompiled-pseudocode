/*
 * XREFs of _ShellFeedsAvailabilityHelpers::IsFeedsEnabledAtEndPoint_::_1_::dtor$8 @ 0x1800D297D
 * Callers:
 *     <none>
 * Callees:
 *     ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18012DB20 (--1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall ShellFeedsAvailabilityHelpers::IsFeedsEnabledAtEndPoint_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 52) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 52) &= ~2u;
    Microsoft::WRL::Wrappers::HStringReference::~HStringReference((Microsoft::WRL::Wrappers::HStringReference *)(a2 + 128));
  }
}
