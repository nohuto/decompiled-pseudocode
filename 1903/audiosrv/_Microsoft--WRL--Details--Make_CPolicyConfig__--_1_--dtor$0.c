/*
 * XREFs of _Microsoft::WRL::Details::Make_CPolicyConfig__::_1_::dtor$0 @ 0x180071DEC
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x1800444C8 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall Microsoft::WRL::Details::Make_CPolicyConfig__::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    Microsoft::WRL::WeakRef::~WeakRef(*(Microsoft::WRL::WeakRef **)(a2 + 80));
  }
}
