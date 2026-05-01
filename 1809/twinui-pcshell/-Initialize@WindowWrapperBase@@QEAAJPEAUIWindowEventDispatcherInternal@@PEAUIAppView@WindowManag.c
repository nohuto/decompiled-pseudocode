/*
 * XREFs of ?Initialize@WindowWrapperBase@@QEAAJPEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@4567@W4AppModelKind@4567@UAppViewId@4567@PEAUIWindow@4567@UWindowId@4567@PEBGW4WindowCreatedType@@@Z @ 0x180020238
 * Callers:
 *     ??0WindowWrapper@@QEAA@PEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@3456@W4AppModelKind@3456@UAppViewId@3456@PEAUIWindow@3456@UWindowId@3456@PEBGW4WindowCreatedType@@@Z @ 0x18001FBAC (--0WindowWrapper@@QEAA@PEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@Applica.c)
 *     ??0LegacyWindowWrapper@@QEAA@PEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@3456@W4AppModelKind@3456@UAppViewId@3456@PEAUIWindow@3456@UWindowId@3456@PEBGW4WindowCreatedType@@@Z @ 0x18024C048 (--0LegacyWindowWrapper@@QEAA@PEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@A.c)
 * Callees:
 *     ?_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z @ 0x180020094 (-_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_70dfa9c1db30439d8f324967aa0bddeb___ @ 0x18002011C (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_70dfa9c1db30439d8f324967aa0bddeb.c)
 *     ?_Reset_move@?$_Func_class@X_N@std@@IEAAX$$QEAV12@@Z @ 0x1800205E0 (-_Reset_move@-$_Func_class@X_N@std@@IEAAX$$QEAV12@@Z.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?_Tidy@?$_Func_class@X_N@std@@IEAAXXZ @ 0x180073210 (-_Tidy@-$_Func_class@X_N@std@@IEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_36b68ccfaceedfb8db0ac3d16eb7f5b9__void_bool_::_Move @ 0x180082690 (std--_Func_impl_no_alloc__lambda_36b68ccfaceedfb8db0ac3d16eb7f5b9__void_bool_--_Move.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WindowWrapperBase::Initialize(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        char a8,
        unsigned __int16 *a9,
        char a10)
{
  _QWORD *v12; // rdi
  unsigned __int16 *v14; // r12
  __int64 v15; // r14
  __int64 v16; // r14
  __int64 v17; // rsi
  __int64 v18; // rsi
  int v19; // eax
  _BYTE *v20; // rax
  DWORD CurrentThreadId; // eax
  unsigned int v22; // ecx
  int v23; // eax
  __int64 v24; // rbx
  const WCHAR *v25; // rdi
  const WCHAR *v26; // rsi
  int v27; // ebx
  __int64 v28; // r10
  int UserDataCount; // [rsp+28h] [rbp-E0h]
  LPVOID Context; // [rsp+38h] [rbp-D0h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-C8h] BYREF
  int v33; // [rsp+44h] [rbp-C4h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v35[4]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v36[8]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v37[56]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE *v38; // [rsp+F0h] [rbp-18h]
  _BYTE v39[56]; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v40; // [rsp+130h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+138h] [rbp+30h] BYREF
  void *v42; // [rsp+148h] [rbp+40h]
  int v43; // [rsp+150h] [rbp+48h]
  int v44; // [rsp+154h] [rbp+4Ch]
  int *v45; // [rsp+158h] [rbp+50h]
  int v46; // [rsp+160h] [rbp+58h]
  int v47; // [rsp+164h] [rbp+5Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+168h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+178h] [rbp+70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  v35[3] = -2LL;
  v12 = a2;
  v14 = a9;
  (*(void (__fastcall **)(_QWORD *))(*a2 + 200LL))(a2);
  RmActivityImportanceInitialize(a1 + 252);
  v15 = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(a1 + 104) = a3;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  v16 = *(_QWORD *)(a1 + 320);
  *(_QWORD *)(a1 + 320) = a4;
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  *(_DWORD *)(a1 + 328) = a5;
  *(_DWORD *)(a1 + 352) = a6;
  v17 = *(_QWORD *)(a1 + 128);
  *(_QWORD *)(a1 + 128) = a7;
  if ( a7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a7 + 8LL))(a7);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  v18 = *(_QWORD *)(a1 + 280);
  *(_QWORD *)(a1 + 280) = v12;
  if ( v12 )
    (*(void (__fastcall **)(_QWORD *))(*v12 + 8LL))(v12);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v14 )
    v19 = Windows::Internal::String::_InitializeHelper((HSTRING *)(a1 + 312), v14);
  else
    v19 = -2147467261;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x6D,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v19,
      UserDataCount);
  }
  else
  {
    v36[0] = off_1803CD218;
    v36[1] = a1;
    v36[7] = v36;
    Context = v36;
    v12 = (_QWORD *)(a1 + 400);
    v38 = 0LL;
    v20 = (_BYTE *)std::_Func_impl_no_alloc__lambda_36b68ccfaceedfb8db0ac3d16eb7f5b9__void_bool_::_Move(v36, v37);
    v38 = v20;
    if ( v20 == v37 )
    {
LABEL_21:
      v40 = 0LL;
      std::_Func_class<void,bool>::_Reset_move(v39, v37);
      std::_Func_class<void,bool>::_Reset_move(v37, v12);
      std::_Func_class<void,bool>::_Reset_move(v12, v39);
      std::_Func_class<void,bool>::_Tidy(v39);
      goto LABEL_22;
    }
  }
  if ( (_QWORD *)v12[7] == v12 )
    goto LABEL_21;
  v38 = (_BYTE *)v12[7];
  v12[7] = v20;
LABEL_22:
  std::_Func_class<void,bool>::_Tidy(v37);
  std::_Func_class<void,bool>::_Tidy(v36);
  v35[0] = a1;
  v35[1] = &a8;
  v35[2] = &a10;
  CurrentThreadId = GetCurrentThreadId();
  v23 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_70dfa9c1db30439d8f324967aa0bddeb___(
          v22,
          CurrentThreadId,
          (__int64)v35);
  if ( v23 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x96,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v23,
      UserDataCount);
    __debugbreak();
  }
  v24 = a1 + 16;
  v25 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 264LL))(v24);
  v26 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 256LL))(v24);
  v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 272LL))(v24);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_18050FB08;
    qword_18050FB08 = &ShellScreenClippingLogging::`vftable';
    qword_18050FB20 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18050FB08, qword_18050FB20);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &qword_18050FB08);
  }
  if ( **((_DWORD **)Context + 1) > 5u )
  {
    v33 = v27;
    v45 = &v33;
    v46 = 4;
    v47 = 0;
    TlgCreateWsz(&pDesc, v26);
    TlgCreateWsz(&v49, v25);
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18045F099 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    *(_DWORD *)&EventDescriptor.Level = 5;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = *(_QWORD *)(v28 + 8);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    UserData.Reserved = 2;
    v42 = &unk_18045F0A4;
    v43 = 68;
    v44 = 1;
    EventWriteTransfer(*(_QWORD *)(v28 + 32), &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
  return 0LL;
}
