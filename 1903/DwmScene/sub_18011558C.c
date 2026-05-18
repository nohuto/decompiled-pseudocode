/*
 * XREFs of sub_18011558C @ 0x18011558C
 * Callers:
 *     sub_1801155FC @ 0x1801155FC (sub_1801155FC.c)
 * Callees:
 *     sub_18011859C @ 0x18011859C (sub_18011859C.c)
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18011558C(_QWORD *a1)
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
    sub_18011859C(v2 + 4);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 4;
  a1[1] = v3;
  return a1;
}
