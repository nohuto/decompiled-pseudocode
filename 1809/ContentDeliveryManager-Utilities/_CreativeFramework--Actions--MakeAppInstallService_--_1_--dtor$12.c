/*
 * XREFs of _CreativeFramework::Actions::MakeAppInstallService_::_1_::dtor$12 @ 0x1800CDD27
 * Callers:
 *     <none>
 * Callees:
 *     ??1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ @ 0x18002EBC4 (--1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ.c)
 */

void __fastcall CreativeFramework::Actions::MakeAppInstallService_::_1_::dtor_12(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 100) & 4) != 0 )
  {
    *(_DWORD *)(a2 + 100) &= ~4u;
    CreativeFramework::TargetedContentLayoutHelpers::Tile::~Tile((void **)(a2 + 128));
  }
}
