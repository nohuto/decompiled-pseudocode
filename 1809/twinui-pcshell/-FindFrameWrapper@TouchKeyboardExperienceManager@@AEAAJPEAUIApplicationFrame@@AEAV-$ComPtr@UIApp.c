/*
 * XREFs of ?FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@@Z @ 0x1802B5BBC
 * Callers:
 *     _lambda_43679049413ffb011dfd944481e1a2e9_::operator() @ 0x1800929C0 (_lambda_43679049413ffb011dfd944481e1a2e9_--operator().c)
 *     _lambda_9724884f6eff691596e03972589b8d56_::operator() @ 0x180093044 (_lambda_9724884f6eff691596e03972589b8d56_--operator().c)
 *     _lambda_c8b3cfc50c1e59d40f4a103bc0cf4ce9_::operator() @ 0x180093714 (_lambda_c8b3cfc50c1e59d40f4a103bc0cf4ce9_--operator().c)
 *     ?NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@@Z @ 0x1802B7AA8 (-NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame.c)
 *     ?OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1802B7FB0 (-OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     ?OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x1802B81A0 (-OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 *     ?OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1802B8990 (-OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017174 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::FindFrameWrapper(RTL_SRWLOCK *a1, __int64 a2, __int64 *a3)
{
  RTL_SRWLOCK *v6; // rdi
  char *Ptr; // rbx
  char *v8; // rbp
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = a1 + 56;
  AcquireSRWLockShared(a1 + 56);
  Ptr = (char *)a1[57].Ptr;
  v8 = (char *)a1[58].Ptr;
  while ( Ptr != v8
       && (*(_BYTE *)(*(_QWORD *)Ptr + 32LL)
        || (*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)Ptr + 8LL) + 24LL))(
             *(_QWORD *)(*(_QWORD *)Ptr + 8LL),
             a2) != 1) )
    Ptr += 16;
  if ( Ptr == a1[58].Ptr )
  {
    v9 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x86E,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)0x80070490LL);
  }
  else
  {
    Microsoft::WRL::ComPtr<IApplicationView>::operator=(a3, (__int64 *)(*(_QWORD *)Ptr + 8LL));
    v9 = 0;
  }
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return v9;
}
