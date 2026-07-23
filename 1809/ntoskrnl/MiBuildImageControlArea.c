/*
 * XREFs of MiBuildImageControlArea @ 0x14061EA70
 * Callers:
 *     MiCreateImageFileMap @ 0x14061DEB8 (MiCreateImageFileMap.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeSubsectionPte @ 0x140095A40 (MiMakeSubsectionPte.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140095FA0 (MiUpdateSystemProtoPtesTree.c)
 *     MiMakeDemandZeroPte @ 0x140097E20 (MiMakeDemandZeroPte.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiParseImageSectionHeaders @ 0x14061F300 (MiParseImageSectionHeaders.c)
 */

__int64 __fastcall MiBuildImageControlArea(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned int *a6,
        _QWORD *a7)
{
  BOOL v9; // r13d
  int v10; // eax
  __int64 v11; // r13
  int v12; // edi
  __int64 v13; // rsi
  int v14; // r12d
  SIZE_T v15; // rbp
  _QWORD *PoolWithTag; // rax
  _QWORD *v17; // r14
  __int64 v18; // rax
  SIZE_T v19; // r13
  __int64 *v20; // rax
  __int64 *v21; // rsi
  _QWORD *v22; // rax
  _QWORD *v23; // r13
  bool v24; // al
  __int64 v25; // rax
  __int64 v26; // r8
  unsigned int v27; // r9d
  unsigned int v28; // ecx
  __int16 v29; // ax
  __int64 v30; // r10
  char v31; // dl
  __int64 v32; // rax
  unsigned int v33; // edi
  BOOL v34; // eax
  __int64 v35; // r11
  int v36; // r8d
  __int64 v37; // rdx
  int v38; // ebx
  __int64 v40; // rdx
  __int64 DemandZeroPte; // rbx
  __int64 v42; // r9
  BOOL v43; // eax
  __int64 v44; // r11
  int v45; // r8d
  unsigned int v46; // edx
  __int64 v47; // rdx
  char v48; // r11
  bool v49; // zf
  char v50; // r11
  bool v51; // zf
  bool v52; // zf
  __int64 v53; // [rsp+30h] [rbp-58h]
  int v54; // [rsp+38h] [rbp-50h]
  unsigned __int64 *v55; // [rsp+40h] [rbp-48h]
  __int64 v56; // [rsp+48h] [rbp-40h]
  unsigned int v58; // [rsp+A0h] [rbp+18h]
  unsigned int v59; // [rsp+A0h] [rbp+18h]
  unsigned int v61; // [rsp+A8h] [rbp+20h]
  int v62; // [rsp+A8h] [rbp+20h]

  v9 = (*(_DWORD *)(a3 + 16) & 0xFFF) != 0;
  v54 = *(unsigned __int16 *)(a4 + 2);
  v10 = *(_DWORD *)(a3 + 16) >> 12;
  v49 = v10 + v9 == 0;
  v11 = (unsigned int)(v10 + v9);
  v58 = v11;
  if ( v49 )
    return 3221225595LL;
  v12 = a5;
  v13 = 1LL;
  v14 = a5 & 0x80000;
  if ( (a5 & 0x80000) == 0 )
    v13 = (unsigned int)*(unsigned __int16 *)(a4 + 2) + 1;
  v15 = 8 * (7 * v13 + (((unsigned int)MiFlags >> 13) & 1)) + 176;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v15, v14 != 0 ? 1631808845 : 1766026573);
  v17 = PoolWithTag;
  if ( !PoolWithTag )
  {
    dword_140439EB0 = 12;
    return 3221225626LL;
  }
  memset(PoolWithTag, 0, v15);
  v55 = &v17[7 * v13 + 16];
  v55[3] = v55[3] & 0xFFFFFFFFFFFFFFF8uLL | 2;
  v18 = (unsigned int)v11;
  v19 = 8 * v11;
  v56 = v18;
  v20 = (__int64 *)ExAllocatePoolWithTag((POOL_TYPE)-2147483647, v19, 0x74536D4Du);
  v21 = v20;
  if ( !v20 )
  {
    dword_140439EB0 = 13;
    v38 = -1073741670;
    goto LABEL_40;
  }
  memset(v20, 0, v19);
  v22 = ExAllocatePoolWithTag(PagedPool, 0x98uLL, 0x6765534Du);
  v23 = v22;
  if ( !v22 )
  {
    dword_140439EB0 = 13;
    v38 = -1073741670;
    goto LABEL_36;
  }
  memset(v22, 0, 0x98uLL);
  v23[5] = 0LL;
  v23[8] = v21;
  *v23 = v17;
  *((_DWORD *)v23 + 2) = v58;
  v23[7] = v23 + 9;
  v23[3] = (unsigned __int64)v58 << 12;
  *((_DWORD *)v23 + 34) = *(_DWORD *)(a3 + 24);
  *((_DWORD *)v23 + 35) = *(_DWORD *)(a3 + 16);
  *((_DWORD *)v23 + 36) = *(_DWORD *)(a4 + 4);
  *((_DWORD *)v23 + 32) = *a6;
  v23[9] = *(_QWORD *)a3 + *(unsigned int *)(a3 + 28);
  v23[11] = *(_QWORD *)(a3 + 32);
  v23[12] = *(_QWORD *)(a3 + 40);
  *((_DWORD *)v23 + 26) = *(unsigned __int16 *)(a3 + 50);
  *((_WORD *)v23 + 55) = *(_WORD *)(a3 + 52);
  *((_WORD *)v23 + 54) = *(_WORD *)(a3 + 54);
  *((_WORD *)v23 + 56) = *(_WORD *)(a3 + 56);
  *((_WORD *)v23 + 57) = *(_WORD *)(a3 + 58);
  *((_WORD *)v23 + 59) = *(_WORD *)(a3 + 60);
  *((_DWORD *)v23 + 33) = *(_DWORD *)(a3 + 64);
  v24 = *(_DWORD *)(a3 + 68) || *(_DWORD *)(a3 + 28);
  *((_BYTE *)v23 + 122) = v24;
  *((_WORD *)v23 + 58) = *(_WORD *)(a4 + 18);
  *((_WORD *)v23 + 60) = *(_WORD *)a4;
  *((_DWORD *)v23 + 31) = *(_DWORD *)(a3 + 20);
  *v17 = v23;
  v17[2] = v17 + 1;
  v17[1] = v17 + 1;
  v17[14] = 1LL;
  v17[3] = 1LL;
  if ( (a5 & 1) == 0 )
    v17[6] = 1LL;
  *((_DWORD *)v17 + 22) = -1;
  v17[13] = 0LL;
  v17[12] = v55;
  *((_DWORD *)v17 + 14) = *((_DWORD *)v17 + 14) ^ (*((_DWORD *)v17 + 14) ^ (a1 << 20)) & 0x3F00000 | 0xA2;
  *((_BYTE *)v23 + 14) = *((_BYTE *)v23 + 14) & 0x7F | (*(_BYTE *)(a3 + 104) << 7);
  v17[16] = v17;
  v23[4] = *(_QWORD *)a3;
  v17[17] = v21;
  if ( v14 )
  {
    *((_DWORD *)v17 + 43) = v58;
    *((_DWORD *)v17 + 42) = *(__int64 *)a6 >> 9;
    *((_WORD *)v17 + 81) = *((_WORD *)v17 + 81) & 0xF | (16 * (*(_WORD *)a6 & 0x1FF));
    *((_BYTE *)v23 + 123) |= 8u;
    *((_BYTE *)v23 + 122) = 1;
    *((_WORD *)v17 + 80) = v17[20] & 0xFFC1 | 0xE;
    MiMakeSubsectionPte((__int64)(v17 + 16));
    *((_BYTE *)v23 + 14) = *((_BYTE *)v23 + 14) & 0xC1 | 0xE;
    DemandZeroPte = MiMakeDemandZeroPte(7);
    v62 = 0;
    if ( !(_DWORD)v30 )
    {
LABEL_62:
      v23[6] = v42;
      v21 -= v42;
      goto LABEL_24;
    }
    v53 = v30;
    while ( 1 )
    {
      v43 = MiPteInShadowRange((unsigned __int64)v21);
      v45 = 0;
      if ( v46 >= *a6 )
      {
        v47 = DemandZeroPte;
        if ( v43 )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v45 = 1;
            if ( !HIBYTE(word_14043B26C) )
            {
              v49 = (DemandZeroPte & 1) == 0;
              goto LABEL_56;
            }
          }
          else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
          {
            v49 = (DemandZeroPte & 1) == 0;
LABEL_56:
            if ( !v49 )
              v47 |= 0x8000000000000000uLL;
          }
        }
      }
      else
      {
        v47 = v44;
        if ( v43 )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v45 = 1;
            if ( !HIBYTE(word_14043B26C) )
            {
              v49 = (v48 & 1) == 0;
              goto LABEL_56;
            }
          }
          else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
          {
            v49 = (v48 & 1) == 0;
            goto LABEL_56;
          }
        }
      }
      *v21 = v47;
      if ( v45 )
        MiWritePteShadow((__int64)v21, v47);
      ++v21;
      v49 = v53-- == 1;
      v62 += 4096;
      if ( v49 )
      {
        v12 = a5;
        LODWORD(v30) = v58;
        v42 = v56;
        goto LABEL_62;
      }
    }
  }
  v25 = *(unsigned int *)(a3 + 24);
  if ( !(_DWORD)v25 )
  {
    dword_140439EB0 = 49;
LABEL_65:
    v38 = -1073741701;
    goto LABEL_36;
  }
  v26 = *(unsigned int *)(a3 + 12);
  v27 = v25 + v26 - 1;
  if ( v27 <= (unsigned int)v25 )
  {
    dword_140439EB0 = 50;
    goto LABEL_65;
  }
  v28 = (((v27 & -(int)v26 & 0xFFF) + 4095) >> 12)
      + (((unsigned __int64)(v26 + v25 - 1) >> 12) & ((unsigned __int64)~(v26 - 1) >> 12));
  *((_DWORD *)v17 + 43) = v28;
  if ( v28 > v58 )
  {
    dword_140439EB0 = 17;
    goto LABEL_65;
  }
  *((_DWORD *)v17 + 42) = *(_DWORD *)(a3 + 24) >> 9;
  v59 = v58 - v28;
  v29 = *((_WORD *)v17 + 80);
  *((_WORD *)v17 + 81) = *((_WORD *)v17 + 81) & 0xF | (16 * (*(_WORD *)(a3 + 24) & 0x1FF));
  *((_WORD *)v17 + 80) = v29 & 0xFFC1 | 2;
  MiMakeSubsectionPte((__int64)(v17 + 16));
  v61 = 0;
  *((_BYTE *)v23 + 14) = v31 | *((_BYTE *)v23 + 14) & 0xC3;
  v32 = *((unsigned int *)v17 + 43);
  if ( !(_DWORD)v32 )
    goto LABEL_23;
  v33 = 0;
  do
  {
    v34 = MiPteInShadowRange((unsigned __int64)v21);
    v36 = 0;
    if ( v33 < *(_DWORD *)(a3 + 24) )
    {
      v37 = v35;
      if ( !v34 )
        goto LABEL_19;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v36 = 1;
        if ( !HIBYTE(word_14043B26C) )
        {
          v51 = (v50 & 1) == 0;
          goto LABEL_72;
        }
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
      {
        v51 = (v50 & 1) == 0;
LABEL_72:
        if ( !v51 )
          v37 |= 0x8000000000000000uLL;
      }
LABEL_19:
      *v21 = v37;
      if ( v36 )
        MiWritePteShadow((__int64)v21, v37);
      goto LABEL_21;
    }
    v40 = ZeroPte;
    if ( v34 )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v36 = 1;
        if ( HIBYTE(word_14043B26C) )
          goto LABEL_29;
        v52 = (v40 & 1) == 0;
      }
      else
      {
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
          goto LABEL_29;
        v52 = (v40 & 1) == 0;
      }
      if ( !v52 )
        v40 |= 0x8000000000000000uLL;
    }
LABEL_29:
    *v21 = v40;
    if ( v36 )
      MiWritePteShadow((__int64)v21, v40);
    *((_DWORD *)v17 + 45) ^= (*((_DWORD *)v17 + 45) ^ (*((_DWORD *)v17 + 45) + 1)) & 0x3FFFFFFF;
LABEL_21:
    v33 += 4096;
    v32 = *((unsigned int *)v17 + 43);
    ++v21;
    ++v61;
  }
  while ( v61 < (unsigned int)v32 );
  v12 = a5;
  LODWORD(v30) = v59;
LABEL_23:
  v21 -= v32;
LABEL_24:
  v38 = MiParseImageSectionHeaders(v12, (_DWORD)v17, a2, v54, a3, v30);
  if ( v38 >= 0 )
  {
    MiUpdateSystemProtoPtesTree(v55, 1);
    *a7 = v17;
    return 0LL;
  }
LABEL_36:
  if ( v21 )
    ExFreePoolWithTag(v21, 0);
  if ( v23 )
    ExFreePoolWithTag(v23, 0);
LABEL_40:
  ExFreePoolWithTag(v17, 0);
  return (unsigned int)v38;
}
