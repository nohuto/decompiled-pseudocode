/*
 * XREFs of PopEtEnergyTrackerQuery @ 0x14069D39C
 * Callers:
 *     NtPowerInformation @ 0x14058D170 (NtPowerInformation.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008CE50 (KiQueryUnbiasedInterruptTime.c)
 *     KeQueryTimelineBitmapTime @ 0x1400ACED0 (KeQueryTimelineBitmapTime.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PsEnumProcesses @ 0x1405B2AFC (PsEnumProcesses.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E9390 (ObpReferenceObjectByHandleWithTag.c)
 *     PopEtDataSectionCopyData @ 0x14069E05C (PopEtDataSectionCopyData.c)
 *     PopEtDataSectionReserve @ 0x14069E0A8 (PopEtDataSectionReserve.c)
 *     PopEtDataSectionStart @ 0x14069E0F4 (PopEtDataSectionStart.c)
 *     PopEtEnergyTrackerCleanupAggregates @ 0x14069E114 (PopEtEnergyTrackerCleanupAggregates.c)
 */

__int64 __fastcall PopEtEnergyTrackerQuery(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  char *v5; // rbx
  char v6; // r15
  int v7; // esi
  char *v8; // r15
  unsigned int v9; // esi
  unsigned int v10; // r12d
  _QWORD *v11; // r11
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  _QWORD **i; // rdx
  unsigned __int16 *v15; // rdx
  __int64 v16; // rax
  unsigned int v17; // r15d
  int v18; // esi
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  char *v22; // r15
  __m128i v23; // xmm0
  __int64 v24; // rsi
  __int64 v25; // r14
  size_t v26; // rbx
  char *v27; // r11
  char *v28; // r10
  __int64 v29; // rdx
  unsigned __int8 *v30; // r8
  __int64 v31; // r9
  size_t v32; // rax
  __int64 v33; // rcx
  size_t v34; // r13
  size_t v35; // r12
  size_t v36; // r15
  int v37; // edx
  __int64 v38; // rdx
  __int64 *v39; // rdx
  unsigned __int64 v40; // r8
  __int64 v41; // rbx
  __int64 v42; // rax
  _DWORD *v43; // rsi
  int v44; // ecx
  __int64 v45; // rdx
  int TimelineBitmapTime; // eax
  __int64 v47; // rdx
  int v48; // r9d
  int v49; // r9d
  int v50; // r9d
  int v51; // r9d
  int v52; // r9d
  int v53; // r9d
  __int64 v54; // rax
  size_t v55; // rax
  __int64 v56; // rax
  __int64 j; // r11
  unsigned __int64 v58; // r9
  __int64 *v59; // rdx
  size_t Size; // [rsp+40h] [rbp-158h] BYREF
  PVOID Object; // [rsp+48h] [rbp-150h] BYREF
  unsigned __int8 *v63; // [rsp+50h] [rbp-148h]
  unsigned int v64; // [rsp+58h] [rbp-140h]
  int v65; // [rsp+5Ch] [rbp-13Ch]
  int v66; // [rsp+60h] [rbp-138h]
  __m128i v67; // [rsp+68h] [rbp-130h] BYREF
  char *v68; // [rsp+78h] [rbp-120h]
  __int64 v69; // [rsp+80h] [rbp-118h]
  _QWORD *v70; // [rsp+88h] [rbp-110h]
  _DWORD v71[8]; // [rsp+90h] [rbp-108h] BYREF
  _DWORD v72[8]; // [rsp+B0h] [rbp-E8h] BYREF
  _QWORD v73[4]; // [rsp+D0h] [rbp-C8h] BYREF
  __int64 v74; // [rsp+F0h] [rbp-A8h]
  __int64 v75; // [rsp+F8h] [rbp-A0h]
  __int64 v76; // [rsp+100h] [rbp-98h] BYREF
  __int64 v77; // [rsp+108h] [rbp-90h]
  __int64 *v78; // [rsp+110h] [rbp-88h]
  __int64 v79; // [rsp+118h] [rbp-80h]
  __int64 v80; // [rsp+120h] [rbp-78h]
  _DWORD v81[8]; // [rsp+128h] [rbp-70h] BYREF
  _QWORD v82[5]; // [rsp+148h] [rbp-50h] BYREF

  v5 = 0LL;
  Object = 0LL;
  v6 = 0;
  if ( !PopEtGlobals )
  {
    v7 = -1073741637;
    goto LABEL_79;
  }
  v7 = ObpReferenceObjectByHandleWithTag(
         a1,
         1,
         *(_QWORD *)(PopEtGlobals + 32),
         KeGetCurrentThread()->PreviousMode,
         0x74456F50u,
         &Object,
         0LL,
         0LL);
  if ( v7 < 0 )
  {
    v5 = (char *)Object;
    goto LABEL_79;
  }
  memset(v82, 0, 0x20uLL);
  LODWORD(v82[0]) = 2;
  v5 = (char *)Object;
  v82[2] = Object;
  v7 = PsEnumProcesses((__int64 (__fastcall *)(__int64, __int64))PopEtProcessEnumSnapshotCallback, (__int64)v82);
  if ( v7 < 0 )
    goto LABEL_79;
  PopAcquireRwLockExclusive((ULONG_PTR)(v5 + 16));
  v8 = v5 + 48;
  v64 = *((_DWORD *)v5 + 12);
  v9 = 0;
  v10 = 44;
  v11 = 0LL;
  while ( 1 )
  {
    if ( v11 )
    {
      v12 = v11[1] & (-1LL << (*((_DWORD *)v8 + 1) & 0x1F));
      v13 = *((_QWORD *)v8 + 1)
          + 8
          * ((HIBYTE(v12)
            + 37
            * (BYTE6(v12)
             + 37
             * (BYTE5(v12)
              + 37
              * (BYTE4(v12)
               + 37
               * ((((_DWORD)v11[1] & (unsigned int)(-1 << (*((_DWORD *)v8 + 1) & 0x1F))) >> 24)
                + 37
                * ((unsigned __int8)(((_DWORD)v11[1] & (unsigned int)(-1 << (*((_DWORD *)v8 + 1) & 0x1F))) >> 16)
                 + 37
                 * ((unsigned __int8)((unsigned __int16)(v11[1] & (-1 << (*((_DWORD *)v8 + 1) & 0x1F))) >> 8)
                  + 37 * ((unsigned __int8)v12 + 11623883)))))))) & ((*((_DWORD *)v8 + 1) >> 5) - 1));
    }
    else
    {
      v11 = (_QWORD *)*((_QWORD *)v8 + 1);
      v13 = (__int64)v11;
    }
    if ( !v11 )
      goto LABEL_11;
    if ( (*v11 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v5 = (char *)Object;
    v11 = (_QWORD *)*v11;
    if ( ((unsigned __int8)v11 & 1) != 0 )
    {
LABEL_11:
      for ( i = (_QWORD **)(v13 + 8);
            (unsigned __int64)i < *((_QWORD *)v8 + 1) + 8 * ((unsigned __int64)*((unsigned int *)v8 + 1) >> 5);
            ++i )
      {
        v11 = *i;
        if ( ((unsigned __int8)*i & 1) == 0 )
          goto LABEL_14;
      }
      v11 = 0LL;
    }
LABEL_14:
    if ( !v11 )
      break;
    v15 = (unsigned __int16 *)v11[2];
    if ( v9 >= 0x10000000 )
    {
      v7 = -1073741619;
      goto LABEL_78;
    }
    v10 += v15[39];
    v9 += v15[37] + v15[38] + v15[36];
    v16 = v11[3];
    if ( v16 )
      v9 += ((unsigned int)(*(_QWORD *)(v16 + 24) >> 16) >> 1) & 0x1FFFFFFF;
  }
  LODWORD(Size) = 72;
  memset(v73, 0, sizeof(v73));
  HIDWORD(v73[1]) = 96;
  LODWORD(v73[2]) = 8;
  v17 = v64;
  PopEtDataSectionReserve(v73, v64, &Size);
  memset(v81, 0, sizeof(v81));
  v81[3] = 432;
  v81[4] = 8;
  PopEtDataSectionReserve(v81, v17, &Size);
  memset(v72, 0, sizeof(v72));
  v72[3] = 1;
  v72[4] = 4;
  PopEtDataSectionReserve(v72, v10, &Size);
  memset(v71, 0, sizeof(v71));
  v71[3] = 2;
  v71[4] = 2;
  PopEtDataSectionReserve(v71, v9, &Size);
  v18 = Size;
  if ( (unsigned int)Size > a3 || (unsigned int)Size >= 0x7FFFFFFF )
  {
    if ( a3 >= 0xC )
    {
      *(_QWORD *)a2 = 0LL;
      *(_DWORD *)a2 = 2097170;
      *(_DWORD *)(a2 + 8) = v18;
    }
    v7 = -1073741789;
    goto LABEL_78;
  }
  memset((void *)a2, 0, (unsigned int)Size);
  PopEtDataSectionStart(v73, a2);
  PopEtDataSectionStart(v81, v19);
  PopEtDataSectionStart(v72, v20);
  PopEtDataSectionStart(v71, v21);
  v79 = a2;
  *(_DWORD *)a2 = 2097170;
  *(_DWORD *)(a2 + 4) = 72;
  *(_DWORD *)(a2 + 8) = v18;
  *(_DWORD *)(a2 + 12) = *((_DWORD *)v5 + 150);
  *(_DWORD *)(a2 + 24) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *(_DWORD *)(a2 + 36) = v73[0];
  *(_DWORD *)(a2 + 40) = v17;
  *(_DWORD *)(a2 + 56) = 1048672;
  *(_DWORD *)(a2 + 52) = v72[5];
  *(_WORD *)(a2 + 60) = 12;
  v22 = (char *)Object;
  PopEtDataSectionCopyData(v72, (char *)Object + 32, 12LL);
  *(_DWORD *)(a2 + 44) = v72[5];
  PopEtDataSectionCopyData(v72, v22 + 604, 16LL);
  v23 = *(__m128i *)(v22 + 620);
  v67 = v23;
  v67.m128i_i32[0] = *((_DWORD *)v22 + 151) + _mm_cvtsi128_si32(v23);
  v67.m128i_i32[1] = *((_DWORD *)v22 + 152) + v23.m128i_i32[1];
  v67.m128i_i32[2] = *((_DWORD *)v22 + 153) + v23.m128i_i32[2];
  v67.m128i_i32[3] = *((_DWORD *)v22 + 154) + v23.m128i_i32[3];
  *(_DWORD *)(a2 + 48) = v72[5];
  PopEtDataSectionCopyData(v72, &v67, 16LL);
  v24 = 0LL;
  v25 = v73[3];
  while ( 1 )
  {
    v26 = 314159LL;
    v27 = v22 + 48;
    v28 = v22 + 48;
    v68 = v22 + 48;
    if ( !v24 )
    {
      v38 = *((_QWORD *)v22 + 7);
      v70 = (_QWORD *)v38;
      v24 = v38;
      v69 = v38;
      goto LABEL_29;
    }
    v69 = v24;
    v29 = *(_QWORD *)(v24 + 8) & (-1LL << (*((_DWORD *)v22 + 13) & 0x1F));
    v64 = *((_DWORD *)v22 + 13) >> 5;
    v76 = v29;
    v30 = (unsigned __int8 *)&v76;
    v63 = (unsigned __int8 *)&v76;
    v31 = 8LL;
    v77 = 8LL;
    LODWORD(v32) = 314159;
    v74 = 314159LL;
    v33 = 314159LL;
    Size = 314159LL;
    v75 = 314159LL;
    v34 = 314159LL;
    v35 = 314159LL;
    v36 = 314159LL;
    while ( 1 )
    {
      v37 = v32;
      if ( v31 < 8 )
        break;
      Size = *v30 + 37 * v74;
      Size = v30[1] + 37 * Size;
      Size = v30[2] + 37 * Size;
      Size = v30[3] + 37 * Size;
      Size = v30[4] + 37 * Size;
      Size = v30[5] + 37 * Size;
      Size = v30[6] + 37 * Size;
      v32 = v30[7] + 37 * Size;
      v74 = v32;
      v33 = v32;
      v30 += 8;
      v63 = v30;
      v31 -= 8LL;
      v77 = v31;
      Size = v32;
      v75 = v32;
      v34 = v32;
      v35 = v32;
      v36 = v32;
      v26 = v32;
    }
    if ( v31 >= 1 )
    {
      v37 = v33;
      v48 = v31 - 1;
      if ( !v48 )
        goto LABEL_66;
      v49 = v48 - 1;
      if ( !v49 )
        goto LABEL_65;
      v50 = v49 - 1;
      if ( !v50 )
        goto LABEL_64;
      v51 = v50 - 1;
      if ( !v51 )
        goto LABEL_63;
      v52 = v51 - 1;
      if ( !v52 )
      {
        v55 = v75;
        goto LABEL_62;
      }
      v53 = v52 - 1;
      if ( !v53 )
      {
        v54 = Size;
        goto LABEL_60;
      }
      if ( v53 == 1 )
      {
        v54 = 37 * v33 + *v30;
        Size = v54;
        v63 = ++v30;
LABEL_60:
        v55 = 37 * v54 + *v30;
        Size = v55;
        v63 = ++v30;
LABEL_62:
        v34 = *v30 + 37 * v55;
        Size = v34;
        v63 = ++v30;
LABEL_63:
        v35 = *v30 + 37 * v34;
        Size = v35;
        v63 = ++v30;
LABEL_64:
        v36 = *v30 + 37 * v35;
        Size = v36;
        v63 = ++v30;
LABEL_65:
        v26 = *v30 + 37 * v36;
        Size = v26;
        v63 = ++v30;
LABEL_66:
        v56 = *v30;
        v37 = v56 + 37 * v26;
        Size = v56 + 37 * v26;
        v63 = v30 + 1;
      }
    }
    v38 = *((_QWORD *)v27 + 1) + 8LL * (v37 & (v64 - 1));
    v70 = (_QWORD *)v38;
LABEL_29:
    if ( !v24 )
      goto LABEL_34;
    if ( (*(_QWORD *)v24 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
    {
      v25 = v73[3];
      v38 = (__int64)v70;
      v24 = v69;
      v28 = v68;
    }
    if ( v24 && (v24 = *(_QWORD *)v24, (v24 & 1) == 0) )
    {
LABEL_38:
      v69 = v24;
    }
    else
    {
LABEL_34:
      v39 = (__int64 *)(v38 + 8);
      v40 = *((_QWORD *)v28 + 1) + 8 * ((unsigned __int64)*((unsigned int *)v28 + 1) >> 5);
      while ( 1 )
      {
        v78 = v39;
        if ( (unsigned __int64)v39 >= v40 )
          break;
        v24 = *v39;
        if ( (*v39 & 1) == 0 )
        {
          v70 = v39;
          goto LABEL_38;
        }
        ++v39;
      }
      v24 = 0LL;
    }
    if ( !v24 )
      break;
    v41 = *(_QWORD *)(v24 + 16);
    *(_QWORD *)v25 = *(_QWORD *)(v24 + 32);
    *(_DWORD *)(v25 + 8) = *(_DWORD *)(v24 + 40);
    *(_DWORD *)(v25 + 12) = (unsigned __int16)*(_DWORD *)(v24 + 44);
    *(_DWORD *)(v25 + 64) = *(_DWORD *)(v24 + 504);
    *(_DWORD *)(v25 + 68) = *(_DWORD *)(v24 + 508);
    *(_OWORD *)(v25 + 72) = *(_OWORD *)(v24 + 480);
    *(_QWORD *)(v25 + 88) = *(_QWORD *)(v24 + 496);
    *(_DWORD *)(v25 + 20) = **(_DWORD **)(v41 + 32);
    *(_DWORD *)(v25 + 24) = *(_DWORD *)(*(_QWORD *)(v41 + 32) + 4LL);
    *(_DWORD *)(v25 + 40) = v72[5];
    *(_WORD *)(v25 + 52) = *(_WORD *)(v41 + 78);
    PopEtDataSectionCopyData(v72, *(_QWORD *)(v41 + 64), *(unsigned __int16 *)(v41 + 78));
    *(_WORD *)(v25 + 44) = *(_WORD *)(v41 + 72);
    *(_DWORD *)(v25 + 16) = v71[5];
    PopEtDataSectionCopyData(v71, *(_QWORD *)(v41 + 40), 2 * (unsigned int)*(unsigned __int16 *)(v41 + 72));
    *(_WORD *)(v25 + 46) = *(_WORD *)(v41 + 74);
    *(_DWORD *)(v25 + 28) = v71[5];
    PopEtDataSectionCopyData(v71, *(_QWORD *)(v41 + 48), 2 * (unsigned int)*(unsigned __int16 *)(v41 + 74));
    *(_WORD *)(v25 + 48) = *(_WORD *)(v41 + 76);
    *(_DWORD *)(v25 + 32) = v71[5];
    PopEtDataSectionCopyData(v71, *(_QWORD *)(v41 + 56), 2 * (unsigned int)*(unsigned __int16 *)(v41 + 76));
    v42 = *(_QWORD *)(v24 + 24);
    if ( v42 )
    {
      *(_WORD *)(v25 + 50) = (unsigned __int16)WORD1(*(_QWORD *)(v42 + 24)) >> 1;
      *(_DWORD *)(v25 + 36) = v71[5];
      PopEtDataSectionCopyData(v71, *(_QWORD *)(v24 + 24) + 32LL, 2 * (unsigned int)*(unsigned __int16 *)(v25 + 50));
    }
    else
    {
      *(_WORD *)(v25 + 50) = 0;
      *(_DWORD *)(v25 + 36) = v71[5];
    }
    *(_DWORD *)(v25 + 56) = v81[5];
    *(_DWORD *)(v25 + 60) = 432;
    PopEtDataSectionCopyData(v81, v24 + 48, v81[3]);
    if ( (unsigned int)(HIDWORD(v73[1]) + HIDWORD(v73[2])) <= LODWORD(v73[1]) )
    {
      HIDWORD(v73[2]) += HIDWORD(v73[1]);
      v25 += HIDWORD(v73[1]);
      v73[3] = v25;
    }
    v22 = (char *)Object;
  }
  v65 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v66 = KiQueryUnbiasedInterruptTime() / 0x2710uLL;
  v80 = MEMORY[0xFFFFF78000000014];
  v43 = Object;
  v44 = v65;
  v45 = v79;
  *(_DWORD *)(v79 + 16) = v65 - *((_DWORD *)Object + 148);
  *(_DWORD *)(v45 + 20) = v66 - v43[149];
  *(_DWORD *)(v45 + 28) = v44;
  TimelineBitmapTime = KeQueryTimelineBitmapTime();
  *(_DWORD *)(v47 + 32) = TimelineBitmapTime;
  *(_QWORD *)(v47 + 64) = v80;
  for ( j = 0LL; ; *(_DWORD *)(j + 484) &= ~0x80000000 )
  {
    if ( j )
    {
      v58 = *(_QWORD *)(j + 8) & (-1LL << (v43[17] & 0x1F));
      v59 = (__int64 *)(*((_QWORD *)v43 + 9)
                      + 8
                      * ((HIBYTE(v58)
                        + 37
                        * (BYTE6(v58)
                         + 37
                         * (BYTE5(v58)
                          + 37
                          * (BYTE4(v58)
                           + 37
                           * (((*(_DWORD *)(j + 8) & (unsigned int)(-1 << (v43[17] & 0x1F))) >> 24)
                            + 37
                            * ((unsigned __int8)((*(_DWORD *)(j + 8) & (unsigned int)(-1 << (v43[17] & 0x1F))) >> 16)
                             + 37
                             * (37 * ((unsigned __int8)v58 + 11623883)
                              + (unsigned __int8)((unsigned __int16)(*(_WORD *)(j + 8) & (-1 << (v43[17] & 0x1F))) >> 8)))))))) & ((v43[17] >> 5) - 1)));
    }
    else
    {
      j = *((_QWORD *)v43 + 9);
      v59 = (__int64 *)j;
    }
    if ( !j || (j = *(_QWORD *)j, (j & 1) != 0) )
    {
      for ( ++v59; (unsigned __int64)v59 < *((_QWORD *)v43 + 9) + 8 * ((unsigned __int64)(unsigned int)v43[17] >> 5); ++v59 )
      {
        j = *v59;
        if ( (*v59 & 1) == 0 )
          goto LABEL_74;
      }
      j = 0LL;
    }
LABEL_74:
    if ( !j )
      break;
  }
  v5 = (char *)Object;
  PopEtEnergyTrackerCleanupAggregates(Object, v59);
  ++*((_DWORD *)v5 + 150);
  v43[148] = v65;
  v43[149] = v66;
  *(_QWORD *)(v5 + 604) = 0LL;
  *(_QWORD *)(v5 + 612) = 0LL;
  *(__m128i *)(v5 + 620) = v67;
  v7 = 0;
LABEL_78:
  v6 = 1;
LABEL_79:
  if ( v6 )
    PopReleaseRwLock((ULONG_PTR)(v5 + 16));
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x74456F50u);
  return (unsigned int)v7;
}
