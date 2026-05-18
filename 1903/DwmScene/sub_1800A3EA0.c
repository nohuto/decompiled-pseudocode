/*
 * XREFs of sub_1800A3EA0 @ 0x1800A3EA0
 * Callers:
 *     sub_180076608 @ 0x180076608 (sub_180076608.c)
 * Callees:
 *     sub_1800A88B0 @ 0x1800A88B0 (sub_1800A88B0.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1800A3EA0(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // rdi
  _QWORD *j; // rbx
  __int64 **v6; // rax
  __int64 i; // rax
  __int64 *v8; // rcx
  _QWORD *v9; // rdi
  _QWORD *m; // rbx
  __int64 v11; // rcx
  __int64 **v12; // rax
  __int64 k; // rax
  __int64 *v14; // rcx

  v2 = *(_QWORD **)(a1 + 18560);
  j = (_QWORD *)*v2;
  while ( j != v2 )
  {
    sub_1800A88B0(j[8], a2);
    v6 = (__int64 **)j[2];
    if ( *((_BYTE *)v6 + 25) )
    {
      for ( i = j[1]; !*(_BYTE *)(i + 25) && j == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
        j = (_QWORD *)i;
      j = (_QWORD *)i;
    }
    else
    {
      v8 = *v6;
      for ( j = (_QWORD *)j[2]; !*((_BYTE *)v8 + 25); v8 = (__int64 *)*v8 )
        j = v8;
    }
  }
  v9 = *(_QWORD **)(a1 + 18576);
  m = (_QWORD *)*v9;
  while ( m != v9 )
  {
    v11 = m[11];
    if ( v11 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 24LL))(v11, a2);
    v12 = (__int64 **)m[2];
    if ( *((_BYTE *)v12 + 25) )
    {
      for ( k = m[1]; !*(_BYTE *)(k + 25) && m == *(_QWORD **)(k + 16); k = *(_QWORD *)(k + 8) )
        m = (_QWORD *)k;
      m = (_QWORD *)k;
    }
    else
    {
      v14 = *v12;
      for ( m = (_QWORD *)m[2]; !*((_BYTE *)v14 + 25); v14 = (__int64 *)*v14 )
        m = v14;
    }
  }
}
