/*
 * XREFs of ?RecoverViews@WindowEventDispatcher@@UEAAJUEventRegistrationToken@@PEAPEAUIObjectArray@@@Z @ 0x18027F2A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??1?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000CB40 (--1-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x180026898 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CacheWindowWrapper@WindowEventDispatcher@@AEAAXV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x180034FDC (-CacheWindowWrapper@WindowEventDispatcher@@AEAAXV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_excep.c)
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180036894 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180036E68 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18009A6C8 (--$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIWindowWrapperIn.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$WindowEventDispatcher_RecoveringViews@AEAIPEBGPEBG@ViewManagerInteropTraceLogging@@SAXAEAI$$QEAPEBG1@Z @ 0x180278480 (--$WindowEventDispatcher_RecoveringViews@AEAIPEBGPEBG@ViewManagerInteropTraceLogging@@SAXAEAI$$Q.c)
 *     ?erase@?$vector@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x18028288C (-erase@-$vector@V-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V-$alloca.c)
 */

// Hidden C++ exception states: #wind=6 #try_helpers=1
__int64 __fastcall WindowEventDispatcher::RecoverViews(
        RTL_SRWLOCK *this,
        struct EventRegistrationToken a2,
        struct IObjectArray **a3)
{
  struct IObjectArray **v3; // r12
  RTL_SRWLOCK *v5; // r14
  RTL_SRWLOCK *v6; // r13
  struct _GUID *i; // rdx
  char v8; // al
  wil::details::in1diag3 *v9; // rcx
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  __int64 v12; // rsi
  volatile signed __int32 *v13; // r15
  __int64 v14; // rbx
  const WCHAR *v15; // rax
  _QWORD *Ptr; // rax
  const WCHAR *v17; // rcx
  LPCWCH v18; // rbx
  __int64 **v19; // rax
  int v20; // eax
  const char *v21; // r9
  int v22; // eax
  int v23; // eax
  HSTRING *v24; // rbx
  void *v25; // rcx
  int v26; // eax
  wil::details::in1diag3 *v27; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  void *v32; // [rsp+30h] [rbp-E8h] BYREF
  LPCWCH lpString2; // [rsp+38h] [rbp-E0h] BYREF
  __int64 v34[2]; // [rsp+40h] [rbp-D8h] BYREF
  std::_Ref_count_base *v35[2]; // [rsp+50h] [rbp-C8h] BYREF
  LPCWCH v36; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v37; // [rsp+68h] [rbp-B0h]
  __int128 v38; // [rsp+70h] [rbp-A8h] BYREF
  __int64 *v39; // [rsp+80h] [rbp-98h]
  char v40; // [rsp+88h] [rbp-90h]
  const WCHAR *v41; // [rsp+90h] [rbp-88h]
  RTL_SRWLOCK *v42; // [rsp+98h] [rbp-80h]
  RTL_SRWLOCK *v43; // [rsp+A0h] [rbp-78h]
  LPCWSTR StringRawBuffer; // [rsp+A8h] [rbp-70h] BYREF
  PCWSTR v45; // [rsp+B0h] [rbp-68h] BYREF
  PSRWLOCK SRWLock; // [rsp+B8h] [rbp-60h]
  __int64 v47; // [rsp+C0h] [rbp-58h]
  char v48[8]; // [rsp+C8h] [rbp-50h] BYREF
  char v49[72]; // [rsp+D0h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+0h]
  int v53; // [rsp+138h] [rbp+20h] BYREF

  v47 = -2LL;
  v3 = a3;
  v5 = this;
  v42 = this;
  *a3 = 0LL;
  v6 = this + 53;
  v43 = this + 53;
  AcquireSRWLockExclusive(this + 53);
  SRWLock = v6;
  if ( LOBYTE(v5[56].Ptr) )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1968LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)0x8007139FLL);
LABEL_42:
    wil::details::in1diag3::Throw_Hr(
      v9,
      1981LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)0x80070490LL);
    goto LABEL_43;
  }
  *(_OWORD *)v35 = 0LL;
  for ( i = (struct _GUID *)v5[47].Ptr; i != v5[48].Ptr; ++i )
  {
    if ( *(_QWORD *)(*(_QWORD *)&i->Data1 + 32LL) == a2.value )
    {
      std::shared_ptr<ViewEventRegistration>::operator=(v35, i);
      v8 = 0;
      if ( v35[0] )
        goto LABEL_9;
      break;
    }
  }
  v8 = 1;
LABEL_9:
  v9 = retaddr;
  if ( v8 )
    goto LABEL_42;
  v32 = 0LL;
  v10 = CEnumerableObjectCollection::CreateInstance((__int64)retaddr, i, &v32);
  v11 = retaddr;
  if ( v10 < 0 )
  {
LABEL_43:
    wil::details::in1diag3::Throw_Hr(
      v11,
      1986LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_44;
  }
  v12 = ((char *)v5[44].Ptr - (char *)v5[43].Ptr) >> 3;
  v13 = (volatile signed __int32 *)v35[1];
  while ( 1 )
  {
    v37 = v12;
    if ( !v12 )
      break;
    v14 = *((_QWORD *)v5[43].Ptr + v12 - 1);
    lpString2 = WindowsGetStringRawBuffer(*((HSTRING *)v35[0] + 1), 0LL);
    v15 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 280LL))(v14);
    if ( CompareStringOrdinal(v15, -1, lpString2, -1, 0) == 2 )
    {
      Ptr = v5[43].Ptr;
      v17 = (const WCHAR *)Ptr[v12 - 1];
      v41 = v17;
      v18 = v17;
      lpString2 = v17;
      if ( v17 )
      {
        (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v17 + 8LL))(v17);
        Ptr = v5[43].Ptr;
      }
      std::vector<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>::erase(&v5[43], v48, &Ptr[v12 - 1]);
      wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
        &lpString2,
        (__int64)v34);
      v39 = v34;
      v40 = 1;
      v19 = (__int64 **)&v5[-4];
      v38 = 0LL;
      if ( v13 )
      {
        _InterlockedIncrement(v13 + 2);
        v13 = (volatile signed __int32 *)v35[1];
        v18 = lpString2;
      }
      try
      {
        v38 = *(_OWORD *)v35;
        v36 = v18;
        if ( v41 )
        {
          (*(void (__fastcall **)(LPCWCH))(*(_QWORD *)v18 + 8LL))(v18);
          v19 = (__int64 **)&v5[-4];
        }
        WindowEventDispatcher::CacheWindowWrapper(v19, (__int64 *)&v36, &v38, (const char *)1);
        v20 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v32 + 40LL))(v32, v34[0]);
        if ( v20 >= 0 )
        {
          v40 = 0;
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x7DE,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)(unsigned int)v20);
          std::vector<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>::erase(
            &v5[40],
            v49,
            (char *)v42[41].Ptr - 8);
        }
      }
      catch ( ... )
      {
        wil::details::in1diag3::Log_CaughtException(
          retaddr,
          (void *)0x7E8,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          v21);
        v5 = this;
        v3 = a3;
        v13 = (volatile signed __int32 *)v35[1];
        v12 = v37;
        v6 = v43;
      }
      if ( v40 )
      {
        v40 = 0;
        v22 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v34[0] + 392LL))(v34[0], 0LL);
        if ( v22 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x7D7,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)(unsigned int)v22);
      }
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v34);
      wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>((__int64 *)&lpString2);
    }
    --v12;
  }
  v53 = 0;
  v23 = (*(__int64 (__fastcall **)(void *, int *))(*(_QWORD *)v32 + 24LL))(v32, &v53);
  if ( v23 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x7ED,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v23);
  v24 = (HSTRING *)v35[0];
  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)v35[0] + 1), 0LL);
  v45 = WindowsGetStringRawBuffer(*v24, 0LL);
  ViewManagerInteropTraceLogging::WindowEventDispatcher_RecoveringViews<unsigned int &,unsigned short const *,unsigned short const *>(
    (__int64)&v53,
    &v45,
    &StringRawBuffer);
  v25 = v32;
  if ( !v32 )
  {
    *v3 = 0LL;
    goto LABEL_34;
  }
  v26 = (**(__int64 (__fastcall ***)(void *, GUID *, struct IObjectArray **))v32)(
          v32,
          &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
          v3);
  v27 = retaddr;
  if ( v26 < 0 )
  {
LABEL_44:
    wil::details::in1diag3::Throw_Hr(
      v27,
      5421LL,
      (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v26);
    __debugbreak();
    return WindowEventDispatcher::RecoverViews_::_1_::dtor_0(v30, v29, v31);
  }
  v25 = v32;
LABEL_34:
  if ( v25 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v25 + 16LL))(v25);
  if ( v13 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v13);
  if ( v6 )
    ReleaseSRWLockExclusive(SRWLock);
  return 0LL;
}
