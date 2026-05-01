/*
 * XREFs of ?OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x180330D80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0WeakRef@WRL@Microsoft@@QEAA@AEBV?$ComPtr@UIWeakReference@@@12@@Z @ 0x180085008 (--0WeakRef@WRL@Microsoft@@QEAA@AEBV-$ComPtr@UIWeakReference@@@12@@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_39b1066faff2db62f569cb34f066b88c___ @ 0x1800A94A0 (Windows--Internal--ComTaskPool--QueueTask__lambda_39b1066faff2db62f569cb34f066b88c___.c)
 *     ??1OWNERSHIP_CHANGE_INFO@@QEAA@XZ @ 0x1800A9B50 (--1OWNERSHIP_CHANGE_INFO@@QEAA@XZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18016D308 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x18032B32C (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     ?FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@@Z @ 0x18032DE94 (-FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV-$ComPtr@UIApp.c)
 *     _anonymous_namespace_::GetTaskApartment @ 0x18032F36C (_anonymous_namespace_--GetTaskApartment.c)
 */

// Hidden C++ exception states: #wind=3
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
  unsigned int TaskApartment; // eax
  __int64 v13; // rdx
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
        v11 = 1641LL;
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
      TaskApartment = anonymous_namespace_::GetTaskApartment();
      FrameWrapper = Windows::Internal::ComTaskPool::QueueTask__lambda_39b1066faff2db62f569cb34f066b88c___(
                       TaskApartment,
                       v13,
                       *((_DWORD *)this + 201),
                       v17);
      OWNERSHIP_CHANGE_INFO::~OWNERSHIP_CHANGE_INFO((OWNERSHIP_CHANGE_INFO *)v17);
      if ( FrameWrapper < 0 )
      {
        v10 = (unsigned int)FrameWrapper;
        v11 = 1685LL;
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
