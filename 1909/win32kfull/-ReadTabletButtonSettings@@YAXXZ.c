/*
 * XREFs of ?ReadTabletButtonSettings@@YAXXZ @ 0x1C01DB794
 * Callers:
 *     ?RegisterTabletButtonHandler@@YAXXZ @ 0x1C01DB834 (-RegisterTabletButtonHandler@@YAXXZ.c)
 * Callees:
 *     ?ReadTabletButtonConfig@@YAJIQEBGPEAUtagTABLET_BUTTON_DESK_CONFIG@@@Z @ 0x1C01DB35C (-ReadTabletButtonConfig@@YAJIQEBGPEAUtagTABLET_BUTTON_DESK_CONFIG@@@Z.c)
 *     ?ReadTabletButtonIndex@@YAJIPEAK@Z @ 0x1C01DB5D4 (-ReadTabletButtonIndex@@YAJIPEAK@Z.c)
 */

void ReadTabletButtonSettings(void)
{
  unsigned int i; // edi
  unsigned __int64 v1; // rbx
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  for ( i = 0; i < 0xA; ++i )
  {
    if ( (int)ReadTabletButtonIndex(i, &v2) >= 0 )
    {
      v1 = (unsigned __int64)v2 << 7;
      ReadTabletButtonConfig(
        i,
        L"PrimaryLandscape",
        (struct tagTABLET_BUTTON_DESK_CONFIG *)((char *)&TabButtonConfig + v1));
      ReadTabletButtonConfig(
        i,
        L"PrimaryPortrait",
        (struct tagTABLET_BUTTON_DESK_CONFIG *)((char *)&TabButtonConfig + v1 + 32));
      ReadTabletButtonConfig(
        i,
        L"SecondaryLandscape",
        (struct tagTABLET_BUTTON_DESK_CONFIG *)((char *)&TabButtonConfig + v1 + 64));
      ReadTabletButtonConfig(
        i,
        L"SecondaryPortrait",
        (struct tagTABLET_BUTTON_DESK_CONFIG *)((char *)&TabButtonConfig + v1 + 96));
    }
  }
}
