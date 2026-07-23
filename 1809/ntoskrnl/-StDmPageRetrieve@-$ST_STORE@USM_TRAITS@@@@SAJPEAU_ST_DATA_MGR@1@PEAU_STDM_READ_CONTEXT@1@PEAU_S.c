/*
 * XREFs of ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14014748C
 * Callers:
 *     ?SmStDirectReadIssue@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAX@Z @ 0x1401465E0 (-SmStDirectReadIssue@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1401489BC (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     MmAreMdlPagesCached @ 0x140140010 (MmAreMdlPagesCached.c)
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x14014759C (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14030453C (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmPageRetrieve(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  int v5; // r14d
  bool v7; // zf
  unsigned int v8; // r12d
  __int64 v9; // xmm1_8
  _BYTE *v10; // rsi
  int i; // eax
  _BYTE *v12; // rcx
  unsigned __int8 v13; // cl
  unsigned int v14; // eax
  unsigned int v15; // edi
  __int64 *v16; // r8
  __int64 *v18; // rdx
  __int64 v19; // rax
  __int64 *v20; // [rsp+30h] [rbp-40h] BYREF
  __int64 *v21; // [rsp+38h] [rbp-38h]
  __int128 v22; // [rsp+40h] [rbp-30h] BYREF
  __int64 v23; // [rsp+50h] [rbp-20h]
  _BYTE v24[16]; // [rsp+58h] [rbp-18h] BYREF

  v20 = 0LL;
  v21 = (__int64 *)&v20;
  v4 = *(_DWORD *)(a3 + 8);
  v5 = a2;
  *(_BYTE *)(a3 + 8) = 0;
  v7 = *(_QWORD *)(a2 + 48) == 0LL;
  v8 = (unsigned __int8)v4;
  v9 = *(_QWORD *)(a3 + 24);
  v22 = *(_OWORD *)(a3 + 8);
  v23 = v9;
  if ( !v7 && !(unsigned int)MmAreMdlPagesCached(*(_DWORD **)(a3 + 16)) )
    *(_DWORD *)(a3 + 8) |= 0x8000000u;
  v10 = v24;
  for ( i = ST_STORE<SM_TRAITS>::StDmpSinglePageRetrieve(a1, v5, (unsigned int)&v22, a3, (__int64)v24);
        ;
        i = ST_STORE<SM_TRAITS>::StDmpSinglePageRetrieve(a1, v5, (unsigned int)&v22, a3, (__int64)v10) )
  {
    v15 = i;
    if ( i < 0 )
    {
      v13 = v22;
      goto LABEL_12;
    }
    v12 = v10 + 16;
    if ( i != 259 )
      v12 = v10;
    v10 = v12;
    v13 = v22 + 1;
    v14 = (unsigned __int8)(v22 + 1);
    LODWORD(v22) = (unsigned __int8)(v22 ^ (v22 + 1)) ^ (unsigned int)v22;
    if ( v14 >= v8 )
      break;
    LODWORD(v23) = v23 + 1;
  }
  v15 = 0;
LABEL_12:
  if ( *(_BYTE *)(a3 + 8) != v13 )
    *(_BYTE *)(a3 + 8) = v22;
  v16 = v21;
  if ( v21 != (__int64 *)&v20 )
  {
    while ( v16 != (__int64 *)&v20 )
    {
      v18 = v20;
      v20 = (__int64 *)(*v20 & 0xFFFFFFFFFFFFFFF8uLL);
      if ( v18 == v16 )
      {
        v20 = 0LL;
        v21 = (__int64 *)&v20;
      }
      else
      {
        *v16 = *v16 & 7 | (8 * ((unsigned __int64)*v16 >> 3) - 8);
      }
      if ( (*((_DWORD *)v18 + 7) & 1) == 0 )
      {
        *((_DWORD *)v18 + 7) |= 1u;
        v19 = v18[2];
        if ( v19 )
          *(_DWORD *)(v19 + 4) = v15;
        else
          *((_DWORD *)v18 + 2) = v15;
      }
      ST_STORE<SM_TRAITS>::StDmDeviceIoCompletion(a1);
      v16 = v21;
    }
    return 259;
  }
  return v15;
}
