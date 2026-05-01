/*
 * XREFs of _lambda_4dbb30731e1cb4b517ffd4972428404c_::operator() @ 0x18005ADA4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e97912004d4e96f3bec37740b2aa1798___::Run @ 0x18005AD30 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e97912004d4e96f3bec37740b2aa1798___--Run.c)
 * Callees:
 *     ?IImmersiveApplication_GetNormalDisplayNameWithTitleSafe@@YAJPEAUIImmersiveApplication@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@PEAPEAG@Z @ 0x18002D548 (-IImmersiveApplication_GetNormalDisplayNameWithTitleSafe@@YAJPEAUIImmersiveApplication@@PEAUIImm.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall lambda_4dbb30731e1cb4b517ffd4972428404c_::operator()(struct IImmersiveApplication **a1)
{
  struct IImmersiveApplicationManagerSafeForSyncCallouts *v2; // rdx
  int NormalDisplayNameWithTitleSafe; // eax
  void *v4; // rdi
  char v5; // bl
  __int64 v6; // rcx
  __int64 v7; // rcx
  LPVOID pv; // [rsp+28h] [rbp-18h] BYREF
  __int64 v9; // [rsp+30h] [rbp-10h]
  __int64 v10; // [rsp+38h] [rbp-8h]
  __int64 v11; // [rsp+60h] [rbp+20h] BYREF
  __int64 v12; // [rsp+68h] [rbp+28h] BYREF

  v11 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)*a1 + 15) + 144LL))(*((_QWORD *)*a1 + 15), &v11) >= 0 )
  {
    pv = 0LL;
    v9 = -1LL;
    v10 = -1LL;
    NormalDisplayNameWithTitleSafe = IImmersiveApplication_GetNormalDisplayNameWithTitleSafe(
                                       a1[1],
                                       v2,
                                       (unsigned __int16 **)&pv);
    v4 = pv;
    if ( NormalDisplayNameWithTitleSafe >= 0 )
      (*(void (__fastcall **)(__int64, LPVOID))(*(_QWORD *)v11 + 24LL))(v11, pv);
    v12 = 0LL;
    if ( (**(int (__fastcall ***)(struct IImmersiveApplication *, GUID *, __int64 *))a1[1])(
           a1[1],
           &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
           &v12) >= 0 )
    {
      AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 216LL))(v12);
      ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v11 + 104LL))(v11, 128LL, v5 != 0 ? 0x80 : 0);
    }
    v6 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    if ( v4 )
    {
      CoTaskMemFree(v4);
      pv = 0LL;
    }
    v9 = 0LL;
    v10 = 0LL;
  }
  v7 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
}
