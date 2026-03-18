/*
 * XREFs of ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x140147980
 * Callers:
 *     ?StDmCombineBufferProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE_BUFFER@@@Z @ 0x14014E07C (-StDmCombineBufferProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14008BCE0 (CmSiFreeMemory.c)
 *     ?SmStCheckResident@?$SMKM_STORE@USM_TRAITS@@@@SA?AW4_SMST_RESIDENT_CHECK_RESULT@1@PEAXK@Z @ 0x140147C04 (-SmStCheckResident@-$SMKM_STORE@USM_TRAITS@@@@SA-AW4_SMST_RESIDENT_CHECK_RESULT@1@PEAXK@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x140147FDC (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x1401486CC (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     SmFpAllocate @ 0x140148B24 (SmFpAllocate.c)
 *     SmFpFree @ 0x140149E64 (SmFpFree.c)
 *     memcmp @ 0x1401A09F0 (memcmp.c)
 *     ?SmStUnhandledExceptionFilter@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAXPEAU_EXCEPTION_POINTERS@@W4_SMST_STORE_EXCEPTION_SOURCE@1@@Z @ 0x140320F4C (-SmStUnhandledExceptionFilter@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAXPEAU_EXCEPTION_POINTERS@@W4_SMST.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStCompareRegionDataCallback(
        __int64 a1,
        struct _PRIVILEGE_SET *a2,
        unsigned int *p_Attributes,
        unsigned __int64 a4)
{
  unsigned __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // r12
  unsigned __int64 v8; // r13
  LUID_AND_ATTRIBUTES *Privilege; // r14
  unsigned int *v10; // rax
  unsigned __int64 v11; // rax
  unsigned int v12; // r14d
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // r8
  int v21; // [rsp+20h] [rbp-88h]
  void *Buf2; // [rsp+38h] [rbp-70h]
  void *Buf1; // [rsp+40h] [rbp-68h]
  unsigned __int64 v24; // [rsp+50h] [rbp-58h]
  unsigned int *v25; // [rsp+58h] [rbp-50h]
  unsigned int *v26; // [rsp+B0h] [rbp+8h]
  __int64 v27; // [rsp+B8h] [rbp+10h]

  v5 = 0LL;
  v6 = a1 - 6232;
  v7 = 0LL;
  if ( (_DWORD)p_Attributes )
  {
    CmSiFreeMemory(a2);
    return 0LL;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 6580));
    if ( (*(_BYTE *)(v6 + 6021) & 4) != 0 )
    {
      v8 = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion((int)a1 - 6232, a2->PrivilegeCount, 0, a4, 0);
      if ( v8 <= 3 )
      {
LABEL_35:
        v12 = -1073741670;
        goto LABEL_25;
      }
    }
    else
    {
      v8 = *(_QWORD *)((*(_QWORD *)(*(_QWORD *)(v6 + 6216) + 8LL * a2->PrivilegeCount) & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    }
    Privilege = a2->Privilege;
    v10 = (ULONG *)((char *)&a2->PrivilegeCount + HIWORD(a2->Control));
    v25 = v10;
LABEL_5:
    if ( Privilege < (LUID_AND_ATTRIBUTES *)v10 )
    {
      Buf1 = (void *)(v8 + Privilege->Luid.LowPart);
      HIBYTE(Privilege->Luid.HighPart) = 16;
      v11 = (unsigned __int64)(&Privilege->Attributes + 2 * BYTE2(Privilege->Luid.HighPart));
      v24 = v11;
      p_Attributes = &Privilege->Attributes;
      while ( 1 )
      {
        v26 = p_Attributes;
        if ( (unsigned __int64)p_Attributes >= v11 )
        {
LABEL_14:
          Privilege = (LUID_AND_ATTRIBUTES *)((char *)Privilege + 8 * BYTE2(Privilege->Luid.HighPart) + 8);
          v10 = v25;
          goto LABEL_5;
        }
        if ( v5 )
        {
          if ( (_DWORD)v7 == *p_Attributes )
            goto LABEL_10;
          if ( v5 != v8 )
          {
            if ( (*(_BYTE *)(v6 + 6021) & 4) != 0 )
            {
              SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v6, v7, (_DWORD)p_Attributes, a4, v21, 0);
LABEL_18:
              p_Attributes = v26;
              goto LABEL_19;
            }
            v14 = *(_QWORD *)(v6 + 6216);
            a4 = *(_QWORD *)(v14 + 8 * v7) & 0xFFFFFFFFFFFFFFF8uLL;
            v15 = *(_QWORD *)(v14 + 8 * v7) & 0xFFFFFFFFFFFFFFFEuLL;
            *(_QWORD *)(v14 + 8 * v7) = v15;
            if ( (v15 & 3) == 0 )
            {
              SmFpFree(v6 + 6592, 5LL, KeGetCurrentThread(), a4);
              goto LABEL_18;
            }
          }
        }
LABEL_19:
        v7 = *p_Attributes;
        if ( (_DWORD)v7 == a2->PrivilegeCount )
        {
          v5 = v8;
          goto LABEL_10;
        }
        if ( (*(_BYTE *)(v6 + 6021) & 4) != 0 )
        {
          v5 = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(v6, v7, 0, a4, 0);
        }
        else
        {
          v16 = *p_Attributes;
          v17 = *(_QWORD *)(v6 + 6216);
          v27 = v17;
          if ( (*(_QWORD *)(v17 + 8 * v7) & 3) != 0 )
          {
            v5 = *(_QWORD *)((*(_QWORD *)(v17 + 8 * v7) & 0xFFFFFFFFFFFFFFF8uLL) + 24);
            goto LABEL_43;
          }
          v5 = SmFpAllocate((PEX_SPIN_LOCK)(v6 + 6592), 0);
          if ( v5 )
          {
            v16 = v7;
            v17 = v27;
LABEL_43:
            *(_QWORD *)(v17 + 8 * v16) |= 1uLL;
          }
        }
        if ( v5 <= 3 )
          goto LABEL_35;
        p_Attributes = v26;
LABEL_10:
        Buf2 = (void *)(v5 + p_Attributes[1]);
        if ( (unsigned int)SMKM_STORE<SM_TRAITS>::SmStCheckResident(Buf2, LOWORD(Privilege->Luid.HighPart)) == 1 )
        {
          if ( !memcmp(Buf1, Buf2, LOWORD(Privilege->Luid.HighPart)) )
            HIBYTE(Privilege->Luid.HighPart) = ((char *)v26 - (char *)&Privilege->Attributes) >> 3;
          if ( HIBYTE(Privilege->Luid.HighPart) != 16 )
            goto LABEL_14;
        }
        p_Attributes = v26 + 2;
        v11 = v24;
      }
    }
    v12 = 0;
LABEL_25:
    if ( (*(_BYTE *)(v6 + 6021) & 4) != 0 && v8 > 3 )
      SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v6, a2->PrivilegeCount, (_DWORD)p_Attributes, a4, v21, 0);
    if ( v5 != v8 && v5 > 3 )
    {
      if ( (*(_BYTE *)(v6 + 6021) & 4) != 0 )
      {
        SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v6, v7, (_DWORD)p_Attributes, a4, v21, 0);
      }
      else
      {
        v18 = *(_QWORD *)(v6 + 6216);
        v19 = *(_QWORD *)(v18 + 8LL * (unsigned int)v7) & 0xFFFFFFFFFFFFFFF8uLL;
        v20 = *(_QWORD *)(v18 + 8LL * (unsigned int)v7) & 0xFFFFFFFFFFFFFFFEuLL;
        *(_QWORD *)(v18 + 8LL * (unsigned int)v7) = v20;
        if ( (v20 & 3) == 0 )
          SmFpFree(v6 + 6592, 5LL, KeGetCurrentThread(), v19);
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)(v6 + 6580));
    return v12;
  }
}
