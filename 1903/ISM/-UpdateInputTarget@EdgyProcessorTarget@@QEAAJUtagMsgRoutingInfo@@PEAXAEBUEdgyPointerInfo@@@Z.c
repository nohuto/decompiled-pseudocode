/*
 * XREFs of ?UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z @ 0x1801040D0
 * Callers:
 *     ?OnHitTest@EdgyProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180100C90 (-OnHitTest@EdgyProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialSt.c)
 *     ?Initialize@EdgyProcessorTarget@@IEAAJAEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAX@Z @ 0x18010337C (-Initialize@EdgyProcessorTarget@@IEAAJAEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAX@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x18000DD7C (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180027178 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??4?$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002F1B4 (--4-$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAX@Z @ 0x18002F430 (-GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@P.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAPEAUIInputTarget@@@Z @ 0x1800C6CF4 (-Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@V-$ComPtr@VInputSite@@@WRL@Microsoft@@PEAPEAUI.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall EdgyProcessorTarget::UpdateInputTarget(__int64 a1, __int64 a2, void *a3, _OWORD *a4)
{
  _OWORD *v4; // r12
  void *v5; // rsi
  __int64 v6; // r14
  char v7; // r15
  __int64 *v8; // r13
  int (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rax
  int (__fastcall *v10)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v12; // rbx
  struct InputSiteManager *InputSiteManager; // rax
  __int64 *InputSiteFromInputSinkHandle; // rax
  __int64 v15; // rcx
  int v16; // r15d
  __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // r15d
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  const char *v23; // r9
  __int64 v24; // [rsp+20h] [rbp-98h] BYREF
  __int64 v25; // [rsp+28h] [rbp-90h] BYREF
  __int64 v26; // [rsp+30h] [rbp-88h] BYREF
  int (__fastcall ***v27)(_QWORD, _QWORD, _QWORD); // [rsp+38h] [rbp-80h] BYREF
  void *v28; // [rsp+40h] [rbp-78h]
  __int64 *v29; // [rsp+48h] [rbp-70h]
  __int64 v30; // [rsp+50h] [rbp-68h]
  __int64 v31; // [rsp+58h] [rbp-60h]
  wil::ResultException *v32; // [rsp+60h] [rbp-58h] BYREF
  __int64 v33; // [rsp+70h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v31 = -2LL;
  v4 = a4;
  v5 = a3;
  v25 = a2;
  v6 = a1;
  v30 = a1;
  v33 = a2;
  v28 = a3;
  v7 = 0;
  v8 = (__int64 *)(a1 + 128);
  v29 = (__int64 *)(a1 + 128);
  v9 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 128);
  v27 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v9;
  if ( v9 )
  {
    v24 = 0LL;
    v10 = **v9;
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v24);
    if ( v10(v27, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v24) >= 0 )
    {
      if ( !v24 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x74,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
          (const char *)0x8000FFFFLL);
        Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v24);
        return 2147549183LL;
      }
      v7 = (*(__int64 (__fastcall **)(__int64, __int64, void *))(*(_QWORD *)v24 + 24LL))(v24, v25, v5);
      if ( v7 && v5 )
        NtCloseCompositionInputSink(v5);
    }
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v24);
    if ( v7 )
      goto LABEL_32;
  }
  v24 = 0LL;
  v12 = 0LL;
  v26 = 0LL;
  if ( v5 )
  {
    try
    {
      InputSiteManager = ISMStatics::GetInputSiteManager();
      InputSiteFromInputSinkHandle = InputSiteManager::GetInputSiteFromInputSinkHandle(
                                       (__int64)InputSiteManager,
                                       (__int64 *)&v27,
                                       v5);
      Microsoft::WRL::ComPtr<InputSite>::operator=(&v26, (char *)InputSiteFromInputSinkHandle);
      v15 = (__int64)v27;
      if ( v27 )
      {
        v27 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
    }
    catch ( wil::ResultException *v32 )
    {
      v23 = (const char *)*((unsigned int *)v32 + 7);
      LODWORD(v25) = (_DWORD)v23;
      if ( (int)v23 >= 0 )
      {
        v4 = a4;
        v12 = v26;
        v8 = v29;
        v6 = v30;
        v16 = v33;
        v5 = v28;
        goto LABEL_15;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9F,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
        v23);
      if ( v26 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
      v21 = v24;
      if ( v24 )
      {
        v24 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      }
      return (unsigned int)v25;
    }
    v12 = v26;
  }
  v16 = v25;
LABEL_15:
  v25 = v12;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v25);
  v17 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v18 = DWMInputTarget::Create(v16, &v25, &v24);
  v19 = v18;
  if ( v18 >= 0 )
  {
    NtCloseCompositionInputSink(v5);
    Microsoft::WRL::ComPtr<IRawInputClient>::operator=(v8, &v24);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    v22 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
LABEL_32:
    *(_DWORD *)(v6 + 32) = 0;
    *(_OWORD *)(v6 + 48) = *v4;
    *(_OWORD *)(v6 + 64) = v4[1];
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA6,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
    (const char *)(unsigned int)v18);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v20 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  return v19;
}
