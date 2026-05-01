/*
 * XREFs of ?OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N11@Z @ 0x1802B8854
 * Callers:
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x1802C4580 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0WeakRef@WRL@Microsoft@@QEAA@AEBV?$ComPtr@UIWeakReference@@@12@@Z @ 0x18008033C (--0WeakRef@WRL@Microsoft@@QEAA@AEBV-$ComPtr@UIWeakReference@@@12@@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_4ae43a7ebf3caa9980047f7d59b4d07c___ @ 0x180092064 (Windows--Internal--ComTaskPool--QueueTask__lambda_4ae43a7ebf3caa9980047f7d59b4d07c___.c)
 *     _lambda_95049987556ed2fca2fb7bfd11a04e1e_::__lambda_95049987556ed2fca2fb7bfd11a04e1e_ @ 0x1800925BC (_lambda_95049987556ed2fca2fb7bfd11a04e1e_--__lambda_95049987556ed2fca2fb7bfd11a04e1e_.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180124984 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x1802B366C (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 */

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
  __int128 v15; // xmm0
  unsigned int v16; // r8d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v20; // [rsp+20h] [rbp-40h] BYREF
  __int64 *v21; // [rsp+28h] [rbp-38h] BYREF
  int v22; // [rsp+30h] [rbp-30h] BYREF
  __int128 v23; // [rsp+34h] [rbp-2Ch]
  char v24; // [rsp+44h] [rbp-1Ch]
  bool v25; // [rsp+45h] [rbp-1Bh]
  bool v26; // [rsp+46h] [rbp-1Ah]
  __int64 v27[3]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v20 = 0LL;
  v21 = &v20;
  v10 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v21);
  v11 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>((__int64)this, v10);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v15 = (__int128)*a3;
    v25 = a5;
    v26 = a6;
    v22 = a2;
    v23 = v15;
    v24 = a4;
    Microsoft::WRL::WeakRef::WeakRef(v27, &v20);
    v16 = *((_DWORD *)this + 200);
    v27[1] = (__int64)this;
    v12 = Windows::Internal::ComTaskPool::QueueTask__lambda_4ae43a7ebf3caa9980047f7d59b4d07c___(
            v18,
            v17,
            v16,
            (__int64)&v22);
    lambda_95049987556ed2fca2fb7bfd11a04e1e_::__lambda_95049987556ed2fca2fb7bfd11a04e1e_((__int64)&v22);
    if ( v12 >= 0 )
    {
      v12 = 0;
      goto LABEL_7;
    }
    v13 = (unsigned int)v12;
    v14 = 344LL;
  }
  else
  {
    v13 = (unsigned int)v11;
    v14 = 279LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)v13);
LABEL_7:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
  return (unsigned int)v12;
}
