/*
 * XREFs of _TlgCreateSz @ 0x1C0049E44
 * Callers:
 *     ?LogDisplayTelemetryDiagData@DISPLAYSTATECHECKER@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@IW4DxgkrnlLiveDumpFailureReason@1@@Z @ 0x1C0296980 (-LogDisplayTelemetryDiagData@DISPLAYSTATECHECKER@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@IW4Dx.c)
 *     ?LogDisplayTelemetrySourceInfo@DISPLAYSTATECHECKER@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@PEBU_DXG_BLACKBOX_DISPLAY_SOURCE_INFO@@@Z @ 0x1C0296BB8 (-LogDisplayTelemetrySourceInfo@DISPLAYSTATECHECKER@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@PEB.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateSz(PEVENT_DATA_DESCRIPTOR pDesc, LPCSTR psz)
{
  __int64 v2; // rax

  LODWORD(v2) = 0;
  if ( psz )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( psz[v2] );
  }
  if ( !psz )
    psz = File;
  pDesc->Reserved = 0;
  pDesc->Ptr = (ULONGLONG)psz;
  pDesc->Size = v2 + 1;
}
