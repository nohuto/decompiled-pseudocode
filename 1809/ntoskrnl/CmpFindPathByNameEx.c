/*
 * XREFs of CmpFindPathByNameEx @ 0x140581574
 * Callers:
 *     CmpVEExecuteOpenLogic @ 0x14063D020 (CmpVEExecuteOpenLogic.c)
 *     CmpFindPathByName @ 0x1407F40A4 (CmpFindPathByName.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x1407F4DB0 (CmpVEExecuteVirtualStoreParseLogic.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x14073E2EC (CmpFindSubKeyByNameWithStatus.c)
 */

char __fastcall CmpFindPathByNameEx(__int64 a1, __m128i *a2, UNICODE_STRING *a3, int a4, unsigned int *a5, _QWORD *a6)
{
  unsigned int *v6; // r13
  unsigned __int16 v8; // r14
  _QWORD *v11; // rcx
  __m128i v12; // xmm0
  unsigned __int16 v13; // bx
  __int16 v15; // si
  __int64 (__fastcall **v16)(PVOID, _QWORD, int *); // r15
  unsigned int v17; // ecx
  wchar_t *v18; // rdi
  __int64 v19; // rdx
  __int64 (__fastcall **v20)(PVOID, _QWORD, int *); // rcx
  _QWORD *v21; // rax
  unsigned __int64 v22; // rax
  UNICODE_STRING v23; // [rsp+20h] [rbp-20h]
  unsigned __int16 v24; // [rsp+30h] [rbp-10h] BYREF
  wchar_t *v25; // [rsp+38h] [rbp-8h]
  unsigned int v26; // [rsp+88h] [rbp+48h] BYREF
  int v27; // [rsp+90h] [rbp+50h] BYREF
  int v28; // [rsp+94h] [rbp+54h]
  int v29; // [rsp+98h] [rbp+58h]

  v29 = a4;
  v6 = a5;
  v8 = 0;
  v27 = -1;
  v28 = 0;
  *a5 = -1;
  v11 = a6;
  *a6 = 0LL;
  if ( a3 )
  {
    RtlInitUnicodeString(a3, 0LL);
    v11 = a6;
  }
  v12 = *a2;
  v13 = _mm_cvtsi128_si32(*a2);
  v23 = (UNICODE_STRING)v12;
  v23.Length = v13;
  if ( v13 )
  {
    v15 = v12.m128i_i16[1];
    if ( a1 )
    {
      v16 = *(__int64 (__fastcall ***)(PVOID, _QWORD, int *))(a1 + 24);
      *v11 = v16;
      v17 = *(_DWORD *)(a1 + 32);
      v18 = (wchar_t *)v12.m128i_i64[1];
      *v6 = v17;
    }
    else
    {
      v16 = (__int64 (__fastcall **)(PVOID, _QWORD, int *))CmpMasterHive;
      v18 = (wchar_t *)v12.m128i_i64[1];
      v17 = *(_DWORD *)(*((_QWORD *)CmpMasterHive + 8) + 36LL);
      do
      {
        if ( *v18 != 92 )
          break;
        v13 -= 2;
        ++v18;
        v15 -= 2;
        v23.Length = v13;
      }
      while ( v13 );
      v23.Buffer = v18;
      v23.MaximumLength = v15;
      if ( !v13 )
        goto LABEL_20;
      do
      {
        if ( *v18 == 92 )
          break;
        v13 -= 2;
        ++v18;
        v15 -= 2;
        v23.Length = v13;
      }
      while ( v13 );
      v23.Buffer = v18;
      v23.MaximumLength = v15;
    }
    while ( 1 )
    {
      if ( v13 )
      {
        do
        {
          if ( *v18 != 92 )
            break;
          v13 -= 2;
          ++v18;
          v15 -= 2;
          v23.Length = v13;
        }
        while ( v13 );
        v23.Buffer = v18;
        v23.MaximumLength = v15;
      }
LABEL_20:
      if ( a3 )
        *a3 = v23;
      if ( !v13 )
        break;
      v19 = v16[1](v16, v17, &v27);
      if ( !v19 )
        return 0;
      v25 = v18;
      v24 = 0;
      do
      {
        if ( v18[(unsigned __int64)v8 >> 1] == 92 )
          break;
        v8 += 2;
      }
      while ( v8 < v13 );
      v24 = v8;
      if ( (*(_BYTE *)(v19 + 2) & 2) != 0 )
      {
        v20 = v16;
        v16 = *(__int64 (__fastcall ***)(PVOID, _QWORD, int *))(v19 + 36);
        LODWORD(a5) = *(_DWORD *)(v19 + 28);
        ((__int64 (__fastcall **)(PVOID, int *, int *))v20)[2](v20, &v27, (int *)2);
        if ( v16 != CmpMasterHive && v29 && ((_DWORD)v16[519] & v29) == 0 )
          return 0;
        v19 = v16[1](v16, (unsigned int)a5, &v27);
        if ( !v19 )
          return 0;
      }
      CmpFindSubKeyByNameWithStatus(v16, v19, &v24, &v26);
      ((void (__fastcall *)(__int64 (__fastcall **)(PVOID, _QWORD, int *), int *))v16[2])(v16, &v27);
      v17 = v26;
      if ( v26 == -1 )
        return 0;
      v21 = a6;
      v15 -= v8;
      v13 -= v8;
      *v6 = v26;
      v23.MaximumLength = v15;
      v23.Length = v13;
      *v21 = v16;
      v22 = v8;
      v8 = 0;
      v18 += v22 >> 1;
      v23.Buffer = v18;
      if ( !v13 )
        return 1;
    }
    return 1;
  }
  if ( a1 )
  {
    *v11 = *(_QWORD *)(a1 + 24);
    *v6 = *(_DWORD *)(a1 + 32);
    return 1;
  }
  return 0;
}
