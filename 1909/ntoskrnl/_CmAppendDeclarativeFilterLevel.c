/*
 * XREFs of _CmAppendDeclarativeFilterLevel @ 0x14093A1E0
 * Callers:
 *     _CmAppendDeclarativeDefaultFilters @ 0x14093A0FC (_CmAppendDeclarativeDefaultFilters.c)
 *     _CmGetDeclarativeFilterList @ 0x14093ADA4 (_CmGetDeclarativeFilterList.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     _PnpCtxRegOpenKey @ 0x1406295DC (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegCloseKey @ 0x1406F4868 (_PnpCtxRegCloseKey.c)
 *     _PnpCtxRegEnumValue @ 0x1406FB120 (_PnpCtxRegEnumValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1406FB170 (_PnpCtxRegQueryInfoKey.c)
 *     _PnpMultiSzAppend @ 0x14093E0E4 (_PnpMultiSzAppend.c)
 */

__int64 __fastcall CmAppendDeclarativeFilterLevel(__int64 a1, __int64 a2, __int64 a3, wchar_t *a4, int a5, _DWORD *a6)
{
  ULONG v6; // esi
  wchar_t *v7; // r12
  unsigned int v8; // ebx
  int v9; // r14d
  PVOID PoolWithTag; // rdi
  int v11; // r13d
  int InfoKey; // eax
  __int64 v13; // rcx
  int v14; // eax
  char v15; // al
  ULONG v17; // [rsp+40h] [rbp-20h] BYREF
  void *v18; // [rsp+48h] [rbp-18h] BYREF
  wchar_t *v19; // [rsp+50h] [rbp-10h]
  int v20; // [rsp+A8h] [rbp+48h] BYREF

  v6 = 0;
  v7 = a4;
  v19 = a4;
  v18 = 0LL;
  v8 = 0;
  v17 = 0;
  *a6 = 0;
  v9 = 0;
  v20 = 0;
  PoolWithTag = 0LL;
  v11 = 0;
  InfoKey = PnpCtxRegOpenKey(a1, a2, a3, 0, 0x80000000, (__int64)&v18);
  if ( InfoKey < 0
    || (InfoKey = PnpCtxRegQueryInfoKey(v13, v18, 0LL, 0LL, (__int64)&v17, (__int64)&v20, 0LL), InfoKey < 0) )
  {
    v8 = InfoKey;
  }
  else if ( !v7
         || (v11 = v20 + 1,
             (PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * (unsigned int)(v20 + 1), 0x52504E50u)) != 0LL) )
  {
    if ( v17 )
    {
      do
      {
        v20 = v11;
        v14 = PnpCtxRegEnumValue(v13, v18, v6, PoolWithTag, (__int64)&v20, 0LL, 0LL, 0);
        v13 = 3221225507LL;
        if ( v14 == -1073741789 )
        {
          v8 = -1073741789;
        }
        else if ( v14 < 0 )
        {
          v8 = v14;
          break;
        }
        v9 += v20;
        if ( v14 >= 0 )
        {
          if ( v7 )
          {
            v20 = a5;
            ++v9;
            v15 = PnpMultiSzAppend(v7);
            v7 = v19;
            if ( !v15 )
              v8 = -1073741789;
          }
        }
        ++v6;
      }
      while ( v6 < v17 );
    }
    v13 = (__int64)a6;
    *a6 = 2 * v9;
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
  else
  {
    v8 = -1073741801;
  }
  if ( v18 )
    PnpCtxRegCloseKey(v13, v18);
  return v8;
}
