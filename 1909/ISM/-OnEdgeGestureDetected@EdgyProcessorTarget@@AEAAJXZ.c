/*
 * XREFs of ?OnEdgeGestureDetected@EdgyProcessorTarget@@AEAAJXZ @ 0x180103648
 * Callers:
 *     ?OnGestureUpdate@EdgyProcessorTarget@@QEAAJW4GestureType@@@Z @ 0x18010386C (-OnGestureUpdate@EdgyProcessorTarget@@QEAAJW4GestureType@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?NotifyClientOfEdgyDetected@EdgyConnection@@QEAAJPEBUCandidateIdentity@@PEAUCandidateEdgyDetectedInfo@@PEBUEdgyPointerInfo@@2@Z @ 0x180100224 (-NotifyClientOfEdgyDetected@EdgyConnection@@QEAAJPEBUCandidateIdentity@@PEAUCandidateEdgyDetecte.c)
 *     ?GetCandidateEdgyDetectedInfo@EdgyImpl@@QEAA_NPEAUCandidateEdgyDetectedInfo@@@Z @ 0x180104590 (-GetCandidateEdgyDetectedInfo@EdgyImpl@@QEAA_NPEAUCandidateEdgyDetectedInfo@@@Z.c)
 */

__int64 __fastcall EdgyProcessorTarget::OnEdgeGestureDetected(
        EdgyProcessorTarget *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int v5; // ebx
  EdgyImpl *v6; // rcx
  __int64 v7; // rcx
  const struct CandidateIdentity *v8; // rdx
  int v9; // eax
  int v10; // esi
  __int64 v12; // rax
  bool v13; // zf
  __int64 v14; // rax
  int v15; // ebx
  __int16 v16; // [rsp+30h] [rbp-58h] BYREF
  __int64 v17; // [rsp+38h] [rbp-50h]
  __int64 v18; // [rsp+40h] [rbp-48h]
  __int64 v19; // [rsp+48h] [rbp-40h]
  _BYTE v20[40]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v21; // [rsp+78h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  if ( (unsigned int)(*((_DWORD *)this + 8) - 2) > 1 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      667LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
      a4);
    __debugbreak();
  }
  v5 = 0;
  v16 = 0;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  memset_0(v20, 0, sizeof(v20));
  v6 = (EdgyImpl *)(*((_QWORD *)this + 15) + 80LL);
  v21 = 0LL;
  if ( EdgyImpl::GetCandidateEdgyDetectedInfo(v6, (struct CandidateEdgyDetectedInfo *)&v16) )
  {
    v7 = *((_QWORD *)this + 15);
    v8 = *(const struct CandidateIdentity **)(v7 + 88);
    if ( v8
      && (v9 = EdgyConnection::NotifyClientOfEdgyDetected(
                 *(EdgyConnection **)(v7 + 104),
                 v8,
                 (struct CandidateEdgyDetectedInfo *)&v16,
                 (const struct EdgyPointerInfo *)(v7 + 24),
                 (struct D2D_VECTOR_2F)((char *)this + 80)),
          v10 = v9,
          v9 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC8,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyimpl.cpp",
        (const char *)(unsigned int)v9);
    }
    else
    {
      v10 = 0;
    }
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2A4,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
        (const char *)(unsigned int)v10);
      return (unsigned int)v10;
    }
    v12 = *((_QWORD *)this + 14);
    v13 = v12 == 0;
    if ( !v12 )
    {
      v14 = v17;
      *((_QWORD *)this + 14) = v17;
      v13 = v14 == 0;
    }
    LOBYTE(v5) = !v13;
    v15 = v5 + 2;
  }
  else
  {
    v15 = 1;
  }
  *((_DWORD *)this + 8) = v15;
  return 0LL;
}
