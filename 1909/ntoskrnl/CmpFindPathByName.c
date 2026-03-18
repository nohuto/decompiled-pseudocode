/*
 * XREFs of CmpFindPathByName @ 0x1406F67EC
 * Callers:
 *     CmpVEExecuteOpenLogic @ 0x1406B5BF0 (CmpVEExecuteOpenLogic.c)
 *     CmpVirtualBranchIsReplicated @ 0x1406F63B4 (CmpVirtualBranchIsReplicated.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1406F65CC (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x14082CB78 (CmpVEExecuteVirtualStoreParseLogic.c)
 *     CmpVirtualPathPresent @ 0x14082CD8C (CmpVirtualPathPresent.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1407140D0 (CmpFindSubKeyByNameWithStatus.c)
 */

char __fastcall CmpFindPathByName(__int64 a1, __m128i *a2, UNICODE_STRING *a3, unsigned int *a4, _QWORD *a5)
{
  unsigned __int16 v6; // r15
  _QWORD *v8; // rcx
  __m128i v10; // xmm0
  unsigned __int16 v11; // di
  wchar_t *v12; // rsi
  __int16 v13; // r14
  __int64 (__fastcall **v14)(PVOID, _QWORD, int *, unsigned int *); // r13
  unsigned int v15; // ecx
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  unsigned int v19; // ebx
  void (__fastcall **v20)(PVOID, int *, __int64); // rcx
  UNICODE_STRING v21; // [rsp+20h] [rbp-20h]
  __int64 v22; // [rsp+30h] [rbp-10h] BYREF
  wchar_t *v23; // [rsp+38h] [rbp-8h]
  unsigned int v24; // [rsp+88h] [rbp+48h] BYREF
  int v25; // [rsp+90h] [rbp+50h] BYREF
  int v26; // [rsp+94h] [rbp+54h]
  unsigned int *v27; // [rsp+98h] [rbp+58h]

  v27 = a4;
  v26 = 0;
  v6 = 0;
  v25 = -1;
  *a4 = -1;
  v8 = a5;
  v22 = 0LL;
  v23 = 0LL;
  *a5 = 0LL;
  if ( a3 )
  {
    RtlInitUnicodeString(a3, 0LL);
    a4 = v27;
    v8 = a5;
  }
  v10 = *a2;
  v11 = _mm_cvtsi128_si32(*a2);
  v21 = (UNICODE_STRING)v10;
  v21.Length = v11;
  if ( v11 )
  {
    v12 = (wchar_t *)v10.m128i_i64[1];
    v13 = v10.m128i_i16[1];
    if ( a1 )
    {
      v14 = *(__int64 (__fastcall ***)(PVOID, _QWORD, int *, unsigned int *))(a1 + 32);
      *v8 = v14;
      v15 = *(_DWORD *)(a1 + 40);
      *a4 = v15;
    }
    else
    {
      v14 = (__int64 (__fastcall **)(PVOID, _QWORD, int *, unsigned int *))CmpMasterHive;
      v15 = *(_DWORD *)(*((_QWORD *)CmpMasterHive + 8) + 36LL);
      do
      {
        if ( *v12 != 92 )
          break;
        v11 -= 2;
        ++v12;
        v13 -= 2;
        v21.Length = v11;
      }
      while ( v11 );
      v21.Buffer = v12;
      v21.MaximumLength = v13;
      if ( !v11 )
        goto LABEL_21;
      do
      {
        if ( *v12 == 92 )
          break;
        v11 -= 2;
        ++v12;
        v13 -= 2;
        v21.Length = v11;
      }
      while ( v11 );
      v21.Buffer = v12;
      v21.MaximumLength = v13;
    }
    do
    {
      if ( v11 )
      {
        do
        {
          if ( *v12 != 92 )
            break;
          v11 -= 2;
          ++v12;
          v13 -= 2;
          v21.Length = v11;
        }
        while ( v11 );
        v21.Buffer = v12;
        v21.MaximumLength = v13;
      }
LABEL_21:
      if ( a3 )
        *a3 = v21;
      if ( !v11 )
        break;
      v17 = v14[1](v14, v15, &v25, a4);
      if ( !v17 )
        return 0;
      v23 = v12;
      LOWORD(v22) = 0;
      do
      {
        if ( v12[(unsigned __int64)v6 >> 1] == 92 )
          break;
        v6 += 2;
      }
      while ( v6 < v11 );
      LOWORD(v22) = v6;
      if ( (*(_BYTE *)(v17 + 2) & 2) != 0 )
      {
        v19 = *(_DWORD *)(v17 + 28);
        v20 = (void (__fastcall **)(PVOID, int *, __int64))v14;
        v14 = *(__int64 (__fastcall ***)(PVOID, _QWORD, int *, unsigned int *))(v17 + 36);
        v20[2](v20, &v25, 2LL);
        v17 = ((__int64 (__fastcall *)(__int64 (__fastcall **)(PVOID, _QWORD, int *, unsigned int *), _QWORD, int *))v14[1])(
                v14,
                v19,
                &v25);
        if ( !v17 )
          return 0;
      }
      CmpFindSubKeyByNameWithStatus(v14, v17, &v22, &v24);
      ((void (__fastcall *)(__int64 (__fastcall **)(PVOID, _QWORD, int *, unsigned int *), int *))v14[2])(v14, &v25);
      v15 = v24;
      if ( v24 == -1 )
        return 0;
      v13 -= v6;
      v11 -= v6;
      v21.MaximumLength = v13;
      v21.Length = v11;
      *v27 = v24;
      *a5 = v14;
      v16 = v6;
      v6 = 0;
      v12 += v16 >> 1;
      v21.Buffer = v12;
    }
    while ( v11 );
  }
  else
  {
    if ( !a1 )
      return 0;
    *v8 = *(_QWORD *)(a1 + 32);
    *a4 = *(_DWORD *)(a1 + 40);
  }
  return 1;
}
