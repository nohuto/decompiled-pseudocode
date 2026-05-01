/*
 * XREFs of ?OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI_N@Z @ 0x180331318
 * Callers:
 *     ?OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedHideEventArgs@45678@@Z @ 0x180341370 (-OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0WeakRef@WRL@Microsoft@@QEAA@AEBV?$ComPtr@UIWeakReference@@@12@@Z @ 0x180085008 (--0WeakRef@WRL@Microsoft@@QEAA@AEBV-$ComPtr@UIWeakReference@@@12@@Z.c)
 *     ??1Iterator@?$ObjectArrayAdapterImpl@UIImmersiveApplicationInternal@@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@details@@QEAA@XZ @ 0x180096640 (--1Iterator@-$ObjectArrayAdapterImpl@UIImmersiveApplicationInternal@@V-$ComPtr@UIImmersiveApplic.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_3f773d4746d1dec58197fa131fb54ae4___ @ 0x1800A9534 (Windows--Internal--ComTaskPool--QueueTask__lambda_3f773d4746d1dec58197fa131fb54ae4___.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18016D308 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x18032B32C (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     _anonymous_namespace_::GetTaskApartment @ 0x18032F36C (_anonymous_namespace_--GetTaskApartment.c)
 */

// Hidden C++ exception states: #wind=2
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
  unsigned int TaskApartment; // eax
  __int64 v12; // rdx
  __int64 *v14[2]; // [rsp+20h] [rbp-30h] BYREF
  int v15; // [rsp+30h] [rbp-20h] BYREF
  char v16; // [rsp+34h] [rbp-1Ch]
  __int64 v17[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v19; // [rsp+88h] [rbp+38h] BYREF

  v14[1] = (__int64 *)-2LL;
  v19 = 0LL;
  v14[0] = &v19;
  v6 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(v14);
  v7 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>((__int64)this, v6);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v15 = a2;
    v16 = a3;
    Microsoft::WRL::WeakRef::WeakRef(v17, &v19);
    v17[1] = (__int64)this;
    TaskApartment = anonymous_namespace_::GetTaskApartment();
    v8 = Windows::Internal::ComTaskPool::QueueTask__lambda_3f773d4746d1dec58197fa131fb54ae4___(
           TaskApartment,
           v12,
           *((_DWORD *)this + 231),
           (__int64)&v15);
    details::ObjectArrayAdapterImpl<IImmersiveApplicationInternal,Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::Iterator::~Iterator((__int64)&v15);
    if ( v8 >= 0 )
    {
      v8 = 0;
      goto LABEL_7;
    }
    v9 = (unsigned int)v8;
    v10 = 597LL;
  }
  else
  {
    v9 = (unsigned int)v7;
    v10 = 524LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)v9);
LABEL_7:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
  return (unsigned int)v8;
}
