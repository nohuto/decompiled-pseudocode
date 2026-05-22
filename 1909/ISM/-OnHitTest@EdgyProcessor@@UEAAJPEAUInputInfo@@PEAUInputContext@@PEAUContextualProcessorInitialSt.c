/*
 * XREFs of ?OnHitTest@EdgyProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180100A60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIDCompInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800B9A20 (--$As@UIDCompInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?EnsureEdgeMetricsForDisplay@EdgyProcessor@@IEAAXPEBUInputInfo@@@Z @ 0x1801008E8 (-EnsureEdgeMetricsForDisplay@EdgyProcessor@@IEAAXPEBUInputInfo@@@Z.c)
 *     ?Create@EdgyProcessorTarget@@SAJPEAVEdgyProcessor@@AEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAXPEAPEAV1@@Z @ 0x18010300C (-Create@EdgyProcessorTarget@@SAJPEAVEdgyProcessor@@AEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAX.c)
 *     ?UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z @ 0x180103EA0 (-UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z.c)
 *     ?OnHitTest@EdgyImpl@@QEAA_NAEBUEdgyPointerInfo@@AEBUD2D_VECTOR_2F@@@Z @ 0x180104690 (-OnHitTest@EdgyImpl@@QEAA_NAEBUEdgyPointerInfo@@AEBUD2D_VECTOR_2F@@@Z.c)
 *     ?Reset@EdgyImpl@@QEAAXXZ @ 0x1801047C8 (-Reset@EdgyImpl@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EdgyProcessor::OnHitTest(
        EdgyProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  int v8; // ebx
  __int64 *v9; // r15
  int v10; // ecx
  int v11; // eax
  void *v12; // rdi
  HANDLE CurrentProcess; // rbx
  HANDLE v14; // rax
  HANDLE v15; // r8
  __int64 v16; // rcx
  __int64 (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v18)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v20; // [rsp+40h] [rbp-69h] BYREF
  HANDLE TargetHandle; // [rsp+48h] [rbp-61h] BYREF
  _OWORD v22[2]; // [rsp+50h] [rbp-59h] BYREF
  __int64 v23; // [rsp+70h] [rbp-39h]
  __int64 v24; // [rsp+80h] [rbp-29h]
  __int128 v25; // [rsp+88h] [rbp-21h] BYREF
  __int128 v26; // [rsp+98h] [rbp-11h]
  __int64 v27; // [rsp+A8h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v24 = -2LL;
  v8 = 0;
  *(_DWORD *)a4 = 0;
  v9 = (__int64 *)((char *)a4 + 8);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)a4 + 1);
  if ( (*(_DWORD *)a2 & 0x88) == 8 && *((_DWORD *)a2 + 53) == 1 )
  {
    v10 = *((_DWORD *)a2 + 57);
    if ( (v10 & 4) != 0 )
    {
      *((_QWORD *)&v26 + 1) = *((unsigned int *)a2 + 2);
      LODWORD(v25) = *((_DWORD *)a2 + 55);
      DWORD2(v25) = v10;
      DWORD1(v25) = *((_DWORD *)a2 + 1);
      HIDWORD(v25) = *((_DWORD *)a2 + 66);
      LODWORD(v26) = *((_DWORD *)a2 + 67);
      EdgyProcessor::EnsureEdgeMetricsForDisplay((struct D2D_VECTOR_2F *)this, a2);
      if ( !EdgyImpl::OnHitTest(
              (EdgyProcessor *)((char *)this + 80),
              (const struct EdgyPointerInfo *)&v25,
              (const struct D2D_VECTOR_2F *)this + 8) )
      {
        Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(v9);
        *(_DWORD *)a4 = 0;
        goto LABEL_18;
      }
      *(_OWORD *)((char *)this + 24) = v25;
      *(_OWORD *)((char *)this + 40) = v26;
      v20 = 0LL;
      v11 = Microsoft::WRL::ComPtr<IInputTarget>::As<IDCompInputTarget>(
              (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a3,
              &v20);
      if ( v11 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          147LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyprocessor.cpp",
          (const char *)(unsigned int)v11);
        __debugbreak();
      }
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v20 + 72LL))(v20, &v25);
      v12 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 56LL))(v20);
      if ( v12
        && (CurrentProcess = GetCurrentProcess(),
            v14 = GetCurrentProcess(),
            DuplicateHandle(v14, v12, CurrentProcess, &TargetHandle, 0, 0, 2u)) )
      {
        v15 = TargetHandle;
      }
      else
      {
        v15 = 0LL;
        TargetHandle = 0LL;
      }
      v16 = *((_QWORD *)this + 9);
      v22[0] = v25;
      v22[1] = v26;
      v23 = v27;
      if ( v16 )
      {
        EdgyProcessorTarget::UpdateInputTarget(v16, v22, v15, (char *)this + 24);
      }
      else
      {
        Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 9);
        v8 = EdgyProcessorTarget::Create(this, (char *)this + 24, v22, TargetHandle, (char *)this + 72);
        if ( v8 < 0 )
        {
LABEL_13:
          Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v20);
          goto LABEL_18;
        }
      }
      v17 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 9);
      v18 = **v17;
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(v9);
      v8 = v18(v17, &GUID_00000000_0000_0000_c000_000000000046, v9);
      if ( v8 >= 0 )
        *(_DWORD *)a4 = 1;
      goto LABEL_13;
    }
  }
LABEL_18:
  if ( !*v9 || !*(_DWORD *)a4 )
    EdgyImpl::Reset((EdgyProcessor *)((char *)this + 80));
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE1,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyprocessor.cpp",
    (const char *)(unsigned int)v8);
  return (unsigned int)v8;
}
