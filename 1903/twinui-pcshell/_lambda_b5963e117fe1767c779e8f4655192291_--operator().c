/*
 * XREFs of _lambda_b5963e117fe1767c779e8f4655192291_::operator() @ 0x18002BF14
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_17f83a3ec6a413618c3a7999ad4258a2___::Run @ 0x18002C800 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_17f83a3ec6a413618c3a7999ad4258a2___--Run.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028AD4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180065238 (-Stop@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18008D9EC (-ContinueOnCurrentThread@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_P.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_Ld @ 0x18012B40C (WPP_SF_Ld.c)
 *     ??$ClosedFrameShown@PEBG@CFramePresentationTelemetry@@SAX$$QEAPEBG@Z @ 0x18014F204 (--$ClosedFrameShown@PEBG@CFramePresentationTelemetry@@SAX$$QEAPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall lambda_b5963e117fe1767c779e8f4655192291_::operator()(unsigned int *a1)
{
  _QWORD **v2; // r14
  __int64 v3; // rcx
  int v4; // r15d
  char *v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  HANDLE ProcessHeap; // rax
  _BYTE v14[16]; // [rsp+58h] [rbp-29h] BYREF
  LPVOID lpMem; // [rsp+68h] [rbp-19h]
  char v16; // [rsp+70h] [rbp-11h]
  _BYTE v17[24]; // [rsp+78h] [rbp-9h] BYREF
  int v18; // [rsp+90h] [rbp+Fh]
  __int64 v19; // [rsp+E8h] [rbp+67h] BYREF
  char v20; // [rsp+F0h] [rbp+6Fh] BYREF

  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 4),
    (wil::ActivityThreadWatcher *)v14);
  if ( !IsWindowVisible(*(HWND *)(*((_QWORD *)a1 + 1) + 128LL)) )
  {
    v12 = *((_QWORD *)a1 + 1);
    if ( **(_QWORD **)(v12 + 104) )
    {
      if ( !*a1 )
      {
        v19 = *(_QWORD *)(v12 + 664);
        CFramePresentationTelemetry::ClosedFrameShown<unsigned short const *>(&v19);
        ShowWindowAsync(*(HWND *)(*((_QWORD *)a1 + 1) + 128LL), 4);
      }
    }
  }
  if ( *((_BYTE *)a1 + 5) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)a1 + 1) + 120LL) + 208LL))(
      *(_QWORD *)(*((_QWORD *)a1 + 1) + 120LL),
      0LL);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)a1 + 1) + 120LL) + 56LL))(
    *(_QWORD *)(*((_QWORD *)a1 + 1) + 120LL),
    *a1);
  if ( *((_BYTE *)a1 + 5) )
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)a1 + 1) + 120LL) + 208LL))(
      *(_QWORD *)(*((_QWORD *)a1 + 1) + 120LL),
      1LL);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_Ld(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      16LL,
      &WPP_94922da7bd9137d502a338501bb650ae_Traceguids,
      *a1,
      *(_DWORD *)(*((_QWORD *)a1 + 1) + 48LL));
  v2 = (_QWORD **)*((_QWORD *)a1 + 1);
  v3 = *v2[13];
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64, _QWORD *, _QWORD))(*(_QWORD *)v3 + 208LL))(
      v3,
      v2[16],
      (unsigned int)(*((_DWORD *)v2 + 56) != 0) + 4);
    v2 = (_QWORD **)*((_QWORD *)a1 + 1);
  }
  v4 = *a1;
  v5 = (char *)((__int64 (__fastcall *)(_QWORD **, __int64 *))(*v2)[8])(v2, &v19);
  v6 = 0LL;
  v7 = 0LL;
  if ( &v20 != v5 )
  {
    v6 = *(_QWORD *)v5;
    *(_QWORD *)v5 = 0LL;
    v7 = v6;
  }
  v8 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( v4 == *((_DWORD *)v2 + 56) )
    *((_BYTE *)v2 + 544) = 1;
  ((void (__fastcall *)(_QWORD **, __int64 *))(*v2)[8])(v2, &v19);
  v9 = v19;
  if ( v19 != v7 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v2[86] + 520LL))(v2[86]);
    v9 = v19;
  }
  if ( v9 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v10 = *((_QWORD *)a1 + 1);
  if ( **(_QWORD **)(v10 + 112) )
  {
    if ( !*(_DWORD *)(v10 + 224) )
    {
      v11 = *(_QWORD *)(v10 + 696);
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 192LL))(v11);
    }
  }
  if ( *((_BYTE *)a1 + 4) )
    (*(void (__fastcall **)(PVOID, _QWORD, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr + 24LL))(
      CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
      *(_QWORD *)(*((_QWORD *)a1 + 1) + 128LL),
      0LL);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(a1 + 4);
  if ( v18 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v17);
  if ( v16 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
  }
}
