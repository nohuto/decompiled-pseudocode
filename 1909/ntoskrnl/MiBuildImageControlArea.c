/*
 * XREFs of MiBuildImageControlArea @ 0x1406457E8
 * Callers:
 *     MiCreateImageFileMap @ 0x140645C84 (MiCreateImageFileMap.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiMakeDemandZeroPte @ 0x1400765C8 (MiMakeDemandZeroPte.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1400BFFF0 (MiUpdateSystemProtoPtesTree.c)
 *     MiMakeSubsectionPte @ 0x1400C01A8 (MiMakeSubsectionPte.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiParseImageSectionHeaders @ 0x14064F560 (MiParseImageSectionHeaders.c)
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
  __int64 v18; // rcx
  __int64 v19; // rax
  SIZE_T v20; // r13
  __int64 *v21; // rax
  __int64 *v22; // rsi
  _QWORD *v23; // rax
  _QWORD *v24; // r13
  bool v25; // al
  __int64 v26; // rax
  __int64 v27; // r8
  unsigned int v28; // r9d
  unsigned int v29; // ecx
  __int16 v30; // ax
  __int64 v31; // r10
  char v32; // dl
  __int64 v33; // rax
  unsigned int v34; // edi
  BOOL v35; // eax
  __int64 v36; // r11
  int v37; // r8d
  __int64 v38; // rdx
  int v39; // ebx
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 DemandZeroPte; // rbx
  __int64 v46; // r9
  BOOL v47; // eax
  __int64 v48; // r11
  int v49; // r8d
  unsigned int v50; // edx
  __int64 v51; // rdx
  char v52; // r11
  bool v53; // zf
  char v54; // r11
  bool v55; // zf
  bool v56; // zf
  __int64 v57; // [rsp+30h] [rbp-58h]
  int v58; // [rsp+38h] [rbp-50h]
  __int64 v59; // [rsp+40h] [rbp-48h]
  unsigned __int64 *v60; // [rsp+48h] [rbp-40h]
  unsigned int v62; // [rsp+A0h] [rbp+18h]
  unsigned int v63; // [rsp+A0h] [rbp+18h]
  unsigned int v65; // [rsp+A8h] [rbp+20h]
  int v66; // [rsp+A8h] [rbp+20h]

  v9 = (*(_DWORD *)(a3 + 16) & 0xFFF) != 0;
  v58 = *(unsigned __int16 *)(a4 + 2);
  v10 = *(_DWORD *)(a3 + 16) >> 12;
  v53 = v10 + v9 == 0;
  v11 = (unsigned int)(v10 + v9);
  v62 = v11;
  if ( v53 )
    return 3221225595LL;
  v12 = a5;
  v13 = 1LL;
  v14 = a5 & 0x200000;
  if ( (a5 & 0x200000) == 0 )
    v13 = (unsigned int)*(unsigned __int16 *)(a4 + 2) + 1;
  v15 = 8 * (7 * v13 + (((unsigned int)MiFlags >> 13) & 1)) + 184;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v15, v14 != 0 ? 1631808845 : 1766026573);
  v17 = PoolWithTag;
  if ( !PoolWithTag )
  {
    dword_140464518 = 26;
    return 3221225626LL;
  }
  memset(PoolWithTag, 0, v15);
  v18 = (__int64)&v17[7 * v13 + 16];
  v17[12] = v18;
  v60 = (unsigned __int64 *)v18;
  *(_QWORD *)(v18 + 24) = *(_QWORD *)(v18 + 24) & 0xFFFFFFFFFFFFFFF8uLL | 2;
  v19 = (unsigned int)v11;
  v20 = 8 * v11;
  v59 = v19;
  v21 = (__int64 *)ExAllocatePoolWithTag((POOL_TYPE)-2147483647, v20, 0x74536D4Du);
  v22 = v21;
  if ( !v21 )
  {
    dword_140464518 = 27;
    v39 = -1073741670;
    goto LABEL_40;
  }
  memset(v21, 0, v20);
  v23 = ExAllocatePoolWithTag(PagedPool, 0x98uLL, 0x6765534Du);
  v24 = v23;
  if ( !v23 )
  {
    dword_140464518 = 28;
    v39 = -1073741670;
    goto LABEL_36;
  }
  memset(v23, 0, 0x98uLL);
  v24[8] = v22;
  *v24 = v17;
  *((_DWORD *)v24 + 2) = v62;
  v24[7] = v24 + 9;
  v24[3] = (unsigned __int64)v62 << 12;
  *((_DWORD *)v24 + 34) = *(_DWORD *)(a3 + 24);
  *((_DWORD *)v24 + 35) = *(_DWORD *)(a3 + 16);
  *((_DWORD *)v24 + 36) = *(_DWORD *)(a4 + 4);
  *((_DWORD *)v24 + 32) = *a6;
  v24[9] = *(_QWORD *)a3 + *(unsigned int *)(a3 + 28);
  v24[11] = *(_QWORD *)(a3 + 32);
  v24[12] = *(_QWORD *)(a3 + 40);
  *((_DWORD *)v24 + 26) = *(unsigned __int16 *)(a3 + 50);
  *((_WORD *)v24 + 55) = *(_WORD *)(a3 + 52);
  *((_WORD *)v24 + 54) = *(_WORD *)(a3 + 54);
  *((_WORD *)v24 + 56) = *(_WORD *)(a3 + 56);
  *((_WORD *)v24 + 57) = *(_WORD *)(a3 + 58);
  *((_WORD *)v24 + 59) = *(_WORD *)(a3 + 60);
  *((_DWORD *)v24 + 33) = *(_DWORD *)(a3 + 64);
  v25 = *(_DWORD *)(a3 + 68) || *(_DWORD *)(a3 + 28);
  *((_BYTE *)v24 + 122) = v25;
  *((_WORD *)v24 + 58) = *(_WORD *)(a4 + 18);
  *((_WORD *)v24 + 60) = *(_WORD *)a4;
  *((_DWORD *)v24 + 31) = *(_DWORD *)(a3 + 20);
  *v17 = v24;
  v17[2] = v17 + 1;
  v17[1] = v17 + 1;
  v17[14] = 1LL;
  v17[3] = 1LL;
  if ( (a5 & 1) == 0 )
    v17[6] = 1LL;
  *((_DWORD *)v17 + 22) = -1;
  v17[13] = 0LL;
  *((_DWORD *)v17 + 14) = *((_DWORD *)v17 + 14) ^ (*((_DWORD *)v17 + 14) ^ (a1 << 20)) & 0x3F00000 | 0xA2;
  *((_BYTE *)v24 + 14) = *((_BYTE *)v24 + 14) & 0x7F | (*(_BYTE *)(a3 + 104) << 7);
  v17[16] = v17;
  v24[4] = *(_QWORD *)a3;
  v17[17] = v22;
  if ( v14 )
  {
    *((_DWORD *)v17 + 43) = v62;
    *((_DWORD *)v17 + 42) = *(__int64 *)a6 >> 9;
    *((_WORD *)v17 + 81) = *((_WORD *)v17 + 81) & 0xF | (16 * (*(_WORD *)a6 & 0x1FF));
    *((_BYTE *)v24 + 123) |= 8u;
    *((_BYTE *)v24 + 122) = 1;
    *((_WORD *)v17 + 80) = v17[20] & 0xFFC1 | 0xE;
    MiMakeSubsectionPte((__int64)(v17 + 16));
    *((_BYTE *)v24 + 14) = *((_BYTE *)v24 + 14) & 0xC1 | 0xE;
    DemandZeroPte = MiMakeDemandZeroPte(7, v42, v43, v44);
    v66 = 0;
    if ( !(_DWORD)v31 )
    {
LABEL_62:
      v24[6] = v46;
      v22 -= v46;
      goto LABEL_24;
    }
    v57 = v31;
    while ( 1 )
    {
      v47 = MiPteInShadowRange((unsigned __int64)v22);
      v49 = 0;
      if ( v50 >= *a6 )
      {
        v51 = DemandZeroPte;
        if ( v47 )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v49 = 1;
            if ( !HIBYTE(word_1404658EC) )
            {
              v53 = (DemandZeroPte & 1) == 0;
              goto LABEL_56;
            }
          }
          else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
          {
            v53 = (DemandZeroPte & 1) == 0;
LABEL_56:
            if ( !v53 )
              v51 |= 0x8000000000000000uLL;
          }
        }
      }
      else
      {
        v51 = v48;
        if ( v47 )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v49 = 1;
            if ( !HIBYTE(word_1404658EC) )
            {
              v53 = (v52 & 1) == 0;
              goto LABEL_56;
            }
          }
          else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
          {
            v53 = (v52 & 1) == 0;
            goto LABEL_56;
          }
        }
      }
      *v22 = v51;
      if ( v49 )
        MiWritePteShadow((__int64)v22);
      ++v22;
      v53 = v57-- == 1;
      v66 += 4096;
      if ( v53 )
      {
        v12 = a5;
        LODWORD(v31) = v62;
        v46 = v59;
        goto LABEL_62;
      }
    }
  }
  v26 = *(unsigned int *)(a3 + 24);
  if ( !(_DWORD)v26 )
  {
    dword_140464518 = 29;
LABEL_65:
    v39 = -1073741701;
    goto LABEL_36;
  }
  v27 = *(unsigned int *)(a3 + 12);
  v28 = v26 + v27 - 1;
  if ( v28 <= (unsigned int)v26 )
  {
    dword_140464518 = 30;
    goto LABEL_65;
  }
  v29 = (((v28 & -(int)v27 & 0xFFF) + 4095) >> 12)
      + (((unsigned __int64)(v27 + v26 - 1) >> 12) & ((unsigned __int64)~(v27 - 1) >> 12));
  *((_DWORD *)v17 + 43) = v29;
  if ( v29 > v62 )
  {
    dword_140464518 = 31;
    goto LABEL_65;
  }
  *((_DWORD *)v17 + 42) = *(_DWORD *)(a3 + 24) >> 9;
  v63 = v62 - v29;
  v30 = *((_WORD *)v17 + 80);
  *((_WORD *)v17 + 81) = *((_WORD *)v17 + 81) & 0xF | (16 * (*(_WORD *)(a3 + 24) & 0x1FF));
  *((_WORD *)v17 + 80) = v30 & 0xFFC1 | 2;
  MiMakeSubsectionPte((__int64)(v17 + 16));
  v65 = 0;
  *((_BYTE *)v24 + 14) = v32 | *((_BYTE *)v24 + 14) & 0xC3;
  v33 = *((unsigned int *)v17 + 43);
  if ( !(_DWORD)v33 )
    goto LABEL_23;
  v34 = 0;
  do
  {
    v35 = MiPteInShadowRange((unsigned __int64)v22);
    v37 = 0;
    if ( v34 < *(_DWORD *)(a3 + 24) )
    {
      v38 = v36;
      if ( !v35 )
        goto LABEL_19;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v37 = 1;
        if ( !HIBYTE(word_1404658EC) )
        {
          v55 = (v54 & 1) == 0;
          goto LABEL_72;
        }
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
      {
        v55 = (v54 & 1) == 0;
LABEL_72:
        if ( !v55 )
          v38 |= 0x8000000000000000uLL;
      }
LABEL_19:
      *v22 = v38;
      if ( v37 )
        MiWritePteShadow((__int64)v22);
      goto LABEL_21;
    }
    v41 = ZeroPte;
    if ( v35 )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v37 = 1;
        if ( HIBYTE(word_1404658EC) )
          goto LABEL_29;
        v56 = (v41 & 1) == 0;
      }
      else
      {
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
          goto LABEL_29;
        v56 = (v41 & 1) == 0;
      }
      if ( !v56 )
        v41 |= 0x8000000000000000uLL;
    }
LABEL_29:
    *v22 = v41;
    if ( v37 )
      MiWritePteShadow((__int64)v22);
    *((_DWORD *)v17 + 45) ^= (*((_DWORD *)v17 + 45) ^ (*((_DWORD *)v17 + 45) + 1)) & 0x3FFFFFFF;
LABEL_21:
    v34 += 4096;
    v33 = *((unsigned int *)v17 + 43);
    ++v22;
    ++v65;
  }
  while ( v65 < (unsigned int)v33 );
  v12 = a5;
  LODWORD(v31) = v63;
LABEL_23:
  v22 -= v33;
LABEL_24:
  v39 = MiParseImageSectionHeaders(v12, (_DWORD)v17, a2, v58, a3, v31);
  if ( v39 >= 0 )
  {
    MiUpdateSystemProtoPtesTree(v60, 1);
    *a7 = v17;
    return 0LL;
  }
LABEL_36:
  if ( v22 )
    ExFreePoolWithTag(v22, 0);
  if ( v24 )
    ExFreePoolWithTag(v24, 0);
LABEL_40:
  ExFreePoolWithTag(v17, 0);
  return (unsigned int)v39;
}
