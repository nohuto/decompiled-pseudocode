/*
 * XREFs of RtlStringCbCopyA @ 0x140011EF8
 * Callers:
 *     PfpPrivSourceEnum @ 0x1405B1B60 (PfpPrivSourceEnum.c)
 *     NtSetInformationProcess @ 0x140671C60 (NtSetInformationProcess.c)
 *     ObpRegisterObject @ 0x14086362C (ObpRegisterObject.c)
 *     EtwpLogRefSetAutoMark @ 0x1408BEB8C (EtwpLogRefSetAutoMark.c)
 *     Phase1InitializationDiscard @ 0x1409B3E10 (Phase1InitializationDiscard.c)
 *     IopStoreArcInformation @ 0x1409DC2D4 (IopStoreArcInformation.c)
 * Callees:
 *     RtlStringCopyWorkerA @ 0x140011F38 (RtlStringCopyWorkerA.c)
 */

NTSTATUS __stdcall RtlStringCbCopyA(NTSTRSAFE_PSTR pszDest, size_t cbDest, NTSTRSAFE_PCSTR pszSrc)
{
  NTSTATUS v3; // r9d
  size_t v5; // [rsp+20h] [rbp-18h]

  v3 = 0;
  if ( cbDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 >= 0 )
    return RtlStringCopyWorkerA(pszDest, cbDest, 0LL, pszSrc, v5);
  if ( cbDest )
    *pszDest = 0;
  return v3;
}
