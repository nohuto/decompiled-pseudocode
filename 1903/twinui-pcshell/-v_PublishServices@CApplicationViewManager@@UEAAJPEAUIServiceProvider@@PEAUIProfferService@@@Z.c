/*
 * XREFs of ?v_PublishServices@CApplicationViewManager@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180157C10
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001C8D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Deta.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCGlobals@ApplicationViewManagement@@V12@AEAPEAVCApplicationViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCGlobals@ApplicationViewManagement@@AEAPEAVCApplicationViewManager@@@Z @ 0x1801538D8 (--$MakeAndInitialize@VCGlobals@ApplicationViewManagement@@V12@AEAPEAVCApplicationViewManager@@@D.c)
 *     ??1?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@QEAA@XZ @ 0x180154A3C (--1-$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall CApplicationViewManager::v_PublishServices(
        CApplicationViewManager *this,
        struct IServiceProvider *a2,
        struct IProfferService *a3)
{
  int v3; // eax
  int v4; // ebx
  volatile signed __int32 *v5; // rax
  volatile signed __int32 *v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  volatile signed __int32 *v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0LL;
  v10 = (__int64)this - 72;
  v3 = Microsoft::WRL::Details::MakeAndInitialize<ApplicationViewManagement::CGlobals,ApplicationViewManagement::CGlobals,CApplicationViewManager * &>(
         (__int64 *)&v9,
         &v10);
  v4 = v3;
  if ( v3 >= 0 )
  {
    AcquireSRWLockExclusive(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
    v5 = v9;
    v9 = 0LL;
    GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals = (__int64)v5;
    ReleaseSRWLockExclusive(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
    v6 = v9;
    if ( v9 )
    {
      v9 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase>::Release(v6);
    }
    v4 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x36,
      (__int64)"internal\\shell\\private\\inc\\GlobalsUtil.h",
      (const char *)(unsigned int)v3);
    Microsoft::WRL::ComPtr<ApplicationViewManagement::CGlobals>::~ComPtr<ApplicationViewManagement::CGlobals>(&v9);
  }
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x38,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v4);
  return (unsigned int)v4;
}
