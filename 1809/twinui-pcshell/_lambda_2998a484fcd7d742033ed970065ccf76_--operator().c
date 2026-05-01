/*
 * XREFs of _lambda_2998a484fcd7d742033ed970065ccf76_::operator() @ 0x18007CA70
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2998a484fcd7d742033ed970065ccf76___::Run @ 0x18007CA60 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2998a484fcd7d742033ed970065ccf76___--Run.c)
 * Callees:
 *     ?ContinueOnCurrentThread@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1800197A4 (-ContinueOnCurrentThread@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_Tlg.c)
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x18002FA48 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18005CF04 (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     ?LaunchCore@CSingleViewShellExperience@@AEAAJAEBVHString@Wrappers@WRL@Microsoft@@PEBG@Z @ 0x18007CB70 (-LaunchCore@CSingleViewShellExperience@@AEAAJAEBVHString@Wrappers@WRL@Microsoft@@PEBG@Z.c)
 *     ??$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA?AV?$ComPtr@UIInspectable@@@WRL@Microsoft@@AEAVWeakRef@23@@Z @ 0x18007CBF4 (--$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA-AV-$ComPtr@UIInspectable@@@WRL@Microsoft@.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_2998a484fcd7d742033ed970065ccf76_::operator()(Microsoft::WRL::WeakRef *this)
{
  int v2; // ebx
  const unsigned __int16 *StringRawBuffer; // rax
  const unsigned __int16 *v4; // rbp
  __int64 v5; // rcx
  LPVOID v7[4]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v8[24]; // [rsp+50h] [rbp-38h] BYREF
  int v9; // [rsp+68h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  struct IInspectable *v11; // [rsp+90h] [rbp+8h] BYREF

  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (__int64)this + 32,
    (__int64)v7);
  v2 = *((_DWORD *)this + 6);
  if ( v2 >= 0 )
  {
    ExperienceManagerUtils::AsStrong<IInspectable>(&v11, this);
    if ( v11 )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 2), 0LL);
      v4 = StringRawBuffer;
      v5 = *((_QWORD *)this + 1);
      if ( !*(_QWORD *)(v5 + 168)
        || (v2 = CSingleViewShellExperience::LaunchCore(
                   (CSingleViewShellExperience *)v5,
                   (const struct Microsoft::WRL::Wrappers::HString *)(v5 + 168),
                   StringRawBuffer),
            v2 < 0) )
      {
        v2 = CSingleViewShellExperience::LaunchCore(
               *((CSingleViewShellExperience **)this + 1),
               (const struct Microsoft::WRL::Wrappers::HString *)(*((_QWORD *)this + 1) + 8LL),
               v4);
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 1) + 88LL) + 104LL))(
        *(_QWORD *)(*((_QWORD *)this + 1) + 88LL),
        *((_QWORD *)this + 1),
        (unsigned int)v2);
      if ( v2 < 0 )
        goto LABEL_8;
      wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)this + 32);
    }
    v2 = 0;
LABEL_8:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
    goto LABEL_9;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xFD,
    (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
    (const char *)(unsigned int)v2);
LABEL_9:
  if ( v9 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v8);
  wil::details::StoredCallContextInfo::~StoredCallContextInfo(v7);
  return (unsigned int)v2;
}
