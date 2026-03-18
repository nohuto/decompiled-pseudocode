/*
 * XREFs of GreGetBitmapBitsSize @ 0x1C0016930
 * Callers:
 *     NtGdiCreateDIBSection @ 0x1C0016580 (NtGdiCreateDIBSection.c)
 *     NtGdiGetDIBitsInternal @ 0x1C00A57D0 (NtGdiGetDIBitsInternal.c)
 *     NtGdiCreateSessionMappedDIBSection @ 0x1C00F4440 (NtGdiCreateSessionMappedDIBSection.c)
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1C01D2C54 (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 *     ?GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x1C0286218 (-GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z.c)
 *     NtGdiIcmBrushInfo @ 0x1C0286DB0 (NtGdiIcmBrushInfo.c)
 * Callees:
 *     noOverflowCJSCAN @ 0x1C0016984 (noOverflowCJSCAN.c)
 */

__int64 __fastcall GreGetBitmapBitsSize(__int64 a1)
{
  unsigned int v2; // eax
  int v3; // ecx
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r9

  if ( *(_DWORD *)a1 == 12 )
  {
    v7 = *(unsigned __int16 *)(a1 + 6);
    v5 = *(unsigned __int16 *)(a1 + 4);
    v4 = *(unsigned __int16 *)(a1 + 10);
    v6 = *(unsigned __int16 *)(a1 + 8);
    return noOverflowCJSCAN(v5, v6, v4, v7);
  }
  v2 = *(_DWORD *)(a1 + 16);
  if ( v2 <= 0xA )
  {
    v3 = 1033;
    if ( _bittest(&v3, v2) )
    {
      v4 = *(unsigned __int16 *)(a1 + 14);
      v5 = *(unsigned int *)(a1 + 4);
      v6 = *(unsigned __int16 *)(a1 + 12);
      v7 = abs32(*(_DWORD *)(a1 + 8));
      return noOverflowCJSCAN(v5, v6, v4, v7);
    }
  }
  return *(unsigned int *)(a1 + 20);
}
