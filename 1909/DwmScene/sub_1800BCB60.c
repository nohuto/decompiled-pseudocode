/*
 * XREFs of sub_1800BCB60 @ 0x1800BCB60
 * Callers:
 *     sub_1800B9094 @ 0x1800B9094 (sub_1800B9094.c)
 *     sub_180103F70 @ 0x180103F70 (sub_180103F70.c)
 * Callees:
 *     sub_18000FDFC @ 0x18000FDFC (sub_18000FDFC.c)
 *     sub_180103BD0 @ 0x180103BD0 (sub_180103BD0.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800BCB60(_QWORD *a1, __int64 a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx

  v4 = operator new(0xB8uLL);
  v5 = v4;
  if ( v4 )
  {
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj<Spectre::Engine::ColorTransform>::`vftable';
    sub_180103BD0(v4 + 4, a2);
  }
  else
  {
    v5 = 0LL;
  }
  *a1 = v5 + 4;
  a1[1] = v5;
  sub_18000FDFC((__int64)a1, (__int64)(v5 + 4));
  return a1;
}
