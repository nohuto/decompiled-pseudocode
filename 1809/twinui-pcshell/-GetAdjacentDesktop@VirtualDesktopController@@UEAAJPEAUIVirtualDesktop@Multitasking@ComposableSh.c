/*
 * XREFs of ?GetAdjacentDesktop@VirtualDesktopController@@UEAAJPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4FocusNavigationDirection@Input@Xaml@UI@6@PEAPEAU23456@@Z @ 0x1802D8420
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18007FCAC (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall VirtualDesktopController::GetAdjacentDesktop(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        int a3,
        _QWORD *a4)
{
  RTL_SRWLOCK *v8; // r14
  unsigned int v9; // ebx
  __int64 v10; // rbx
  int v11; // eax
  __int64 *v12; // rax
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi
  unsigned int v17; // esi
  __int64 v18; // rdi
  int v19; // eax
  __int64 v20; // rdx
  __int64 v22; // [rsp+30h] [rbp-20h] BYREF
  __int64 v23[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v25; // [rsp+80h] [rbp+30h] BYREF
  __int64 v26; // [rsp+98h] [rbp+48h] BYREF

  v23[1] = -2LL;
  *a4 = 0LL;
  v8 = (RTL_SRWLOCK *)(a1 + 112);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 112));
  v23[2] = (__int64)v8;
  if ( !*(_QWORD *)(a1 + 72) )
  {
    v9 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC7,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)0x8007139FLL);
    goto LABEL_29;
  }
  v10 = 0LL;
  v22 = 0LL;
  if ( !a2 )
  {
LABEL_7:
    if ( a3 )
    {
      v13 = a3 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          v15 = v14 - 1;
          if ( v15 )
          {
            v16 = v15 - 1;
            if ( v16 )
            {
              if ( v16 == 1 )
                v17 = 4;
              else
                v17 = 0;
            }
            else
            {
              v17 = 3;
            }
          }
          else
          {
            v17 = 2;
          }
        }
        else
        {
          v17 = 1;
        }
      }
      else
      {
        v17 = 6;
      }
    }
    else
    {
      v17 = 5;
    }
    v26 = 0LL;
    v18 = *(_QWORD *)(a1 + 72);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
    v19 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)v18 + 64LL))(v18, v10, v17, &v26);
    v9 = v19;
    if ( v19 >= 0 )
    {
      v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD *))(**(_QWORD **)(a1 + 88) + 24LL))(
              *(_QWORD *)(a1 + 88),
              v26,
              a4);
      v9 = v19;
      if ( v19 >= 0 )
        goto LABEL_27;
      v20 = 223LL;
    }
    else
    {
      if ( v19 == -2147316575 )
      {
        v9 = 0;
LABEL_27:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
        goto LABEL_28;
      }
      v20 = 220LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)(unsigned int)v19);
    goto LABEL_27;
  }
  v25 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
  v11 = (**a2)(a2, &GUID_ead341c8_6a95_4b6a_9e8f_37d7170f85f2, &v25);
  v9 = v11;
  if ( v11 >= 0 )
  {
    v12 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 24LL))(v25, v23);
    Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=(&v22, v12);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v23);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
    v10 = v22;
    goto LABEL_7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xCD,
    (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
    (const char *)(unsigned int)v11);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
LABEL_28:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
LABEL_29:
  if ( v8 )
    ReleaseSRWLockShared(v8);
  return v9;
}
