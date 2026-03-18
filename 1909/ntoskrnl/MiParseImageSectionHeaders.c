/*
 * XREFs of MiParseImageSectionHeaders @ 0x14064F560
 * Callers:
 *     MiBuildImageControlArea @ 0x1406457E8 (MiBuildImageControlArea.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiMakeDemandZeroPte @ 0x1400765C8 (MiMakeDemandZeroPte.c)
 *     MiMakeSubsectionPte @ 0x1400C01A8 (MiMakeSubsectionPte.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 */

__int64 __fastcall MiParseImageSectionHeaders(int a1, __int64 *a2, __int64 a3, int a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // rbp
  __int64 v7; // r14
  int v8; // edi
  __int64 v9; // rcx
  int v10; // r11d
  __int64 *v11; // r10
  __int64 *v12; // rsi
  unsigned int *v13; // rcx
  unsigned int v14; // edx
  unsigned int v15; // r8d
  unsigned int v16; // r9d
  __int64 v18; // r15
  unsigned int v19; // eax
  __int64 v20; // r9
  unsigned int v21; // r12d
  unsigned int v22; // edx
  unsigned int v23; // ebx
  unsigned int *v24; // r13
  unsigned int v25; // edx
  unsigned int v26; // r8d
  unsigned int v27; // ecx
  int v28; // eax
  unsigned int v29; // r10d
  unsigned int v30; // r9d
  int v31; // r8d
  int v32; // edx
  unsigned int v33; // ecx
  __int64 v34; // rax
  __int16 v35; // dx
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 DemandZeroPte; // rax
  char v40; // dl
  char v41; // r8
  __int64 v42; // r11
  char v43; // bl
  char v44; // cl
  unsigned int v45; // r15d
  int v46; // r12d
  unsigned int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rdx
  bool v51; // zf
  unsigned int v52; // ecx
  __int16 v53; // [rsp+20h] [rbp-78h]
  __int64 v54; // [rsp+28h] [rbp-70h]
  unsigned int v55; // [rsp+30h] [rbp-68h]
  unsigned int v56; // [rsp+34h] [rbp-64h]
  unsigned int v57; // [rsp+38h] [rbp-60h]
  unsigned int v58; // [rsp+3Ch] [rbp-5Ch]
  int v59; // [rsp+40h] [rbp-58h]
  unsigned int *v60; // [rsp+48h] [rbp-50h]
  __int64 v61; // [rsp+50h] [rbp-48h]
  int v64; // [rsp+B8h] [rbp+20h]

  v64 = a4;
  v6 = *a2;
  v7 = (__int64)(a2 + 16);
  v8 = a1;
  v9 = *((unsigned int *)a2 + 43);
  v10 = a4;
  v11 = a2;
  v12 = (__int64 *)(a2[17] + 8 * v9);
  if ( (v8 & 0x200000) == 0 )
  {
    v18 = a5;
    v61 = *(_QWORD *)(v6 + 56);
    v19 = *(_DWORD *)(v61 + 56);
    v20 = *(_QWORD *)(v6 + 32) + (unsigned int)((_DWORD)v9 << 12);
    v21 = *(_DWORD *)(a5 + 12);
    v58 = v21;
    v22 = v19 + 1;
    v54 = v20;
    if ( !v10 )
    {
      v52 = a6;
LABEL_99:
      if ( v22 <= v19 )
      {
        if ( v52 < *(_DWORD *)(v18 + 12) >> 12 )
        {
          return 0LL;
        }
        else
        {
          dword_140464518 = 25;
          return 3221225595LL;
        }
      }
      else
      {
        dword_140464518 = 24;
        return 3221225595LL;
      }
    }
    v23 = a6;
    v24 = (unsigned int *)(a3 + 20);
    v60 = (unsigned int *)(a3 + 20);
    while ( 1 )
    {
      v25 = *(v24 - 1);
      v26 = v25;
      if ( *(v24 - 3) )
        v26 = *(v24 - 3);
      v56 = v26;
      if ( !v25 && *v24 )
      {
        if ( (v8 & 0x10000) != 0 )
        {
          dword_140464518 = 18;
          return 3221225595LL;
        }
        *v24 = 0;
      }
      if ( *v24 + v25 < *v24 )
      {
        dword_140464518 = 19;
        return 3221225595LL;
      }
      *(_QWORD *)(v7 + 16) = v7 + 56;
      v7 += 56LL;
      *(_QWORD *)v7 = v11;
      if ( v20 != *(_QWORD *)v18 + *(v24 - 2) || !v26 )
      {
        dword_140464518 = 20;
        return 3221225595LL;
      }
      if ( v26 + v21 - 1 <= v26 )
      {
        dword_140464518 = 21;
        return 3221225595LL;
      }
      v27 = ((v26 + (unsigned __int64)v21 - 1) >> 12) & (~((unsigned __int64)v21 - 1) >> 12);
      *(_DWORD *)(v7 + 44) = v27;
      if ( v27 > v23 )
      {
        dword_140464518 = 22;
        return 3221225595LL;
      }
      v28 = ((v26 + (unsigned __int64)v21 - 1) >> 12) & (~((unsigned __int64)v21 - 1) >> 12);
      if ( v10 == 1 && v27 != v23 )
      {
        *(_DWORD *)(v7 + 44) = v23;
        v28 = v23;
      }
      *(_DWORD *)(v7 + 32) = 0;
      v29 = *v24 >> 9;
      *(_DWORD *)(v7 + 36) = v29;
      v55 = v23 - v28;
      v30 = -*(_DWORD *)(v18 + 8) & (*(_DWORD *)(v18 + 8) + *v24 + *(v24 - 1) - 1);
      if ( v30 < *v24 )
      {
        dword_140464518 = 23;
        return 3221225595LL;
      }
      *(_QWORD *)(v7 + 8) = v12;
      *(_DWORD *)(v7 + 40) = (v30 >> 9) - v29;
      *(_WORD *)(v7 + 34) = 16 * (v30 & 0x1FF);
      v31 = v24[4];
      v32 = ((unsigned int)v31 >> 29) & 1 | 2;
      if ( (v31 & 0x40000000) == 0 )
        v32 = (v24[4] >> 29) & 1;
      v33 = v32 | 4;
      if ( v31 >= 0 )
        v33 = v32;
      v34 = v33 | 8;
      if ( (v31 & 0x10000000) == 0 )
        v34 = v33;
      v35 = MiImageProtectionArray[v34];
      if ( (MiImageProtectionArray[v34] & 2) != 0 )
        *(_BYTE *)(v61 + 50) = 1;
      *(_WORD *)(v7 + 32) ^= (*(_WORD *)(v7 + 32) ^ (2 * v35)) & 0x3E;
      MiMakeSubsectionPte(v7);
      DemandZeroPte = MiMakeDemandZeroPte(v37, v36, v37, v38);
      v43 = DemandZeroPte;
      v11 = a2;
      if ( !*v24 )
        v42 = DemandZeroPte;
      v44 = 0;
      v59 = *v24 + *(v24 - 1);
      v53 = 0;
      if ( (v41 & 4) != 0 )
      {
        if ( (v41 & 5) == 5 )
        {
          HIBYTE(v53) = 1;
        }
        else
        {
          *(_WORD *)(v7 + 34) |= 2u;
          v44 = 1;
          *((_DWORD *)a2 + 14) |= 0x20000u;
          LOBYTE(v53) = 1;
        }
      }
      v20 = v54;
      v45 = 0;
      v46 = 0;
      *(_BYTE *)(v6 + 14) ^= (*(_BYTE *)(v6 + 14) ^ (2 * v40)) & 0x3E;
      v47 = *(v24 - 1);
      v57 = v47;
      if ( *(_DWORD *)(v7 + 44) )
        break;
LABEL_89:
      v24 += 10;
      v18 = a5;
      v51 = v64 == 1;
      v10 = --v64;
      v60 = v24;
      if ( v51 )
      {
        v52 = v55;
        v22 = v59;
        v19 = *(_DWORD *)(v61 + 56);
        goto LABEL_99;
      }
      v23 = v55;
      v21 = v58;
    }
    while ( v45 < v56 )
    {
      if ( v44 == 1 )
        ++*(_QWORD *)(v6 + 16);
      if ( HIBYTE(v53) == 1 )
        ++*(_QWORD *)(v6 + 48);
      if ( v45 >= v47 )
      {
        if ( MiPteInShadowRange((unsigned __int64)v12) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            if ( !HIBYTE(word_1404658EC) && (v43 & 1) != 0 )
              v49 |= 0x8000000000000000uLL;
            *v12 = v49;
            MiWritePteShadow((__int64)v12);
LABEL_72:
            v44 = v53;
            if ( !v53 )
              ++*(_QWORD *)(v6 + 16);
LABEL_86:
            v20 = v54;
            v11 = a2;
            goto LABEL_87;
          }
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
            && (v43 & 1) != 0 )
          {
            v49 |= 0x8000000000000000uLL;
          }
        }
        *v12 = v49;
        goto LABEL_72;
      }
      ++v11[15];
      v48 = v42;
      if ( (unsigned __int64)v12 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v12 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          if ( !HIBYTE(word_1404658EC) && (v42 & 1) != 0 )
            v48 |= 0x8000000000000000uLL;
          *v12 = v48;
          MiWritePteShadow((__int64)v12);
          goto LABEL_85;
        }
        v44 = v53;
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
          && (v42 & 1) != 0 )
        {
          v48 |= 0x8000000000000000uLL;
        }
      }
      *v12 = v48;
LABEL_87:
      v47 = v57;
      v20 += 4096LL;
      v45 += 4096;
      v54 = v20;
      ++v12;
      if ( (unsigned int)++v46 >= *(_DWORD *)(v7 + 44) )
      {
        v8 = a1;
        v24 = v60;
        goto LABEL_89;
      }
    }
    if ( MiPteInShadowRange((unsigned __int64)v12) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_1404658EC) && (v50 & 1) != 0 )
          v50 |= 0x8000000000000000uLL;
        *v12 = v50;
        MiWritePteShadow((__int64)v12);
        goto LABEL_84;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
        && (v50 & 1) != 0 )
      {
        v50 |= 0x8000000000000000uLL;
      }
    }
    *v12 = v50;
LABEL_84:
    *(_DWORD *)(v7 + 52) ^= (*(_DWORD *)(v7 + 52) ^ (*(_DWORD *)(v7 + 52) + 1)) & 0x3FFFFFFF;
LABEL_85:
    v44 = v53;
    goto LABEL_86;
  }
  if ( a4 )
  {
    v13 = (unsigned int *)(a3 + 16);
    while ( 1 )
    {
      v14 = *v13;
      v15 = *v13;
      v16 = v13[1];
      if ( *(v13 - 2) )
        v15 = *(v13 - 2);
      if ( v14 + v16 < v16 )
        break;
      if ( v16 != *(v13 - 1) || v15 > v14 )
      {
        dword_140464518 = 17;
        return 3221225595LL;
      }
      v13 += 10;
      if ( !--v10 )
        goto LABEL_10;
    }
    dword_140464518 = 16;
    return 3221225595LL;
  }
  else
  {
LABEL_10:
    v11[15] = *(unsigned int *)(v6 + 8);
    return 0LL;
  }
}
