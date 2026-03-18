/*
 * XREFs of ConvertDMMScalingToGdiScaling @ 0x1C00E3C90
 * Callers:
 *     ?GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C00B7ED8 (-GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     _BmlGetPathModalityForAdapter @ 0x1C00D5B44 (_BmlGetPathModalityForAdapter.c)
 *     ?PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@QEAU_devicemodeW@@@Z @ 0x1C00D6F30 (-PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W.c)
 *     _PopulateDisplayModeFromPresentPath @ 0x1C00E3B50 (_PopulateDisplayModeFromPresentPath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertDMMScalingToGdiScaling(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax

  v3 = (int)a1;
  result = 1LL;
  switch ( (_DWORD)a1 )
  {
    case 1:
      goto LABEL_6;
    case 2:
      *a2 = 2;
      return result;
    case 3:
      *a2 = 1;
      return result;
  }
  if ( (int)a1 > 3 && ((int)a1 <= 5 || (_DWORD)a1 == 255) )
  {
LABEL_6:
    *a2 = 0;
    return result;
  }
  v6 = WdLogNewEntry5_WdWarning(a1, a2, a3);
  *(_QWORD *)(v6 + 24) = v3;
  WdLogEvent5_WdWarning(v6);
  if ( (_DWORD)v3 == 253 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v8 + 24) = 141LL;
    WdLogEvent5_WdAssertion(v8);
  }
  *a2 = 0;
  return 0LL;
}
