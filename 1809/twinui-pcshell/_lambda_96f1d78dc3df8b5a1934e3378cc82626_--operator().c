/*
 * XREFs of _lambda_96f1d78dc3df8b5a1934e3378cc82626_::operator() @ 0x1800473E4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_61e56815dff744e001111df09606a666___::Run @ 0x180047340 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_61e56815dff744e001111df09606a666___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_96f1d78dc3df8b5a1934e3378cc82626_::operator()(__int64 a1)
{
  __int64 v2; // rbx
  int v3; // eax
  int v5; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  v8 = 0LL;
  if ( *(_BYTE *)(a1 + 16) )
  {
    AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    v7 = 0LL;
    v2 = *(_QWORD *)(a1 + 8);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v7);
    (*(void (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v2 + 24LL))(
      v2,
      &SID_ImmersiveApplicationManagerPriv,
      &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee,
      &v7);
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v7 + 184LL))(
           v7,
           *(_QWORD *)(*(_QWORD *)a1 + 560LL),
           &v8);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x222,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
        (const char *)(unsigned int)v3,
        v5);
    ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v7);
  }
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 120LL) + 72LL))(
           *(_QWORD *)(*(_QWORD *)a1 + 120LL),
           *(_QWORD *)(*(_QWORD *)a1 + 560LL));
}
