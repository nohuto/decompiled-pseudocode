/*
 * XREFs of sub_18011569C @ 0x18011569C
 * Callers:
 *     sub_18011570C @ 0x18011570C (sub_18011570C.c)
 * Callees:
 *     sub_1801186AC @ 0x1801186AC (sub_1801186AC.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18011569C(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0x190uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Utils::TelemetryTraceLoggerWin>::`vftable';
    sub_1801186AC(v2 + 4);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 4;
  a1[1] = v3;
  return a1;
}
