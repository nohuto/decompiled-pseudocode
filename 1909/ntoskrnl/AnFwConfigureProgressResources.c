/*
 * XREFs of AnFwConfigureProgressResources @ 0x14098E6E4
 * Callers:
 *     BgpFwLibraryInitialize @ 0x14098F9A8 (BgpFwLibraryInitialize.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     BgpTxtRegionSize @ 0x140178B24 (BgpTxtRegionSize.c)
 *     BgpGxRectangleSize @ 0x140178B84 (BgpGxRectangleSize.c)
 *     BgpGetBitsPerPixel @ 0x140179128 (BgpGetBitsPerPixel.c)
 *     BgpTxtCreateRegion @ 0x140990088 (BgpTxtCreateRegion.c)
 *     BgpFoGetFontHandle @ 0x1409902F4 (BgpFoGetFontHandle.c)
 */

__int64 __fastcall AnFwConfigureProgressResources(int *a1)
{
  int BitsPerPixel; // eax
  _DWORD v4[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v5; // [rsp+38h] [rbp-20h]
  int v6; // [rsp+40h] [rbp-18h]
  int v7; // [rsp+44h] [rbp-14h]
  __int64 v8; // [rsp+60h] [rbp+8h] BYREF

  v5 = 0LL;
  KeInitializeEvent(&stru_140509160, NotificationEvent, 1u);
  if ( !a1 )
    return 0LL;
  if ( (a1[6] & 1) == 0 )
    return 0LL;
  if ( (int)BgpFoGetFontHandle(0LL) < 0 )
    return 0LL;
  v4[0] = HIDWORD(qword_14042C190);
  v4[1] = dword_14042C198;
  v6 = a1[5];
  v7 = 1;
  if ( (int)BgpTxtCreateRegion((_DWORD)a1, (int)a1 + 8, (unsigned int)v4, (unsigned int)&v8, 10) < 0 )
    return 0LL;
  BitsPerPixel = BgpGetBitsPerPixel();
  dword_14042C034 = ((BgpGxRectangleSize(a1[3], a1[2], BitsPerPixel) + 15) & 0xFFFFFFF0) + 128;
  dword_14042C030 = 122 * dword_14042C034;
  dword_14042C038 = BgpTxtRegionSize(v8);
  return v8;
}
