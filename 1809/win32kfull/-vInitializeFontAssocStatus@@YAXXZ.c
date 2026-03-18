/*
 * XREFs of ?vInitializeFontAssocStatus@@YAXXZ @ 0x1C00C3C74
 * Callers:
 *     ?bInitializeEUDCInternal@@YAHXZ @ 0x1C00C3AA8 (-bInitializeEUDCInternal@@YAHXZ.c)
 * Callees:
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z @ 0x1C007D340 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z.c)
 *     ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x1C00C61E8 (-bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C00CB1D8 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 */

void vInitializeFontAssocStatus(void)
{
  PFTOBJ *v0; // rcx
  _QWORD v1[3]; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v2; // [rsp+60h] [rbp+8h] BYREF
  struct _FONTHASH **v3; // [rsp+68h] [rbp+10h] BYREF
  struct PFF *v4; // [rsp+70h] [rbp+18h] BYREF

  SharedQueryTable.Flags = 4;
  SharedQueryTable.DefaultType = 0;
  SharedQueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)FontAssocCharsetRoutine;
  *(_OWORD *)&SharedQueryTable.Name = 0LL;
  SharedQueryTable.DefaultData = 0LL;
  SharedQueryTable.DefaultLength = 0;
  qword_1C0316F88 = 0LL;
  dword_1C0316F90 = 0;
  qword_1C0316F98 = 0LL;
  fFontAssocStatus = 0;
  gawcSystemDBCSFontPath = 0;
  if ( RtlQueryRegistryValues(0x80000002, L"FontAssoc\\Associated CharSet", &SharedQueryTable, 0LL, 0LL) < 0 )
    fFontAssocStatus = 0;
  word_1C0317310 = 0;
  SharedQueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)FontAssocDefaultRoutine;
  if ( RtlQueryRegistryValues(0x80000002, L"FontAssoc\\Associated DefaultFonts", &SharedQueryTable, 0LL, 0LL) >= 0 )
  {
    bReadyToInitializeFontAssocDefault = 1;
    if ( gawcSystemDBCSFontPath )
    {
      if ( word_1C0317310 )
      {
        v3 = gpPFTPublic;
        v1[0] = &gappfeSystemDBCS;
        v1[1] = &word_1C0317310;
        if ( (unsigned int)PUBLIC_PFTOBJ::bLoadAFont(
                             (PUBLIC_PFTOBJ *)&v3,
                             &gawcSystemDBCSFontPath,
                             &v2,
                             8u,
                             &v4,
                             (struct _EUDCLOAD *)v1,
                             1) )
        {
          qword_1C0319AD8 = 0LL;
          GreAcquireSemaphore(ghsemEUDC1);
          if ( (unsigned int)bComputeQuickLookup((struct _QUICKLOOKUP *)&gqlTTSystem, gappfeSystemDBCS, 0) )
          {
            gbSystemDBCSFontEnabled = 1;
            gbAnyLinkedFonts = 1;
          }
          EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
          GreReleaseSemaphoreInternal(ghsemEUDC1);
          if ( !gbSystemDBCSFontEnabled )
            PFTOBJ::bUnloadEUDCFont(v0, &gawcSystemDBCSFontPath);
        }
      }
    }
  }
  else
  {
    bReadyToInitializeFontAssocDefault = 0;
  }
  dword_1C03177A4 = 0;
  SharedQueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)CountRegistryEntryRoutine;
  SharedQueryTable.EntryContext = &dword_1C03177A4;
}
