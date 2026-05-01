/*
 * XREFs of ?GetAdjacentDesktop@VirtualDesktopController@@UEAAJPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4FocusNavigationDirection@Input@Xaml@UI@6@PEAPEAU23456@@Z @ 0x180358C30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18007EED8 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall VirtualDesktopController::GetAdjacentDesktop(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        int a3,
        _QWORD *a4)
{
  RTL_SRWLOCK *v8; // rsi
  __int64 v9; // r12
  unsigned int v10; // ebx
  __int64 v11; // rbx
  int v12; // eax
  __int64 *v13; // rax
  int v14; // edi
  int v15; // edi
  int v16; // edi
  int v17; // edi
  unsigned int v18; // edi
  int v19; // eax
  __int64 v20; // rdx
  __int64 v22; // [rsp+30h] [rbp-20h] BYREF
  __int64 v23[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  __int64 v25; // [rsp+90h] [rbp+40h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+58h] BYREF

  v23[1] = -2LL;
  *a4 = 0LL;
  v8 = (RTL_SRWLOCK *)(a1 + 112);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 112));
  v23[2] = (__int64)v8;
  v9 = *(_QWORD *)(a1 + 72);
  if ( !v9 )
  {
    v10 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC7,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)0x8007139FLL);
    goto LABEL_29;
  }
  v11 = 0LL;
  v22 = 0LL;
  if ( !a2 )
  {
LABEL_7:
    if ( a3 )
    {
      v14 = a3 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            v17 = v16 - 1;
            if ( v17 )
            {
              if ( v17 == 1 )
                v18 = 4;
              else
                v18 = 0;
            }
            else
            {
              v18 = 3;
            }
          }
          else
          {
            v18 = 2;
          }
        }
        else
        {
          v18 = 1;
        }
      }
      else
      {
        v18 = 6;
      }
    }
    else
    {
      v18 = 5;
    }
    v26 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
    v19 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)v9 + 64LL))(v9, v11, v18, &v26);
    v10 = v19;
    if ( v19 >= 0 )
    {
      v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD *))(**(_QWORD **)(a1 + 88) + 24LL))(
              *(_QWORD *)(a1 + 88),
              v26,
              a4);
      v10 = v19;
      if ( v19 >= 0 )
        goto LABEL_27;
      v20 = 223LL;
    }
    else
    {
      if ( v19 == -2147316575 )
      {
        v10 = 0;
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
  v12 = (**a2)(a2, &GUID_ead341c8_6a95_4b6a_9e8f_37d7170f85f2, &v25);
  v10 = v12;
  if ( v12 >= 0 )
  {
    v13 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 24LL))(v25, v23);
    Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=(&v22, v13);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v23);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
    v9 = *(_QWORD *)(a1 + 72);
    v11 = v22;
    goto LABEL_7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xCD,
    (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
    (const char *)(unsigned int)v12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
LABEL_28:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
LABEL_29:
  if ( v8 )
    ReleaseSRWLockShared(v8);
  return v10;
}
