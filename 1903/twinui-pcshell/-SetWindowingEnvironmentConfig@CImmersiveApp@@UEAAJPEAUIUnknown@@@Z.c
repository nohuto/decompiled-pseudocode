/*
 * XREFs of ?SetWindowingEnvironmentConfig@CImmersiveApp@@UEAAJPEAUIUnknown@@@Z @ 0x180149C20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::SetWindowingEnvironmentConfig(CImmersiveApp *this, struct IUnknown *a2)
{
  RTL_SRWLOCK *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF
  PSRWLOCK v12; // [rsp+50h] [rbp+18h]

  if ( !a2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8E4,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v5 = CApplicationManagerUtility::g_pIAMGlobals;
  v12 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v11 = 0LL;
  v6 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_3c32be79_d44b_4c43_b19b_12f70e686f35,
         &v11);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(char *, __int64))(*((_QWORD *)this + 3) + 632LL))((char *)this + 24, v11);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v7 = 0;
      goto LABEL_9;
    }
    v8 = 2282LL;
  }
  else
  {
    v8 = 2281LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
    (const char *)(unsigned int)v6);
LABEL_9:
  v9 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  return v7;
}
