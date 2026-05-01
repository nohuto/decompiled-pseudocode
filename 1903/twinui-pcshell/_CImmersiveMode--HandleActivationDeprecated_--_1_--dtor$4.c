/*
 * XREFs of _CImmersiveMode::HandleActivationDeprecated_::_1_::dtor$4 @ 0x1800C5E46
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x1800FF580 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CImmersiveMode::HandleActivationDeprecated_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~2u;
    Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)(a2 + 64));
  }
}
