/*
 * XREFs of ?Configure@InteractionContext@EdgyProcessorTarget@@QEAAXXZ @ 0x1800CDF68
 * Callers:
 *     ?OnTouchSessionBegin@EdgyProcessorTarget@@AEAAJAEBUTouchInfo@@@Z @ 0x1800CD788 (-OnTouchSessionBegin@EdgyProcessorTarget@@AEAAJAEBUTouchInfo@@@Z.c)
 *     ?OnPointerInfoFrame@InteractionContext@EdgyProcessorTarget@@UEAAJKPEAUtagPOINTER_INFO_UNION@@@Z @ 0x1800CE180 (-OnPointerInfoFrame@InteractionContext@EdgyProcessorTarget@@UEAAJKPEAUtagPOINTER_INFO_UNION@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000AA20 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0PointerInfoAdapter@@QEAA@PEAUIPointerInfoAdapterClient@@_N@Z @ 0x180054600 (--0PointerInfoAdapter@@QEAA@PEAUIPointerInfoAdapterClient@@_N@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall EdgyProcessorTarget::InteractionContext::Configure(EdgyProcessorTarget::InteractionContext *this)
{
  _QWORD *v2; // rsi
  __int64 v3; // rcx
  int InteractionContext; // eax
  const char *v5; // r9
  PointerInfoAdapter *v6; // rax
  const char *v7; // r9
  PointerInfoAdapter *v8; // rdi
  PointerInfoAdapter *v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  __m128i v15[2]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (_QWORD *)((char *)this + 24);
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
  {
    ResetInteractionContext(v3);
  }
  else
  {
    InteractionContext = CreateInteractionContext(v2);
    if ( InteractionContext < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x34A,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
        (const char *)(unsigned int)InteractionContext);
      __debugbreak();
    }
    if ( *((_QWORD *)this + 2) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x34C,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
        v5);
      __debugbreak();
    }
    v6 = (PointerInfoAdapter *)malloc(0xB0uLL);
    v8 = v6;
    if ( v6 )
      memset_0(v6, 0, 0xB0uLL);
    if ( v8 )
      v8 = PointerInfoAdapter::PointerInfoAdapter(v8, this);
    v9 = (PointerInfoAdapter *)*((_QWORD *)this + 2);
    if ( v9 != v8 )
    {
      v10 = *((_QWORD *)this + 2);
      if ( v8 )
      {
        (*(void (__fastcall **)(PointerInfoAdapter *))(*(_QWORD *)v8 + 8LL))(v8);
        v10 = *((_QWORD *)this + 2);
      }
      *((_QWORD *)this + 2) = v8;
      v9 = v8;
      if ( v10 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        v9 = (PointerInfoAdapter *)*((_QWORD *)this + 2);
      }
    }
    if ( !v9 )
    {
      wil::details::in1diag3::_FailFast_NullAlloc(
        retaddr,
        (void *)0x34E,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
        v7);
      __debugbreak();
    }
  }
  v15[0] = _mm_load_si128((const __m128i *)&_xmm);
  v11 = SetPropertyInteractionContext(*v2, 3LL);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x35A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  v12 = SetPropertyInteractionContext(*v2, 2LL);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x35B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
      (const char *)(unsigned int)v12);
    __debugbreak();
  }
  v13 = SetInteractionConfigurationInteractionContext(*v2, 2LL, v15);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x35C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
      (const char *)(unsigned int)v13);
    JUMPOUT(0x1800CE16CLL);
  }
  v14 = RegisterOutputCallbackInteractionContext(*v2, EdgyProcessorTarget::InteractionContext::StaticCallback, this);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x35D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
      (const char *)(unsigned int)v14);
    __debugbreak();
  }
}
