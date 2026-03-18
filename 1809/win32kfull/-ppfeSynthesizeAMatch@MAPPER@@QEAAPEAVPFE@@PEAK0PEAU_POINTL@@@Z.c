/*
 * XREFs of ?ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z @ 0x1C01158EC
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C0027840 (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 * Callees:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C007EB54 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?pvSimBold@IFIOBJ@@QEAAPEAXXZ @ 0x1C010B1E8 (-pvSimBold@IFIOBJ@@QEAAPEAXXZ.c)
 *     ?bSimItalic@IFIOBJ@@QEAAHXZ @ 0x1C014CED8 (-bSimItalic@IFIOBJ@@QEAAHXZ.c)
 *     ulCharsetToCodePage @ 0x1C014D0C4 (ulCharsetToCodePage.c)
 *     ?bInitPrivatePFT@@YAHXZ @ 0x1C0256AC0 (-bInitPrivatePFT@@YAHXZ.c)
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
  __int64 v17; // rdx
  unsigned int v18; // r8d
  int v19; // r11d
  int v20; // esi
  __int64 v21; // r10
  int v22; // eax
  unsigned int v23; // ecx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rcx
  int v29; // eax
  int v30; // r9d
  size_t v31; // [rsp+28h] [rbp-A0h]
  struct PFF *v32; // [rsp+70h] [rbp-58h] BYREF
  _QWORD v33[10]; // [rsp+78h] [rbp-50h] BYREF
  unsigned int v34; // [rsp+D0h] [rbp+8h] BYREF
  struct _POINTL *v35; // [rsp+E8h] [rbp+20h]

  v35 = a4;
  v5 = a4;
  v34 = 0;
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
  v32 = 0LL;
  if ( !v13 )
    return (struct PFE *)v8;
  if ( gpPFTPrivate || (unsigned int)bInitPrivatePFT() )
  {
    v14 = *(_DWORD *)(v13 + 52);
    v33[0] = gpPFTPrivate;
    if ( (v14 & 0x10) == 0 )
    {
      LODWORD(v31) = v11;
      v15 = -(int)PUBLIC_PFTOBJ::bLoadFonts(
                    (PUBLIC_PFTOBJ *)v33,
                    *(unsigned __int16 **)(v13 + 24),
                    *(_DWORD *)(v13 + 32),
                    *(_DWORD *)(v13 + 36),
                    (struct tagDESIGNVECTOR *)v9,
                    v31,
                    &v34,
                    0x40u,
                    &v32,
                    0x30u,
                    1,
                    0LL,
                    0,
                    0);
      v16 = v15 != 0 ? v34 : 0;
      if ( v16 )
      {
        GreQuerySystemTime(&PFTOBJ::FontChangeTime);
        if ( v32 )
        {
          if ( v16 == 1 )
          {
            v8 = *((_QWORD *)v32 + 28);
          }
          else
          {
            v18 = 0;
            v19 = 0x7FFFFFFF;
            v17 = 0LL;
            if ( v16 )
            {
              v20 = *((_DWORD *)this + 43);
              do
              {
                v21 = *(_QWORD *)(*((_QWORD *)v32 + (unsigned int)v17 + 28) + 32LL);
                v22 = *(unsigned __int16 *)(v21 + 46) - v20;
                if ( v22 < 0 )
                  v22 = v20 - *(unsigned __int16 *)(v21 + 46);
                if ( v22 <= v19 )
                {
                  v19 = v22;
                  if ( (*((_DWORD *)this + 63) & 0x2000000) != 0 )
                  {
                    v23 = v17;
                    if ( *(_WORD *)(*(int *)(v21 + 8) + v21) != 64 )
                      v23 = v18;
                    v18 = v23;
                  }
                  else if ( *(_WORD *)(*(int *)(v21 + 8) + v21) != 64 )
                  {
                    v18 = v17;
                  }
                }
                v17 = (unsigned int)(v17 + 1);
              }
              while ( (unsigned int)v17 < v16 );
              v5 = v35;
            }
            v8 = *((_QWORD *)v32 + v18 + 28);
          }
          *a2 = 0;
          v24 = 0LL;
          v25 = *((_QWORD *)this + 1);
          v26 = *(_QWORD *)(v8 + 32);
          v33[0] = v26;
          if ( *(_BYTE *)(v25 + 20)
            && (*(_BYTE *)(v26 + 52) & 1) == 0
            && (unsigned int)IFIOBJ::bSimItalic((IFIOBJ *)v33) )
          {
            v24 = 0x4000LL;
            *a2 = 0x4000;
          }
          if ( (*((_DWORD *)this + 63) & 0x200000) == 0
            && *(unsigned __int16 *)(v26 + 46) - *((_DWORD *)this + 43) < 0
            && *((_DWORD *)this + 43) - *(unsigned __int16 *)(v26 + 46) > 150 )
          {
            if ( IFIOBJ::pvSimBold((IFIOBJ *)v33) )
            {
              LODWORD(v24) = v24 | 0x2000;
              *a2 = v24;
            }
          }
          v27 = *((_QWORD *)this + 1);
          v28 = *(unsigned __int8 *)(v27 + 23);
          *a3 = *(unsigned __int8 *)(v27 + 23) << 24;
          v29 = ulCharsetToCodePage(v28, v17, v24);
          *a3 = v30 | (v29 << 8);
          v5->y = 1;
          v5->x = 1;
        }
      }
    }
    return (struct PFE *)v8;
  }
  return 0LL;
}
