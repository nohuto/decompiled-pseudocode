/*
 * XREFs of AnFwConfigureProgressResources @ 0x14094E6DC
 * Callers:
 *     BgpFwLibraryInitialize @ 0x14094F95C (BgpFwLibraryInitialize.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400B8E70 (KeInitializeEvent.c)
 *     BgpTxtRegionSize @ 0x14016EC74 (BgpTxtRegionSize.c)
 *     BgpGxRectangleSize @ 0x14016ECD4 (BgpGxRectangleSize.c)
 *     BgpGetBitsPerPixel @ 0x14016F1E0 (BgpGetBitsPerPixel.c)
 *     BgpTxtCreateRegion @ 0x14095003C (BgpTxtCreateRegion.c)
 *     BgpFoGetFontHandle @ 0x1409502A4 (BgpFoGetFontHandle.c)
 */

__int64 __fastcall AnFwConfigureProgressResources(int *a1)
{
  int BitsPerPixel; // eax
  _DWORD v4[10]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v5; // [rsp+60h] [rbp+8h] BYREF

  KeInitializeEvent(&stru_1404DBDD0, NotificationEvent, 1u);
  if ( !a1 )
    return 0LL;
  if ( (a1[6] & 1) == 0 )
    return 0LL;
  if ( (int)BgpFoGetFontHandle(0LL) < 0 )
    return 0LL;
  v4[0] = HIDWORD(qword_140405C50);
  v4[1] = dword_140405C58;
  v4[4] = a1[5];
  v4[5] = 1;
  if ( (int)BgpTxtCreateRegion((_DWORD)a1, (int)a1 + 8, (unsigned int)v4, (unsigned int)&v5, 10) < 0 )
    return 0LL;
  BitsPerPixel = BgpGetBitsPerPixel();
  dword_140405AF4 = ((BgpGxRectangleSize(a1[3], a1[2], BitsPerPixel) + 15) & 0xFFFFFFF0) + 128;
  dword_140405AF0 = 122 * dword_140405AF4;
  dword_140405AF8 = BgpTxtRegionSize(v5);
  return v5;
}
