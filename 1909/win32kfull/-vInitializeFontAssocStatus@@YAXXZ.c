/*
 * XREFs of ?vInitializeFontAssocStatus@@YAXXZ @ 0x1C011CBA0
 * Callers:
 *     ?bInitializeEUDCInternal@@YAHXZ @ 0x1C011C9D4 (-bInitializeEUDCInternal@@YAHXZ.c)
 * Callees:
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C008E6D4 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z @ 0x1C008F56C (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z.c)
 *     ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x1C00DF830 (-bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z.c)
 *     EngUnmapFontFileFD @ 0x1C0102610 (EngUnmapFontFileFD.c)
 *     ??0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z @ 0x1C011E100 (--0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z.c)
 */

void vInitializeFontAssocStatus(void)
{
  bool v0; // r14
  __int64 v1; // rdi
  unsigned int v2; // esi
  unsigned int i; // ebx
  struct _FONTHASH **v4; // rcx
  _QWORD v5[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v6; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v7; // [rsp+60h] [rbp-10h]
  unsigned int v8; // [rsp+A0h] [rbp+30h] BYREF
  struct _FONTHASH **v9; // [rsp+A8h] [rbp+38h] BYREF
  struct PFF *v10; // [rsp+B0h] [rbp+40h] BYREF

  SharedQueryTable.Flags = 4;
  SharedQueryTable.DefaultType = 0;
  SharedQueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)FontAssocCharsetRoutine;
  *(_OWORD *)&SharedQueryTable.Name = 0LL;
  SharedQueryTable.DefaultData = 0LL;
  SharedQueryTable.DefaultLength = 0;
  qword_1C0329FA8 = 0LL;
  dword_1C0329FB0 = 0;
  qword_1C0329FB8 = 0LL;
  fFontAssocStatus = 0;
  gawcSystemDBCSFontPath = 0;
  if ( RtlQueryRegistryValues(0x80000002, L"FontAssoc\\Associated CharSet", &SharedQueryTable, 0LL, 0LL) < 0 )
    fFontAssocStatus = 0;
  word_1C032A330 = 0;
  SharedQueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)FontAssocDefaultRoutine;
  if ( RtlQueryRegistryValues(0x80000002, L"FontAssoc\\Associated DefaultFonts", &SharedQueryTable, 0LL, 0LL) >= 0 )
  {
    bReadyToInitializeFontAssocDefault = 1;
    if ( gawcSystemDBCSFontPath )
    {
      if ( word_1C032A330 )
      {
        v9 = gpPFTPublic;
        v5[0] = &gappfeSystemDBCS;
        v5[1] = &word_1C032A330;
        if ( (unsigned int)PUBLIC_PFTOBJ::bLoadAFont(
                             (PUBLIC_PFTOBJ *)&v9,
                             &gawcSystemDBCSFontPath,
                             &v8,
                             8u,
                             &v10,
                             (struct _EUDCLOAD *)v5,
                             1) )
        {
          qword_1C032C038 = 0LL;
          GreAcquireSemaphore(ghsemEUDC1);
          if ( (unsigned int)bComputeQuickLookup((struct _QUICKLOOKUP *)&gqlTTSystem, gappfeSystemDBCS, 0) )
            goto LABEL_16;
          v0 = 0;
          v5[0] = *(_QWORD *)gappfeSystemDBCS;
          UmfdClientSideFileViewMapper::UmfdClientSideFileViewMapper(
            (UmfdClientSideFileViewMapper *)&v6,
            (struct PFFOBJ *)v5);
          v1 = v6;
          v2 = v7;
          if ( v7 == *(_DWORD *)(v6 + 36) )
            v0 = (unsigned int)bComputeQuickLookup((struct _QUICKLOOKUP *)&gqlTTSystem, gappfeSystemDBCS, 0) != 0;
          for ( i = 0; i < v2; EngUnmapFontFileFD(*(_QWORD *)(*(_QWORD *)(v1 + 200) + 8LL * i++)) )
          {
            if ( i >= *(_DWORD *)(v1 + 36) )
              break;
          }
          if ( v0 )
          {
LABEL_16:
            gbSystemDBCSFontEnabled = 1;
            gbAnyLinkedFonts = 1;
          }
          EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
          GreReleaseSemaphoreInternal(ghsemEUDC1);
          if ( !gbSystemDBCSFontEnabled )
            PFTOBJ::bUnloadEUDCFont(v4, &gawcSystemDBCSFontPath);
        }
      }
    }
  }
  else
  {
    bReadyToInitializeFontAssocDefault = 0;
  }
  SharedQueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)CountRegistryEntryRoutine;
  SharedQueryTable.EntryContext = &dword_1C032A7A4;
  dword_1C032A7A4 = 0;
}
