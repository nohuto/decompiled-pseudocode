/*
 * XREFs of ?IsFirmwareRecommendedWireformatAndColorSpaceValid@DMMVIDPNTARGETMODE@@QEBA_NT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@W4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C0054DA4
 * Callers:
 *     ?DmmInitializeAdapter@@YAJQEAX@Z @ 0x1C01827AC (-DmmInitializeAdapter@@YAJQEAX@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

bool __fastcall DMMVIDPNTARGETMODE::IsFirmwareRecommendedWireformatAndColorSpaceValid(
        DMMVIDPNTARGETMODE *this,
        union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE a2,
        enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE a3)
{
  __int64 v3; // rdx
  unsigned int v5; // ebx
  __int64 v6; // rcx
  bool result; // al

  v3 = a2.Value & 0xFFFFFFFC;
  result = 0;
  if ( (((_DWORD)v3 - 1) & (unsigned int)v3) == 0 && (*((_DWORD *)this + 32) & (unsigned int)v3) != 0 )
  {
    if ( (v5 = (((unsigned int)v3 | (((unsigned int)v3 | (((unsigned int)v3 | (((unsigned int)v3 | ((unsigned int)v3 >> 6)) >> 6)) >> 6)) >> 6)) >> 2) & 0x3F,
          a3 == D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709)
      || a3 == D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020
      || *((_BYTE *)DXGGLOBAL::GetGlobal((__int64)this, v3) + 303928) && a3 == D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P2020
      || a3 == D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020_HDR10PLUS )
    {
      if ( v5 <= 0x20 )
      {
        v6 = 0x100010116LL;
        if ( _bittest64(&v6, v5) )
          return 1;
      }
    }
  }
  return result;
}
