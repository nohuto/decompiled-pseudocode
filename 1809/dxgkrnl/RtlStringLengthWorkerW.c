/*
 * XREFs of RtlStringLengthWorkerW @ 0x1C000211C
 * Callers:
 *     ?RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C00020BC (-RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0158E80 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@@Z @ 0x1C02110CC (-RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringLengthWorkerW(STRSAFE_PCNZWCH psz, size_t cchMax, size_t *pcchLength)
{
  size_t i; // r9
  NTSTATUS result; // eax

  for ( i = cchMax; cchMax; --cchMax )
  {
    if ( !*psz )
      break;
    ++psz;
  }
  result = cchMax == 0 ? 0xC000000D : 0;
  if ( pcchLength )
  {
    if ( cchMax )
      *pcchLength = i - cchMax;
    else
      *pcchLength = 0LL;
  }
  return result;
}
