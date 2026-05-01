/*
 * XREFs of ?OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N@Z @ 0x180331408
 * Callers:
 *     ?OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedResizeEventArgs@45678@@Z @ 0x180341600 (-OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Tex.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0WeakRef@WRL@Microsoft@@QEAA@AEBV?$ComPtr@UIWeakReference@@@12@@Z @ 0x180085008 (--0WeakRef@WRL@Microsoft@@QEAA@AEBV-$ComPtr@UIWeakReference@@@12@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_0cdbb88562623b41bf5d2249de419233___ @ 0x1800A938C (Windows--Internal--ComTaskPool--QueueTask__lambda_0cdbb88562623b41bf5d2249de419233___.c)
 *     _lambda_4728da50fba771f61f09ce8410cf9c38_::__lambda_4728da50fba771f61f09ce8410cf9c38_ @ 0x1800A9B38 (_lambda_4728da50fba771f61f09ce8410cf9c38_--__lambda_4728da50fba771f61f09ce8410cf9c38_.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18016D308 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x18032B32C (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     _anonymous_namespace_::GetTaskApartment @ 0x18032F36C (_anonymous_namespace_--GetTaskApartment.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::OnInputAppRequestedResize(
        TouchKeyboardExperienceManager *this,
        int a2,
        struct tagRECT *a3,
        char a4)
{
  __int64 *v8; // rax
  int v9; // eax
  int v10; // ebx
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  unsigned int TaskApartment; // eax
  __int64 v14; // rdx
  __int64 v16; // [rsp+20h] [rbp-50h] BYREF
  __int64 *v17[2]; // [rsp+28h] [rbp-48h] BYREF
  int v18; // [rsp+38h] [rbp-38h] BYREF
  __int128 v19; // [rsp+3Ch] [rbp-34h]
  char v20; // [rsp+4Ch] [rbp-24h]
  __int64 v21[2]; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v17[1] = (__int64 *)-2LL;
  v16 = 0LL;
  v17[0] = &v16;
  v8 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(v17);
  v9 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>((__int64)this, v8);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v18 = a2;
    v19 = (__int128)*a3;
    v20 = a4;
    Microsoft::WRL::WeakRef::WeakRef(v21, &v16);
    v21[1] = (__int64)this;
    TaskApartment = anonymous_namespace_::GetTaskApartment();
    v10 = Windows::Internal::ComTaskPool::QueueTask__lambda_0cdbb88562623b41bf5d2249de419233___(
            TaskApartment,
            v14,
            *((_DWORD *)this + 231),
            (__int64)&v18);
    lambda_4728da50fba771f61f09ce8410cf9c38_::__lambda_4728da50fba771f61f09ce8410cf9c38_((__int64)&v18);
    if ( v10 >= 0 )
    {
      v10 = 0;
      goto LABEL_7;
    }
    v11 = (unsigned int)v10;
    v12 = 636LL;
  }
  else
  {
    v11 = (unsigned int)v9;
    v12 = 605LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)v11);
LABEL_7:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
  return (unsigned int)v10;
}
