/*
 * XREFs of ?ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z @ 0x1C003F6A8
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C003F3CC (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 * Callees:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C003E43C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z.c)
 *     ?pvSimBold@IFIOBJ@@QEAAPEAXXZ @ 0x1C00CFD98 (-pvSimBold@IFIOBJ@@QEAAPEAXXZ.c)
 *     ?bSimItalic@IFIOBJ@@QEAAHXZ @ 0x1C012E300 (-bSimItalic@IFIOBJ@@QEAAHXZ.c)
 *     ?bInitPrivatePFT@@YAHXZ @ 0x1C023F358 (-bInitPrivatePFT@@YAHXZ.c)
 *     ulCharsetToCodePage @ 0x1C02ADBEC (ulCharsetToCodePage.c)
 */

struct PFE *__fastcall MAPPER::ppfeSynthesizeAMatch(
        MAPPER *this,
        unsigned int *a2,
        unsigned int *a3,
        struct _POINTL *a4)
{
  __int64 v8; // rsi
  char *v9; // rdi
  __int64 *v10; // rbp
  int v11; // r15d
  __int64 v13; // rbp
  int v14; // eax
  int v15; // eax
  unsigned int v16; // edi
  unsigned int v17; // r8d
  __int64 v18; // r9
  int i; // esi
  __int64 v20; // r11
  signed int v21; // eax
  unsigned int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // r9
  int v25; // r8d
  int v26; // eax
  int v27; // r9d
  size_t v28; // [rsp+28h] [rbp-80h]
  struct PFF *v29; // [rsp+60h] [rbp-48h] BYREF
  _QWORD v30[3]; // [rsp+68h] [rbp-40h] BYREF
  unsigned int v31; // [rsp+B0h] [rbp+8h] BYREF

  v31 = 0;
  v8 = 0LL;
  if ( (*((_DWORD *)this + 22) & 1) != 0 )
    v9 = (char *)this + 92;
  else
    v9 = (char *)(*((_QWORD *)this + 1) + 348LL);
  v10 = (__int64 *)*((_QWORD *)this + 36);
  v11 = 4 * *((_DWORD *)v9 + 1) + 8;
  if ( !v10 )
    return (struct PFE *)v8;
  v13 = *v10;
  v29 = 0LL;
  if ( !v13 )
    return (struct PFE *)v8;
  if ( gpPFTPrivate || (unsigned int)bInitPrivatePFT() )
  {
    v14 = *(_DWORD *)(v13 + 52);
    v30[0] = gpPFTPrivate;
    if ( (v14 & 0x10) == 0 )
    {
      LODWORD(v28) = v11;
      v15 = -(int)PUBLIC_PFTOBJ::bLoadFonts(
                    (PUBLIC_PFTOBJ *)v30,
                    *(unsigned __int16 **)(v13 + 24),
                    *(_DWORD *)(v13 + 32),
                    *(_DWORD *)(v13 + 36),
                    (struct tagDESIGNVECTOR *)v9,
                    v28,
                    &v31,
                    0x40u,
                    &v29,
                    0x30u,
                    1,
                    0LL);
      v16 = v15 != 0 ? v31 : 0;
      if ( v16 )
      {
        GreQuerySystemTime(&PFTOBJ::FontChangeTime);
        if ( v29 )
        {
          if ( v16 == 1 )
          {
            v8 = *((_QWORD *)v29 + 28);
          }
          else
          {
            v17 = 0;
            v18 = 0LL;
            for ( i = 0x7FFFFFFF; (unsigned int)v18 < v16; v18 = (unsigned int)(v18 + 1) )
            {
              v20 = *(_QWORD *)(*((_QWORD *)v29 + v18 + 28) + 32LL);
              v21 = abs32(*(unsigned __int16 *)(v20 + 46) - *((_DWORD *)this + 43));
              if ( v21 <= i )
              {
                i = v21;
                if ( (*((_DWORD *)this + 63) & 0x2000000) != 0 )
                {
                  v22 = v18;
                  if ( *(_WORD *)(*(int *)(v20 + 8) + v20) != 64 )
                    v22 = v17;
                  v17 = v22;
                }
                else if ( *(_WORD *)(*(int *)(v20 + 8) + v20) != 64 )
                {
                  v17 = v18;
                }
              }
            }
            v8 = *((_QWORD *)v29 + v17 + 28);
          }
          *a2 = 0;
          v23 = *((_QWORD *)this + 1);
          v24 = *(_QWORD *)(v8 + 32);
          v30[0] = v24;
          if ( *(_BYTE *)(v23 + 20)
            && (*(_BYTE *)(v24 + 52) & 1) == 0
            && (unsigned int)IFIOBJ::bSimItalic((IFIOBJ *)v30) )
          {
            *a2 = 0x4000;
          }
          if ( (*((_DWORD *)this + 63) & 0x200000) == 0
            && *(unsigned __int16 *)(v24 + 46) - *((_DWORD *)this + 43) < 0
            && *((_DWORD *)this + 43) - *(unsigned __int16 *)(v24 + 46) > 150 )
          {
            if ( IFIOBJ::pvSimBold((IFIOBJ *)v30) )
              *a2 = v25 | 0x2000;
          }
          *a3 = *(unsigned __int8 *)(*((_QWORD *)this + 1) + 23LL) << 24;
          v26 = ulCharsetToCodePage();
          *a3 = v27 | (v26 << 8);
          a4->y = 1;
          a4->x = 1;
        }
      }
    }
    return (struct PFE *)v8;
  }
  return 0LL;
}
