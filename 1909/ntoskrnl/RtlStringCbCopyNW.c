/*
 * XREFs of RtlStringCbCopyNW @ 0x140165948
 * Callers:
 *     PopDiagGetDriverName @ 0x140165900 (PopDiagGetDriverName.c)
 *     IopCheckIfNotNativeDriver @ 0x14085317C (IopCheckIfNotNativeDriver.c)
 *     LocalConvertSidToStringSidW @ 0x1408E311C (LocalConvertSidToStringSidW.c)
 *     AslPathWildcardFindFirst @ 0x140926D3C (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x140927324 (AslPathWildcardFindNext.c)
 *     AuthzBasepCopyoutClaimAttributeValues @ 0x14092BDBC (AuthzBasepCopyoutClaimAttributeValues.c)
 *     AuthzBasepCopyoutClaimAttributes @ 0x14092C02C (AuthzBasepCopyoutClaimAttributes.c)
 * Callees:
 *     RtlStringCopyWorkerW_3 @ 0x1401546E0 (RtlStringCopyWorkerW_3.c)
 */

NTSTATUS __stdcall RtlStringCbCopyNW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, STRSAFE_PCNZWCH pszSrc, size_t cbToCopy)
{
  size_t v4; // r10
  NTSTATUS v5; // edx
  size_t cchToCopy; // r9

  v4 = cbDest >> 1;
  v5 = 0;
  if ( v4 - 1 > 0x7FFFFFFE )
    v5 = -1073741811;
  if ( v5 >= 0 )
  {
    cchToCopy = cbToCopy >> 1;
    if ( cchToCopy > 0x7FFFFFFE )
    {
      v5 = -1073741811;
      *pszDest = 0;
    }
    else
    {
      return RtlStringCopyWorkerW_3(pszDest, v4, (size_t *)pszSrc, pszSrc, cchToCopy);
    }
  }
  return v5;
}
