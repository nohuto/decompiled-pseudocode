/*
 * XREFs of RtlStringLengthWorkerW @ 0x1C00A49D8
 * Callers:
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C004149C (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     ?GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z @ 0x1C00A4738 (-GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringLengthWorkerW(STRSAFE_PCNZWCH psz, size_t cchMax, size_t *pcchLength)
{
  size_t v3; // r9
  NTSTATUS result; // eax

  v3 = cchMax;
  do
  {
    if ( !*psz )
      break;
    ++psz;
    --cchMax;
  }
  while ( cchMax );
  result = cchMax == 0 ? 0xC000000D : 0;
  if ( pcchLength )
  {
    if ( cchMax )
      *pcchLength = v3 - cchMax;
    else
      *pcchLength = 0LL;
  }
  return result;
}
