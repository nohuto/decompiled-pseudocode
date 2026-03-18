/*
 * XREFs of ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1C0080CC0
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C003E43C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C023F434 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C023F5F8 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C023F958 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 * Callees:
 *     ?bValid@FHOBJ@@QEBAHXZ @ 0x1C00CBD84 (-bValid@FHOBJ@@QEBAHXZ.c)
 *     ?bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z @ 0x1C00CC3AC (-bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall PFFOBJ::bAddHash(PFFOBJ *this, int a2)
{
  unsigned int v2; // ebx
  __int64 v5; // r8
  __int64 v6; // r9
  struct _FONTHASH **v7; // rdx
  struct PDEV *v8; // r11
  _QWORD *v9; // rcx
  __int64 *v10; // r10
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // edi
  _QWORD v15[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v16[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v18; // [rsp+70h] [rbp+20h] BYREF

  v2 = 0;
  ++*(_DWORD *)(gpGdiSharedMemory + 1573016LL);
  v5 = *(_QWORD *)this;
  v6 = *(_QWORD *)(*(_QWORD *)this + 80LL);
  if ( v6 )
  {
    v7 = gpPFTPublic;
    v8 = *(struct PDEV **)(v5 + 88);
    if ( *(struct PFT **const *)(v5 + 128) == gpPFTPrivate )
      v7 = gpPFTPrivate;
    v9 = v7 + 1;
    v10 = (__int64 *)(v7 + 2);
    if ( v8 == gppdevTrueType || v8 == qword_1C032FD38 && !*(_DWORD *)(v6 + 8) )
      ++gcTrueTypeFonts;
  }
  else
  {
    v9 = (_QWORD *)(v5 + 104);
    v7 = (struct _FONTHASH **)(v5 + 112);
    v10 = (__int64 *)(v5 + 120);
  }
  v16[1] = *v7;
  v17[1] = *v9;
  v11 = *v10;
  v17[0] = v9;
  v15[1] = v11;
  v16[0] = v7;
  v15[0] = v10;
  if ( (unsigned int)FHOBJ::bValid((FHOBJ *)v15)
    && (unsigned int)FHOBJ::bValid((FHOBJ *)v16)
    && (unsigned int)FHOBJ::bValid((FHOBJ *)v17) )
  {
    v12 = *(_QWORD *)this;
    v13 = 0;
    if ( *(_DWORD *)(*(_QWORD *)this + 208LL) )
    {
      while ( 1 )
      {
        v18 = *(_QWORD *)(v12 + 8LL * v13 + 224);
        if ( !(unsigned int)FHOBJ::bInsert((FHOBJ *)v15, (struct PFEOBJ *)&v18)
          || !a2
          && (!(unsigned int)FHOBJ::bInsert((FHOBJ *)v16, (struct PFEOBJ *)&v18)
           || !(unsigned int)FHOBJ::bInsert((FHOBJ *)v17, (struct PFEOBJ *)&v18)) )
        {
          break;
        }
        v12 = *(_QWORD *)this;
        if ( ++v13 >= *(_DWORD *)(*(_QWORD *)this + 208LL) )
          return 1;
      }
    }
    else
    {
      return 1;
    }
  }
  return v2;
}
