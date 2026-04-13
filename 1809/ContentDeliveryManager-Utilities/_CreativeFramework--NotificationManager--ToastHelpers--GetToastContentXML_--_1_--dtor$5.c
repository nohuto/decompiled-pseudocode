/*
 * XREFs of _CreativeFramework::NotificationManager::ToastHelpers::GetToastContentXML_::_1_::dtor$5 @ 0x1800CF7C1
 * Callers:
 *     <none>
 * Callees:
 *     ??1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ @ 0x18002EBC4 (--1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ.c)
 */

void __fastcall CreativeFramework::NotificationManager::ToastHelpers::GetToastContentXML_::_1_::dtor_5(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~2u;
    CreativeFramework::TargetedContentLayoutHelpers::Tile::~Tile((void **)(a2 + 72));
  }
}
