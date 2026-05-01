/*
 * XREFs of ?OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1802B8D70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_ab0326ecea74eabee98d06838221c40f___ @ 0x180092304 (Windows--Internal--ComTaskPool--QueueTask__lambda_ab0326ecea74eabee98d06838221c40f___.c)
 *     _lambda_ab0326ecea74eabee98d06838221c40f_::_lambda_ab0326ecea74eabee98d06838221c40f_ @ 0x18009256C (_lambda_ab0326ecea74eabee98d06838221c40f_--_lambda_ab0326ecea74eabee98d06838221c40f_.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x1800DD820 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180124984 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x1802B366C (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x1802B8B98 (-OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@In.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::OnViewEvent(
        TouchKeyboardExperienceManager *this,
        struct IUnknown *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *a3)
{
  int v5; // ebx
  struct EventRegistrationToken v6; // r8
  __int64 v7; // rdx
  __int64 *v9; // rax
  int v10; // eax
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  __int64 *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // [rsp+30h] [rbp-30h] BYREF
  int v17[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v18[4]; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  struct IUnknown *v20; // [rsp+88h] [rbp+28h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *v21; // [rsp+90h] [rbp+30h] BYREF
  int v22; // [rsp+98h] [rbp+38h] BYREF

  v21 = a3;
  v20 = a2;
  v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v22);
  if ( v5 < 0 )
  {
    v7 = 1763LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  if ( v22 )
  {
    if ( v22 == 4 )
    {
      v16 = 0LL;
      *(_QWORD *)v17 = &v16;
      v9 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)v17);
      v10 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>((__int64)this, v9);
      v5 = v10;
      if ( v10 >= 0 )
      {
        *(_QWORD *)v17 = this;
        v13 = lambda_ab0326ecea74eabee98d06838221c40f_::_lambda_ab0326ecea74eabee98d06838221c40f_(
                v18,
                &v16,
                (__int64 *)&v20,
                (__int64 *)&v21,
                (__int64 *)v17);
        v5 = Windows::Internal::ComTaskPool::QueueTask__lambda_ab0326ecea74eabee98d06838221c40f___(
               v15,
               v14,
               *((_DWORD *)this + 200),
               v13);
        Microsoft::WRL::WeakRef::~WeakRef(v18);
        if ( v5 >= 0 )
        {
          Microsoft::WRL::WeakRef::~WeakRef(&v16);
          return 0LL;
        }
        v11 = (unsigned int)v5;
        v12 = 1805LL;
      }
      else
      {
        v11 = (unsigned int)v10;
        v12 = 1774LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)v11);
      Microsoft::WRL::WeakRef::~WeakRef(&v16);
      return (unsigned int)v5;
    }
  }
  else
  {
    v5 = TouchKeyboardExperienceManager::OnViewCreated(this, a2, v6);
    if ( v5 < 0 )
    {
      v7 = 1767LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
