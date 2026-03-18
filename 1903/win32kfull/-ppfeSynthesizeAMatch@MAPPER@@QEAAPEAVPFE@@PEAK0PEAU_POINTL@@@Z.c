/*
 * XREFs of ?ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z @ 0x1C011E46C
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C00A6F94 (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 * Callees:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C004C338 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?pvSimBold@IFIOBJ@@QEAAPEAXXZ @ 0x1C00AAFA0 (-pvSimBold@IFIOBJ@@QEAAPEAXXZ.c)
 *     ?bSimItalic@IFIOBJ@@QEAAHXZ @ 0x1C0155A08 (-bSimItalic@IFIOBJ@@QEAAHXZ.c)
 *     ?bInitPrivatePFT@@YAHXZ @ 0x1C02700C0 (-bInitPrivatePFT@@YAHXZ.c)
 *     ulCharsetToCodePage @ 0x1C02D2804 (ulCharsetToCodePage.c)
 */

struct PFE *__fastcall MAPPER::ppfeSynthesizeAMatch(
        MAPPER *this,
        unsigned int *a2,
        unsigned int *a3,
        struct _POINTL *a4)
{
  struct _POINTL *v5; // r12
  __int64 v8; // rsi
  char *v9; // rdi
  __int64 *v10; // rbp
  int v11; // r15d
  __int64 v13; // rbp
  int v14; // eax
  int v15; // eax
  unsigned int v16; // edi
  unsigned int v17; // edx
  int v18; // r11d
  unsigned int v19; // r8d
  int v20; // esi
  __int64 v21; // r10
  int v22; // eax
  __int16 v23; // cx
  unsigned int v24; // eax
  __int64 v25; // rax
  __int64 v26; // r9
  int v27; // r8d
  int v28; // eax
  int v29; // r8d
  size_t v30; // [rsp+28h] [rbp-A0h]
  struct PFF *v31; // [rsp+70h] [rbp-58h] BYREF
  _QWORD v32[10]; // [rsp+78h] [rbp-50h] BYREF
  unsigned int v33; // [rsp+D0h] [rbp+8h] BYREF
  struct _POINTL *v34; // [rsp+E8h] [rbp+20h]

  v34 = a4;
  v5 = a4;
  v33 = 0;
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
  v31 = 0LL;
  if ( !v13 )
    return (struct PFE *)v8;
  if ( gpPFTPrivate || (unsigned int)bInitPrivatePFT() )
  {
    v14 = *(_DWORD *)(v13 + 52);
    v32[0] = gpPFTPrivate;
    if ( (v14 & 0x10) == 0 )
    {
      LODWORD(v30) = v11;
      v15 = -(int)PUBLIC_PFTOBJ::bLoadFonts(
                    (PUBLIC_PFTOBJ *)v32,
                    *(unsigned __int16 **)(v13 + 24),
                    *(_DWORD *)(v13 + 32),
                    *(_DWORD *)(v13 + 36),
                    (struct tagDESIGNVECTOR *)v9,
                    v30,
                    &v33,
                    0x40u,
                    &v31,
                    0x30u,
                    1,
                    0LL,
                    0,
                    0);
      v16 = v15 != 0 ? v33 : 0;
      if ( v16 )
      {
        GreQuerySystemTime(&PFTOBJ::FontChangeTime);
        if ( v31 )
        {
          if ( v16 == 1 )
          {
            v8 = *((_QWORD *)v31 + 27);
          }
          else
          {
            v17 = 0;
            v18 = 0x7FFFFFFF;
            v19 = 0;
            if ( v16 )
            {
              v20 = *((_DWORD *)this + 43);
              do
              {
                v21 = *(_QWORD *)(*((_QWORD *)v31 + v19 + 27) + 32LL);
                v22 = *(unsigned __int16 *)(v21 + 46) - v20;
                if ( v22 < 0 )
                  v22 = v20 - *(unsigned __int16 *)(v21 + 46);
                if ( v22 <= v18 )
                {
                  v18 = v22;
                  v23 = *(_WORD *)(*(int *)(v21 + 8) + v21);
                  if ( (*((_DWORD *)this + 63) & 0x2000000) != 0 )
                  {
                    v24 = v19;
                    if ( v23 != 64 )
                      v24 = v17;
                    v17 = v24;
                  }
                  else if ( v23 != 64 )
                  {
                    v17 = v19;
                  }
                }
                ++v19;
              }
              while ( v19 < v16 );
              v5 = v34;
            }
            v8 = *((_QWORD *)v31 + v17 + 27);
          }
          *a2 = 0;
          v25 = *((_QWORD *)this + 1);
          v26 = *(_QWORD *)(v8 + 32);
          v32[0] = v26;
          if ( *(_BYTE *)(v25 + 20)
            && (*(_BYTE *)(v26 + 52) & 1) == 0
            && (unsigned int)IFIOBJ::bSimItalic((IFIOBJ *)v32) )
          {
            *a2 = 0x4000;
          }
          if ( (*((_DWORD *)this + 63) & 0x200000) == 0
            && *(unsigned __int16 *)(v26 + 46) - *((_DWORD *)this + 43) < 0
            && *((_DWORD *)this + 43) - *(unsigned __int16 *)(v26 + 46) > 150 )
          {
            if ( IFIOBJ::pvSimBold((IFIOBJ *)v32) )
              *a2 = v27 | 0x2000;
          }
          *a3 = *(unsigned __int8 *)(*((_QWORD *)this + 1) + 23LL) << 24;
          v28 = ulCharsetToCodePage();
          *a3 = v29 | (v28 << 8);
          v5->y = 1;
          v5->x = 1;
        }
      }
    }
    return (struct PFE *)v8;
  }
  return 0LL;
}
