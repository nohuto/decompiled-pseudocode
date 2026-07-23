/*
 * XREFs of _CmAppendInstallerClassFiltersLevel @ 0x1408FDC88
 * Callers:
 *     _CmGetInstallerClassCompoundFilterList @ 0x1408FF2F8 (_CmGetInstallerClassCompoundFilterList.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _SysCtxRegOpenKey @ 0x1405C8AFC (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegEnumValue @ 0x1406F6884 (_PnpCtxRegEnumValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1406F68D4 (_PnpCtxRegQueryInfoKey.c)
 *     _PnpMultiSzAppend @ 0x14090154C (_PnpMultiSzAppend.c)
 */

__int64 __fastcall CmAppendInstallerClassFiltersLevel(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        wchar_t *a4,
        int a5,
        _DWORD *a6)
{
  unsigned int v6; // esi
  wchar_t *v7; // r14
  int v8; // r12d
  PVOID PoolWithTag; // rdi
  int v10; // r13d
  __int64 v11; // rcx
  __int64 v12; // rcx
  int InfoKey; // ebx
  __int64 v14; // rcx
  int v15; // eax
  char v16; // al
  HANDLE Handle; // [rsp+40h] [rbp-10h] BYREF
  wchar_t *v19; // [rsp+48h] [rbp-8h]
  int v20; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v21; // [rsp+98h] [rbp+48h] BYREF

  v6 = 0;
  Handle = 0LL;
  v7 = a4;
  v19 = a4;
  v8 = 0;
  v21 = 0;
  PoolWithTag = 0LL;
  *a6 = 0;
  v10 = 0;
  v20 = 0;
  if ( a1 )
    v11 = *(_QWORD *)(a1 + 224);
  else
    v11 = 0LL;
  InfoKey = SysCtxRegOpenKey(v11, a2, a3, 0, 0x80000000, (__int64)&Handle);
  if ( InfoKey >= 0 )
  {
    InfoKey = PnpCtxRegQueryInfoKey(v12, (int)Handle, 0, 0, (__int64)&v21, (__int64)&v20, 0LL);
    if ( InfoKey >= 0 )
    {
      if ( !v7
        || (v10 = v20 + 1,
            (PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * (unsigned int)(v20 + 1), 0x52504E50u)) != 0LL) )
      {
        if ( v21 )
        {
          do
          {
            v20 = v10;
            v15 = PnpCtxRegEnumValue(v14, (__int64)Handle, v6, (__int64)PoolWithTag, (__int64)&v20, 0LL, 0LL, 0LL);
            v14 = (unsigned int)v15;
            if ( v15 == -1073741789 )
            {
              InfoKey = -1073741789;
            }
            else if ( v15 < 0 )
            {
              InfoKey = v15;
              break;
            }
            v8 += v20 + 1;
            if ( v15 >= 0 )
            {
              if ( v7 )
              {
                v20 = a5;
                v16 = PnpMultiSzAppend(v7);
                v7 = v19;
                if ( !v16 )
                  InfoKey = -1073741789;
              }
            }
            ++v6;
          }
          while ( v6 < v21 );
        }
        *a6 = 2 * v8 + 2;
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0);
      }
      else
      {
        InfoKey = -1073741801;
      }
    }
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)InfoKey;
}
