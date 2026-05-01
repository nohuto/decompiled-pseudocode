/*
 * XREFs of ?SetIconOnViewTabs@DefaultIconManager@@AEAAJPEAUIApplicationView@@PEAUIShellTabImage@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801FFF88
 * Callers:
 *     _lambda_f27e537ed1ad8c8456023c324c3ce255_::operator() @ 0x1801FE400 (_lambda_f27e537ed1ad8c8456023c324c3ce255_--operator().c)
 *     ?SetIconForViewAsync@DefaultIconManager@@UEAAJPEAUIApplicationView@@@Z @ 0x1801FFE90 (-SetIconForViewAsync@DefaultIconManager@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x1801F982C (-query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall DefaultIconManager::SetIconOnViewTabs(
        DefaultIconManager *this,
        struct IApplicationView *a2,
        struct Windows::Internal::ComposableShell::Tabs::IShellTabImage *a3)
{
  struct IWeakReference *v6; // rcx
  int v7; // eax
  unsigned int v8; // edi
  __int64 *v9; // rbx
  __int64 *v10; // rsi
  __int64 *v11; // rdi
  __int64 *v12; // rbx
  int v13; // eax
  _BYTE v14[24]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  void *v16; // [rsp+60h] [rbp+20h] BYREF

  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x215,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v6 = (struct IWeakReference *)*((_QWORD *)this + 18);
  if ( v6 )
  {
    wil::details::weak_query_policy::query(v6, &GUID_e83d78bd_0b44_4cec_9830_1db207e411f2, &v16);
    v6 = (struct IWeakReference *)v16;
  }
  else
  {
    v16 = 0LL;
  }
  if ( v6 )
  {
    memset(v14, 0, sizeof(v14));
    v7 = ((__int64 (__fastcall *)(struct IWeakReference *, struct IApplicationView *, _BYTE *))v6->lpVtbl[1].QueryInterface)(
           v6,
           a2,
           v14);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x21B,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
        (const char *)(unsigned int)v7);
      v9 = *(__int64 **)v14;
      if ( *(_QWORD *)v14 )
      {
        v10 = *(__int64 **)&v14[8];
        if ( *(_QWORD *)v14 != *(_QWORD *)&v14[8] )
        {
          do
            wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v9++);
          while ( v9 != v10 );
          v9 = *(__int64 **)v14;
        }
        std::_Deallocate<16,0>(
          v9,
          (const struct std::nothrow_t *)((*(_QWORD *)&v14[16] - (_QWORD)v9) & 0xFFFFFFFFFFFFFFF8uLL));
        memset(v14, 0, sizeof(v14));
      }
      goto LABEL_24;
    }
    v11 = *(__int64 **)&v14[8];
    v12 = *(__int64 **)v14;
    if ( *(_QWORD *)v14 != *(_QWORD *)&v14[8] )
    {
      do
      {
        v13 = (*(__int64 (__fastcall **)(__int64, struct Windows::Internal::ComposableShell::Tabs::IShellTabImage *))(*(_QWORD *)*v12 + 128LL))(
                *v12,
                a3);
        if ( v13 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            544LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
            (const char *)(unsigned int)v13);
        ++v12;
      }
      while ( v12 != v11 );
      v11 = *(__int64 **)&v14[8];
      v12 = *(__int64 **)v14;
    }
    if ( v12 )
    {
      if ( v12 != v11 )
      {
        do
          wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v12++);
        while ( v12 != v11 );
        v12 = *(__int64 **)v14;
      }
      std::_Deallocate<16,0>(
        v12,
        (const struct std::nothrow_t *)((*(_QWORD *)&v14[16] - (_QWORD)v12) & 0xFFFFFFFFFFFFFFF8uLL));
    }
  }
  v8 = 0;
LABEL_24:
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v16);
  return v8;
}
