/*
 * XREFs of ?OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N11@Z @ 0x18031205C
 * Callers:
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x180322260 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0WeakRef@WRL@Microsoft@@QEAA@AEBV?$ComPtr@UIWeakReference@@@12@@Z @ 0x1800823C0 (--0WeakRef@WRL@Microsoft@@QEAA@AEBV-$ComPtr@UIWeakReference@@@12@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_a5314efdfe6b9f90147b5239d1654f63___ @ 0x18009C56C (Windows--Internal--ComTaskPool--QueueTask__lambda_a5314efdfe6b9f90147b5239d1654f63___.c)
 *     _lambda_a5314efdfe6b9f90147b5239d1654f63_::__lambda_a5314efdfe6b9f90147b5239d1654f63_ @ 0x18009C9D8 (_lambda_a5314efdfe6b9f90147b5239d1654f63_--__lambda_a5314efdfe6b9f90147b5239d1654f63_.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18014E0A0 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x18030BEEC (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     _anonymous_namespace_::GetTaskApartment @ 0x18030FEAC (_anonymous_namespace_--GetTaskApartment.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::OnInputAppRequestedShow(
        TouchKeyboardExperienceManager *this,
        int a2,
        struct tagRECT *a3,
        char a4,
        bool a5,
        bool a6)
{
  __int64 *v10; // rax
  int v11; // eax
  int v12; // ebx
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  unsigned int TaskApartment; // eax
  __int64 v16; // rdx
  __int64 v18; // [rsp+20h] [rbp-50h] BYREF
  __int64 *v19[2]; // [rsp+28h] [rbp-48h] BYREF
  int v20; // [rsp+38h] [rbp-38h] BYREF
  __int128 v21; // [rsp+3Ch] [rbp-34h]
  char v22; // [rsp+4Ch] [rbp-24h]
  bool v23; // [rsp+4Dh] [rbp-23h]
  bool v24; // [rsp+4Eh] [rbp-22h]
  __int64 v25[2]; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v19[1] = (__int64 *)-2LL;
  v18 = 0LL;
  v19[0] = &v18;
  v10 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(v19);
  v11 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>((__int64)this, v10);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v20 = a2;
    v21 = (__int128)*a3;
    v22 = a4;
    v23 = a5;
    v24 = a6;
    Microsoft::WRL::WeakRef::WeakRef(v25, &v18);
    v25[1] = (__int64)this;
    TaskApartment = anonymous_namespace_::GetTaskApartment();
    v12 = Windows::Internal::ComTaskPool::QueueTask__lambda_a5314efdfe6b9f90147b5239d1654f63___(
            TaskApartment,
            v16,
            *((_DWORD *)this + 231),
            (__int64)&v20);
    lambda_a5314efdfe6b9f90147b5239d1654f63_::__lambda_a5314efdfe6b9f90147b5239d1654f63_((__int64)&v20);
    if ( v12 >= 0 )
    {
      v12 = 0;
      goto LABEL_7;
    }
    v13 = (unsigned int)v12;
    v14 = 506LL;
  }
  else
  {
    v13 = (unsigned int)v11;
    v14 = 434LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)v13);
LABEL_7:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
  return (unsigned int)v12;
}
