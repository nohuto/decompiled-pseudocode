/*
 * XREFs of sub_1800A4FB8 @ 0x1800A4FB8
 * Callers:
 *     sub_180079210 @ 0x180079210 (sub_180079210.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180069B40 @ 0x180069B40 (sub_180069B40.c)
 *     sub_1800A5D48 @ 0x1800A5D48 (sub_1800A5D48.c)
 *     sub_1800A5DDC @ 0x1800A5DDC (sub_1800A5DDC.c)
 *     sub_1800A6324 @ 0x1800A6324 (sub_1800A6324.c)
 *     sub_1800A9714 @ 0x1800A9714 (sub_1800A9714.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800A4FB8(_QWORD *a1)
{
  _QWORD *v1; // r15
  _QWORD *v3; // rdi
  _QWORD *j; // rbx
  __int64 **v5; // rax
  __int64 i; // rax
  __int64 *v7; // rcx
  __int64 *v8; // rdi
  __int64 *m; // rbx
  __int64 **v10; // rax
  __int64 *k; // rax
  __int64 *v12; // rdx
  __int64 v13; // rbx
  __int64 result; // rax
  __int64 v15; // rbx
  _QWORD *n; // rbx
  bool v17; // cf
  _BYTE *v18; // rax
  _QWORD *ii; // rbx
  _BYTE *v20; // rax
  __int128 v21; // [rsp+20h] [rbp-38h] BYREF
  __int64 v22[5]; // [rsp+30h] [rbp-28h] BYREF

  v1 = a1 + 2320;
  v3 = (_QWORD *)a1[2320];
  j = (_QWORD *)*v3;
  while ( j != v3 )
  {
    sub_1800A9714(j[8]);
    v5 = (__int64 **)j[2];
    if ( *((_BYTE *)v5 + 25) )
    {
      for ( i = j[1]; !*(_BYTE *)(i + 25) && j == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
        j = (_QWORD *)i;
      j = (_QWORD *)i;
    }
    else
    {
      v7 = *v5;
      for ( j = (_QWORD *)j[2]; !*((_BYTE *)v7 + 25); v7 = (__int64 *)*v7 )
        j = v7;
    }
  }
  v8 = (__int64 *)a1[2324];
  m = (__int64 *)*v8;
  while ( m != v8 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)m[8] + 8LL))(m[8]);
    v10 = (__int64 **)m[2];
    if ( *((_BYTE *)v10 + 25) )
    {
      for ( k = (__int64 *)m[1]; !*((_BYTE *)k + 25) && m == (__int64 *)k[2]; k = (__int64 *)k[1] )
        m = k;
      m = k;
    }
    else
    {
      v12 = *v10;
      for ( m = (__int64 *)m[2]; !*((_BYTE *)v12 + 25); v12 = (__int64 *)*v12 )
        m = v12;
    }
  }
  sub_1800A5D48(a1 + 2322);
  sub_1800A5DDC(v1);
  sub_1800A5DDC(a1 + 2324);
  sub_180069B40(a1 + 2);
  sub_180069B40(a1 + 261);
  v21 = 0LL;
  std::shared_ptr<__ExceptionPtr>::operator=(a1 + 2331, (__int64 *)&v21);
  if ( *((_QWORD *)&v21 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v21 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v13 = *((_QWORD *)&v21 + 1);
      (***((void (__fastcall ****)(_QWORD))&v21 + 1))(*((_QWORD *)&v21 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v21 + 1) + 8LL))(*((_QWORD *)&v21 + 1));
    }
  }
  *(_OWORD *)v22 = 0LL;
  result = (__int64)std::shared_ptr<__ExceptionPtr>::operator=(a1 + 2329, v22);
  if ( v22[1] )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v22[1] + 8));
    if ( !(_DWORD)result )
    {
      v15 = v22[1];
      (**(void (__fastcall ***)(__int64))v22[1])(v22[1]);
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22[1] + 8LL))(v22[1]);
    }
  }
  for ( n = a1 + 4; n != a1 + 260; n += 4 )
  {
    v17 = n[3] < 0x10uLL;
    v18 = n;
    n[2] = 0LL;
    if ( !v17 )
      v18 = (_BYTE *)*n;
    *v18 = 0;
    result = sub_1800A6324(n);
  }
  for ( ii = a1 + 263; ii != a1 + 2311; ii += 4 )
  {
    v17 = ii[3] < 0x10uLL;
    v20 = ii;
    ii[2] = 0LL;
    if ( !v17 )
      v20 = (_BYTE *)*ii;
    *v20 = 0;
    result = sub_1800A6324(ii);
  }
  return result;
}
