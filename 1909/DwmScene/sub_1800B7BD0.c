/*
 * XREFs of sub_1800B7BD0 @ 0x1800B7BD0
 * Callers:
 *     sub_1800B84E0 @ 0x1800B84E0 (sub_1800B84E0.c)
 *     sub_1800B9290 @ 0x1800B9290 (sub_1800B9290.c)
 * Callees:
 *     sub_18000FDFC @ 0x18000FDFC (sub_18000FDFC.c)
 *     sub_1800B7D98 @ 0x1800B7D98 (sub_1800B7D98.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800B7BD0(_QWORD *a1, __int64 a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx

  v4 = operator new(0x228uLL);
  v5 = v4;
  if ( v4 )
  {
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj<Spectre::Engine::LightProbe>::`vftable';
    sub_1800B7D98(v4 + 4, a2);
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
