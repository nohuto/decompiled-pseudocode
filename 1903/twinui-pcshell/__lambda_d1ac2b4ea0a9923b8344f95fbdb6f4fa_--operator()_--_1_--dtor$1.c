/*
 * XREFs of __lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa_::operator()_::_1_::dtor$1 @ 0x1800C5972
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x1800FF580 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall _lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa_::operator()_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 120) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 120) &= ~1u;
    Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)(a2 + 136));
  }
}
