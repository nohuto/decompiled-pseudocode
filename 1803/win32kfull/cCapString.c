/*
 * XREFs of cCapString @ 0x1C00CA9C4
 * Callers:
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z @ 0x1C003EBC0 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z.c)
 *     ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1C003F740 (-bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z.c)
 *     vProcessEntry @ 0x1C0055E00 (vProcessEntry.c)
 *     ?bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C00C70C0 (-bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@.c)
 *     ?pfsubAlternateFacename@@YAPEAU_FONTSUB@@PEBG@Z @ 0x1C00C83D8 (-pfsubAlternateFacename@@YAPEAU_FONTSUB@@PEBG@Z.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C00C8894 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C00CA2F0 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     hfontCreate @ 0x1C00CA860 (hfontCreate.c)
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z @ 0x1C00CBDC8 (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z.c)
 *     ?vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z @ 0x1C00CC000 (-vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z.c)
 *     ?bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z @ 0x1C00CC3AC (-bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z.c)
 *     bCheckAndCapThePath @ 0x1C00F0BF8 (bCheckAndCapThePath.c)
 *     FontAssocDefaultRoutine @ 0x1C0267CD0 (FontAssocDefaultRoutine.c)
 *     QueryRegistryFontMapperFamilyFallbackListRoutine @ 0x1C0380360 (QueryRegistryFontMapperFamilyFallbackListRoutine.c)
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
