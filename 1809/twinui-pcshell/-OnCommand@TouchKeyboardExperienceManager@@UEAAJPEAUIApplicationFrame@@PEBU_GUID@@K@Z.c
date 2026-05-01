/*
 * XREFs of ?OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x1802B81A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0WeakRef@WRL@Microsoft@@QEAA@AEBV?$ComPtr@UIWeakReference@@@12@@Z @ 0x18008033C (--0WeakRef@WRL@Microsoft@@QEAA@AEBV-$ComPtr@UIWeakReference@@@12@@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_9724884f6eff691596e03972589b8d56___ @ 0x1800921F4 (Windows--Internal--ComTaskPool--QueueTask__lambda_9724884f6eff691596e03972589b8d56___.c)
 *     ??1CWRLObjectWithSite@@QEAA@XZ @ 0x1800925CC (--1CWRLObjectWithSite@@QEAA@XZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180124984 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x1802B366C (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     ?FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@@Z @ 0x1802B5BBC (-FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV-$ComPtr@UIApp.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::OnCommand(
        TouchKeyboardExperienceManager *this,
        struct IApplicationFrame *a2,
        const struct _GUID *a3)
{
  char *v6; // rsi
  int FrameWrapper; // ebx
  __int64 *v8; // rax
  int v9; // eax
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v15; // [rsp+20h] [rbp-40h] BYREF
  __int64 *v16[2]; // [rsp+28h] [rbp-38h] BYREF
  _QWORD v17[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v18[3]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  __int64 v20; // [rsp+80h] [rbp+20h] BYREF

  v16[1] = (__int64 *)-2LL;
  v15 = 0LL;
  v6 = (char *)this - 120;
  FrameWrapper = TouchKeyboardExperienceManager::FindFrameWrapper((RTL_SRWLOCK *)this - 15, (__int64)a2, &v15);
  if ( FrameWrapper >= 0 )
  {
    if ( *(_QWORD *)&a3->Data1 == ApplicationFrameCloseCommand && *(_QWORD *)a3->Data4 == 0x575B26E93947F081LL
      || *(_QWORD *)&a3->Data1 == ApplicationFrameExitedSizeMoveCommand && *(_QWORD *)a3->Data4 == 0x789E03E893229A8ALL )
    {
      v20 = 0LL;
      v16[0] = &v20;
      v8 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(v16);
      v9 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>((__int64)v6, v8);
      FrameWrapper = v9;
      if ( v9 < 0 )
      {
        v10 = (unsigned int)v9;
        v11 = 1351LL;
LABEL_10:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)v10);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
        goto LABEL_13;
      }
      v17[0] = a2;
      v17[1] = a3;
      Microsoft::WRL::WeakRef::WeakRef(v18, &v20);
      v18[1] = (__int64)v6;
      FrameWrapper = Windows::Internal::ComTaskPool::QueueTask__lambda_9724884f6eff691596e03972589b8d56___(
                       v13,
                       v12,
                       *((_DWORD *)this + 170),
                       v17);
      CWRLObjectWithSite::~CWRLObjectWithSite((CWRLObjectWithSite *)v17);
      if ( FrameWrapper < 0 )
      {
        v10 = (unsigned int)FrameWrapper;
        v11 = 1389LL;
        goto LABEL_10;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
    }
    FrameWrapper = 0;
  }
LABEL_13:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  return (unsigned int)FrameWrapper;
}
