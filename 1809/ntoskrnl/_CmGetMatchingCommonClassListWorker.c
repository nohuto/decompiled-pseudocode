/*
 * XREFs of _CmGetMatchingCommonClassListWorker @ 0x14074B8D4
 * Callers:
 *     _CmGetMatchingCommonClassList @ 0x14074B7C0 (_CmGetMatchingCommonClassList.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1405C8C40 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x14074C4D4 (_PnpCtxRegEnumKeyWithCallback.c)
 */

__int64 __fastcall CmGetMatchingCommonClassListWorker(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        _WORD *a5,
        unsigned int a6,
        unsigned int *a7)
{
  _QWORD *v10; // rdi
  int v11; // edx
  int CachedContextBaseKey; // ebx
  _QWORD *PoolWithTag; // rax
  __int64 v14; // r13
  __int64 v15; // rdx
  unsigned int v16; // eax
  unsigned int v17; // eax
  _QWORD v19[7]; // [rsp+20h] [rbp-38h] BYREF

  v19[0] = 0LL;
  *a7 = 0;
  v10 = 0LL;
  if ( a6 )
    *a5 = 0;
  if ( a2 == 2 )
  {
    v11 = 7;
  }
  else
  {
    if ( a2 != 4 )
    {
      CachedContextBaseKey = -1073741811;
      goto LABEL_14;
    }
    v11 = 8;
  }
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, v11, (__int64)v19);
  if ( CachedContextBaseKey < 0 )
    return (unsigned int)CachedContextBaseKey;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x52504E50u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  memset(PoolWithTag, 0, 0x30uLL);
  v10[1] = 0LL;
  *((_DWORD *)v10 + 11) = 0;
  v10[3] = a4;
  v14 = v19[0];
  v15 = v19[0];
  *(_DWORD *)v10 = a2;
  v10[2] = a3;
  v10[4] = a5;
  *((_DWORD *)v10 + 10) = a6;
  CachedContextBaseKey = PnpCtxRegEnumKeyWithCallback(a1, v15, &CmClassSubkeyCallback, v10);
  if ( CachedContextBaseKey >= 0 )
  {
    if ( a2 != 4
      || !*(_BYTE *)(a1 + 4)
      || (v10[1] = v14,
          CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 9, (__int64)v19),
          CachedContextBaseKey >= 0)
      && (v19[0] == v10[1]
       || (CachedContextBaseKey = PnpCtxRegEnumKeyWithCallback(a1, v19[0], &CmClassSubkeyCallback, v10),
           CachedContextBaseKey >= 0)) )
    {
      v16 = *((_DWORD *)v10 + 11);
      *a7 = v16;
      if ( v16 )
      {
        v17 = v16 + 1;
        *a7 = v17;
        if ( a5 && a6 >= v17 )
          a5[v17 - 1] = 0;
        else
          CachedContextBaseKey = -1073741789;
      }
    }
  }
LABEL_14:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return (unsigned int)CachedContextBaseKey;
}
