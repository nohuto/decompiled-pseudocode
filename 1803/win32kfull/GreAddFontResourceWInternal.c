/*
 * XREFs of GreAddFontResourceWInternal @ 0x1C00F0AC4
 * Callers:
 *     NtGdiAddFontResourceW @ 0x1C00F0900 (NtGdiAddFontResourceW.c)
 * Callees:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C003E43C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?RegistryNotificaionEnumerationEnd@@YAXPEAK@Z @ 0x1C00F0CA4 (-RegistryNotificaionEnumerationEnd@@YAXPEAK@Z.c)
 *     ?bInitPrivatePFT@@YAHXZ @ 0x1C023F358 (-bInitPrivatePFT@@YAHXZ.c)
 */

__int64 __fastcall GreAddFontResourceWInternal(
        unsigned __int16 *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        struct tagDESIGNVECTOR *a6,
        size_t a7)
{
  unsigned int v7; // ebx
  unsigned int v12; // ebx
  struct _FONTHASH **v13; // rcx
  size_t v15; // [rsp+28h] [rbp-58h]
  struct _FONTHASH **v16; // [rsp+60h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-18h] BYREF
  unsigned int v18; // [rsp+B8h] [rbp+38h] BYREF

  v7 = 0;
  v18 = 0;
  if ( (a4 & 0x600) == 0x600 )
  {
    RegistryNotificaionEnumerationEnd(&v18);
    return v18;
  }
  else
  {
    if ( !a1 )
    {
      EngSetLastError(0x57u);
      return v7;
    }
    if ( a4 == 0x80000000 )
    {
      if ( RtlCreateUnicodeString(&DestinationString, a1) )
      {
        v16 = (struct _FONTHASH **)*((_QWORD *)gpxsGlobals + 2);
        GreAcquireSemaphore(v16);
        RtlInsertElementGenericTableAvl(*((PRTL_AVL_TABLE *)gpxsGlobals + 3), &DestinationString, 0x10u, 0LL);
        SEMOBJ::vUnlock((SEMOBJ *)&v16);
      }
      return 1LL;
    }
    else
    {
      if ( ((a4 & 8) == 0 || a5 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC))
        && ((a4 & 4) == 0 || a5 == (unsigned int)PsGetCurrentThreadId()) )
      {
        v12 = (2 * (a4 & 1)) | 4;
        if ( (a4 & 2) == 0 )
          v12 = 2 * (a4 & 1);
        if ( (a4 & 0x1C) == 0 )
        {
          v13 = gpPFTPublic;
          goto LABEL_10;
        }
        if ( gpPFTPrivate || (unsigned int)bInitPrivatePFT() )
        {
          v13 = gpPFTPrivate;
LABEL_10:
          v16 = v13;
          if ( v13
            && (LODWORD(v15) = a7,
                (unsigned int)PUBLIC_PFTOBJ::bLoadFonts(
                                (PUBLIC_PFTOBJ *)&v16,
                                a1,
                                a2,
                                a3,
                                a6,
                                v15,
                                &v18,
                                v12,
                                (struct PFF **)&DestinationString,
                                a4,
                                0,
                                0LL)) )
          {
            v7 = v18;
          }
          else
          {
            v7 = 0;
          }
          if ( v7 )
            GreQuerySystemTime(&PFTOBJ::FontChangeTime);
          return v7;
        }
      }
      return 0LL;
    }
  }
}
