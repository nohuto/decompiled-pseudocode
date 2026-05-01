/*
 * XREFs of _lambda_21b79cea9a56d6bbfbb4614e776bd7a3_::operator() @ 0x180073964
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d83b735c081dd2fe41a4ef73e2aa52d1___::Run @ 0x1800738F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d83b735c081dd2fe41a4ef73e2aa52d1___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_21b79cea9a56d6bbfbb4614e776bd7a3_::operator()(__int64 a1)
{
  unsigned int v2; // esi
  __int64 v3; // r8
  __int64 v4; // rdi
  void (__fastcall *v5)(__int64, SID *, GUID *, __int64 *); // rbx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF

  v2 = 0;
  v3 = 0LL;
  v10 = 0LL;
  if ( *(_BYTE *)(a1 + 16) )
  {
    AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    v9 = 0LL;
    v4 = *(_QWORD *)(a1 + 8);
    v5 = *(void (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v4 + 24LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
    v5(v4, &SID_ImmersiveApplicationManagerPriv, &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee, &v9);
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v9 + 184LL))(
           v9,
           *(_QWORD *)(*(_QWORD *)a1 + 664LL),
           &v10);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x233,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
        (const char *)(unsigned int)v6);
    ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
    v3 = v10;
  }
  LOBYTE(v2) = v3 == 1;
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 120LL) + 72LL))(
           *(_QWORD *)(*(_QWORD *)a1 + 120LL),
           *(_QWORD *)(*(_QWORD *)a1 + 664LL),
           v2);
}
