/*
 * XREFs of ?OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N@Z @ 0x1802B8774
 * Callers:
 *     ?OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedResizeEventArgs@45678@@Z @ 0x1802C41E0 (-OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Tex.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0WeakRef@WRL@Microsoft@@QEAA@AEBV?$ComPtr@UIWeakReference@@@12@@Z @ 0x18008033C (--0WeakRef@WRL@Microsoft@@QEAA@AEBV-$ComPtr@UIWeakReference@@@12@@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_95049987556ed2fca2fb7bfd11a04e1e___ @ 0x18009216C (Windows--Internal--ComTaskPool--QueueTask__lambda_95049987556ed2fca2fb7bfd11a04e1e___.c)
 *     _lambda_95049987556ed2fca2fb7bfd11a04e1e_::__lambda_95049987556ed2fca2fb7bfd11a04e1e_ @ 0x1800925BC (_lambda_95049987556ed2fca2fb7bfd11a04e1e_--__lambda_95049987556ed2fca2fb7bfd11a04e1e_.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180124984 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x1802B366C (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 */

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
  __int128 v13; // xmm0
  unsigned int v14; // r8d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v18; // [rsp+20h] [rbp-40h] BYREF
  __int64 *v19; // [rsp+28h] [rbp-38h] BYREF
  int v20; // [rsp+30h] [rbp-30h] BYREF
  __int128 v21; // [rsp+34h] [rbp-2Ch]
  char v22; // [rsp+44h] [rbp-1Ch]
  __int64 v23[3]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v18 = 0LL;
  v19 = &v18;
  v8 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v19);
  v9 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>((__int64)this, v8);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v13 = (__int128)*a3;
    v20 = a2;
    v22 = a4;
    v21 = v13;
    Microsoft::WRL::WeakRef::WeakRef(v23, &v18);
    v14 = *((_DWORD *)this + 200);
    v23[1] = (__int64)this;
    v10 = Windows::Internal::ComTaskPool::QueueTask__lambda_95049987556ed2fca2fb7bfd11a04e1e___(
            v16,
            v15,
            v14,
            (__int64)&v20);
    lambda_95049987556ed2fca2fb7bfd11a04e1e_::__lambda_95049987556ed2fca2fb7bfd11a04e1e_((__int64)&v20);
    if ( v10 >= 0 )
    {
      v10 = 0;
      goto LABEL_7;
    }
    v11 = (unsigned int)v10;
    v12 = 443LL;
  }
  else
  {
    v11 = (unsigned int)v9;
    v12 = 422LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)v11);
LABEL_7:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
  return (unsigned int)v10;
}
