/*
 * XREFs of ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@AEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x18030EB74
 * Callers:
 *     _lambda_b4654e0922f50786bbde1a7e7a9917df_::operator() @ 0x18009D7D4 (_lambda_b4654e0922f50786bbde1a7e7a9917df_--operator().c)
 *     ?NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@@Z @ 0x1803112E4 (-NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18002758C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801C52E4 (--4-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::FindViewInfo(RTL_SRWLOCK *a1, struct IUnknown *a2, _QWORD *a3)
{
  RTL_SRWLOCK *v6; // rdi
  _QWORD *Ptr; // rbx
  _QWORD *v8; // rbp
  __int64 v9; // rcx
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = a1 + 57;
  AcquireSRWLockShared(a1 + 57);
  Ptr = a1[58].Ptr;
  v8 = a1[59].Ptr;
  while ( Ptr != v8 )
  {
    v9 = *Ptr;
    if ( !*(_BYTE *)(*Ptr + 32LL)
      && *(_BYTE *)(v9 + 33)
      && (unsigned int)SHIsSameObject(*(struct IUnknown **)(v9 + 8), a2) )
    {
      break;
    }
    Ptr += 2;
  }
  if ( Ptr == a1[59].Ptr )
  {
    v10 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA5A,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)0x80070490LL);
  }
  else
  {
    std::shared_ptr<PeoplePaneViewInfo>::operator=(a3, Ptr);
    v10 = 0;
  }
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return v10;
}
