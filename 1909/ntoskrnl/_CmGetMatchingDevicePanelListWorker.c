/*
 * XREFs of _CmGetMatchingDevicePanelListWorker @ 0x14076C4F8
 * Callers:
 *     _CmGetMatchingDevicePanelList @ 0x14076C20C (_CmGetMatchingDevicePanelList.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1405C3CAC (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x14076D7F4 (_PnpCtxRegEnumKeyWithCallback.c)
 */

__int64 __fastcall CmGetMatchingDevicePanelListWorker(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _WORD *a4,
        unsigned int a5,
        unsigned int *a6,
        int a7)
{
  int CachedContextBaseKey; // ebx
  _DWORD *PoolWithTag; // rax
  _DWORD *v13; // rdi
  __int64 v14; // rdx
  unsigned int v15; // eax
  unsigned int v16; // eax
  __int64 v18[7]; // [rsp+20h] [rbp-38h] BYREF

  v18[0] = 0LL;
  *a6 = 0;
  if ( a5 )
    *a4 = 0;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 11, (__int64)v18);
  if ( CachedContextBaseKey >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xA0uLL, 0x52504E50u);
    v13 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0xA0uLL);
      v14 = v18[0];
      v13[38] = a7;
      *v13 = 1;
      *((_QWORD *)v13 + 15) = a2;
      *((_QWORD *)v13 + 16) = a3;
      *((_QWORD *)v13 + 17) = a4;
      v13[36] = a5;
      CachedContextBaseKey = PnpCtxRegEnumKeyWithCallback(a1, v14, &CmDevicePanelEnumSubkeyCallback, v13);
      if ( CachedContextBaseKey >= 0 )
      {
        v15 = v13[37];
        *a6 = v15;
        if ( v15 )
        {
          v16 = v15 + 1;
          *a6 = v16;
          if ( a4 && a5 >= v16 )
            a4[v16 - 1] = 0;
          else
            CachedContextBaseKey = -1073741789;
        }
      }
      ExFreePoolWithTag(v13, 0);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)CachedContextBaseKey;
}
