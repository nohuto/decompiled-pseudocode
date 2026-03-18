/*
 * XREFs of ?bAttemptReload@PFFOBJ@@QEAAHXZ @ 0x1C02B3658
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00B1A70 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 * Callees:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C008E90C (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C0092F60 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C009377C (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     cCapString @ 0x1C0093C18 (cCapString.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C0095D40 (--0MALLOCOBJ@@QEAA@K@Z.c)
 */

__int64 __fastcall PFFOBJ::bAttemptReload(struct PFF **this)
{
  struct PFF *v2; // rcx
  int v3; // eax
  struct PFF *v4; // rdx
  unsigned int v5; // r14d
  unsigned int v6; // edi
  struct PFF *v7; // rcx
  int v8; // ebp
  size_t v10; // [rsp+28h] [rbp-70h]
  struct PFF **v11; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int16 *v12; // [rsp+A8h] [rbp+10h] BYREF
  struct _FONTHASH **v13; // [rsp+B0h] [rbp+18h] BYREF
  struct PFF *v14; // [rsp+B8h] [rbp+20h] BYREF

  v2 = *this;
  v3 = *((_DWORD *)v2 + 13);
  if ( (v3 & 0x1000) == 0 )
    return 0LL;
  *((_DWORD *)v2 + 13) = v3 & 0xFFFFEFFF;
  v4 = *this;
  if ( *((_DWORD *)*this + 14) != 1 || (*((_DWORD *)v4 + 13) & 8) != 0 )
    return 0LL;
  v5 = *((_DWORD *)v4 + 8);
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v12, 2 * v5);
  v6 = 0;
  if ( v12 )
  {
    cCapString(v12, *((WCHAR **)*this + 3), v5);
    v7 = *this;
    v13 = gpPFTPublic;
    v8 = *((_DWORD *)v7 + 13) & 0x200;
    if ( PUBLIC_PFTOBJ::pPFFGet(
           (PUBLIC_PFTOBJ *)&v13,
           v12,
           v5,
           *((_DWORD *)v7 + 9),
           *((struct tagDESIGNVECTOR **)v7 + 5),
           *((_DWORD *)v7 + 12),
           &v11,
           0) == *this
      && (unsigned int)PFTOBJ::bUnloadWorkhorse((PFTOBJ *)&v13, *this, v11, 0) )
    {
      GreQuerySystemTime(&PFTOBJ::FontChangeTime);
      LODWORD(v11) = 0;
      LODWORD(v10) = 0;
      if ( (unsigned int)PUBLIC_PFTOBJ::bLoadFonts(
                           (PUBLIC_PFTOBJ *)&v13,
                           v12,
                           v5,
                           1u,
                           0LL,
                           v10,
                           (unsigned int *)&v11,
                           v8 != 0 ? 514 : 2,
                           &v14,
                           0,
                           0,
                           0LL,
                           1,
                           1) )
      {
        GreQuerySystemTime(&PFTOBJ::FontChangeTime);
        v6 = 1;
      }
    }
    Win32FreePool(v12);
  }
  return v6;
}
