/*
 * XREFs of ?OnTitleBarColorUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x180055190
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_e755f42c8be05073406d1904d60bdfa5___ @ 0x180089790 (Windows--Internal--ComTaskPool--QueueTask__lambda_e755f42c8be05073406d1904d60bdfa5___.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800DD450 (--1-$ComPtr@U-$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collectio.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CApplicationManager::OnTitleBarColorUpdated(CApplicationManager *this, HWND a2)
{
  int v4; // ebx
  _QWORD *v5; // rcx
  __int64 v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rbx
  int v9; // r14d
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 (__fastcall ***v12)(_QWORD, GUID *, _QWORD **); // rcx
  _QWORD *v13; // rcx
  int v14; // eax
  _QWORD *v15; // rcx
  HWND v17; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18; // [rsp+48h] [rbp-18h]
  char v19; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  _QWORD *v21; // [rsp+A0h] [rbp+40h] BYREF
  _QWORD *v22; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v23; // [rsp+B8h] [rbp+58h] BYREF

  v4 = -2147467261;
  v22 = 0LL;
  if ( *((_QWORD *)this + 33) )
  {
    v21 = 0LL;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v5 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
    }
    v21 = 0LL;
    v6 = 0LL;
    v7 = 0LL;
    if ( *((_QWORD *)this + 37) )
    {
      while ( 1 )
      {
        v8 = *(_QWORD *)(*((_QWORD *)this + 36) + 8 * v7);
        if ( v8 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
        v9 = -1;
        v23 = 0LL;
        if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v8)(
               v8,
               &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
               &v23) >= 0 )
        {
          v17 = a2;
          v18 = 0LL;
          v19 = 0;
          v9 = ((*(unsigned __int8 (__fastcall **)(__int64, HWND *, _QWORD))(*(_QWORD *)v23 + 296LL))(v23, &v17, 0LL) != 0)
             - 1;
          v10 = v18;
          if ( v18 )
          {
            v18 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
          }
        }
        v11 = v23;
        if ( v23 )
        {
          v23 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        if ( !v9 )
          break;
        if ( (unsigned __int64)++v7 >= *((_QWORD *)this + 37) )
          goto LABEL_14;
      }
      v6 = v7;
      v4 = 0;
    }
    else
    {
LABEL_14:
      v4 = -2147319765;
    }
    if ( v4 >= 0 )
    {
      v12 = *(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD **))(*((_QWORD *)this + 36) + 8 * v6);
      v4 = (**v12)(v12, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v21);
      if ( v4 >= 0 )
        v4 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD **))(*v21 + 496LL))(v21, &v22);
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v13 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
    }
    if ( v4 >= 0 )
    {
      v21 = v22;
      v22 = 0LL;
      v14 = Windows::Internal::ComTaskPool::QueueTask__lambda_e755f42c8be05073406d1904d60bdfa5___(v13, &v21);
      v4 = v14;
      if ( v14 >= 0 )
        v4 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2025,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)(unsigned int)v14);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(&v21);
    }
  }
  v15 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v15 + 16LL))(v15, *v15);
  }
  return (unsigned int)v4;
}
