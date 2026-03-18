/*
 * XREFs of ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C0083A20
 * Callers:
 *     GreGetOutlineTextMetricsInternalW @ 0x1C007EA60 (GreGetOutlineTextMetricsInternalW.c)
 *     GreGetCharSet @ 0x1C008138C (GreGetCharSet.c)
 *     GreGetTextFaceW @ 0x1C00834B0 (GreGetTextFaceW.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00877F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z @ 0x1C025BDB0 (-dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C003F3CC (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x1C0289BD0 (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
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
  unsigned int *v8; // r10
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // r11
  char v13; // bp
  unsigned int v14; // r14d
  int v15; // ebp
  __int64 v16; // rdx
  __int64 v17; // rbp
  int v18; // r15d
  struct PFE *v19; // r14
  __int64 v20; // rax
  int v21; // ecx
  unsigned int v22; // eax
  unsigned int *v23; // r15
  struct PFE *result; // rax
  unsigned int v25; // edx
  __int64 v26; // rcx
  char v27; // r8
  int v28; // edx
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // ecx
  struct tagPvtData *v32; // rax
  char v33; // al
  __int64 v34; // [rsp+50h] [rbp-68h]
  _QWORD v35[12]; // [rsp+58h] [rbp-60h] BYREF
  int v36; // [rsp+C0h] [rbp+8h]
  unsigned int v37; // [rsp+C8h] [rbp+10h]
  struct _POINTL *v39; // [rsp+D8h] [rbp+20h]

  v39 = a4;
  v7 = 0;
  v8 = a3;
  v37 = 0;
  v36 = 0;
  v10 = *(_QWORD *)a2;
  v11 = *(_QWORD *)this + 40LL;
  v12 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  v34 = v12;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 256LL) & 1) != 0 )
  {
LABEL_32:
    v15 = a6;
  }
  else
  {
    v13 = *(_BYTE *)(*(_QWORD *)this + 302LL);
    if ( ((*(_DWORD *)(v10 + 36) & 1) != 0 || *(_DWORD *)(v10 + 32) == 1)
      && ((gulFontInformation & 2) != 0 && v13 != 3 || (unsigned __int8)(v13 - 4) <= 2u)
      && *(_QWORD *)(v10 + 504) )
    {
      GreAcquireHmgrSemaphore();
      v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 504LL) + 96LL);
      v37 = v14;
      if ( v14 == 6 || v14 >= 4 && v14 <= 5 )
      {
        v36 = 0x10000;
        if ( v13 == 6 )
        {
          v36 = 1342242816;
        }
        else if ( v13 == 5 || (gulFontInformation & 0x10) != 0 )
        {
          v36 = 268500992;
        }
      }
      GreReleaseHmgrSemaphore();
      a4 = v39;
      v8 = a3;
      v12 = v34;
    }
    v15 = a6;
    if ( !a6 )
    {
      v16 = *(_QWORD *)this;
      if ( *(_DWORD *)(*(_QWORD *)this + 36LL) != *(_DWORD *)(gpGdiSharedMemory + 1573016LL) )
      {
        *(_DWORD *)(v16 + 32) = 0;
        *(_DWORD *)(*(_QWORD *)this + 36LL) = *(_DWORD *)(gpGdiSharedMemory + 1573016LL);
        v16 = *(_QWORD *)this;
      }
      if ( *(int *)(v16 + 32) > 0 )
      {
        v17 = 0LL;
        v18 = 1;
        while ( 1 )
        {
          if ( v12 == *(_QWORD *)(v11 + v17)
            && *(float *)(v11 + v17 + 8) == *(float *)(v10 + 328)
            && *(float *)(v11 + v17 + 12) == *(float *)(v10 + 332)
            && *(float *)(v11 + v17 + 16) == *(float *)(v10 + 336)
            && *(float *)(v11 + v17 + 20) == *(float *)(v10 + 340) )
          {
            v19 = *(struct PFE **)(v11 + v17 + 24);
            if ( v19 )
            {
              v35[0] = *(_QWORD *)v19;
              if ( *(struct PFT **const *)(v35[0] + 128LL) != gpPFTPrivate
                || (v32 = PFFOBJ::pPvtDataMatch((PFFOBJ *)v35), v12 = v34, v32) )
              {
                if ( v36 )
                {
                  if ( (*(_DWORD *)(v11 + v17 + 32) & 0x10010000) == v36 && v37 == *(_DWORD *)(v11 + v17 + 48) )
                  {
LABEL_53:
                    v23 = a5;
                    v30 = 56LL * v7;
                    *a3 = *(_DWORD *)(v30 + v11 + 32);
                    v39->x = *(_DWORD *)(v30 + v11 + 36);
                    v39->y = *(_DWORD *)(v30 + v11 + 40);
                    *a5 = *(_DWORD *)(v30 + v11 + 44);
                    goto LABEL_54;
                  }
                }
                else if ( (*(_DWORD *)(v11 + v17 + 32) & 0x10000) == 0 )
                {
                  goto LABEL_53;
                }
              }
            }
            v20 = *(_QWORD *)this;
            v21 = *(_DWORD *)(*(_QWORD *)this + 32LL);
            if ( v18 < v21 )
            {
              memmove((void *)(v11 + 56LL * v7), (const void *)(v11 + 56LL * v18), (unsigned int)(56 * (v21 - v7) - 56));
              v20 = *(_QWORD *)this;
              v12 = v34;
            }
            --*(_DWORD *)(v20 + 32);
            --v7;
            --v18;
            v17 -= 56LL;
          }
          ++v7;
          ++v18;
          v17 += 56LL;
          if ( v7 >= *(_DWORD *)(*(_QWORD *)this + 32LL) )
          {
            a4 = v39;
            v8 = a3;
            goto LABEL_32;
          }
        }
      }
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)this + 28LL) & 2) != 0
    && ((v31 = *(_DWORD *)(*(_QWORD *)a2 + 528LL), (v31 & 1) == 0) || (v31 & 2) != 0) )
  {
    v22 = 64;
  }
  else
  {
    v22 = 0;
  }
  v23 = a5;
  result = ppfeGetAMatch(
             a2,
             (struct tagENUMLOGFONTEXDVW *)(*(_QWORD *)this + 276LL),
             (const unsigned __int16 *)(*(_QWORD *)this + 208LL),
             (__int64)a4,
             v22,
             v8,
             a4,
             a5,
             v15);
  v19 = result;
  if ( result )
  {
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 256LL) & 1) != 0 )
      goto LABEL_54;
    if ( v36 )
    {
      if ( (*(_DWORD *)(*((_QWORD *)result + 4) + 48LL) & 0x40) != 0 )
      {
        v25 = *a3 | 0x10000;
        *a3 = v25;
        v26 = *(_QWORD *)a2;
        if ( ((*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 1) != 0 || *(_DWORD *)(v26 + 32) == 1)
          && *(_QWORD *)(v26 + 504)
          && (*(_DWORD *)(*((_QWORD *)result + 4) + 48LL) & 1) != 0 )
        {
          v27 = *(_BYTE *)(*(_QWORD *)this + 302LL);
          if ( v27 == 6 )
          {
            v28 = v25 | 0x50000000;
            goto LABEL_47;
          }
          if ( v27 != 4 && (v27 == 5 || (gulFontInformation & 0x12) == 0x12) )
          {
            v28 = v25 | 0x10000000;
LABEL_47:
            *a3 = v28;
          }
        }
      }
    }
    if ( !v15 )
    {
      if ( v7 >= 3 )
      {
        v7 = 0;
        *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
      }
      v29 = 56LL * v7;
      *(_QWORD *)(v29 + v11) = v34;
      *(_QWORD *)(v29 + v11 + 24) = result;
      *(_DWORD *)(v29 + v11 + 32) = *a3;
      *(_DWORD *)(v29 + v11 + 36) = v39->x;
      *(_DWORD *)(v29 + v11 + 40) = v39->y;
      *(_DWORD *)(v29 + v11 + 8) = *(_DWORD *)(v10 + 328);
      *(_DWORD *)(v29 + v11 + 12) = *(_DWORD *)(v10 + 332);
      *(_DWORD *)(v29 + v11 + 16) = *(_DWORD *)(v10 + 336);
      *(_DWORD *)(v29 + v11 + 20) = *(_DWORD *)(v10 + 340);
      *(_DWORD *)(v29 + v11 + 44) = *a5;
      *(_DWORD *)(v29 + v11 + 48) = v37;
      ++*(_DWORD *)(*(_QWORD *)this + 32LL);
    }
LABEL_54:
    if ( !fFontAssocStatus || (*(_BYTE *)(*(_QWORD *)this + 301LL) & 0x40) != 0 )
      goto LABEL_55;
    v33 = fFontAssocStatus | gForceFontAssocCodePage;
    if ( *((_BYTE *)v23 + 3) )
    {
      if ( *((unsigned __int8 *)v23 + 3) != 255 || (v33 & 1) == 0 )
        goto LABEL_55;
    }
    else if ( (v33 & 2) == 0 )
    {
      goto LABEL_55;
    }
    *v23 = *v23 & 0xFF0000FF | (gSystemAnsiCodePage << 8);
LABEL_55:
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 64LL) = *v23 >> 8;
    result = v19;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 8LL) &= ~0x10u;
  }
  return result;
}
