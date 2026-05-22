/*
 * XREFs of ?ResetAndInitializeInteractionContext@MessageInfo@DragNDropProcessor@@QEAAJXZ @ 0x18006CA0C
 * Callers:
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18006C320 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorRespon.c)
 *     ?StartGestureRecognition@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@K@Z @ 0x18006D268 (-StartGestureRecognition@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@K@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
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

  ResetInteractionContext(*((_QWORD *)this + 4));
  v2 = *((_QWORD *)this + 4);
  *(__m128i *)v8 = _mm_load_si128((const __m128i *)&_xmm);
  v3 = SetPropertyInteractionContext(v2, 3LL);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      43LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dragn"
               "dropprocessor.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  v4 = SetPropertyInteractionContext(*((_QWORD *)this + 4), 2LL);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      44LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dragn"
               "dropprocessor.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v5 = SetInteractionConfigurationInteractionContext(*((_QWORD *)this + 4), 2LL, v8);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      45LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dragn"
               "dropprocessor.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v6 = RegisterOutputCallbackInteractionContext(
         *((_QWORD *)this + 4),
         DragNDropProcessor::MessageInfo::s_InteractionOutputCallback,
         this);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      46LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dragn"
               "dropprocessor.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  return 0LL;
}
