/*
 * XREFs of ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1400287A8
 * Callers:
 *     ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBGPEAXI_J3PEAUICrossProcessMemoryManager@@PEAUICrossProcessEventManager@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@@Z @ 0x140004120 (-Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBGPEAXI_J3PEAUICrossPro.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x1400268AC (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x1400289DC (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEBGIIIIPEAPEAUICrossProcessMemory@@@Z @ 0x14005C838 (-InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEBGI.c)
 * Callees:
 *     StringCopyWorkerW @ 0x1400288C0 (StringCopyWorkerW.c)
 */

__int64 __fastcall StringCchCopyW(unsigned __int16 *a1, size_t a2, size_t *a3)
{
  int v3; // r9d
  size_t v5; // [rsp+20h] [rbp-18h]

  v3 = 0;
  if ( a2 - 1 > 0x7FFFFFFE )
    v3 = -2147024809;
  if ( v3 < 0 )
  {
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    return (unsigned int)StringCopyWorkerW(a1, a2, a3, (STRSAFE_PCNZWCH)a3, v5);
  }
  return (unsigned int)v3;
}
