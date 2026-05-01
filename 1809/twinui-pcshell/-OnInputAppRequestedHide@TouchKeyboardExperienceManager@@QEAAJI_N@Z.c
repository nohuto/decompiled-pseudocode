/*
 * XREFs of ?OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI_N@Z @ 0x1802B86AC
 * Callers:
 *     ?OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedHideEventArgs@45678@@Z @ 0x1802C3FA0 (-OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0WeakRef@WRL@Microsoft@@QEAA@AEBV?$ComPtr@UIWeakReference@@@12@@Z @ 0x18008033C (--0WeakRef@WRL@Microsoft@@QEAA@AEBV-$ComPtr@UIWeakReference@@@12@@Z.c)
 *     ??1Iterator@?$ObjectArrayAdapterImpl@UIImmersiveApplicationInternal@@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@details@@QEAA@XZ @ 0x18008CCAC (--1Iterator@-$ObjectArrayAdapterImpl@UIImmersiveApplicationInternal@@V-$ComPtr@UIImmersiveApplic.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_090ae1e053e5c7adb69314d8c41aea26___ @ 0x180091F5C (Windows--Internal--ComTaskPool--QueueTask__lambda_090ae1e053e5c7adb69314d8c41aea26___.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180124984 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x1802B366C (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::OnInputAppRequestedHide(
        TouchKeyboardExperienceManager *this,
        int a2,
        char a3)
{
  __int64 *v6; // rax
  int v7; // eax
  int v8; // ebx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  unsigned int v11; // r8d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 *v15; // [rsp+20h] [rbp-20h] BYREF
  int v16; // [rsp+28h] [rbp-18h] BYREF
  char v17; // [rsp+2Ch] [rbp-14h]
  __int64 v18[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v20; // [rsp+78h] [rbp+38h] BYREF

  v20 = 0LL;
  v15 = &v20;
  v6 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v15);
  v7 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>((__int64)this, v6);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v16 = a2;
    v17 = a3;
    Microsoft::WRL::WeakRef::WeakRef(v18, &v20);
    v11 = *((_DWORD *)this + 200);
    v18[1] = (__int64)this;
    v8 = Windows::Internal::ComTaskPool::QueueTask__lambda_090ae1e053e5c7adb69314d8c41aea26___(
           v13,
           v12,
           v11,
           (__int64)&v16);
    details::ObjectArrayAdapterImpl<IImmersiveApplicationInternal,Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::Iterator::~Iterator((__int64)&v16);
    if ( v8 >= 0 )
    {
      v8 = 0;
      goto LABEL_7;
    }
    v9 = (unsigned int)v8;
    v10 = 414LL;
  }
  else
  {
    v9 = (unsigned int)v7;
    v10 = 351LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)v9);
LABEL_7:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
  return (unsigned int)v8;
}
