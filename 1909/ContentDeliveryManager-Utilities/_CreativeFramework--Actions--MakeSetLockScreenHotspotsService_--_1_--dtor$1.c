/*
 * XREFs of _CreativeFramework::Actions::MakeSetLockScreenHotspotsService_::_1_::dtor$1 @ 0x1800D21EF
 * Callers:
 *     <none>
 * Callees:
 *     ??1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ @ 0x18002FA5C (--1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ.c)
 */

void __fastcall CreativeFramework::Actions::MakeSetLockScreenHotspotsService_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    CreativeFramework::TargetedContentLayoutHelpers::Tile::~Tile((void **)(a2 + 168));
  }
}
