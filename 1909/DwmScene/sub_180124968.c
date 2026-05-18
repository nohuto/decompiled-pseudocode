/*
 * XREFs of sub_180124968 @ 0x180124968
 * Callers:
 *     sub_180125004 @ 0x180125004 (sub_180125004.c)
 * Callees:
 *     sub_180124AA4 @ 0x180124AA4 (sub_180124AA4.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180124968(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0x88uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Utils::Internal::SimpleCancellationToken>::`vftable';
    sub_180124AA4(v2 + 4);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 4;
  a1[1] = v3;
  return a1;
}
