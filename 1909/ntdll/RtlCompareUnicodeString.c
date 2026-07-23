/*
 * XREFs of RtlCompareUnicodeString @ 0x180019EE0
 * Callers:
 *     RtlpCapabilityCheckSystemCapability @ 0x180009910 (RtlpCapabilityCheckSystemCapability.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180021B60 (LdrpSnapKernelBaseExtensions.c)
 *     RtlpFindUnicodeStringInSection @ 0x18002715C (RtlpFindUnicodeStringInSection.c)
 *     LdrpSearchPath @ 0x18002D8FC (LdrpSearchPath.c)
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x18006DD68 (WerEscalationReadImageVersionInfoForModuleBase.c)
 *     RtlpProcessIFEOKeyFilter @ 0x180073914 (RtlpProcessIFEOKeyFilter.c)
 *     LdrpQuerySxSMUIFile @ 0x180077758 (LdrpQuerySxSMUIFile.c)
 *     LdrpIsModuleUnderSystem32 @ 0x18007A9C4 (LdrpIsModuleUnderSystem32.c)
 *     LdrpCompareModuleName @ 0x18008426C (LdrpCompareModuleName.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800D12B4 (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpCompareRedirectedFunction @ 0x1800D55FC (LdrpCompareRedirectedFunction.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x1800E1D08 (RtlpIsEmptyImageFileOptionsKey.c)
 *     RtlpMatchUILanguage @ 0x1800F71C4 (RtlpMatchUILanguage.c)
 *     RtlpMatchUserLanguage @ 0x1800F728C (RtlpMatchUserLanguage.c)
 * Callees:
 *     NLS_UPCASE @ 0x18001A234 (NLS_UPCASE.c)
 */

LONG __cdecl RtlCompareUnicodeString(PUNICODE_STRING String1, PUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  wchar_t *Buffer; // r9
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rax
  wchar_t *v7; // rbx
  char *v8; // r11
  __int64 v9; // rcx
  unsigned __int16 v11; // r10
  unsigned __int16 v12; // bp
  unsigned __int16 v13; // ax
  char *v14; // r8
  unsigned __int16 v15; // ax

  Buffer = String1->Buffer;
  v4 = (unsigned __int64)String1->Length >> 1;
  v5 = (unsigned __int64)String2->Length >> 1;
  v6 = v4;
  if ( v4 > v5 )
    v6 = (unsigned __int64)String2->Length >> 1;
  v7 = &Buffer[v6];
  if ( Buffer >= v7 )
    return v4 - v5;
  if ( CaseInSensitive )
  {
    v8 = (char *)((char *)String2->Buffer - (char *)Buffer);
    while ( 1 )
    {
      v9 = *Buffer;
      if ( (_WORD)v9 != *(wchar_t *)((char *)Buffer + (_QWORD)v8) )
      {
        v12 = NLS_UPCASE(v9);
        v13 = NLS_UPCASE(v11);
        if ( v12 != v13 )
          break;
      }
      if ( ++Buffer >= v7 )
        return v4 - v5;
    }
    return v12 - v13;
  }
  else
  {
    v14 = (char *)((char *)String2->Buffer - (char *)Buffer);
    while ( 1 )
    {
      v15 = *(wchar_t *)((char *)Buffer + (_QWORD)v14);
      if ( *Buffer != v15 )
        break;
      if ( ++Buffer >= v7 )
        return v4 - v5;
    }
    return *Buffer - v15;
  }
}
