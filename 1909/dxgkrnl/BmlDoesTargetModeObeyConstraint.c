/*
 * XREFs of BmlDoesTargetModeObeyConstraint @ 0x1C00DB530
 * Callers:
 *     BmlGetNextBestTargetMode @ 0x1C00DB304 (BmlGetNextBestTargetMode.c)
 *     _BmlGetPathModeListForPathTargetModes @ 0x1C02C2838 (_BmlGetPathModeListForPathTargetModes.c)
 * Callees:
 *     ?IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z @ 0x1C0006964 (-IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z.c)
 *     BmlAreRawModesEnabled @ 0x1C00DB678 (BmlAreRawModesEnabled.c)
 *     BmlIsSupportedByMonitorTargetMode @ 0x1C00DB6B4 (BmlIsSupportedByMonitorTargetMode.c)
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C00DBE04 (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 *     BmlDoesTargetModeSupportWireFormat @ 0x1C0128164 (BmlDoesTargetModeSupportWireFormat.c)
 */

bool __fastcall BmlDoesTargetModeObeyConstraint(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 v4; // rbp
  __int64 *v6; // rbx
  __int64 v7; // rdx
  char v8; // r9
  __int64 v9; // r10
  struct _D3DDDI_RATIONAL v11; // rax
  int v12; // ecx
  int v13; // ecx
  struct _D3DDDI_RATIONAL v14; // rax
  int v15; // ecx
  struct _D3DDDI_RATIONAL v16; // [rsp+20h] [rbp-18h] BYREF
  struct _D3DDDI_RATIONAL v17; // [rsp+40h] [rbp+8h] BYREF

  v4 = 104LL * a2;
  v6 = *(__int64 **)(a1 + v4 + 16);
  if ( (!(unsigned __int8)BmlAreRawModesEnabled(a1, a2) || (*(_BYTE *)v6 & 0x87) == 0) && (*(_DWORD *)(a1 + 8) & 4) == 0 )
  {
    LOBYTE(v7) = v8;
    if ( !(unsigned __int8)BmlIsSupportedByMonitorTargetMode(a3, v7) )
      return 0;
  }
  v9 = *v6;
  if ( (*v6 & 0x4000000000LL) != 0 )
  {
    if ( (unsigned int)BmlCompareModeExtents(v4 + a1 + 52, a3 + 84) )
      return 0;
  }
  if ( (v9 & 0x8F) == 0 )
    return 1;
  if ( (v9 & 4) != 0 && (((unsigned __int8)*(_DWORD *)(a3 + 120) ^ *((_BYTE *)v6 + 80)) & 7) != 0
    || (v9 & 1) != 0 && (v6[1] & 1) != 0 && (unsigned int)BmlCompareModeExtents(a3 + 84, (char *)v6 + 44) )
  {
    return 0;
  }
  if ( (v9 & 2) != 0 && (v6[1] & 2) != 0 && (*(_DWORD *)(a3 + 92) != -2 || *(_DWORD *)(a3 + 96) != -2) )
  {
    v11 = *(struct _D3DDDI_RATIONAL *)((char *)v6 + 52);
    v12 = (*((_DWORD *)v6 + 20) >> 3) & 0x3F;
    if ( v12 )
    {
      v17.Numerator = *(__int64 *)((char *)v6 + 52);
      v17.Denominator = v12 * v11.Denominator;
      v11 = v17;
    }
    v13 = *(_DWORD *)(a3 + 120) >> 3;
    v16 = v11;
    v14 = *(struct _D3DDDI_RATIONAL *)(a3 + 92);
    v15 = v13 & 0x3F;
    if ( v15 )
    {
      v17.Numerator = *(_QWORD *)(a3 + 92);
      v17.Denominator = v15 * v14.Denominator;
      v14 = v17;
    }
    v17 = v14;
    if ( !DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(&v17, &v16, 0) )
      return 0;
  }
  return (*(_BYTE *)v6 & 8) == 0
      || (v6[1] & 8) == 0
      || (unsigned __int8)BmlDoesTargetModeSupportWireFormat(a3, *((unsigned int *)v6 + 51));
}
