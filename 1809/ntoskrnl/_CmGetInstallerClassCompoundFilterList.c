/*
 * XREFs of _CmGetInstallerClassCompoundFilterList @ 0x1408FF2F8
 * Callers:
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x1408FF528 (_CmGetInstallerClassCompoundFiltersWorker.c)
 * Callees:
 *     _wcsicmp @ 0x140195A70 (_wcsicmp.c)
 *     _CmAppendInstallerClassFiltersLevel @ 0x1408FDC88 (_CmAppendInstallerClassFiltersLevel.c)
 *     _PnpMultiSzAppend @ 0x14090154C (_PnpMultiSzAppend.c)
 */

__int64 __fastcall CmGetInstallerClassCompoundFilterList(
        __int64 a1,
        __int64 a2,
        const wchar_t *a3,
        const wchar_t *a4,
        __int64 a5,
        wchar_t *a6,
        unsigned int a7,
        _DWORD *a8)
{
  const wchar_t *v8; // r15
  __int64 v9; // rax
  wchar_t *v10; // rbx
  int v11; // edi
  int v12; // r14d
  int v13; // esi
  int appended; // eax
  int v15; // ecx
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  int v18; // eax
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  unsigned int v22; // [rsp+30h] [rbp-10h] BYREF
  wchar_t *v23; // [rsp+38h] [rbp-8h]
  __int64 v24; // [rsp+80h] [rbp+40h]

  v24 = a1;
  v8 = a3;
  v9 = a2;
  v22 = 0;
  v10 = 0LL;
  v23 = 0LL;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  if ( a6 )
  {
    if ( a7 < 2 )
      return (unsigned int)-1073741811;
    v13 = a7;
    v10 = a6;
    v23 = a6;
    *a6 = 0;
  }
  if ( !*a3 )
    goto LABEL_37;
  while ( 1 )
  {
    appended = CmAppendInstallerClassFiltersLevel(a1, v9, (__int64)v8, v10, v13, &v22);
    v15 = appended;
    if ( appended == -1073741789 )
    {
      v10 = 0LL;
      v11 = -1073741789;
      v23 = 0LL;
      goto LABEL_10;
    }
    if ( (int)(appended + 0x80000000) >= 0 && appended != -1073741772 )
      break;
LABEL_10:
    v16 = v22;
    if ( v22 > 2 )
    {
      v16 = v22 - 2;
      v22 -= 2;
    }
    v12 += v16;
    if ( v10 )
    {
      v13 -= v16;
      v10 += v16 >> 1;
      v23 = v10;
    }
    if ( !wcsicmp(v8, a4) )
    {
      if ( a6 )
      {
        v22 = v13;
        if ( (unsigned __int8)PnpMultiSzAppend(v10) )
        {
          v10 = v23;
        }
        else
        {
          v10 = 0LL;
          v11 = -1073741789;
          v23 = 0LL;
        }
        if ( v10 && v22 > 2 )
          v13 += 2 - v22;
      }
      v17 = -1LL;
      do
        ++v17;
      while ( *(_WORD *)(a5 + 2 * v17) );
      v12 += 2 * v17;
      v18 = CmAppendInstallerClassFiltersLevel(v24, a2, a5, v10, v13, &v22);
      v15 = v18;
      if ( v18 == -1073741789 )
      {
        v11 = -1073741789;
        v10 = 0LL;
        v23 = 0LL;
      }
      else if ( (int)(v18 + 0x80000000) >= 0 && v18 != -1073741772 )
      {
        break;
      }
      v19 = v22;
      if ( v22 > 2 )
      {
        v19 = v22 - 2;
        v22 -= 2;
      }
      v12 += v19;
      if ( v10 )
      {
        v13 -= v19;
        v10 += v19 >> 1;
        v23 = v10;
      }
    }
    v20 = -1LL;
    do
      ++v20;
    while ( v8[v20] );
    v8 += v20 + 1;
    if ( !*v8 )
      goto LABEL_37;
    v9 = a2;
    a1 = v24;
  }
  v11 = v15;
LABEL_37:
  *a8 = v12 + 2;
  if ( v11 >= 0 && v12 + 2 > a7 )
    return (unsigned int)-1073741789;
  return (unsigned int)v11;
}
