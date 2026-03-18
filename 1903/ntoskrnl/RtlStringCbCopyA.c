/*
 * XREFs of RtlStringCbCopyA @ 0x14008AE58
 * Callers:
 *     PfpPrivSourceEnum @ 0x1406358EC (PfpPrivSourceEnum.c)
 *     NtSetInformationProcess @ 0x140674ED0 (NtSetInformationProcess.c)
 *     ObpRegisterObject @ 0x1408A006C (ObpRegisterObject.c)
 *     EtwpLogRefSetAutoMark @ 0x1408FB918 (EtwpLogRefSetAutoMark.c)
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
 *     IopStoreArcInformation @ 0x140A1F3E8 (IopStoreArcInformation.c)
 * Callees:
 *     RtlStringCopyWorkerA @ 0x14008AE98 (RtlStringCopyWorkerA.c)
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
