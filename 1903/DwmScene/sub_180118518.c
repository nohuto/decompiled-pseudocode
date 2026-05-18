/*
 * XREFs of sub_180118518 @ 0x180118518
 * Callers:
 *     sub_18011859C @ 0x18011859C (sub_18011859C.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_180118518(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v8; // rax
  _DWORD *v9; // r10
  _QWORD *result; // rax

  v8 = operator new(0x28uLL);
  v9 = v8;
  if ( v8 )
  {
    v8[2] = 1;
    v8[3] = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj<Spectre::Utils::TelemTraceLoggerAttributes>::`vftable';
    *((_QWORD *)v8 + 2) = a2;
    *((_QWORD *)v8 + 3) = a3;
    *((_QWORD *)v8 + 4) = a4;
  }
  else
  {
    v9 = 0LL;
  }
  *a1 = v9 + 4;
  result = a1;
  a1[1] = v9;
  return result;
}
