/*
 * XREFs of ResFwConfigureDisplayStringResources @ 0x14098E650
 * Callers:
 *     BgpFwLibraryInitialize @ 0x14098F9A8 (BgpFwLibraryInitialize.c)
 * Callees:
 *     BgpTxtRegionSize @ 0x140178434 (BgpTxtRegionSize.c)
 *     BgpTxtCreateRegion @ 0x140990088 (BgpTxtCreateRegion.c)
 *     BgpFoGetFontHandle @ 0x1409902F4 (BgpFoGetFontHandle.c)
 */

__int64 __fastcall ResFwConfigureDisplayStringResources(__int64 a1)
{
  int v2; // eax
  int v4; // [rsp+30h] [rbp-28h] BYREF
  int v5; // [rsp+34h] [rbp-24h]
  __int64 v6; // [rsp+38h] [rbp-20h]
  int v7; // [rsp+40h] [rbp-18h]
  int v8; // [rsp+44h] [rbp-14h]
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF

  v6 = 0LL;
  if ( !a1 || (*(_DWORD *)(a1 + 24) & 1) == 0 || (int)BgpFoGetFontHandle(0LL) < 0 )
    return 0LL;
  if ( (_BYTE)qword_14042C1B0 )
  {
    v4 = HIDWORD(qword_14042C1B0);
    v5 = dword_14042C1B8;
  }
  else
  {
    v4 = 0;
    v5 = -1;
  }
  v2 = *(_DWORD *)(a1 + 20);
  v8 = 0;
  v7 = v2;
  if ( (int)BgpTxtCreateRegion(a1, (int)a1 + 8, (unsigned int)&v4, (unsigned int)&v9, 0) < 0 )
    return 0LL;
  dword_14042C05C = BgpTxtRegionSize(v9);
  return v9;
}
