/*
 * XREFs of MiParseImageSectionHeaders @ 0x14061F300
 * Callers:
 *     MiBuildImageControlArea @ 0x14061EA70 (MiBuildImageControlArea.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeSubsectionPte @ 0x140095A40 (MiMakeSubsectionPte.c)
 *     MiMakeDemandZeroPte @ 0x140097E20 (MiMakeDemandZeroPte.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 */

__int64 __fastcall MiParseImageSectionHeaders(int a1, __int64 *a2, __int64 a3, int a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // r15
  __int64 v7; // r14
  int v8; // edi
  __int64 v9; // rcx
  int v10; // r10d
  __int64 *v11; // rbp
  __int64 *v12; // rsi
  unsigned int *v13; // rcx
  unsigned int v14; // edx
  unsigned int v15; // r8d
  unsigned int v16; // r9d
  __int64 v18; // rbx
  unsigned int v19; // eax
  unsigned int v20; // r12d
  __int64 v21; // r9
  unsigned int v22; // edx
  unsigned int v23; // r11d
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
  char v36; // r8
  __int64 DemandZeroPte; // rax
  char v38; // dl
  char v39; // r8
  __int64 v40; // r11
  char v41; // bl
  char v42; // cl
  char v43; // al
  unsigned int v44; // ebp
  unsigned int v45; // r12d
  unsigned int v46; // edx
  __int64 v47; // rdx
  bool v48; // zf
  bool v49; // zf
  __int64 v50; // rdx
  unsigned int v51; // ecx
  char v52; // [rsp+20h] [rbp-78h]
  char v53; // [rsp+21h] [rbp-77h]
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
  if ( (v8 & 0x80000) == 0 )
  {
    v18 = a5;
    v61 = *(_QWORD *)(v6 + 56);
    v19 = *(_DWORD *)(v61 + 56);
    v20 = *(_DWORD *)(a5 + 12);
    v21 = *(_QWORD *)(v6 + 32) + (unsigned int)((_DWORD)v9 << 12);
    v22 = v19 + 1;
    v54 = v21;
    v58 = v20;
    if ( v10 )
    {
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
            dword_140439EB0 = 61;
            return 3221225595LL;
          }
          *v24 = 0;
        }
        if ( *v24 + v25 < *v24 )
        {
          dword_140439EB0 = 25;
          return 3221225595LL;
        }
        *(_QWORD *)(v7 + 16) = v7 + 56;
        v7 += 56LL;
        *(_QWORD *)v7 = v11;
        if ( v21 != *(_QWORD *)v18 + *(v24 - 2) || !v26 )
        {
          dword_140439EB0 = 26;
          return 3221225595LL;
        }
        if ( v26 + v20 - 1 <= v26 )
        {
          dword_140439EB0 = 43;
          return 3221225595LL;
        }
        v27 = ((v26 + (unsigned __int64)v20 - 1) >> 12) & (~((unsigned __int64)v20 - 1) >> 12);
        *(_DWORD *)(v7 + 44) = v27;
        if ( v27 > v23 )
        {
          dword_140439EB0 = 27;
          return 3221225595LL;
        }
        v28 = ((v26 + (unsigned __int64)v20 - 1) >> 12) & (~((unsigned __int64)v20 - 1) >> 12);
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
          dword_140439EB0 = 54;
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
        DemandZeroPte = MiMakeDemandZeroPte(v36);
        v41 = DemandZeroPte;
        if ( !*v24 )
          v40 = DemandZeroPte;
        v42 = 0;
        v59 = *v24 + *(v24 - 1);
        v43 = 0;
        v53 = 0;
        v52 = 0;
        if ( (v39 & 4) != 0 )
        {
          if ( (v39 & 5) == 5 )
          {
            v43 = 1;
            v52 = 1;
          }
          else
          {
            *(_WORD *)(v7 + 34) |= 2u;
            v42 = 1;
            *((_DWORD *)v11 + 14) |= 0x20000u;
            v53 = 1;
          }
        }
        v21 = v54;
        v44 = 0;
        v45 = 0;
        *(_BYTE *)(v6 + 14) ^= (*(_BYTE *)(v6 + 14) ^ (2 * v38)) & 0x3E;
        v46 = *(v24 - 1);
        v57 = v46;
        if ( *(_DWORD *)(v7 + 44) )
        {
          while ( 1 )
          {
            if ( v44 >= v56 )
            {
              if ( MiPteInShadowRange((unsigned __int64)v12) )
              {
                if ( (unsigned int)MiPteHasShadow() )
                {
                  if ( !HIBYTE(word_14043B26C) && (v50 & 1) != 0 )
                    v50 |= 0x8000000000000000uLL;
                  *v12 = v50;
                  MiWritePteShadow((__int64)v12, v50);
                  goto LABEL_80;
                }
                if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
                  && (v50 & 1) != 0 )
                {
                  v50 |= 0x8000000000000000uLL;
                }
              }
              *v12 = v50;
LABEL_80:
              *(_DWORD *)(v7 + 52) ^= (*(_DWORD *)(v7 + 52) ^ (*(_DWORD *)(v7 + 52) + 1)) & 0x3FFFFFFF;
              goto LABEL_81;
            }
            if ( v42 == 1 )
              ++*(_QWORD *)(v6 + 16);
            if ( v43 == 1 )
              ++*(_QWORD *)(v6 + 48);
            if ( v44 >= v46 )
            {
              if ( MiPteInShadowRange((unsigned __int64)v12) )
              {
                if ( (unsigned int)MiPteHasShadow() )
                {
                  if ( !HIBYTE(word_14043B26C) )
                  {
                    v48 = (v41 & 1) == 0;
                    goto LABEL_56;
                  }
LABEL_58:
                  *v12 = v47;
                  MiWritePteShadow((__int64)v12, v47);
LABEL_81:
                  v21 = v54;
                  goto LABEL_82;
                }
                if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
                {
                  v49 = (v41 & 1) == 0;
LABEL_61:
                  if ( !v49 )
                    v47 |= 0x8000000000000000uLL;
                }
              }
            }
            else
            {
              ++a2[15];
              v47 = v40;
              if ( (unsigned __int64)v12 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v12 <= 0xFFFFF6FB7DBED7F8uLL )
              {
                if ( (unsigned int)MiPteHasShadow() )
                {
                  if ( !HIBYTE(word_14043B26C) )
                  {
                    v48 = (v40 & 1) == 0;
LABEL_56:
                    if ( !v48 )
                      v47 |= 0x8000000000000000uLL;
                  }
                  goto LABEL_58;
                }
                if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
                {
                  v49 = (v40 & 1) == 0;
                  goto LABEL_61;
                }
              }
            }
            *v12 = v47;
LABEL_82:
            v43 = v52;
            v21 += 4096LL;
            v42 = v53;
            v44 += 4096;
            v46 = v57;
            ++v12;
            ++v45;
            v54 = v21;
            if ( v45 >= *(_DWORD *)(v7 + 44) )
            {
              v8 = a1;
              v24 = v60;
              break;
            }
          }
        }
        v24 += 10;
        v18 = a5;
        v48 = v64 == 1;
        v10 = --v64;
        v60 = v24;
        if ( v48 )
          break;
        v11 = a2;
        v23 = v55;
        v20 = v58;
      }
      v51 = v55;
      v22 = v59;
      v19 = *(_DWORD *)(v61 + 56);
    }
    else
    {
      v51 = a6;
    }
    if ( v22 <= v19 )
    {
      if ( v51 < *(_DWORD *)(v18 + 12) >> 12 )
      {
        return 0LL;
      }
      else
      {
        dword_140439EB0 = 34;
        return 3221225595LL;
      }
    }
    else
    {
      dword_140439EB0 = 33;
      return 3221225595LL;
    }
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
        dword_140439EB0 = 21;
        return 3221225595LL;
      }
      v13 += 10;
      if ( !--v10 )
        goto LABEL_10;
    }
    dword_140439EB0 = 20;
    return 3221225595LL;
  }
  else
  {
LABEL_10:
    v11[15] = *(unsigned int *)(v6 + 8);
    return 0LL;
  }
}
