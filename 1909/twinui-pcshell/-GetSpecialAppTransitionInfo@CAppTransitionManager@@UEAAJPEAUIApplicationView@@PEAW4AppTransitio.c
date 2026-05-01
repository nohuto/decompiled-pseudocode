/*
 * XREFs of ?GetSpecialAppTransitionInfo@CAppTransitionManager@@UEAAJPEAUIApplicationView@@PEAW4AppTransitionTargetSpecialFlags@@@Z @ 0x1803A63E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003072C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180076FD0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x18012DA54 (--1CThreadUseDetector@@QEAA@XZ.c)
 */

__int64 __fastcall CAppTransitionManager::GetSpecialAppTransitionInfo(
        CAppTransitionManager *this,
        struct IUnknown *a2,
        enum AppTransitionTargetSpecialFlags *a3)
{
  unsigned int v6; // ebx
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rdi
  __int64 v9; // r14
  signed __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v11 = ((unsigned __int64)this + 24) & -(__int64)(this != (CAppTransitionManager *)96);
  v6 = 0;
  v12 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v11, 1);
  *(_DWORD *)a3 = 0;
  if ( *((_DWORD *)this + 51) )
  {
    v7 = *((_QWORD *)this + 18);
    v8 = 0LL;
    if ( v7 )
    {
      v9 = 0LL;
      while ( !(unsigned int)SHIsSameObject(a2, *(struct IUnknown **)(v9 + *((_QWORD *)this + 17))) )
      {
        ++v8;
        v9 += 16LL;
        if ( v8 >= v7 )
          goto LABEL_9;
      }
      *(_DWORD *)a3 = *(_DWORD *)(*((_QWORD *)this + 17) + 16 * v8 + 8);
    }
  }
  else
  {
    v6 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x166,
      (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
      (const char *)0x8007139FLL);
  }
LABEL_9:
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v11);
  return v6;
}
