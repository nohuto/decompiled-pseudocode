/*
 * XREFs of ?OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N@Z @ 0x180311F38
 * Callers:
 *     ?OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedResizeEventArgs@45678@@Z @ 0x180321DC0 (-OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Tex.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0WeakRef@WRL@Microsoft@@QEAA@AEBV?$ComPtr@UIWeakReference@@@12@@Z @ 0x1800823C0 (--0WeakRef@WRL@Microsoft@@QEAA@AEBV-$ComPtr@UIWeakReference@@@12@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_8475afa15079342a15ccc51689e4ed78___ @ 0x18009C444 (Windows--Internal--ComTaskPool--QueueTask__lambda_8475afa15079342a15ccc51689e4ed78___.c)
 *     _lambda_a5314efdfe6b9f90147b5239d1654f63_::__lambda_a5314efdfe6b9f90147b5239d1654f63_ @ 0x18009C9D8 (_lambda_a5314efdfe6b9f90147b5239d1654f63_--__lambda_a5314efdfe6b9f90147b5239d1654f63_.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18014E0A0 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x18030BEEC (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     _anonymous_namespace_::GetTaskApartment @ 0x18030FEAC (_anonymous_namespace_--GetTaskApartment.c)
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
    v10 = Windows::Internal::ComTaskPool::QueueTask__lambda_8475afa15079342a15ccc51689e4ed78___(
            TaskApartment,
            v14,
            *((_DWORD *)this + 231),
            (__int64)&v18);
    lambda_a5314efdfe6b9f90147b5239d1654f63_::__lambda_a5314efdfe6b9f90147b5239d1654f63_((__int64)&v18);
    if ( v10 >= 0 )
    {
      v10 = 0;
      goto LABEL_7;
    }
    v11 = (unsigned int)v10;
    v12 = 625LL;
  }
  else
  {
    v11 = (unsigned int)v9;
    v12 = 594LL;
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
