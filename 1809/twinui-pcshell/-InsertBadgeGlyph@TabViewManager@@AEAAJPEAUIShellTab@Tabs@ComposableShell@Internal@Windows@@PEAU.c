/*
 * XREFs of ?InsertBadgeGlyph@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUHSTRING__@@11@Z @ 0x1801DE0E8
 * Callers:
 *     ?TryAssignViewToTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAU_GUID@@@Z @ 0x1801ECEF0 (-TryAssignViewToTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAU_GUID@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TabViewManager::InsertBadgeGlyph(
        TabViewManager *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a2,
        HSTRING a3,
        HSTRING a4,
        HSTRING a5)
{
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v16[2]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v18; // [rsp+70h] [rbp+8h] BYREF

  v16[1] = -2LL;
  v9 = *((_QWORD *)this + 146);
  v18 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 144LL))(v9, &v18);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v12 = *((_QWORD *)this + 146);
    v16[0] = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64, HSTRING, HSTRING, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v12 + 128LL))(
            v12,
            a3,
            a4,
            0LL,
            0LL,
            v16);
    v11 = v13;
    if ( v13 >= 0 )
    {
      v13 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v18 + 64LL))(v18, a5);
      v11 = v13;
      if ( v13 >= 0 )
      {
        v13 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 80LL))(v18, v16[0]);
        v11 = v13;
        if ( v13 >= 0 )
        {
          v13 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTab *, __int64, _QWORD))(*(_QWORD *)a2 + 264LL))(
                  a2,
                  v18,
                  0LL);
          v11 = v13;
          if ( v13 >= 0 )
          {
            v11 = 0;
            goto LABEL_13;
          }
          v14 = 1624LL;
        }
        else
        {
          v14 = 1622LL;
        }
      }
      else
      {
        v14 = 1621LL;
      }
    }
    else
    {
      v14 = 1619LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v13);
LABEL_13:
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v16);
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x650,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
    (const char *)(unsigned int)v10);
LABEL_14:
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v18);
  return v11;
}
