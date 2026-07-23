/*
 * XREFs of CmpAddSecurityCellToCache @ 0x1405AC584
 * Callers:
 *     CmpValidateHiveSecurityDescriptors @ 0x1405AC0AC (CmpValidateHiveSecurityDescriptors.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1405B8C5C (CmpSetSecurityDescriptorInfo.c)
 *     CmpInsertSecurityCellList @ 0x1406CB394 (CmpInsertSecurityCellList.c)
 * Callees:
 *     CmpFindSecurityCellCacheIndexNew @ 0x1401B3724 (CmpFindSecurityCellCacheIndexNew.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     CmpSecConvKey @ 0x1405AE0CC (CmpSecConvKey.c)
 */

__int64 CmpAddSecurityCellToCache(__int64 a1, unsigned int a2, char a3, ...)
{
  int v7; // eax
  const void *v8; // rbx
  unsigned int v9; // esi
  int v10; // ecx
  int v11; // ecx
  __int64 (__fastcall *v12)(_QWORD, _QWORD, __int64); // rax
  void *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rsi
  int v20; // ecx
  int v21; // eax
  __int64 v22; // r8
  __int64 *v23; // rax
  __int64 v24; // r8
  __int64 **v25; // rcx
  __int64 v26; // rbx
  unsigned int v27; // eax
  __int64 v28; // rcx
  _DWORD v29[10]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v30; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v30 = va_arg(va1, _QWORD);
  v29[0] = -1;
  v29[1] = 0;
  if ( CmpFindSecurityCellCacheIndexNew(a1, a2, (__int64 *)va) == 1 )
    return 0LL;
  v7 = *(_DWORD *)(a1 + 1868);
  if ( *(_DWORD *)(a1 + 1864) == v7 )
  {
    v8 = *(const void **)(a1 + 1880);
    v9 = 16 * v7;
    v10 = 256;
    if ( a3 != 1 )
      v10 = 16;
    v11 = v7 + v10;
    v12 = *(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(a1 + 24);
    *(_DWORD *)(a1 + 1868) = v11;
    v13 = (void *)v12((unsigned int)(16 * v11), 0LL, 1666403651LL);
    v14 = *(unsigned int *)(a1 + 1864);
    *(_QWORD *)(a1 + 1880) = v13;
    if ( !v13 )
    {
      *(_QWORD *)(a1 + 1880) = v8;
      *(_DWORD *)(a1 + 1868) = v14;
      return 3221225626LL;
    }
    memmove(v13, v8, 16 * v14);
    if ( v8 )
      (*(void (__fastcall **)(const void *, _QWORD))(a1 + 32))(v8, v9);
  }
  v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, a2, v29);
  v16 = v15;
  if ( v15 )
  {
    v17 = (unsigned int)(*(_DWORD *)(v15 + 16) + 32);
    if ( *(_DWORD *)(v15 + 16) < 0xFFFFFFE0 && (_DWORD)v17 != 32 )
    {
      v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a1 + 24))(v17, 0LL, 1666403651LL);
      v19 = v18;
      if ( v18 )
      {
        memmove((void *)(v18 + 32), (const void *)(v16 + 20), *(unsigned int *)(v16 + 16));
        *(_DWORD *)v19 = a2;
        v20 = *(_DWORD *)(v16 + 16);
        *(_DWORD *)(v19 + 28) = 0;
        *(_DWORD *)(v19 + 24) = v20;
        v21 = CmpSecConvKey(*(unsigned int *)(v16 + 16), v16 + 20);
        *(_DWORD *)(v19 + 4) = v21;
        v22 = v21 & 0x3F;
        v23 = (__int64 *)(v19 + 8);
        v24 = a1 + 16 * (v22 + 118);
        v25 = *(__int64 ***)(v24 + 8);
        if ( *v25 != (__int64 *)v24 )
          __fastfail(3u);
        v26 = (unsigned int)v30;
        *v23 = v24;
        *(_QWORD *)(v19 + 16) = v25;
        *v25 = v23;
        *(_QWORD *)(v24 + 8) = v23;
        v27 = *(_DWORD *)(a1 + 1864);
        if ( (unsigned int)v26 < v27 )
          memmove(
            (void *)(*(_QWORD *)(a1 + 1880) + 16LL * (unsigned int)(v26 + 1)),
            (const void *)(*(_QWORD *)(a1 + 1880) + 16LL * (unsigned int)v26),
            16LL * (v27 - (unsigned int)v26));
        v28 = 2 * v26;
        *(_DWORD *)(*(_QWORD *)(a1 + 1880) + 8 * v28) = a2;
        *(_QWORD *)(*(_QWORD *)(a1 + 1880) + 8 * v28 + 8) = v19;
        ++*(_DWORD *)(a1 + 1864);
        (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v29);
        return 0LL;
      }
    }
    (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v29);
  }
  return 3221225626LL;
}
