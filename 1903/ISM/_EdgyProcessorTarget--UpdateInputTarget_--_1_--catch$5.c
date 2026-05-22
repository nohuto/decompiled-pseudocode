/*
 * XREFs of _EdgyProcessorTarget::UpdateInputTarget_::_1_::catch$5 @ 0x1801043D8
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall EdgyProcessorTarget::UpdateInputTarget_::_1_::catch_5(__int64 a1, __int64 a2)
{
  const char *v2; // r9

  v2 = (const char *)*(unsigned int *)(*(_QWORD *)(a2 + 96) + 28LL);
  *(_DWORD *)(a2 + 40) = (_DWORD)v2;
  if ( (int)v2 >= 0 )
    return &loc_180104316;
  wil::details::in1diag3::Return_Hr(
    *(wil::details::in1diag3 **)(a2 + 184),
    (void *)0x9F,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
    v2);
  return &loc_1801042D8;
}
