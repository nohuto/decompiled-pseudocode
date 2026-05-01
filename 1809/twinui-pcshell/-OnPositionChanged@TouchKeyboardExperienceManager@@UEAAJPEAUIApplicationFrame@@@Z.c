/*
 * XREFs of ?OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1802B8990
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0WeakRef@WRL@Microsoft@@QEAA@AEBV?$ComPtr@UIWeakReference@@@12@@Z @ 0x18008033C (--0WeakRef@WRL@Microsoft@@QEAA@AEBV-$ComPtr@UIWeakReference@@@12@@Z.c)
 *     ??1Iterator@?$ObjectArrayAdapterImpl@UIImmersiveApplicationInternal@@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@details@@QEAA@XZ @ 0x18008CCAC (--1Iterator@-$ObjectArrayAdapterImpl@UIImmersiveApplicationInternal@@V-$ComPtr@UIImmersiveApplic.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_c8b3cfc50c1e59d40f4a103bc0cf4ce9___ @ 0x18009238C (Windows--Internal--ComTaskPool--QueueTask__lambda_c8b3cfc50c1e59d40f4a103bc0cf4ce9___.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180124984 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x1802B366C (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     ?FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@@Z @ 0x1802B5BBC (-FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV-$ComPtr@UIApp.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::OnPositionChanged(
        TouchKeyboardExperienceManager *this,
        struct IApplicationFrame *a2)
{
  char *v4; // rdi
  int FrameWrapper; // ebx
  __int64 *v6; // rax
  int v7; // eax
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
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
      FrameWrapper = Windows::Internal::ComTaskPool::QueueTask__lambda_c8b3cfc50c1e59d40f4a103bc0cf4ce9___(
                       v11,
                       v10,
                       *((_DWORD *)this + 170),
                       &v13);
      details::ObjectArrayAdapterImpl<IImmersiveApplicationInternal,Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::Iterator::~Iterator((__int64)&v13);
      if ( FrameWrapper >= 0 )
      {
        FrameWrapper = 0;
        goto LABEL_8;
      }
      v8 = (unsigned int)FrameWrapper;
      v9 = 1332LL;
    }
    else
    {
      v8 = (unsigned int)v7;
      v9 = 1306LL;
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
