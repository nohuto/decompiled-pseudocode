/*
 * XREFs of RtlGetNeutralFallback @ 0x18003BDDC
 * Callers:
 *     RtlpAddNeutralsToMergedList @ 0x1800423A4 (RtlpAddNeutralsToMergedList.c)
 * Callees:
 *     RtlGetParentLocaleName @ 0x18003B4B0 (RtlGetParentLocaleName.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18003C58C (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     GetNameFromLangListNode @ 0x18003FAB4 (GetNameFromLangListNode.c)
 *     RtlCultureNameToLCID @ 0x180040460 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180040650 (RtlInitUnicodeString.c)
 */

__int64 __fastcall RtlGetNeutralFallback(__int64 a1, const WCHAR *a2, _UNICODE_STRING *a3, _BYTE *a4)
{
  int NameFromLangListNode; // edi
  __int64 v10; // rcx
  __int64 v11; // rdx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  DWORD Lcid; // [rsp+50h] [rbp+8h] BYREF
  __int16 v14; // [rsp+54h] [rbp+Ch]

  NameFromLangListNode = 0;
  if ( !a1 || !a3 || !a4 )
    return 3221225485LL;
  *a4 = 0;
  if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName(a1, a2, 0LL, &Lcid) < 0 )
    goto LABEL_5;
  v10 = 28LL * (__int16)Lcid;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
  if ( ((*(_WORD *)(v10 + v11 + 4) - 4096) & 0xFBFF) == 0 )
    *a4 = 1;
  LOWORD(Lcid) = *(_WORD *)(v10 + v11 + 8) >> 14;
  v14 = *(_WORD *)(v10 + v11 + 10);
  NameFromLangListNode = GetNameFromLangListNode(a1, &Lcid, a3);
  if ( NameFromLangListNode < 0 )
  {
LABEL_5:
    RtlInitUnicodeString(&DestinationString, a2);
    if ( RtlCultureNameToLCID(&DestinationString, &Lcid) && ((Lcid - 4096) & 0xFFFFFBFF) == 0 )
      *a4 = 1;
    if ( !*a4 )
      return (unsigned int)RtlGetParentLocaleName(a2, a3, 6u, 0);
  }
  return (unsigned int)NameFromLangListNode;
}
