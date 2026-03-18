/*
 * XREFs of cCapString @ 0x1C007FB68
 * Callers:
 *     ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1C0027A80 (-bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z @ 0x1C007D340 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C007D8D0 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ?bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z @ 0x1C007DC5C (-bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z.c)
 *     ?vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z @ 0x1C007DFD4 (-vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z.c)
 *     hfontCreate @ 0x1C007E170 (hfontCreate.c)
 *     ?pfsubAlternateFacename@@YAPEAU_FONTSUB@@PEBG@Z @ 0x1C007E324 (-pfsubAlternateFacename@@YAPEAU_FONTSUB@@PEBG@Z.c)
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z @ 0x1C007F658 (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z.c)
 *     vProcessEntry @ 0x1C00C2010 (vProcessEntry.c)
 *     ?bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C00CA4AC (-bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C00CB1D8 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     ?bCheckAndCapThePath@@YAHPEAGPEBGKK@Z @ 0x1C010C414 (-bCheckAndCapThePath@@YAHPEAGPEBGKK@Z.c)
 *     FontAssocDefaultRoutine @ 0x1C027BB40 (FontAssocDefaultRoutine.c)
 *     ?bAttemptReload@PFFOBJ@@QEAAHXZ @ 0x1C029D264 (-bAttemptReload@PFFOBJ@@QEAAHXZ.c)
 *     QueryRegistryFontMapperFamilyFallbackListRoutine @ 0x1C036F4C0 (QueryRegistryFontMapperFamilyFallbackListRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall cCapString(WCHAR *a1, WCHAR *a2, int a3)
{
  WCHAR *v4; // rbx
  WCHAR *v5; // r9
  __int64 v6; // rbx
  __int64 result; // rax
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v4 = a2;
  v5 = &a2[a3 - 1];
  if ( a2 < v5 )
  {
    do
    {
      if ( !*v4 )
        break;
      ++v4;
    }
    while ( v4 < v5 );
  }
  v6 = v4 - a2;
  if ( (_DWORD)v6 )
  {
    SourceString.Buffer = a2;
    SourceString.MaximumLength = 2 * a3;
    DestinationString.MaximumLength = 2 * a3;
    SourceString.Length = 2 * v6;
    DestinationString.Buffer = a1;
    RtlUpcaseUnicodeString(&DestinationString, &SourceString, 0);
  }
  result = (unsigned int)v6;
  a1[(int)v6] = 0;
  return result;
}
