/*
 * XREFs of _TabViewManager::OnSelectTabRequested_::_1_::dtor$14 @ 0x1801E0718
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x1800DD820 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall TabViewManager::OnSelectTabRequested_::_1_::dtor_14(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 96) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 96) &= ~2u;
    Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 80));
  }
}
