/*
 * XREFs of ?OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N11@Z @ 0x18033152C
 * Callers:
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x180341AA0 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_4728da50fba771f61f09ce8410cf9c38___ @ 0x1800A95C8 (Windows--Internal--ComTaskPool--QueueTask__lambda_4728da50fba771f61f09ce8410cf9c38___.c)
 *     _lambda_4728da50fba771f61f09ce8410cf9c38_::_lambda_4728da50fba771f61f09ce8410cf9c38_ @ 0x1800A99C0 (_lambda_4728da50fba771f61f09ce8410cf9c38_--_lambda_4728da50fba771f61f09ce8410cf9c38_.c)
 *     _lambda_4728da50fba771f61f09ce8410cf9c38_::__lambda_4728da50fba771f61f09ce8410cf9c38_ @ 0x1800A9B38 (_lambda_4728da50fba771f61f09ce8410cf9c38_--__lambda_4728da50fba771f61f09ce8410cf9c38_.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x18011E570 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18016D308 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?exchange@_Atomic_bool@std@@QEAA_N_NW4memory_order@2@@Z @ 0x180197CC8 (-exchange@_Atomic_bool@std@@QEAA_N_NW4memory_order@2@@Z.c)
 *     ?SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z @ 0x1801F1BB8 (-SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x18032B32C (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     _anonymous_namespace_::GetTaskApartment @ 0x18032F36C (_anonymous_namespace_--GetTaskApartment.c)
 */

// Hidden C++ exception states: #wind=2
__int64 TouchKeyboardExperienceManager::OnInputAppRequestedShow(
        TouchKeyboardExperienceManager *this,
        int a2,
        struct tagRECT *a3,
        char a4,
        bool a5,
        ...)
{
  __int64 *v7; // rax
  int v8; // eax
  int v9; // ebx
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rbx
  unsigned int TaskApartment; // eax
  __int64 v14; // rdx
  HKEY v15; // rcx
  int v16; // eax
  _BYTE v18[8]; // [rsp+40h] [rbp-39h] BYREF
  int v19; // [rsp+48h] [rbp-31h] BYREF
  __int64 v20; // [rsp+50h] [rbp-29h] BYREF
  __int64 *v21[2]; // [rsp+58h] [rbp-21h] BYREF
  _BYTE v22[40]; // [rsp+68h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+4Fh]
  va_list va; // [rsp+F8h] [rbp+7Fh] BYREF

  va_start(va, a5);
  v21[1] = (__int64 *)-2LL;
  v19 = a2;
  v18[0] = a4;
  v20 = 0LL;
  v21[0] = &v20;
  v7 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(v21);
  v8 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>((__int64)this, v7);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = (unsigned int)v8;
    v11 = 436LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)v10);
    goto LABEL_10;
  }
  v21[0] = (__int64 *)this;
  v12 = lambda_4728da50fba771f61f09ce8410cf9c38_::_lambda_4728da50fba771f61f09ce8410cf9c38_(
          (__int64)v22,
          &v19,
          a3,
          v18,
          &a5,
          (bool *)va,
          &v20,
          v21);
  TaskApartment = anonymous_namespace_::GetTaskApartment();
  v9 = Windows::Internal::ComTaskPool::QueueTask__lambda_4728da50fba771f61f09ce8410cf9c38___(
         TaskApartment,
         v14,
         *((_DWORD *)this + 231),
         v12);
  lambda_4728da50fba771f61f09ce8410cf9c38_::__lambda_4728da50fba771f61f09ce8410cf9c38_((__int64)v22);
  if ( v9 < 0 )
  {
    v10 = (unsigned int)v9;
    v11 = 508LL;
    goto LABEL_5;
  }
  if ( !std::_Atomic_bool::exchange((char *)this + 928, 1) )
  {
    v16 = SHRegSetBOOL(v15, L"Software\\Microsoft\\Input", L"IsInputAppPreloadEnabled", 1);
    if ( v16 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x203,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v16);
  }
  v9 = 0;
LABEL_10:
  Microsoft::WRL::WeakRef::~WeakRef(&v20);
  return (unsigned int)v9;
}
