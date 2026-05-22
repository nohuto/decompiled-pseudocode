/*
 * XREFs of ?QualifyEdgyInputReport@EdgyProcessorTarget@@IEAA_NPEBUPointerInputInfo@@PEAUEdgyPointerInfo@@@Z @ 0x180103D5C
 * Callers:
 *     ?OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801033A8 (-OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProc.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

bool __fastcall EdgyProcessorTarget::QualifyEdgyInputReport(
        EdgyProcessorTarget *this,
        const struct PointerInputInfo *a2,
        struct EdgyPointerInfo *a3)
{
  int v3; // eax
  bool result; // al
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_DWORD *)a3 = -1;
  *(_QWORD *)((char *)a3 + 4) = 0LL;
  *(_QWORD *)((char *)a3 + 12) = 0LL;
  *((_QWORD *)a3 + 3) = 0LL;
  if ( *((_DWORD *)a2 + 53) != 1 )
    return 0;
  v3 = *((_DWORD *)this + 12);
  if ( v3 == -1 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      203LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
      (const char *)0xFFFFFFFFLL);
    __debugbreak();
  }
  if ( *((_DWORD *)a2 + 55) != v3 )
    return 0;
  result = 1;
  *((_QWORD *)a3 + 3) = *((unsigned int *)a2 + 2);
  *(_DWORD *)a3 = *((_DWORD *)a2 + 55);
  *((_DWORD *)a3 + 2) = *((_DWORD *)a2 + 57);
  *((_DWORD *)a3 + 1) = *((_DWORD *)a2 + 1);
  *((_DWORD *)a3 + 3) = *((_DWORD *)a2 + 66);
  *((_DWORD *)a3 + 4) = *((_DWORD *)a2 + 67);
  return result;
}
