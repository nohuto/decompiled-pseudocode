/*
 * XREFs of ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C0080E14
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C003E43C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C00C8994 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C00C8B3C (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C023F434 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C023F5F8 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C023F958 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 * Callees:
 *     ?bValid@FHOBJ@@QEBAHXZ @ 0x1C00CBD84 (-bValid@FHOBJ@@QEBAHXZ.c)
 *     ?vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z @ 0x1C00CC000 (-vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z.c)
 *     ?vFree@FHOBJ@@QEAAXXZ @ 0x1C00CC8B0 (-vFree@FHOBJ@@QEAAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall PFFOBJ::vRemoveHash(PFFOBJ *this)
{
  __int64 v2; // r8
  struct _FONTHASH **v3; // rdx
  __int64 v4; // rdi
  struct PDEV *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r8
  struct _FONTHASH **v8; // [rsp+20h] [rbp-30h] BYREF
  struct _FONTHASH *v9; // [rsp+28h] [rbp-28h]
  _QWORD v10[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v11[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v12; // [rsp+60h] [rbp+10h] BYREF

  ++*(_DWORD *)(gpGdiSharedMemory + 1573016LL);
  v2 = *(_QWORD *)this;
  if ( *(_QWORD *)(*(_QWORD *)this + 80LL) )
  {
    v3 = gpPFTPublic;
    if ( *(struct PFT **const *)(v2 + 128) == gpPFTPrivate )
      v3 = gpPFTPrivate;
    v4 = 0LL;
    v10[0] = v3;
    v8 = v3 + 1;
    v9 = v3[1];
    v10[1] = *v3;
    v11[0] = v3 + 2;
    v11[1] = v3[2];
    if ( *(_DWORD *)(v2 + 208) )
    {
      do
      {
        v12 = *(_QWORD *)(v2 + 8 * v4 + 224);
        if ( (*(_DWORD *)(v12 + 12) & 8) == 0 )
        {
          if ( (unsigned int)FHOBJ::bValid((FHOBJ *)&v8) )
            FHOBJ::vDelete((FHOBJ *)&v8, (struct PFEOBJ *)&v12);
          if ( (unsigned int)FHOBJ::bValid((FHOBJ *)v10) )
            FHOBJ::vDelete((FHOBJ *)v10, (struct PFEOBJ *)&v12);
        }
        if ( (unsigned int)FHOBJ::bValid((FHOBJ *)v11) )
          FHOBJ::vDelete((FHOBJ *)v11, (struct PFEOBJ *)&v12);
        v2 = *(_QWORD *)this;
        v4 = (unsigned int)(v4 + 1);
      }
      while ( (unsigned int)v4 < *(_DWORD *)(*(_QWORD *)this + 208LL) );
    }
    v5 = *(struct PDEV **)(v2 + 88);
    if ( v5 == gppdevTrueType || v5 == qword_1C032FD38 && !*(_DWORD *)(*(_QWORD *)(v2 + 80) + 8LL) )
      --gcTrueTypeFonts;
  }
  else
  {
    v8 = (struct _FONTHASH **)(v2 + 104);
    v9 = *(struct _FONTHASH **)(v2 + 104);
    if ( (unsigned int)FHOBJ::bValid((FHOBJ *)&v8) )
    {
      FHOBJ::vFree((FHOBJ *)&v8);
      v6 = *(_QWORD *)this;
    }
    v8 = (struct _FONTHASH **)(v6 + 112);
    v9 = *(struct _FONTHASH **)(v6 + 112);
    if ( (unsigned int)FHOBJ::bValid((FHOBJ *)&v8) )
    {
      FHOBJ::vFree((FHOBJ *)&v8);
      v7 = *(_QWORD *)this;
    }
    v8 = (struct _FONTHASH **)(v7 + 120);
    v9 = *(struct _FONTHASH **)(v7 + 120);
    if ( (unsigned int)FHOBJ::bValid((FHOBJ *)&v8) )
      FHOBJ::vFree((FHOBJ *)&v8);
  }
}
