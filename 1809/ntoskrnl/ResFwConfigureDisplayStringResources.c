/*
 * XREFs of ResFwConfigureDisplayStringResources @ 0x14094F650
 * Callers:
 *     BgpFwLibraryInitialize @ 0x14095095C (BgpFwLibraryInitialize.c)
 * Callees:
 *     BgpTxtRegionSize @ 0x14016ED74 (BgpTxtRegionSize.c)
 *     BgpTxtCreateRegion @ 0x14095103C (BgpTxtCreateRegion.c)
 *     BgpFoGetFontHandle @ 0x1409512A4 (BgpFoGetFontHandle.c)
 */

__int64 __fastcall ResFwConfigureDisplayStringResources(__int64 a1)
{
  int v2; // eax
  int v4; // [rsp+30h] [rbp-28h] BYREF
  int v5; // [rsp+34h] [rbp-24h]
  int v6; // [rsp+40h] [rbp-18h]
  int v7; // [rsp+44h] [rbp-14h]
  __int64 v8; // [rsp+60h] [rbp+8h] BYREF

  if ( !a1 || (*(_DWORD *)(a1 + 24) & 1) == 0 || (int)BgpFoGetFontHandle(0LL) < 0 )
    return 0LL;
  if ( (_BYTE)qword_140406C50 )
  {
    v4 = HIDWORD(qword_140406C50);
    v5 = dword_140406C58;
  }
  else
  {
    v4 = 0;
    v5 = -1;
  }
  v2 = *(_DWORD *)(a1 + 20);
  v7 = 0;
  v6 = v2;
  if ( (int)BgpTxtCreateRegion(a1, (int)a1 + 8, (unsigned int)&v4, (unsigned int)&v8, 0) < 0 )
    return 0LL;
  dword_140406AFC = BgpTxtRegionSize(v8);
  return v8;
}
