/*
 * XREFs of ?OnTouchSessionBegin@EdgyProcessorTarget@@AEAAJAEBUTouchInfo@@@Z @ 0x180103E38
 * Callers:
 *     ?OnTouchInfo@EdgyProcessorTarget@@UEAAJPEAUTouchInfo@@@Z @ 0x180103CE0 (-OnTouchInfo@EdgyProcessorTarget@@UEAAJPEAUTouchInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@EdgeGestureMetrics@@SAXXZ @ 0x180102CA4 (-Initialize@EdgeGestureMetrics@@SAXXZ.c)
 *     ?Configure@InteractionContext@EdgyProcessorTarget@@QEAAXXZ @ 0x180102F48 (-Configure@InteractionContext@EdgyProcessorTarget@@QEAAXXZ.c)
 *     ?ConfigureRecognizer@EdgyProcessorTarget@@AEAAJXZ @ 0x18010306C (-ConfigureRecognizer@EdgyProcessorTarget@@AEAAJXZ.c)
 *     ?HasCandidates@EdgyImpl@@QEAA_NXZ @ 0x180104894 (-HasCandidates@EdgyImpl@@QEAA_NXZ.c)
 */

__int64 __fastcall EdgyProcessorTarget::OnTouchSessionBegin(EdgyProcessorTarget *this, const struct TouchInfo *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  struct RegistryWatcher **v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_DWORD *)this + 20) = -1;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 23) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 8) = 1;
  if ( EdgyImpl::HasCandidates((EdgyImpl *)(*((_QWORD *)this + 15) + 80LL)) )
  {
    *((_DWORD *)this + 8) = 0;
    EdgyProcessorTarget::InteractionContext::Configure((EdgyProcessorTarget *)((char *)this + 168));
    v4 = EdgyProcessorTarget::ConfigureRecognizer(this);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x209,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
        (const char *)(unsigned int)v4);
      return v5;
    }
    v7 = EdgeGestureMetrics::s_edgeGestureMetrics;
    if ( !EdgeGestureMetrics::s_edgeGestureMetrics )
    {
      EdgeGestureMetrics::Initialize();
      v7 = EdgeGestureMetrics::s_edgeGestureMetrics;
    }
    *((_DWORD *)this + 10) = a2->TimeStamp + *((unsigned __int16 *)v7 + 9);
  }
  return 0LL;
}
