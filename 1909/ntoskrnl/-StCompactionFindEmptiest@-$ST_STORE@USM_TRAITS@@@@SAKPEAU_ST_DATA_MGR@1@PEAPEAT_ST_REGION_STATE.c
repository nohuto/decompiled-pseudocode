/*
 * XREFs of ?StCompactionFindEmptiest@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE@1@KK@Z @ 0x140161C60
 * Callers:
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x14016167C (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     memmove @ 0x1401D7480 (memmove.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactionFindEmptiest(
        __int64 a1,
        char *a2,
        unsigned int a3,
        unsigned int a4)
{
  unsigned __int64 v6; // rcx
  char *v8; // rbp
  unsigned int v9; // r13d
  __int64 v10; // rdi
  unsigned __int16 *v11; // rsi
  unsigned __int16 v12; // ax
  __int64 v13; // rcx
  unsigned __int16 **v14; // r14
  _WORD **v15; // r9
  bool v16; // cf
  unsigned int v17; // eax
  __int16 v19; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v20; // [rsp+70h] [rbp+18h]

  v20 = a3;
  v6 = a3;
  v19 = 0x1FFF;
  v8 = &a2[8 * a3];
  if ( a2 > v8 )
    v6 = 0LL;
  if ( v6 )
    memset64(a2, (unsigned __int64)&v19, v6);
  v9 = 0;
  LODWORD(v10) = -1;
LABEL_6:
  while ( 1 )
  {
    v10 = (unsigned int)(v10 + 1);
    if ( (_DWORD)v10 == *(_DWORD *)(a1 + 788) )
      return v9;
    v11 = (unsigned __int16 *)(*(_QWORD *)(a1 + 1032) + 2 * v10);
    v12 = *v11;
    if ( (*v11 & 0x1FFF) != 0 && (v12 & 0x1FFFu) <= a4 )
    {
      v13 = 0LL;
      if ( !*(_BYTE *)(a1 + 776) )
        v13 = v12 >> 13;
      if ( (_DWORD)v10 != *(_DWORD *)(a1 + 16 * (v13 + 78)) )
      {
        v14 = (unsigned __int16 **)a2;
        if ( a2 < v8 )
        {
          while ( 1 )
          {
            v15 = v14 + 1;
            if ( (unsigned __int16)(*v11 & 0x1FFF) < (unsigned __int16)(**v14 & 0x1FFF) )
              break;
            ++v14;
            if ( v15 >= (_WORD **)v8 )
              goto LABEL_6;
          }
          memmove(v14 + 1, v14, v8 - (char *)v14 - 8);
          v16 = v9 < v20;
          v17 = v9 + 1;
          *v14 = v11;
          if ( !v16 )
            v17 = v9;
          v9 = v17;
          if ( v17 >= v20 )
            a4 = (**((_WORD **)v8 - 1) & 0x1FFF) - 1;
        }
      }
    }
  }
}
