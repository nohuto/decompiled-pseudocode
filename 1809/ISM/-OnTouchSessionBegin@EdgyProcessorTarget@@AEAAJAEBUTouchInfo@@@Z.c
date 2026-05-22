/*
 * XREFs of ?OnTouchSessionBegin@EdgyProcessorTarget@@AEAAJAEBUTouchInfo@@@Z @ 0x1800CD788
 * Callers:
 *     ?OnTouchInfo@EdgyProcessorTarget@@UEAAJPEAUTouchInfo@@@Z @ 0x1800CD630 (-OnTouchInfo@EdgyProcessorTarget@@UEAAJPEAUTouchInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCandidate@Edges@@QEAA_NPEBV?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@PEBUD2D_VECTOR_2F@@PEAW4EdgyExperienceRunState@Input@Internal@UI@Windows@@PEAPEAUCandidateIdentity@@@Z @ 0x1800CBB94 (-GetCandidate@Edges@@QEAA_NPEBV-$vector@UCandidateIdentity@@V-$allocator@UCandidateIdentity@@@st.c)
 *     ?ConfigureRecognizer@EdgyProcessorTarget@@AEAAJXZ @ 0x1800CD840 (-ConfigureRecognizer@EdgyProcessorTarget@@AEAAJXZ.c)
 *     ?Configure@InteractionContext@EdgyProcessorTarget@@QEAAXXZ @ 0x1800CDF68 (-Configure@InteractionContext@EdgyProcessorTarget@@QEAAXXZ.c)
 */

__int64 __fastcall EdgyProcessorTarget::OnTouchSessionBegin(EdgyProcessorTarget *this, const struct TouchInfo *a2)
{
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *((_DWORD *)this + 20) = -1;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 23) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 13) = 0LL;
  v4 = *((_QWORD *)this + 15);
  *((_DWORD *)this + 8) = 1;
  if ( Edges::GetCandidate((Edges *)(*(_QWORD *)(v4 + 104) + 72LL), *(__int64 **)(v4 + 80), 0LL, 0LL, 0LL) )
  {
    *((_DWORD *)this + 8) = 0;
    EdgyProcessorTarget::InteractionContext::Configure((EdgyProcessorTarget *)((char *)this + 168));
    v5 = EdgyProcessorTarget::ConfigureRecognizer(this);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x207,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
        (const char *)(unsigned int)v5);
      return v6;
    }
    *((_DWORD *)this + 10) = a2->TimeStamp + 250;
  }
  return 0LL;
}
