/*
 * XREFs of _CreativeFramework::Actions::MakeAppInstallService_::_1_::dtor$17 @ 0x1800D1EF1
 * Callers:
 *     <none>
 * Callees:
 *     ??1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ @ 0x18002F61C (--1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ.c)
 */

void __fastcall CreativeFramework::Actions::MakeAppInstallService_::_1_::dtor_17(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 100) & 0x20) != 0 )
  {
    *(_DWORD *)(a2 + 100) &= ~0x20u;
    CreativeFramework::TargetedContentLayoutHelpers::Tile::~Tile((void **)(a2 + 128));
  }
}
