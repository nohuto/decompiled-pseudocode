/*
 * XREFs of ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x140145A30
 * Callers:
 *     ?StDmCombineBufferProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE_BUFFER@@@Z @ 0x140147208 (-StDmCombineBufferProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE.c)
 * Callees:
 *     ?SmStCheckResident@?$SMKM_STORE@USM_TRAITS@@@@SA?AW4_SMST_RESIDENT_CHECK_RESULT@1@PEAXK@Z @ 0x140145CBC (-SmStCheckResident@-$SMKM_STORE@USM_TRAITS@@@@SA-AW4_SMST_RESIDENT_CHECK_RESULT@1@PEAXK@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x140146008 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x1401477C8 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     SmFpAllocate @ 0x14014BB74 (SmFpAllocate.c)
 *     SmFpFree @ 0x14014CB3C (SmFpFree.c)
 *     memcmp @ 0x140196340 (memcmp.c)
 *     ?SmStUnhandledExceptionFilter@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAXPEAU_EXCEPTION_POINTERS@@W4_SMST_STORE_EXCEPTION_SOURCE@1@@Z @ 0x1403036B0 (-SmStUnhandledExceptionFilter@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAXPEAU_EXCEPTION_POINTERS@@W4_SMST.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStCompareRegionDataCallback(
        __int64 a1,
        unsigned __int16 *a2,
        unsigned int *a3,
        unsigned __int64 a4)
{
  unsigned __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 v8; // rcx
  unsigned __int64 v9; // r13
  unsigned int *v10; // r14
  unsigned int *v11; // rax
  unsigned __int64 v12; // rax
  unsigned int v13; // r14d
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // r8
  int v22; // [rsp+20h] [rbp-88h]
  void *Buf2; // [rsp+38h] [rbp-70h]
  void *Buf1; // [rsp+40h] [rbp-68h]
  unsigned __int64 v25; // [rsp+50h] [rbp-58h]
  unsigned int *v26; // [rsp+58h] [rbp-50h]
  unsigned int *v27; // [rsp+B0h] [rbp+8h]
  __int64 v28; // [rsp+B8h] [rbp+10h]

  v5 = 0LL;
  v6 = a1 - 6232;
  v7 = 0LL;
  if ( (_DWORD)a3 )
  {
    ExFreePoolWithTag(a2, 0);
    return 0LL;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 6580));
    v8 = *(unsigned int *)a2;
    if ( (*(_BYTE *)(v6 + 6021) & 4) != 0 )
    {
      v9 = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(v6, v8, 0, a4, 0);
      if ( v9 <= 3 )
      {
LABEL_35:
        v13 = -1073741670;
        goto LABEL_25;
      }
    }
    else
    {
      v9 = *(_QWORD *)((*(_QWORD *)(*(_QWORD *)(v6 + 6216) + 8 * v8) & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    }
    v10 = (unsigned int *)(a2 + 4);
    v11 = (unsigned int *)((char *)a2 + a2[3]);
    v26 = v11;
LABEL_5:
    if ( v10 < v11 )
    {
      Buf1 = (void *)(v9 + *v10);
      *((_BYTE *)v10 + 7) = 16;
      v12 = (unsigned __int64)&v10[2 * *((unsigned __int8 *)v10 + 6) + 2];
      v25 = v12;
      a3 = v10 + 2;
      while ( 1 )
      {
        v27 = a3;
        if ( (unsigned __int64)a3 >= v12 )
        {
LABEL_14:
          v10 += 2 * *((unsigned __int8 *)v10 + 6) + 2;
          v11 = v26;
          goto LABEL_5;
        }
        if ( v5 )
        {
          if ( (_DWORD)v7 == *a3 )
            goto LABEL_10;
          if ( v5 != v9 )
          {
            if ( (*(_BYTE *)(v6 + 6021) & 4) != 0 )
            {
              SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v6, v7, (_DWORD)a3, a4, v22, 0);
LABEL_18:
              a3 = v27;
              goto LABEL_19;
            }
            v15 = *(_QWORD *)(v6 + 6216);
            a4 = *(_QWORD *)(v15 + 8 * v7) & 0xFFFFFFFFFFFFFFF8uLL;
            v16 = *(_QWORD *)(v15 + 8 * v7) & 0xFFFFFFFFFFFFFFFEuLL;
            *(_QWORD *)(v15 + 8 * v7) = v16;
            if ( (v16 & 3) == 0 )
            {
              SmFpFree(v6 + 6592, 5LL, KeGetCurrentThread(), a4);
              goto LABEL_18;
            }
          }
        }
LABEL_19:
        v7 = *a3;
        if ( (_DWORD)v7 == *(_DWORD *)a2 )
        {
          v5 = v9;
          goto LABEL_10;
        }
        if ( (*(_BYTE *)(v6 + 6021) & 4) != 0 )
        {
          v5 = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(v6, v7, 0, a4, 0);
        }
        else
        {
          v17 = *a3;
          v18 = *(_QWORD *)(v6 + 6216);
          v28 = v18;
          if ( (*(_QWORD *)(v18 + 8 * v7) & 3) != 0 )
          {
            v5 = *(_QWORD *)((*(_QWORD *)(v18 + 8 * v7) & 0xFFFFFFFFFFFFFFF8uLL) + 24);
            goto LABEL_43;
          }
          v5 = SmFpAllocate((PEX_SPIN_LOCK)(v6 + 6592), 0);
          if ( v5 )
          {
            v17 = v7;
            v18 = v28;
LABEL_43:
            *(_QWORD *)(v18 + 8 * v17) |= 1uLL;
          }
        }
        if ( v5 <= 3 )
          goto LABEL_35;
        a3 = v27;
LABEL_10:
        Buf2 = (void *)(v5 + a3[1]);
        if ( (unsigned int)SMKM_STORE<SM_TRAITS>::SmStCheckResident(Buf2, *((unsigned __int16 *)v10 + 2)) == 1 )
        {
          if ( !memcmp(Buf1, Buf2, *((unsigned __int16 *)v10 + 2)) )
            *((_BYTE *)v10 + 7) = ((char *)v27 - (char *)(v10 + 2)) >> 3;
          if ( *((_BYTE *)v10 + 7) != 16 )
            goto LABEL_14;
        }
        a3 = v27 + 2;
        v12 = v25;
      }
    }
    v13 = 0;
LABEL_25:
    if ( (*(_BYTE *)(v6 + 6021) & 4) != 0 && v9 > 3 )
      SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v6, *(_DWORD *)a2, (_DWORD)a3, a4, v22, 0);
    if ( v5 != v9 && v5 > 3 )
    {
      if ( (*(_BYTE *)(v6 + 6021) & 4) != 0 )
      {
        SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v6, v7, (_DWORD)a3, a4, v22, 0);
      }
      else
      {
        v19 = *(_QWORD *)(v6 + 6216);
        v20 = *(_QWORD *)(v19 + 8LL * (unsigned int)v7) & 0xFFFFFFFFFFFFFFF8uLL;
        v21 = *(_QWORD *)(v19 + 8LL * (unsigned int)v7) & 0xFFFFFFFFFFFFFFFEuLL;
        *(_QWORD *)(v19 + 8LL * (unsigned int)v7) = v21;
        if ( (v21 & 3) == 0 )
          SmFpFree(v6 + 6592, 5LL, KeGetCurrentThread(), v20);
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)(v6 + 6580));
    return v13;
  }
}
