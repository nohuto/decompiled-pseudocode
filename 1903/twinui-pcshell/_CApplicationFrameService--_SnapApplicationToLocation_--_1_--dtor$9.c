/*
 * XREFs of _CApplicationFrameService::_SnapApplicationToLocation_::_1_::dtor$9 @ 0x18013F218
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x1800FF580 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CApplicationFrameService::_SnapApplicationToLocation_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 8) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~8u;
    Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 56));
  }
}
