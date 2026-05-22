/*
 * XREFs of ?ResetAndInitializeInteractionContext@TapProcessor@@AEAAJXZ @ 0x1800D2834
 * Callers:
 *     ?Create@TapProcessor@@SAJPEAPEAV1@@Z @ 0x1800D2650 (-Create@TapProcessor@@SAJPEAPEAV1@@Z.c)
 *     ?OnInput@TapProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800D2AF0 (-OnInput@TapProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z.c)
 *     ?OnPointerInfoFrame@TapProcessor@@UEAAJKPEAUtagPOINTER_INFO_UNION@@@Z @ 0x1800D2C00 (-OnPointerInfoFrame@TapProcessor@@UEAAJKPEAUtagPOINTER_INFO_UNION@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0PointerInfoAdapter@@QEAA@PEAUIPointerInfoAdapterClient@@_N@Z @ 0x180054600 (--0PointerInfoAdapter@@QEAA@PEAUIPointerInfoAdapterClient@@_N@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TapProcessor::ResetAndInitializeInteractionContext(TapProcessor *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  PointerInfoAdapter *v6; // rax
  PointerInfoAdapter *v7; // rdi
  __int64 v8; // rcx
  __m128i v10[2]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  ResetInteractionContext(*((_QWORD *)this + 9));
  v10[0] = _mm_load_si128((const __m128i *)&_xmm);
  v2 = SetPropertyInteractionContext(*((_QWORD *)this + 9), 3LL);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x51,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\lasttap\\system\\lib\\tapprocessor.cpp",
      (const char *)(unsigned int)v2);
    __debugbreak();
  }
  v3 = SetPropertyInteractionContext(*((_QWORD *)this + 9), 2LL);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x52,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\lasttap\\system\\lib\\tapprocessor.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  v4 = SetInteractionConfigurationInteractionContext(*((_QWORD *)this + 9), 2LL, v10);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x53,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\lasttap\\system\\lib\\tapprocessor.cpp",
      (const char *)(unsigned int)v4);
    JUMPOUT(0x1800D29BFLL);
  }
  v5 = RegisterOutputCallbackInteractionContext(*((_QWORD *)this + 9), TapProcessor::s_InteractionOutputCallback, this);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x54,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\lasttap\\system\\lib\\tapprocessor.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  *((_DWORD *)this + 21) = 0;
  v6 = (PointerInfoAdapter *)malloc(0xB0uLL);
  v7 = v6;
  if ( v6 )
    memset_0(v6, 0, 0xB0uLL);
  if ( v7 )
    v7 = PointerInfoAdapter::PointerInfoAdapter(v7, (TapProcessor *)((char *)this + 8));
  v8 = *((_QWORD *)this + 7);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  *((_QWORD *)this + 7) = v7;
  if ( v7 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5A,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\lasttap\\system\\lib\\tapprocessor.cpp",
    (const char *)0x8007000ELL);
  return 2147942414LL;
}
