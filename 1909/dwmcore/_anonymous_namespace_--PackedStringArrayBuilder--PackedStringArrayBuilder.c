/*
 * XREFs of _anonymous_namespace_::PackedStringArrayBuilder::PackedStringArrayBuilder @ 0x1800D5EFC
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x180040348 (_anonymous_namespace_--SendFramesReport.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBE@?$vector@EV?$allocator@E@std@@@std@@QEAAPEAEQEAEAEBE@Z @ 0x180040284 (--$_Emplace_reallocate@AEBE@-$vector@EV-$allocator@E@std@@@std@@QEAAPEAEQEAEAEBE@Z.c)
 */

__int64 __fastcall anonymous_namespace_::PackedStringArrayBuilder::PackedStringArrayBuilder(__int64 a1)
{
  __int64 *v1; // rbx
  char *v3; // rdx
  char v5; // [rsp+30h] [rbp+8h] BYREF

  *(_DWORD *)a1 = 0;
  v1 = (__int64 *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  v5 = 0;
  std::vector<unsigned char>::_Emplace_reallocate<unsigned char const &>((__int64 *)(a1 + 8), 0LL, &v5);
  v3 = (char *)v1[1];
  v5 = 0;
  if ( (char *)v1[2] == v3 )
  {
    std::vector<unsigned char>::_Emplace_reallocate<unsigned char const &>(v1, v3, &v5);
  }
  else
  {
    *v3 = 0;
    ++v1[1];
  }
  return a1;
}
