/*
 * XREFs of ?ClearLayout@PPILayoutOperation@@UEAAJXZ @ 0x180359BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18006F1FC (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x1800EBA10 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x1803B91D8 (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x1803B9B4C (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

__int64 __fastcall PPILayoutOperation::ClearLayout(PPILayoutOperation *this)
{
  CAppLayoutOperation *v2; // rsi
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  signed __int64 v7; // [rsp+30h] [rbp-18h] BYREF
  int v8; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v7 = ((unsigned __int64)this + 16) & -(__int64)(this != (PPILayoutOperation *)176);
  v2 = (PPILayoutOperation *)((char *)this - 152);
  v8 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v7, 1);
  v3 = CAppLayoutOperation::_VerifyAndPrepareLayout(v2, 0LL, 0);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 121LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppilayoutoperation.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_6;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this - 14) + 264LL))(*((_QWORD *)this - 14), 7LL);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this - 14) + 240LL))(*((_QWORD *)this - 14), 1LL, 0LL);
  *((_DWORD *)this - 18) = 1;
  v3 = CAppLayoutOperation::_FinalizeLayout((char *)this - 152, 2LL);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 125LL;
    goto LABEL_5;
  }
LABEL_6:
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v7);
  return v4;
}
