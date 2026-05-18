/*
 * XREFs of sub_1800DB1A4 @ 0x1800DB1A4
 * Callers:
 *     sub_1800DA494 @ 0x1800DA494 (sub_1800DA494.c)
 * Callees:
 *     sub_18000FDFC @ 0x18000FDFC (sub_18000FDFC.c)
 *     sub_18010AE98 @ 0x18010AE98 (sub_18010AE98.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800DB1A4(_QWORD *a1, __int64 a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx

  v4 = operator new(0x6F8uLL);
  v5 = v4;
  if ( v4 )
  {
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj<Spectre::Engine::ImageProcessingCamera>::`vftable';
    sub_18010AE98(v4 + 4, a2);
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
