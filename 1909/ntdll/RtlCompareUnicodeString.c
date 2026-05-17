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

__int64 __fastcall RtlCompareUnicodeString(unsigned __int16 *a1, unsigned __int16 *a2, char a3)
{
  _WORD *v3; // r9
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rax
  _WORD *v7; // rbx
  __int64 v8; // r11
  __int64 v9; // rcx
  unsigned __int16 v11; // r10
  unsigned __int16 v12; // bp
  unsigned __int16 v13; // ax
  __int64 v14; // r8
  unsigned __int16 v15; // ax

  v3 = (_WORD *)*((_QWORD *)a1 + 1);
  v4 = (unsigned __int64)*a1 >> 1;
  v5 = (unsigned __int64)*a2 >> 1;
  v6 = v4;
  if ( v4 > v5 )
    v6 = (unsigned __int64)*a2 >> 1;
  v7 = &v3[v6];
  if ( v3 >= v7 )
    return (unsigned int)(v4 - v5);
  if ( a3 )
  {
    v8 = *((_QWORD *)a2 + 1) - (_QWORD)v3;
    while ( 1 )
    {
      v9 = (unsigned __int16)*v3;
      if ( (_WORD)v9 != *(_WORD *)((char *)v3 + v8) )
      {
        v12 = NLS_UPCASE(v9);
        v13 = NLS_UPCASE(v11);
        if ( v12 != v13 )
          break;
      }
      if ( ++v3 >= v7 )
        return (unsigned int)(v4 - v5);
    }
    return v12 - (unsigned int)v13;
  }
  else
  {
    v14 = *((_QWORD *)a2 + 1) - (_QWORD)v3;
    while ( 1 )
    {
      v15 = *(_WORD *)((char *)v3 + v14);
      if ( *v3 != v15 )
        break;
      if ( ++v3 >= v7 )
        return (unsigned int)(v4 - v5);
    }
    return (unsigned __int16)*v3 - (unsigned int)v15;
  }
}
