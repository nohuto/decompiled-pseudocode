/*
 * XREFs of ?GetLockAppHost@@YAJPEAPEAUILockAppHost@@@Z @ 0x18007CCA4
 * Callers:
 *     ?QueueActionAfterUnlock@ContentManagementService@ContentManagement@@UEAAJPEAUIInspectable@@@Z @ 0x18002CFC0 (-QueueActionAfterUnlock@ContentManagementService@ContentManagement@@UEAAJPEAUIInspectable@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000372C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000482C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x180081684 (-Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GetLockAppHost(struct ILockAppHost **a1)
{
  char v2; // di
  int v3; // ebx
  const char *v4; // r9
  HRESULT v5; // eax
  HSTRING v6; // rbx
  const char *v7; // rcx
  int ActivationFactory; // eax
  int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  const char *v12; // rcx
  __int64 v14; // rcx
  const char *v15; // rcx
  const char *v16; // [rsp+30h] [rbp-50h] BYREF
  __int64 v17; // [rsp+38h] [rbp-48h] BYREF
  int v18; // [rsp+40h] [rbp-40h] BYREF
  __int64 v19; // [rsp+48h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  HSTRING string; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v19 = -2LL;
  *a1 = 0LL;
  v18 = 0;
  v2 = 0;
  LODWORD(v17) = 4;
  v3 = NtQueryWnfStateData(&WNF_SHEL_LOCKAPPHOST_ACTIVE, 0LL, 0LL, &v16, &v18, &v17) | 0x10000000;
  if ( (int)(v3 + 0x80000000) < 0 || v3 == -805306333 )
  {
    if ( (_DWORD)v16 && (_DWORD)v17 != 4 )
    {
LABEL_33:
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x2A7,
        (__int64)"internal\\sdk\\inc\\wil\\Resource.h",
        v4);
      JUMPOUT(0x18007CF3DLL);
    }
    wil::details::in1diag3::Log_HrIfMsg(
      retaddr,
      (void *)0x2A8,
      (unsigned int)"internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)0x8000FFFFLL,
      0,
      (bool)"Inconsistent state data size in wnf_query",
      v16);
    if ( !(_DWORD)v16 || (v2 = 1, (_DWORD)v17 != 4) )
      v2 = 0;
    v3 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A6,
      (__int64)"internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)(unsigned int)v3);
  }
  if ( v3 < 0 || !v2 || !v18 )
    return 2147500037LL;
  v16 = 0LL;
  string = 0LL;
  v5 = WindowsCreateStringReference(L"lockframework.LockAppBroker", 0x1Bu, &hstringHeader, &string);
  if ( v5 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
    goto LABEL_33;
  }
  v6 = string;
  v7 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(const char *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  ActivationFactory = RoGetActivationFactory(v6, &GUID_fcc7498e_d8cf_4993_a9ae_804193af19d7, &v16);
  v9 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25,
      (__int64)"internal\\onecoreuapshell\\inc\\lockscreenappinterop.h",
      (const char *)(unsigned int)ActivationFactory);
LABEL_23:
    v12 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(const char *))(*(_QWORD *)v12 + 16LL))(v12);
    }
    return (unsigned int)v9;
  }
  v17 = 0LL;
  v10 = (**(__int64 (__fastcall ***)(const char *, GUID *, __int64 *))v16)(
          v16,
          &GUID_91398107_1c08_44be_8b18_79322a23a71d,
          &v17);
  v9 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27,
      (__int64)"internal\\onecoreuapshell\\inc\\lockscreenappinterop.h",
      (const char *)(unsigned int)v10);
    goto LABEL_21;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, struct ILockAppHost **))(*(_QWORD *)v17 + 24LL))(v17, a1);
  if ( v9 < 0 )
  {
LABEL_21:
    v11 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    goto LABEL_23;
  }
  v14 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(const char *))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return 0LL;
}
