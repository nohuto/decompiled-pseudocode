/*
 * XREFs of _WindowEventDispatcher::AppViewActivationRequested_::_1_::dtor$6 @ 0x1800C4910
 * Callers:
 *     <none>
 * Callees:
 *     ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18010E8F8 (--1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall WindowEventDispatcher::AppViewActivationRequested_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 84) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 84) &= ~1u;
    Microsoft::WRL::Wrappers::HStringReference::~HStringReference((Microsoft::WRL::Wrappers::HStringReference *)(a2 + 1168));
  }
}
