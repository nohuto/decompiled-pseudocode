/*
 * XREFs of ?OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1803117A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0WeakRef@WRL@Microsoft@@QEAA@AEBV?$ComPtr@UIWeakReference@@@12@@Z @ 0x1800823C0 (--0WeakRef@WRL@Microsoft@@QEAA@AEBV-$ComPtr@UIWeakReference@@@12@@Z.c)
 *     ??1Iterator@?$ObjectArrayAdapterImpl@UIImmersiveApplicationInternal@@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@details@@QEAA@XZ @ 0x180094680 (--1Iterator@-$ObjectArrayAdapterImpl@UIImmersiveApplicationInternal@@V-$ComPtr@UIImmersiveApplic.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_531262642ad094c3078a9cb1af58219e___ @ 0x18009C3B8 (Windows--Internal--ComTaskPool--QueueTask__lambda_531262642ad094c3078a9cb1af58219e___.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18014E0A0 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x18030BEEC (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     ?FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@@Z @ 0x18030E9D4 (-FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV-$ComPtr@UIApp.c)
 *     _anonymous_namespace_::GetTaskApartment @ 0x18030FEAC (_anonymous_namespace_--GetTaskApartment.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TouchKeyboardExperienceManager::OnChromeOffsetsChanged(
        TouchKeyboardExperienceManager *this,
        struct IApplicationFrame *a2)
{
  char *v4; // rdi
  int FrameWrapper; // ebx
  __int64 *v6; // rax
  int v7; // eax
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  unsigned int TaskApartment; // eax
  __int64 v11; // rdx
  struct IApplicationFrame *v13; // [rsp+28h] [rbp-18h] BYREF
  __int64 v14[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v16; // [rsp+70h] [rbp+30h] BYREF
  __int64 v17; // [rsp+80h] [rbp+40h] BYREF
  __int64 *v18; // [rsp+88h] [rbp+48h] BYREF

  v17 = 0LL;
  v4 = (char *)this - 120;
  FrameWrapper = TouchKeyboardExperienceManager::FindFrameWrapper((RTL_SRWLOCK *)this - 15, (__int64)a2, &v17);
  if ( FrameWrapper >= 0 )
  {
    v16 = 0LL;
    v18 = &v16;
    v6 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v18);
    v7 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>((__int64)v4, v6);
    FrameWrapper = v7;
    if ( v7 >= 0 )
    {
      v13 = a2;
      Microsoft::WRL::WeakRef::WeakRef(v14, &v16);
      v14[1] = (__int64)v4;
      TaskApartment = anonymous_namespace_::GetTaskApartment();
      FrameWrapper = Windows::Internal::ComTaskPool::QueueTask__lambda_531262642ad094c3078a9cb1af58219e___(
                       TaskApartment,
                       v11,
                       *((_DWORD *)this + 201),
                       &v13);
      details::ObjectArrayAdapterImpl<IImmersiveApplicationInternal,Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::Iterator::~Iterator((__int64)&v13);
      if ( FrameWrapper >= 0 )
      {
        FrameWrapper = 0;
        goto LABEL_8;
      }
      v8 = (unsigned int)FrameWrapper;
      v9 = 1780LL;
    }
    else
    {
      v8 = (unsigned int)v7;
      v9 = 1752LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)v8);
LABEL_8:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  return (unsigned int)FrameWrapper;
}
