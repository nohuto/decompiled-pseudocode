/*
 * XREFs of ?OnEdgeGestureDetected@EdgyProcessorTarget@@AEAAJXZ @ 0x1800CDB70
 * Callers:
 *     ?OnGestureUpdate@EdgyProcessorTarget@@QEAAJW4GestureType@@@Z @ 0x1800CDA00 (-OnGestureUpdate@EdgyProcessorTarget@@QEAAJW4GestureType@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?EdgyGestureDetected@BamoEdgyControllerClientProxy@@UEAAJPEBGIAEBUD2D_VECTOR_2F@@_K12II@Z @ 0x180027170 (-EdgyGestureDetected@BamoEdgyControllerClientProxy@@UEAAJPEBGIAEBUD2D_VECTOR_2F@@_K12II@Z.c)
 *     ?GetCandidateEdgyDetectedInfo@EdgyImpl@@QEAA_NPEAUCandidateEdgyDetectedInfo@@@Z @ 0x1800CE334 (-GetCandidateEdgyDetectedInfo@EdgyImpl@@QEAA_NPEAUCandidateEdgyDetectedInfo@@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EdgyProcessorTarget::OnEdgeGestureDetected(
        EdgyProcessorTarget *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int v5; // ebx
  __int64 v6; // r14
  EdgyImpl *v7; // rcx
  bool CandidateEdgyDetectedInfo; // al
  __int64 v9; // rsi
  const unsigned __int16 *v10; // rdx
  __int64 v11; // r15
  FLOAT v12; // xmm1_4
  int v13; // eax
  FLOAT v14; // xmm0_4
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rax
  bool v20; // zf
  __int64 v21; // rax
  int v22; // ebx
  __int16 v24; // [rsp+50h] [rbp-59h] BYREF
  __int64 v25; // [rsp+58h] [rbp-51h]
  __int64 v26; // [rsp+60h] [rbp-49h]
  unsigned int v27[2]; // [rsp+68h] [rbp-41h]
  _BYTE v28[16]; // [rsp+70h] [rbp-39h] BYREF
  int v29; // [rsp+80h] [rbp-29h]
  __int64 v30; // [rsp+98h] [rbp-11h]
  __int64 v31; // [rsp+A0h] [rbp-9h] BYREF
  int v32; // [rsp+A8h] [rbp-1h]
  struct D2D_VECTOR_2F v33; // [rsp+ACh] [rbp+3h]
  __int64 v34; // [rsp+B8h] [rbp+Fh]
  D2D_VECTOR_2F v35; // [rsp+C0h] [rbp+17h]
  __int64 v36; // [rsp+C8h] [rbp+1Fh]
  int v37; // [rsp+D0h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]
  struct D2D_VECTOR_2F v39; // [rsp+110h] [rbp+67h] BYREF
  D2D_VECTOR_2F v40; // [rsp+118h] [rbp+6Fh] BYREF

  if ( (unsigned int)(*((_DWORD *)this + 8) - 2) > 1 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x291,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
      a4);
    JUMPOUT(0x1800CDD55LL);
  }
  v5 = 0;
  v24 = 0;
  v25 = 0LL;
  v26 = 0LL;
  *(_QWORD *)v27 = 0LL;
  memset_0(v28, 0, 0x28uLL);
  v6 = 0LL;
  v7 = (EdgyImpl *)(*((_QWORD *)this + 15) + 80LL);
  v30 = 0LL;
  if ( *((_QWORD *)v7 + 1) )
  {
    CandidateEdgyDetectedInfo = EdgyImpl::GetCandidateEdgyDetectedInfo(v7, (struct CandidateEdgyDetectedInfo *)&v24);
    v6 = v30;
  }
  else
  {
    CandidateEdgyDetectedInfo = 0;
  }
  if ( CandidateEdgyDetectedInfo )
  {
    v9 = *((_QWORD *)this + 15);
    v10 = *(const unsigned __int16 **)(v9 + 88);
    if ( v10 )
    {
      v11 = *(_QWORD *)(v9 + 104);
      v12 = (float)*(int *)(v9 + 40);
      v13 = *((_DWORD *)this + 23);
      v39.x = (float)*(int *)(v9 + 36);
      v14 = (float)v13;
      v15 = *((_DWORD *)this + 24);
      v39.y = v12;
      v40.x = v14;
      v40.y = (float)v15;
      if ( (_BYTE)v24 )
      {
        if ( *((_QWORD *)v10 + 3) >= 8uLL )
          v10 = *(const unsigned __int16 **)v10;
        BamoEdgyControllerClientProxy::EdgyGestureDetected(
          (BamoEdgyControllerClientProxy *)(v26 + 8),
          v10,
          *(unsigned int *)(v9 + 24),
          &v39,
          *(_QWORD *)(v9 + 48),
          &v40);
      }
      if ( HIBYTE(v24) )
      {
        v16 = *(_QWORD *)(v11 + 16);
        v17 = *(_QWORD *)(v11 + 56);
        v32 = *(_DWORD *)(v9 + 24);
        v34 = *(_QWORD *)(v9 + 48);
        v36 = *((_QWORD *)this + 13);
        v33 = v39;
        v37 = v29;
        v31 = v6;
        v35 = v40;
        v18 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64))(*(_QWORD *)v16 + 160LL))(
                v16,
                v17,
                &v31,
                56LL);
        if ( v18 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x196,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyconnection.cpp",
            (const char *)(unsigned int)v18);
          __debugbreak();
        }
      }
    }
    v19 = *((_QWORD *)this + 14);
    v20 = v19 == 0;
    if ( !v19 )
    {
      v21 = v25;
      *((_QWORD *)this + 14) = v25;
      v20 = v21 == 0;
    }
    LOBYTE(v5) = !v20;
    v22 = v5 + 2;
  }
  else
  {
    v22 = 1;
  }
  *((_DWORD *)this + 8) = v22;
  return 0LL;
}
