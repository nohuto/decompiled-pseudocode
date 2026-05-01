/*
 * XREFs of ?Initialize@WindowWrapperBase@@QEAAJPEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@4567@W4AppModelKind@4567@UAppViewId@4567@PEAUIWindow@4567@UWindowId@4567@PEBGW4WindowCreatedType@@@Z @ 0x18001D49C
 * Callers:
 *     ??0WindowWrapper@@QEAA@PEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@3456@W4AppModelKind@3456@UAppViewId@3456@PEAUIWindow@3456@UWindowId@3456@PEBGW4WindowCreatedType@@@Z @ 0x18001CE58 (--0WindowWrapper@@QEAA@PEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@Applica.c)
 *     ??0LegacyWindowWrapper@@QEAA@PEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@3456@W4AppModelKind@3456@UAppViewId@3456@PEAUIWindow@3456@UWindowId@3456@PEBGW4WindowCreatedType@@@Z @ 0x1802C1B74 (--0LegacyWindowWrapper@@QEAA@PEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@A.c)
 * Callees:
 *     ?_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z @ 0x18001D300 (-_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a2e6e8c7c47ff621075ed7caffbf1187___ @ 0x18001D37C (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_a2e6e8c7c47ff621075ed7caffbf1187.c)
 *     ?_Reset_move@?$_Func_class@X_N@std@@IEAAX$$QEAV12@@Z @ 0x18001D7D4 (-_Reset_move@-$_Func_class@X_N@std@@IEAAX$$QEAV12@@Z.c)
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?_Tidy@?$_Func_class@X_N@std@@IEAAXXZ @ 0x180079310 (-_Tidy@-$_Func_class@X_N@std@@IEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_36b68ccfaceedfb8db0ac3d16eb7f5b9__void_bool_::_Move @ 0x180087E80 (std--_Func_impl_no_alloc__lambda_36b68ccfaceedfb8db0ac3d16eb7f5b9__void_bool_--_Move.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
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
  WINBOOL v27; // ebx
  TraceLoggingHProvider v29; // r10
  int cData; // [rsp+28h] [rbp-E0h]
  LPVOID Context; // [rsp+38h] [rbp-D0h] BYREF
  WINBOOL fPending[2]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v33[4]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v34[8]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v35[56]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE *v36; // [rsp+E0h] [rbp-28h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E8h] [rbp-20h] BYREF
  WINBOOL *v38; // [rsp+108h] [rbp+0h]
  int v39; // [rsp+110h] [rbp+8h]
  int v40; // [rsp+114h] [rbp+Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+118h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+128h] [rbp+20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+170h] [rbp+68h]

  v33[3] = -2LL;
  v12 = a2;
  v14 = a9;
  (*(void (__fastcall **)(_QWORD *))(*a2 + 208LL))(a2);
  RmActivityImportanceInitialize(a1 + 260);
  v15 = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(a1 + 104) = a3;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  v16 = *(_QWORD *)(a1 + 328);
  *(_QWORD *)(a1 + 328) = a4;
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  *(_DWORD *)(a1 + 336) = a5;
  *(_DWORD *)(a1 + 360) = a6;
  v17 = *(_QWORD *)(a1 + 128);
  *(_QWORD *)(a1 + 128) = a7;
  if ( a7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a7 + 8LL))(a7);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  v18 = *(_QWORD *)(a1 + 288);
  *(_QWORD *)(a1 + 288) = v12;
  if ( v12 )
    (*(void (__fastcall **)(_QWORD *))(*v12 + 8LL))(v12);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v14 )
    v19 = Windows::Internal::String::_InitializeHelper((HSTRING *)(a1 + 320), v14);
  else
    v19 = -2147467261;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x70,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v19,
      cData);
  }
  else
  {
    v34[0] = off_180451BA0;
    v34[1] = a1;
    v34[7] = v34;
    Context = v34;
    v12 = (_QWORD *)(a1 + 408);
    v36 = 0LL;
    v20 = (_BYTE *)std::_Func_impl_no_alloc__lambda_36b68ccfaceedfb8db0ac3d16eb7f5b9__void_bool_::_Move(v34, v35);
    v36 = v20;
    if ( v20 == v35 )
    {
LABEL_21:
      *(_QWORD *)&pDesc.Size = 0LL;
      std::_Func_class<void,bool>::_Reset_move(&pData, v35);
      std::_Func_class<void,bool>::_Reset_move(v35, v12);
      std::_Func_class<void,bool>::_Reset_move(v12, &pData);
      std::_Func_class<void,bool>::_Tidy(&pData);
      goto LABEL_22;
    }
  }
  if ( (_QWORD *)v12[7] == v12 )
    goto LABEL_21;
  v36 = (_BYTE *)v12[7];
  v12[7] = v20;
LABEL_22:
  std::_Func_class<void,bool>::_Tidy(v35);
  std::_Func_class<void,bool>::_Tidy(v34);
  v33[0] = a1;
  v33[1] = &a8;
  v33[2] = &a10;
  CurrentThreadId = GetCurrentThreadId();
  v23 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a2e6e8c7c47ff621075ed7caffbf1187___(
          v22,
          CurrentThreadId,
          (__int64)v33);
  if ( v23 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xB8,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v23,
      cData);
    __debugbreak();
  }
  v24 = a1 + 16;
  v25 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 280LL))(v24);
  v26 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 272LL))(v24);
  v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 288LL))(v24);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, fPending, &Context)
    && fPending[0] )
  {
    Context = qword_1805C2318;
    qword_1805C2318[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805C2330 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C2318, qword_1805C2330);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_1805C2318);
  }
  if ( **((_DWORD **)Context + 1) > 5u )
  {
    fPending[1] = v27;
    v38 = &fPending[1];
    v39 = 4;
    v40 = 0;
    TlgCreateWsz(&pDesc, v26);
    TlgCreateWsz(&v42, v25);
    TlgWrite(v29, &unk_1804FA892, 0LL, 0LL, 5u, &pData);
  }
  return 0LL;
}
