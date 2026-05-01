/*
 * XREFs of ?RecoverViews@WindowEventDispatcher@@UEAAJUEventRegistrationToken@@PEAPEAUIObjectArray@@@Z @ 0x18022A470
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??1?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019F60 (--1-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CacheWindowWrapper@WindowEventDispatcher@@AEAAXV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x180020654 (-CacheWindowWrapper@WindowEventDispatcher@@AEAAXV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_excep.c)
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180021DA4 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18009090C (--$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIWindowWrapperIn.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1800ED150 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$WindowEventDispatcher_RecoveringViews@AEAIPEBGPEBG@ViewManagerInteropTraceLogging@@SAXAEAI$$QEAPEBG1@Z @ 0x180222C68 (--$WindowEventDispatcher_RecoveringViews@AEAIPEBGPEBG@ViewManagerInteropTraceLogging@@SAXAEAI$$Q.c)
 *     ?erase@?$vector@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x18022D618 (-erase@-$vector@V-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V-$alloca.c)
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
  const WCHAR *v16; // r13
  LPCWCH v17; // rbx
  int v18; // eax
  const char *v19; // r9
  int v20; // eax
  int v21; // eax
  HSTRING *v22; // rbx
  void *v23; // rcx
  int v24; // eax
  wil::details::in1diag3 *v25; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  void *v30; // [rsp+30h] [rbp-D8h] BYREF
  LPCWCH lpString2; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v32[2]; // [rsp+40h] [rbp-C8h] BYREF
  std::_Ref_count_base *v33[2]; // [rsp+50h] [rbp-B8h] BYREF
  LPCWCH v34; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+68h] [rbp-A0h]
  __int128 v36; // [rsp+70h] [rbp-98h] BYREF
  __int64 *v37; // [rsp+80h] [rbp-88h]
  char v38; // [rsp+88h] [rbp-80h]
  LPCWSTR StringRawBuffer; // [rsp+90h] [rbp-78h] BYREF
  PCWSTR v40; // [rsp+98h] [rbp-70h] BYREF
  RTL_SRWLOCK *v41; // [rsp+A0h] [rbp-68h]
  PSRWLOCK SRWLock; // [rsp+A8h] [rbp-60h]
  __int64 v43; // [rsp+B0h] [rbp-58h]
  _BYTE v44[8]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v45[72]; // [rsp+C0h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+0h]
  int v49; // [rsp+128h] [rbp+20h] BYREF

  v43 = -2LL;
  v3 = a3;
  v5 = this;
  *a3 = 0LL;
  v6 = this + 54;
  v41 = this + 54;
  AcquireSRWLockExclusive(this + 54);
  SRWLock = v6;
  if ( LOBYTE(v5[57].Ptr) )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1816LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)0x8007139FLL);
LABEL_42:
    wil::details::in1diag3::Throw_Hr(
      v9,
      1829LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)0x80070490LL);
    goto LABEL_43;
  }
  *(_OWORD *)v33 = 0LL;
  for ( i = (struct _GUID *)v5[48].Ptr; i != v5[49].Ptr; ++i )
  {
    if ( *(_QWORD *)(*(_QWORD *)&i->Data1 + 32LL) == a2.value )
    {
      std::shared_ptr<ViewEventRegistration>::operator=(v33, i);
      v8 = 0;
      if ( v33[0] )
        goto LABEL_9;
      break;
    }
  }
  v8 = 1;
LABEL_9:
  v9 = retaddr;
  if ( v8 )
    goto LABEL_42;
  v30 = 0LL;
  v10 = CEnumerableObjectCollection::CreateInstance((__int64)retaddr, i, &v30);
  v11 = retaddr;
  if ( v10 < 0 )
  {
LABEL_43:
    wil::details::in1diag3::Throw_Hr(
      v11,
      1834LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_44;
  }
  v12 = ((char *)v5[45].Ptr - (char *)v5[44].Ptr) >> 3;
  v13 = (volatile signed __int32 *)v33[1];
  while ( 1 )
  {
    v35 = v12;
    if ( !v12 )
      break;
    v14 = *((_QWORD *)v5[44].Ptr + v12 - 1);
    lpString2 = WindowsGetStringRawBuffer(*((HSTRING *)v33[0] + 1), 0LL);
    v15 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 264LL))(v14);
    if ( CompareStringOrdinal(v15, -1, lpString2, -1, 0) == 2 )
    {
      v16 = (const WCHAR *)*((_QWORD *)v5[44].Ptr + v12 - 1);
      v17 = v16;
      lpString2 = v16;
      if ( v16 )
        (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v16 + 8LL))(v16);
      std::vector<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>::erase(
        &v5[44],
        v44,
        (char *)v5[44].Ptr + 8 * v12 - 8);
      wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
        &lpString2,
        (__int64)v32);
      v37 = v32;
      v38 = 1;
      v36 = 0LL;
      if ( v13 )
      {
        _InterlockedIncrement(v13 + 2);
        v13 = (volatile signed __int32 *)v33[1];
        v17 = lpString2;
      }
      try
      {
        v36 = *(_OWORD *)v33;
        v34 = v17;
        if ( v16 )
          (*(void (__fastcall **)(LPCWCH))(*(_QWORD *)v17 + 8LL))(v17);
        WindowEventDispatcher::CacheWindowWrapper((__int64)&v5[-4], &v34, &v36, (const char *)1);
        v18 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v30 + 40LL))(v30, v32[0]);
        if ( v18 >= 0 )
        {
          v38 = 0;
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            1862LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)(unsigned int)v18);
          std::vector<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>::erase(
            &v5[41],
            v45,
            (char *)v5[42].Ptr - 8);
        }
      }
      catch ( ... )
      {
        wil::details::in1diag3::Log_CaughtException(
          retaddr,
          (void *)0x750,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          v19);
        v5 = this;
        v3 = a3;
        v13 = (volatile signed __int32 *)v33[1];
        v12 = v35;
      }
      if ( v38 )
      {
        v38 = 0;
        v20 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v32[0] + 392LL))(v32[0], 0LL);
        if ( v20 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            1855LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)(unsigned int)v20);
      }
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v32);
      wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>((__int64 *)&lpString2);
    }
    --v12;
  }
  v49 = 0;
  v21 = (*(__int64 (__fastcall **)(void *, int *))(*(_QWORD *)v30 + 24LL))(v30, &v49);
  if ( v21 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1877LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v21);
  v22 = (HSTRING *)v33[0];
  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)v33[0] + 1), 0LL);
  v40 = WindowsGetStringRawBuffer(*v22, 0LL);
  ViewManagerInteropTraceLogging::WindowEventDispatcher_RecoveringViews<unsigned int &,unsigned short const *,unsigned short const *>(
    (__int64)&v49,
    &v40,
    &StringRawBuffer);
  v23 = v30;
  if ( !v30 )
  {
    *v3 = 0LL;
    goto LABEL_34;
  }
  v24 = (**(__int64 (__fastcall ***)(void *, GUID *, struct IObjectArray **))v30)(
          v30,
          &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
          v3);
  v25 = retaddr;
  if ( v24 < 0 )
  {
LABEL_44:
    wil::details::in1diag3::Throw_Hr(
      v25,
      5800LL,
      (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
      (const char *)(unsigned int)v24);
    __debugbreak();
    return WindowEventDispatcher::RecoverViews_::_1_::dtor_0(v28, v27, v29);
  }
  v23 = v30;
LABEL_34:
  if ( v23 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v23 + 16LL))(v23);
  if ( v13 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v13);
  if ( v41 )
    ReleaseSRWLockExclusive(SRWLock);
  return 0LL;
}
