/*
 * XREFs of PopEtEnergyTrackerQuery @ 0x1406C01EC
 * Callers:
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     KeQueryTimelineBitmapTime @ 0x14000E320 (KeQueryTimelineBitmapTime.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140082998 (KiQueryUnbiasedInterruptTime.c)
 *     PopAcquireRwLockExclusive @ 0x1400ED3F0 (PopAcquireRwLockExclusive.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FA4A0 (ObpReferenceObjectByHandleWithTag.c)
 *     PsEnumProcesses @ 0x140635888 (PsEnumProcesses.c)
 *     PopEtDataSectionCopyData @ 0x1406C0EAC (PopEtDataSectionCopyData.c)
 *     PopEtDataSectionReserve @ 0x1406C0EF8 (PopEtDataSectionReserve.c)
 *     PopEtDataSectionStart @ 0x1406C0F44 (PopEtDataSectionStart.c)
 *     PopEtEnergyTrackerCleanupAggregates @ 0x1406C0F64 (PopEtEnergyTrackerCleanupAggregates.c)
 */

__int64 __fastcall PopEtEnergyTrackerQuery(ULONG_PTR BugCheckParameter1, _DWORD *a2, unsigned int a3)
{
  char *v6; // rbx
  char v7; // r13
  int v8; // esi
  char *v9; // r11
  unsigned int v10; // esi
  unsigned int v11; // r15d
  _QWORD *v12; // r10
  unsigned int v13; // r9d
  __int64 v14; // rdx
  _QWORD **i; // rdx
  unsigned __int16 *v16; // rdx
  __int64 v17; // rax
  int v18; // esi
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  char *v22; // r12
  __m128i v23; // xmm0
  __int64 v24; // rsi
  __int64 v25; // r14
  unsigned int v26; // r15d
  char *v27; // r10
  int v28; // ebx
  unsigned __int8 *v29; // r8
  __int64 v30; // r9
  int v31; // edx
  int v32; // ecx
  __int64 v33; // rdx
  __int64 *v34; // rdx
  unsigned __int64 v35; // r8
  __int64 v36; // rbx
  __int64 v37; // rax
  _DWORD *v38; // rsi
  int v39; // ecx
  _DWORD *v40; // rdx
  int TimelineBitmapTime; // eax
  __int64 v42; // rdx
  int v43; // r9d
  int v44; // r9d
  int v45; // r9d
  int v46; // r9d
  int v47; // r9d
  int v48; // r9d
  __int64 j; // r10
  __int64 v50; // rdx
  __int64 *k; // rdx
  unsigned int v53; // [rsp+40h] [rbp-148h]
  size_t Size; // [rsp+48h] [rbp-140h] BYREF
  PVOID Object; // [rsp+50h] [rbp-138h] BYREF
  __int64 *v56; // [rsp+58h] [rbp-130h]
  int v57; // [rsp+60h] [rbp-128h]
  int v58; // [rsp+64h] [rbp-124h]
  __m128i v59; // [rsp+68h] [rbp-120h] BYREF
  char *v60; // [rsp+78h] [rbp-110h]
  __int64 v61; // [rsp+80h] [rbp-108h]
  _QWORD *v62; // [rsp+88h] [rbp-100h]
  _DWORD v63[8]; // [rsp+90h] [rbp-F8h] BYREF
  _QWORD v64[4]; // [rsp+B0h] [rbp-D8h] BYREF
  _DWORD v65[8]; // [rsp+D0h] [rbp-B8h] BYREF
  _DWORD v66[8]; // [rsp+F0h] [rbp-98h] BYREF
  __int64 v67; // [rsp+110h] [rbp-78h] BYREF
  __int64 v68; // [rsp+118h] [rbp-70h]
  __int64 *v69; // [rsp+120h] [rbp-68h]
  _DWORD *v70; // [rsp+128h] [rbp-60h]
  __int64 v71; // [rsp+130h] [rbp-58h]
  _QWORD v72[5]; // [rsp+138h] [rbp-50h] BYREF
  __int64 v73; // [rsp+1A8h] [rbp+20h]

  v6 = 0LL;
  Object = 0LL;
  memset(v66, 0, sizeof(v66));
  memset(v64, 0, sizeof(v64));
  v7 = 0;
  memset(v65, 0, sizeof(v65));
  memset(v72, 0, 0x20uLL);
  memset(v63, 0, sizeof(v63));
  if ( !PopEtGlobals )
  {
    v8 = -1073741637;
    goto LABEL_82;
  }
  v8 = ObpReferenceObjectByHandleWithTag(
         BugCheckParameter1,
         1,
         *(_QWORD *)(PopEtGlobals + 32),
         KeGetCurrentThread()->PreviousMode,
         0x74456F50u,
         &Object,
         0LL,
         0LL);
  v6 = (char *)Object;
  if ( v8 >= 0 )
  {
    *(_QWORD *)((char *)v72 + 4) = 0LL;
    HIDWORD(v72[1]) = 0;
    v72[3] = 0LL;
    LODWORD(v72[0]) = 2;
    v72[2] = Object;
    v8 = PsEnumProcesses((__int64 (__fastcall *)(__int64, __int64))PopEtProcessEnumSnapshotCallback, (__int64)v72);
    if ( v8 >= 0 )
    {
      PopAcquireRwLockExclusive((ULONG_PTR)(v6 + 16));
      v7 = 1;
      v9 = v6 + 48;
      v53 = *((_DWORD *)v6 + 12);
      v10 = 0;
      v11 = 44;
      v12 = 0LL;
      while ( 1 )
      {
        if ( v12 )
        {
          v13 = *((_DWORD *)v9 + 1);
          Size = v12[1] & (-1LL << (v13 & 0x1F));
          v14 = *((_QWORD *)v9 + 1)
              + 8LL
              * ((37
                * (BYTE6(Size)
                 + 37
                 * (BYTE5(Size)
                  + 37
                  * (BYTE4(Size)
                   + 37
                   * (BYTE3(Size) + 37 * (BYTE2(Size) + 37 * (BYTE1(Size) + 37 * ((unsigned __int8)Size + 11623883)))))))
                + HIBYTE(Size)) & ((v13 >> 5) - 1));
        }
        else
        {
          v12 = (_QWORD *)*((_QWORD *)v9 + 1);
          v14 = (__int64)v12;
        }
        if ( !v12 )
          goto LABEL_8;
        if ( (*v12 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
          v6 = (char *)Object;
        v12 = (_QWORD *)*v12;
        if ( ((unsigned __int8)v12 & 1) != 0 )
        {
LABEL_8:
          for ( i = (_QWORD **)(v14 + 8);
                (unsigned __int64)i < *((_QWORD *)v9 + 1) + 8 * ((unsigned __int64)*((unsigned int *)v9 + 1) >> 5);
                ++i )
          {
            v12 = *i;
            if ( ((unsigned __int8)*i & 1) == 0 )
              goto LABEL_13;
          }
          v12 = 0LL;
        }
LABEL_13:
        if ( !v12 )
          break;
        v16 = (unsigned __int16 *)v12[2];
        if ( v10 >= 0x10000000 )
        {
          v8 = -1073741619;
          goto LABEL_82;
        }
        v11 += v16[39];
        v10 += v16[37] + v16[38] + v16[36];
        v17 = v12[3];
        if ( v17 )
          v10 += ((unsigned int)(*(_QWORD *)(v17 + 24) >> 16) >> 1) & 0x1FFFFFFF;
      }
      LODWORD(Size) = 72;
      memset(v64, 0, sizeof(v64));
      HIDWORD(v64[1]) = 96;
      LODWORD(v64[2]) = 8;
      PopEtDataSectionReserve(v64, v53, &Size);
      memset(v66, 0, sizeof(v66));
      v66[3] = 432;
      v66[4] = 8;
      PopEtDataSectionReserve(v66, v53, &Size);
      memset(v65, 0, sizeof(v65));
      v65[3] = 1;
      v65[4] = 4;
      PopEtDataSectionReserve(v65, v11, &Size);
      memset(v63, 0, sizeof(v63));
      v63[3] = 2;
      v63[4] = 2;
      PopEtDataSectionReserve(v63, v10, &Size);
      v18 = Size;
      if ( (unsigned int)Size > a3 || (unsigned int)Size >= 0x7FFFFFFF )
      {
        if ( a3 >= 0xC )
        {
          *(_QWORD *)a2 = 0LL;
          *a2 = 2097170;
          a2[2] = v18;
        }
        v8 = -1073741789;
        goto LABEL_82;
      }
      memset(a2, 0, (unsigned int)Size);
      PopEtDataSectionStart(v64, a2);
      PopEtDataSectionStart(v66, v19);
      PopEtDataSectionStart(v65, v20);
      PopEtDataSectionStart(v63, v21);
      v70 = a2;
      *a2 = 2097170;
      a2[1] = 72;
      a2[2] = v18;
      a2[3] = *((_DWORD *)v6 + 150);
      a2[6] = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      a2[9] = v64[0];
      a2[10] = v53;
      a2[14] = 1048672;
      a2[13] = v65[5];
      *((_WORD *)a2 + 30) = 12;
      v22 = (char *)Object;
      PopEtDataSectionCopyData(v65, (char *)Object + 32, 12LL);
      a2[11] = v65[5];
      PopEtDataSectionCopyData(v65, v22 + 604, 16LL);
      v23 = *(__m128i *)(v22 + 620);
      v59 = v23;
      v59.m128i_i32[0] = *((_DWORD *)v22 + 151) + _mm_cvtsi128_si32(v23);
      v59.m128i_i32[1] = *((_DWORD *)v22 + 152) + v23.m128i_i32[1];
      v59.m128i_i32[2] = *((_DWORD *)v22 + 153) + v23.m128i_i32[2];
      v59.m128i_i32[3] = *((_DWORD *)v22 + 154) + v23.m128i_i32[3];
      a2[12] = v65[5];
      PopEtDataSectionCopyData(v65, &v59, 16LL);
      v24 = 0LL;
      v25 = v64[3];
      v26 = HIDWORD(v64[1]);
      while ( 1 )
      {
        v27 = v22 + 48;
        v60 = v22 + 48;
        if ( !v24 )
        {
          v33 = *((_QWORD *)v22 + 7);
          v62 = (_QWORD *)v33;
          v24 = v33;
          v61 = v33;
          goto LABEL_31;
        }
        v61 = v24;
        v28 = *((_DWORD *)v22 + 13) >> 5;
        v67 = *(_QWORD *)(v24 + 8) & (-1LL << (*((_DWORD *)v22 + 13) & 0x1F));
        v29 = (unsigned __int8 *)&v67;
        v56 = &v67;
        v30 = 8LL;
        v68 = 8LL;
        v31 = 314159;
        v32 = 314159;
        while ( v30 >= 8 )
        {
          v31 = v29[7]
              + 37
              * (v29[6]
               + 37 * (v29[5] + 37 * (v29[4] + 37 * (v29[3] + 37 * (v29[2] + 37 * (v29[1] + 37 * (*v29 + 37 * v31)))))));
          v32 = v31;
          v29 += 8;
          v56 = (__int64 *)v29;
          v30 -= 8LL;
          v68 = v30;
        }
        if ( v30 >= 1 )
        {
          v43 = v30 - 1;
          if ( !v43 )
            goto LABEL_66;
          v44 = v43 - 1;
          if ( !v44 )
            goto LABEL_65;
          v45 = v44 - 1;
          if ( !v45 )
            goto LABEL_64;
          v46 = v45 - 1;
          if ( !v46 )
            goto LABEL_63;
          v47 = v46 - 1;
          if ( !v47 )
            goto LABEL_62;
          v48 = v47 - 1;
          if ( !v48 )
            goto LABEL_61;
          if ( v48 == 1 )
            break;
        }
LABEL_30:
        v33 = *((_QWORD *)v22 + 7) + 8LL * (v31 & (unsigned int)(v28 - 1));
        v62 = (_QWORD *)v33;
LABEL_31:
        if ( !v24 )
          goto LABEL_32;
        if ( (*(_QWORD *)v24 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
        {
          v22 = (char *)Object;
          v25 = v64[3];
          v26 = HIDWORD(v64[1]);
          v33 = (__int64)v62;
          v24 = v61;
          v27 = v60;
        }
        if ( !v24 || (v24 = *(_QWORD *)v24, (v24 & 1) != 0) )
        {
LABEL_32:
          v34 = (__int64 *)(v33 + 8);
          v35 = *((_QWORD *)v27 + 1) + 8 * ((unsigned __int64)*((unsigned int *)v27 + 1) >> 5);
          while ( 1 )
          {
            v69 = v34;
            if ( (unsigned __int64)v34 >= v35 )
            {
              v24 = 0LL;
              goto LABEL_35;
            }
            v24 = *v34;
            if ( (*v34 & 1) == 0 )
              break;
            ++v34;
          }
          v62 = v34;
        }
        v61 = v24;
LABEL_35:
        if ( !v24 )
        {
          v57 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          v58 = KiQueryUnbiasedInterruptTime() / 0x2710uLL;
          v71 = MEMORY[0xFFFFF78000000014];
          v38 = Object;
          v39 = v57;
          v40 = v70;
          v70[4] = v57 - *((_DWORD *)Object + 148);
          v40[5] = v58 - v38[149];
          v40[7] = v39;
          TimelineBitmapTime = KeQueryTimelineBitmapTime();
          *(_DWORD *)(v42 + 32) = TimelineBitmapTime;
          *(_QWORD *)(v42 + 64) = v71;
          for ( j = 0LL; ; *(_DWORD *)(j + 484) &= ~0x80000000 )
          {
            if ( j )
            {
              v73 = *(_QWORD *)(j + 8) & (-1LL << (v38[17] & 0x1F));
              v50 = *((_QWORD *)v38 + 9)
                  + 8LL
                  * ((37
                    * (BYTE6(v73)
                     + 37
                     * (BYTE5(v73)
                      + 37
                      * (BYTE4(v73)
                       + 37
                       * (BYTE3(v73) + 37 * (BYTE2(v73) + 37 * (BYTE1(v73) + 37 * ((unsigned __int8)v73 + 11623883)))))))
                    + HIBYTE(v73)) & (unsigned int)((v38[17] >> 5) - 1));
            }
            else
            {
              j = *((_QWORD *)v38 + 9);
              v50 = j;
            }
            if ( !j || (j = *(_QWORD *)j, (j & 1) != 0) )
            {
              for ( k = (__int64 *)(v50 + 8);
                    (unsigned __int64)k < *((_QWORD *)v38 + 9) + 8 * ((unsigned __int64)(unsigned int)v38[17] >> 5);
                    ++k )
              {
                j = *k;
                if ( (*k & 1) == 0 )
                  goto LABEL_75;
              }
              j = 0LL;
            }
LABEL_75:
            if ( !j )
              break;
          }
          v6 = (char *)Object;
          PopEtEnergyTrackerCleanupAggregates(Object);
          ++*((_DWORD *)v6 + 150);
          v38[148] = v57;
          v38[149] = v58;
          *(_QWORD *)(v6 + 604) = 0LL;
          *(_QWORD *)(v6 + 612) = 0LL;
          *(__m128i *)(v6 + 620) = v59;
          v8 = 0;
          goto LABEL_82;
        }
        v36 = *(_QWORD *)(v24 + 16);
        *(_QWORD *)v25 = *(_QWORD *)(v24 + 32);
        *(_DWORD *)(v25 + 8) = *(_DWORD *)(v24 + 40);
        *(_DWORD *)(v25 + 12) = (unsigned __int16)*(_DWORD *)(v24 + 44);
        *(_DWORD *)(v25 + 64) = *(_DWORD *)(v24 + 504);
        *(_DWORD *)(v25 + 68) = *(_DWORD *)(v24 + 508);
        *(_OWORD *)(v25 + 72) = *(_OWORD *)(v24 + 480);
        *(_QWORD *)(v25 + 88) = *(_QWORD *)(v24 + 496);
        *(_DWORD *)(v25 + 20) = **(_DWORD **)(v36 + 32);
        *(_DWORD *)(v25 + 24) = *(_DWORD *)(*(_QWORD *)(v36 + 32) + 4LL);
        *(_DWORD *)(v25 + 40) = v65[5];
        *(_WORD *)(v25 + 52) = *(_WORD *)(v36 + 78);
        PopEtDataSectionCopyData(v65, *(_QWORD *)(v36 + 64), *(unsigned __int16 *)(v36 + 78));
        *(_WORD *)(v25 + 44) = *(_WORD *)(v36 + 72);
        *(_DWORD *)(v25 + 16) = v63[5];
        PopEtDataSectionCopyData(v63, *(_QWORD *)(v36 + 40), 2 * (unsigned int)*(unsigned __int16 *)(v36 + 72));
        *(_WORD *)(v25 + 46) = *(_WORD *)(v36 + 74);
        *(_DWORD *)(v25 + 28) = v63[5];
        PopEtDataSectionCopyData(v63, *(_QWORD *)(v36 + 48), 2 * (unsigned int)*(unsigned __int16 *)(v36 + 74));
        *(_WORD *)(v25 + 48) = *(_WORD *)(v36 + 76);
        *(_DWORD *)(v25 + 32) = v63[5];
        PopEtDataSectionCopyData(v63, *(_QWORD *)(v36 + 56), 2 * (unsigned int)*(unsigned __int16 *)(v36 + 76));
        v37 = *(_QWORD *)(v24 + 24);
        if ( v37 )
        {
          *(_WORD *)(v25 + 50) = (unsigned __int16)WORD1(*(_QWORD *)(v37 + 24)) >> 1;
          *(_DWORD *)(v25 + 36) = v63[5];
          PopEtDataSectionCopyData(v63, *(_QWORD *)(v24 + 24) + 32LL, 2 * (unsigned int)*(unsigned __int16 *)(v25 + 50));
        }
        else
        {
          *(_WORD *)(v25 + 50) = 0;
          *(_DWORD *)(v25 + 36) = v63[5];
        }
        *(_DWORD *)(v25 + 56) = v66[5];
        *(_DWORD *)(v25 + 60) = 432;
        PopEtDataSectionCopyData(v66, v24 + 48, v66[3]);
        if ( v26 + HIDWORD(v64[2]) <= LODWORD(v64[1]) )
        {
          HIDWORD(v64[2]) += v26;
          v25 += v26;
          v64[3] = v25;
        }
      }
      v32 = *v29++ + 37 * v32;
      v56 = (__int64 *)v29;
LABEL_61:
      v32 = *v29++ + 37 * v32;
      v56 = (__int64 *)v29;
LABEL_62:
      v32 = *v29++ + 37 * v32;
      v56 = (__int64 *)v29;
LABEL_63:
      v32 = *v29++ + 37 * v32;
      v56 = (__int64 *)v29;
LABEL_64:
      v32 = *v29++ + 37 * v32;
      v56 = (__int64 *)v29;
LABEL_65:
      v32 = *v29++ + 37 * v32;
      v56 = (__int64 *)v29;
LABEL_66:
      v31 = *v29 + 37 * v32;
      v56 = (__int64 *)(v29 + 1);
      goto LABEL_30;
    }
  }
LABEL_82:
  if ( v7 )
    PopReleaseRwLock((ULONG_PTR)(v6 + 16));
  if ( v6 )
    ObfDereferenceObjectWithTag(v6, 0x74456F50u);
  return (unsigned int)v8;
}
