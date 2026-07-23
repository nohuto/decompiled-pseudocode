/*
 * XREFs of ?StDmRegionEvict@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@Z @ 0x1403057D4
 * Callers:
 *     ?StDmRegionRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z @ 0x140305B50 (-StDmRegionRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z.c)
 * Callees:
 *     SmEtwEnabled @ 0x1400E3EA8 (SmEtwEnabled.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140147E6C (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     qsort @ 0x140196420 (qsort.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ?StDmRegionGetKeys@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKPEAT_SM_PAGE_KEY@@PEAK@Z @ 0x140305974 (-StDmRegionGetKeys@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKK.c)
 *     SmEtwLogRegionOp @ 0x140307058 (SmEtwLogRegionOp.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmRegionEvict(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  int v5; // ebx
  __int64 v6; // r13
  ULONGLONG *v8; // rax
  int v9; // r9d
  __int64 v10; // rcx
  char v11; // dl
  void *v12; // rsp
  int Keys; // r14d
  __int64 v14; // rbx
  int v15; // eax
  int *v16; // rbx
  int v17; // edx
  int *v18; // rdi
  int v19; // ecx
  _DWORD Base[240]; // [rsp+20h] [rbp-400h] BYREF
  size_t NumOfElements; // [rsp+420h] [rbp+0h] BYREF
  __int64 v23; // [rsp+428h] [rbp+8h]
  _DWORD v24[8]; // [rsp+430h] [rbp+10h] BYREF

  v5 = a2;
  v23 = a2;
  v6 = a3;
  memset(v24, 0, sizeof(v24));
  v24[4] |= 1u;
  v24[0] = 1;
  v8 = SmEtwEnabled(0);
  if ( v8 )
  {
    v10 = *(_QWORD *)(a1 + 1048);
    if ( v10 )
      v11 = *(_BYTE *)(v10 + v6);
    else
      v11 = 0;
    SmEtwLogRegionOp((_DWORD)v8, 3, a1, v6, 0, *(_WORD *)(*(_QWORD *)(a1 + 1032) + 2 * v6), v11);
  }
  v12 = alloca(1024LL);
  do
  {
    LODWORD(NumOfElements) = 256;
    Keys = ST_STORE<SM_TRAITS>::StDmRegionGetKeys(a1, v5, v6, v9, a5, (__int64)Base, (__int64)&NumOfElements);
    if ( Keys < 0 || !(_DWORD)NumOfElements )
      break;
    v14 = (unsigned int)NumOfElements;
    qsort(Base, (unsigned int)NumOfElements, 4uLL, ST_STORE<SM_TRAITS>::StpKeyCompare);
    v15 = Base[0];
    v16 = &Base[v14];
    v24[2] = Base[0];
    v17 = Base[0];
    v18 = Base;
    v19 = 0;
LABEL_10:
    if ( v15 != v17 )
      goto LABEL_13;
    while ( 1 )
    {
      ++v19;
      if ( ++v18 < v16 )
      {
        v17 = *v18;
        ++v15;
        goto LABEL_10;
      }
      if ( v18 != v16 )
        break;
LABEL_13:
      v24[3] = v19;
      Keys = ST_STORE<SM_TRAITS>::StDmPageRemove(a1, (__int64)v24);
      if ( Keys < 0 )
        return (unsigned int)Keys;
      v15 = *v18;
      v19 = 0;
      v24[2] = *v18;
    }
    v5 = v23;
  }
  while ( (unsigned int)NumOfElements >= 0x100 );
  return (unsigned int)Keys;
}
