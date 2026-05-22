/*
 * XREFs of ?ResetAndInitializeInteractionContext@MessageInfo@DragNDropProcessor@@QEAAJXZ @ 0x180022C10
 * Callers:
 *     ?OnPointerInfoFrame@MessageInfo@DragNDropProcessor@@UEAAJKPEAUtagPOINTER_INFO_UNION@@@Z @ 0x180022D10 (-OnPointerInfoFrame@MessageInfo@DragNDropProcessor@@UEAAJKPEAUtagPOINTER_INFO_UNION@@@Z.c)
 *     ?StartGestureRecognition@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@K@Z @ 0x1800235F4 (-StartGestureRecognition@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@K@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall DragNDropProcessor::MessageInfo::ResetAndInitializeInteractionContext(
        DragNDropProcessor::MessageInfo *this)
{
  __int64 v2; // rcx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v8[4]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  ResetInteractionContext(*((_QWORD *)this + 5));
  v2 = *((_QWORD *)this + 5);
  *(__m128i *)v8 = _mm_load_si128((const __m128i *)&_xmm);
  v3 = SetPropertyInteractionContext(v2, 3LL);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dragn"
               "dropprocessor.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  v4 = SetPropertyInteractionContext(*((_QWORD *)this + 5), 2LL);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dragn"
               "dropprocessor.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v5 = SetInteractionConfigurationInteractionContext(*((_QWORD *)this + 5), 2LL, v8);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dragn"
               "dropprocessor.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v6 = RegisterOutputCallbackInteractionContext(
         *((_QWORD *)this + 5),
         DragNDropProcessor::MessageInfo::s_InteractionOutputCallback,
         this);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x30,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dragn"
               "dropprocessor.cpp",
      (const char *)(unsigned int)v6);
    JUMPOUT(0x180022CFALL);
  }
  return 0LL;
}
