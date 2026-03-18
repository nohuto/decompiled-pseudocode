/*
 * XREFs of ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C0027330
 * Callers:
 *     GreGetCharSet @ 0x1C00241A4 (GreGetCharSet.c)
 *     GreGetTextFaceW @ 0x1C0026ED0 (GreGetTextFaceW.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C005FD30 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C0082F1C (GreGetOutlineTextMetricsInternalW.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z @ 0x1C026F614 (-dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C0027840 (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x1C029D850 (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
 */

struct PFE *__fastcall LFONTOBJ::ppfeMapFont(
        LFONTOBJ *this,
        struct XDCOBJ *a2,
        unsigned int *a3,
        struct _POINTL *a4,
        unsigned int *a5,
        int a6)
{
  int v7; // r12d
  __int64 v8; // rdx
  struct _POINTL *v9; // r10
  unsigned int *v10; // r9
  __int64 v11; // rbx
  __int64 v13; // rsi
  __int64 v14; // r11
  char v15; // bp
  unsigned int v16; // r14d
  int v17; // ebp
  __int64 v18; // rdx
  __int64 v19; // rbp
  int v20; // r15d
  struct PFE *v21; // r14
  __int64 v22; // rax
  int v23; // ecx
  unsigned int v24; // eax
  unsigned int *v25; // r15
  struct PFE *result; // rax
  unsigned int v27; // r8d
  __int64 v28; // rcx
  char v29; // dl
  int v30; // r8d
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rcx
  int v34; // ecx
  struct tagPvtData *v35; // rax
  char v36; // cl
  char v37; // al
  __int64 v38; // [rsp+50h] [rbp-68h]
  _QWORD v39[12]; // [rsp+58h] [rbp-60h] BYREF
  int v40; // [rsp+C0h] [rbp+8h]
  unsigned int v41; // [rsp+C8h] [rbp+10h]

  v7 = 0;
  v8 = *(_QWORD *)this;
  v9 = a4;
  v41 = 0;
  v10 = a3;
  v40 = 0;
  v11 = *(_QWORD *)a2;
  v13 = *(_QWORD *)this + 40LL;
  v14 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  v38 = v14;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 248LL) & 1) != 0 )
  {
LABEL_33:
    v17 = a6;
  }
  else
  {
    v15 = *(_BYTE *)(v8 + 302);
    if ( ((*(_DWORD *)(v11 + 36) & 1) != 0 || *(_DWORD *)(v11 + 32) == 1)
      && ((gulFontInformation & 2) != 0 && v15 != 3 || (unsigned __int8)(v15 - 4) <= 2u)
      && *(_QWORD *)(v11 + 496) )
    {
      GreAcquireHmgrSemaphore(gulFontInformation, v8, a3, a3);
      v16 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 496LL) + 96LL);
      v41 = v16;
      if ( v16 == 6 || v16 >= 4 && v16 <= 5 )
      {
        v40 = 0x10000;
        if ( v15 == 6 )
        {
          v40 = 1342242816;
        }
        else if ( v15 == 5 || (gulFontInformation & 0x10) != 0 )
        {
          v40 = 268500992;
        }
      }
      GreReleaseHmgrSemaphore();
      v10 = a3;
      v9 = a4;
      v14 = v38;
    }
    v17 = a6;
    if ( !a6 )
    {
      v18 = *(_QWORD *)this;
      if ( *(_DWORD *)(*(_QWORD *)this + 36LL) != *(_DWORD *)(gpGdiSharedMemory + 1573016LL) )
      {
        *(_DWORD *)(v18 + 32) = 0;
        *(_DWORD *)(*(_QWORD *)this + 36LL) = *(_DWORD *)(gpGdiSharedMemory + 1573016LL);
        v18 = *(_QWORD *)this;
      }
      if ( *(int *)(v18 + 32) > 0 )
      {
        v19 = 0LL;
        v20 = 1;
        while ( 1 )
        {
          if ( v14 == *(_QWORD *)(v13 + v19)
            && *(float *)(v13 + v19 + 8) == *(float *)(v11 + 320)
            && *(float *)(v13 + v19 + 12) == *(float *)(v11 + 324)
            && *(float *)(v13 + v19 + 16) == *(float *)(v11 + 328)
            && *(float *)(v13 + v19 + 20) == *(float *)(v11 + 332) )
          {
            v21 = *(struct PFE **)(v13 + v19 + 24);
            if ( v21 )
            {
              v39[0] = *(_QWORD *)v21;
              if ( *(struct PFT **const *)(v39[0] + 128LL) != gpPFTPrivate
                || (v35 = PFFOBJ::pPvtDataMatch((PFFOBJ *)v39), v14 = v38, v35) )
              {
                if ( v40 )
                {
                  if ( (*(_DWORD *)(v13 + v19 + 32) & 0x10010000) == v40 && v41 == *(_DWORD *)(v13 + v19 + 48) )
                  {
LABEL_54:
                    v25 = a5;
                    v33 = 56LL * v7;
                    *a3 = *(_DWORD *)(v33 + v13 + 32);
                    a4->x = *(_DWORD *)(v33 + v13 + 36);
                    a4->y = *(_DWORD *)(v33 + v13 + 40);
                    *a5 = *(_DWORD *)(v33 + v13 + 44);
                    goto LABEL_55;
                  }
                }
                else if ( (*(_DWORD *)(v13 + v19 + 32) & 0x10000) == 0 )
                {
                  goto LABEL_54;
                }
              }
            }
            v22 = *(_QWORD *)this;
            v23 = *(_DWORD *)(*(_QWORD *)this + 32LL);
            if ( v20 < v23 )
            {
              memmove((void *)(v13 + 56LL * v7), (const void *)(v13 + 56LL * v20), (unsigned int)(56 * (v23 - v7) - 56));
              v22 = *(_QWORD *)this;
              v14 = v38;
            }
            --*(_DWORD *)(v22 + 32);
            --v7;
            --v20;
            v19 -= 56LL;
          }
          ++v7;
          ++v20;
          v19 += 56LL;
          if ( v7 >= *(_DWORD *)(*(_QWORD *)this + 32LL) )
          {
            v10 = a3;
            v9 = a4;
            goto LABEL_33;
          }
        }
      }
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)this + 28LL) & 2) != 0
    && ((v34 = *(_DWORD *)(*(_QWORD *)a2 + 520LL), (v34 & 1) == 0) || (v34 & 2) != 0) )
  {
    v24 = 64;
  }
  else
  {
    v24 = 0;
  }
  v25 = a5;
  result = ppfeGetAMatch(
             a2,
             (struct tagENUMLOGFONTEXDVW *)(*(_QWORD *)this + 276LL),
             (const unsigned __int16 *)(*(_QWORD *)this + 208LL),
             (unsigned int)v10,
             v24,
             v10,
             v9,
             a5,
             v17);
  v21 = result;
  if ( result )
  {
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 248LL) & 1) != 0 )
      goto LABEL_55;
    if ( v40 )
    {
      if ( (*(_DWORD *)(*((_QWORD *)result + 4) + 48LL) & 0x40) != 0 )
      {
        v27 = *a3;
        *a3 |= 0x10000u;
        v28 = *(_QWORD *)a2;
        if ( ((*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 1) != 0 || *(_DWORD *)(v28 + 32) == 1)
          && *(_QWORD *)(v28 + 496)
          && (*(_DWORD *)(*((_QWORD *)result + 4) + 48LL) & 1) != 0 )
        {
          v29 = *(_BYTE *)(*(_QWORD *)this + 302LL);
          if ( v29 == 6 )
          {
            v30 = v27 | 0x50010000;
            goto LABEL_48;
          }
          if ( v29 != 4 && (v29 == 5 || (gulFontInformation & 0x12) == 0x12) )
          {
            v30 = v27 | 0x10010000;
LABEL_48:
            *a3 = v30;
          }
        }
      }
    }
    if ( !v17 )
    {
      if ( v7 >= 3 )
      {
        v7 = 0;
        *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
      }
      v31 = 56LL * v7;
      *(_QWORD *)(v31 + v13) = v38;
      *(_QWORD *)(v31 + v13 + 24) = result;
      *(_DWORD *)(v31 + v13 + 32) = *a3;
      *(_DWORD *)(v31 + v13 + 36) = a4->x;
      *(_DWORD *)(v31 + v13 + 40) = a4->y;
      v32 = 14LL * v7;
      *(_DWORD *)(v13 + 4 * v32 + 8) = *(_DWORD *)(v11 + 320);
      *(_DWORD *)(v13 + 4 * v32 + 12) = *(_DWORD *)(v11 + 324);
      *(_DWORD *)(v13 + 4 * v32 + 16) = *(_DWORD *)(v11 + 328);
      *(_DWORD *)(v13 + 4 * v32 + 20) = *(_DWORD *)(v11 + 332);
      *(_DWORD *)(v31 + v13 + 44) = *a5;
      *(_DWORD *)(v31 + v13 + 48) = v41;
      ++*(_DWORD *)(*(_QWORD *)this + 32LL);
    }
LABEL_55:
    if ( !fFontAssocStatus || (*(_BYTE *)(*(_QWORD *)this + 301LL) & 0x40) != 0 )
      goto LABEL_56;
    v36 = *((_BYTE *)v25 + 3);
    v37 = fFontAssocStatus | gForceFontAssocCodePage;
    if ( v36 )
    {
      if ( v36 != -1 || (v37 & 1) == 0 )
        goto LABEL_56;
    }
    else if ( (v37 & 2) == 0 )
    {
      goto LABEL_56;
    }
    *v25 = *v25 & 0xFF0000FF | (gSystemAnsiCodePage << 8);
LABEL_56:
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 4LL) = *v25 >> 8;
    result = v21;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 152LL) &= ~0x10u;
  }
  return result;
}
