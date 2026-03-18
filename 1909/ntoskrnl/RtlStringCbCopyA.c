/*
 * XREFs of RtlStringCbCopyA @ 0x14008C158
 * Callers:
 *     PfpPrivSourceEnum @ 0x140638B3C (PfpPrivSourceEnum.c)
 *     NtSetInformationProcess @ 0x14067A5E0 (NtSetInformationProcess.c)
 *     ObpRegisterObject @ 0x14089F8AC (ObpRegisterObject.c)
 *     EtwpLogRefSetAutoMark @ 0x1408FB2F8 (EtwpLogRefSetAutoMark.c)
 *     Phase1InitializationDiscard @ 0x140A07524 (Phase1InitializationDiscard.c)
 *     IopStoreArcInformation @ 0x140A1F5C8 (IopStoreArcInformation.c)
 * Callees:
 *     RtlStringCopyWorkerA @ 0x14008C198 (RtlStringCopyWorkerA.c)
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
