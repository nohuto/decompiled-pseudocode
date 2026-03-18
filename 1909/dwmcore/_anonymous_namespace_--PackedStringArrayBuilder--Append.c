/*
 * XREFs of _anonymous_namespace_::PackedStringArrayBuilder::Append @ 0x180040DC0
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x180040348 (_anonymous_namespace_--SendFramesReport.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBE@?$vector@EV?$allocator@E@std@@@std@@QEAAPEAEQEAEAEBE@Z @ 0x180040284 (--$_Emplace_reallocate@AEBE@-$vector@EV-$allocator@E@std@@@std@@QEAAPEAEQEAEAEBE@Z.c)
 */

char __fastcall anonymous_namespace_::PackedStringArrayBuilder::Append(_DWORD *a1, char *a2)
{
  __int64 *v2; // rbx
  char *v3; // rdi
  _QWORD *v4; // rcx
  char *v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rsi
  char *v8; // rdx
  char *v9; // rdx
  char v11; // [rsp+40h] [rbp+8h] BYREF

  ++*a1;
  v2 = (__int64 *)(a1 + 2);
  v3 = a2;
  v4 = a2;
  if ( *((_QWORD *)a2 + 3) >= 0x10uLL )
    v4 = *(_QWORD **)a2;
  v5 = (char *)v4 + *((_QWORD *)a2 + 2);
  if ( *((_QWORD *)a2 + 3) >= 0x10uLL )
    v3 = *(char **)a2;
  v6 = v5 - v3;
  v7 = 0LL;
  if ( v3 > v5 )
    v6 = 0LL;
  if ( v6 )
  {
    do
    {
      v8 = (char *)v2[1];
      LOBYTE(v5) = v3[v7];
      v11 = (char)v5;
      if ( (char *)v2[2] == v8 )
      {
        LOBYTE(v5) = (unsigned __int8)std::vector<unsigned char>::_Emplace_reallocate<unsigned char const &>(
                                        v2,
                                        v8,
                                        &v11);
      }
      else
      {
        *v8 = (char)v5;
        ++v2[1];
      }
      v9 = (char *)v2[1];
      ++v7;
    }
    while ( v7 != v6 );
  }
  else
  {
    v9 = (char *)v2[1];
  }
  v11 = 0;
  if ( (char *)v2[2] == v9 )
  {
    LOBYTE(v5) = (unsigned __int8)std::vector<unsigned char>::_Emplace_reallocate<unsigned char const &>(v2, v9, &v11);
  }
  else
  {
    *v9 = 0;
    ++v2[1];
  }
  return (char)v5;
}
