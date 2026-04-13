/*
 * XREFs of _CreativeFramework::Actions::NotificationManagerService::NotificationManagerService_::_1_::dtor$12 @ 0x1800D3121
 * Callers:
 *     <none>
 * Callees:
 *     ??1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ @ 0x18002FA5C (--1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ.c)
 */

void __fastcall CreativeFramework::Actions::NotificationManagerService::NotificationManagerService_::_1_::dtor_12(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 68) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 68) &= ~1u;
    CreativeFramework::TargetedContentLayoutHelpers::Tile::~Tile((void **)(a2 + 400));
  }
}
