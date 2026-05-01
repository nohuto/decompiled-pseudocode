/*
 * XREFs of ?UpdateIconForAppUserModelId@DefaultIconManager@@AEAAJPEAUIShellTabImage@Tabs@ComposableShell@Internal@Windows@@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180200830
 * Callers:
 *     ?UpdateImageCache@DefaultIconManager@@AEAAJXZ @ 0x180200A54 (-UpdateImageCache@DefaultIconManager@@AEAAJXZ.c)
 *     ?UpdateViewFromCollectionTile@DefaultIconManager@@AEAAJPEAUICollectionTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x180200D94 (-UpdateViewFromCollectionTile@DefaultIconManager@@AEAAJPEAUICollectionTile@UnifiedTile@Shell@Win.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800DF27C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x1801F982C (-query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DefaultIconManager::UpdateIconForAppUserModelId(
        DefaultIconManager *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTabImage *a2,
        const struct Microsoft::WRL::Wrappers::HString *a3,
        const char *a4)
{
  DefaultIconManager *v6; // rax
  struct IWeakReference *v7; // rcx
  int v8; // eax
  unsigned int v9; // edi
  __int64 *v10; // rbx
  __int64 *v11; // rsi
  const char *v12; // r9
  __int64 result; // rax
  __int64 *v14; // rbx
  unsigned __int128 v15; // kr10_16
  __int64 v16; // r15
  int v17; // eax
  _OWORD v18[3]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  void *v20; // [rsp+68h] [rbp+10h] BYREF

  v6 = this;
  if ( !a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      577LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
      a4);
  try
  {
    v7 = (struct IWeakReference *)*((_QWORD *)v6 + 18);
    if ( v7 )
    {
      wil::details::weak_query_policy::query(v7, &GUID_e83d78bd_0b44_4cec_9830_1db207e411f2, &v20);
      v7 = (struct IWeakReference *)v20;
    }
    else
    {
      v20 = 0LL;
    }
    if ( v7 )
    {
      memset(v18, 0, 24);
      v8 = ((__int64 (__fastcall *)(struct IWeakReference *, const struct Microsoft::WRL::Wrappers::HString *, _OWORD *))v7->lpVtbl[1].AddRef)(
             v7,
             a3,
             v18);
      v9 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x247,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
          (const char *)(unsigned int)v8);
        v10 = *(__int64 **)&v18[0];
        if ( *(_QWORD *)&v18[0] )
        {
          v11 = (__int64 *)*((_QWORD *)&v18[0] + 1);
          if ( *(_QWORD *)&v18[0] != *((_QWORD *)&v18[0] + 1) )
          {
            do
              wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v10++);
            while ( v10 != v11 );
            v10 = *(__int64 **)&v18[0];
          }
          std::_Deallocate<16,0>(
            v10,
            (const struct std::nothrow_t *)((*(_QWORD *)&v18[1] - (_QWORD)v10) & 0xFFFFFFFFFFFFFFF8uLL));
          memset(v18, 0, 24);
        }
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v20);
        return v9;
      }
      v14 = *(__int64 **)&v18[0];
      v15 = v18[0];
      v16 = *((_QWORD *)&v18[0] + 1);
      while ( (_QWORD)v15 != v16 )
      {
        v17 = (*(__int64 (__fastcall **)(_QWORD, struct Windows::Internal::ComposableShell::Tabs::IShellTabImage *))(**(_QWORD **)v15 + 128LL))(
                *(_QWORD *)v15,
                a2);
        if ( v17 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            587LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
            (const char *)(unsigned int)v17);
        v14 = *(__int64 **)&v18[0];
        v15 = __PAIR128__(*((unsigned __int64 *)&v18[0] + 1), (__int64)v15 + 8);
      }
      if ( v14 )
      {
        if ( v14 != *((__int64 **)&v15 + 1) )
        {
          do
            wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v14++);
          while ( v14 != *((__int64 **)&v15 + 1) );
          v14 = *(__int64 **)&v18[0];
        }
        std::_Deallocate<16,0>(
          v14,
          (const struct std::nothrow_t *)((*(_QWORD *)&v18[1] - (_QWORD)v14) & 0xFFFFFFFFFFFFFFF8uLL));
      }
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v20);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v20) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x251,
                     (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
                     v12);
    return (unsigned int)v20;
  }
  return result;
}
