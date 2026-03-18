/*
 * XREFs of CmpReparseToVirtualPath @ 0x1407F371C
 * Callers:
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14063EDD0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpVEExecuteCreateLogic @ 0x1406B1DD4 (CmpVEExecuteCreateLogic.c)
 *     CmKeyBodyRemapToVirtual @ 0x1407F1A1C (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1407F1C94 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B9A70 (RtlInitUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140623790 (RtlFreeAnsiString.c)
 *     CmRealKCBToVirtualPath @ 0x1407F1FC8 (CmRealKCBToVirtualPath.c)
 *     CmpVirtualPathPresent @ 0x1407F3F7C (CmpVirtualPathPresent.c)
 */

char __fastcall CmpReparseToVirtualPath(__int64 a1, __int64 a2, __int64 a3, UNICODE_STRING *a4)
{
  char v7; // bl
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( (*(_DWORD *)(a1 + 176) & 0x800000) != 0 && (int)CmRealKCBToVirtualPath(a1, 0LL, a3, &DestinationString) >= 0 )
  {
    v7 = CmpVirtualPathPresent(&DestinationString);
    if ( v7 )
    {
      *a4 = DestinationString;
      RtlInitUnicodeString(&DestinationString, 0LL);
      v7 = 1;
    }
  }
  else
  {
    v7 = 0;
  }
  if ( DestinationString.Buffer )
    RtlFreeAnsiString(&DestinationString);
  return v7;
}
