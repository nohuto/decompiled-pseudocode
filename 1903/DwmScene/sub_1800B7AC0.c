/*
 * XREFs of sub_1800B7AC0 @ 0x1800B7AC0
 * Callers:
 *     sub_1800B83D0 @ 0x1800B83D0 (sub_1800B83D0.c)
 *     sub_1800B9180 @ 0x1800B9180 (sub_1800B9180.c)
 * Callees:
 *     sub_18000FDAC @ 0x18000FDAC (sub_18000FDAC.c)
 *     sub_1800B7C88 @ 0x1800B7C88 (sub_1800B7C88.c)
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800B7AC0(_QWORD *a1, __int64 a2)
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
    sub_1800B7C88(v4 + 4, a2);
  }
  else
  {
    v5 = 0LL;
  }
  *a1 = v5 + 4;
  a1[1] = v5;
  sub_18000FDAC((__int64)a1, (__int64)(v5 + 4));
  return a1;
}
