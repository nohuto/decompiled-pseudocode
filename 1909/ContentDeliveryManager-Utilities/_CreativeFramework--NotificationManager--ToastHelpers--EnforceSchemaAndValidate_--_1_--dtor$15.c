/*
 * XREFs of _CreativeFramework::NotificationManager::ToastHelpers::EnforceSchemaAndValidate_::_1_::dtor$15 @ 0x1800D3BAB
 * Callers:
 *     <none>
 * Callees:
 *     ??1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ @ 0x18002FA5C (--1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ.c)
 */

void __fastcall CreativeFramework::NotificationManager::ToastHelpers::EnforceSchemaAndValidate_::_1_::dtor_15(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 72) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 72) &= ~1u;
    CreativeFramework::TargetedContentLayoutHelpers::Tile::~Tile((void **)(a2 + 192));
  }
}
