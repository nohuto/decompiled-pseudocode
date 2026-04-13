/*
 * XREFs of CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_76d04c7ef948b78080500df2ea23cc78___ @ 0x1800A865C
 * Callers:
 *     ?RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgroundTrigger@Background@ApplicationModel@Windows@@W4TaskConditionFlags@12@W4TaskRegistrationOptions@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800A766C (-RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgro.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000480C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_76d04c7ef948b78080500df2ea23cc78___(
        bool **a1)
{
  HRESULT v2; // eax
  int ActivationFactory; // eax
  wil::details::in1diag3 *v4; // rcx
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // rbx
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  int v14; // eax
  __int64 v15; // rdi
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  const WCHAR *StringRawBuffer; // rax
  bool v19; // di
  __int64 result; // rax
  char v21[8]; // [rsp+38h] [rbp-19h] BYREF
  __int64 v22; // [rsp+40h] [rbp-11h] BYREF
  __int64 v23; // [rsp+48h] [rbp-9h] BYREF
  __int64 v24; // [rsp+50h] [rbp-1h] BYREF
  HSTRING v25; // [rsp+58h] [rbp+7h] BYREF
  __int64 v26; // [rsp+60h] [rbp+Fh] BYREF
  __int64 v27; // [rsp+68h] [rbp+17h] BYREF
  __int64 v28; // [rsp+70h] [rbp+1Fh]
  __int64 v29; // [rsp+78h] [rbp+27h]
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp+2Fh] BYREF
  HSTRING string; // [rsp+98h] [rbp+47h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v29 = -2LL;
  v24 = 0LL;
  string = 0LL;
  v2 = WindowsCreateStringReference(
         L"Windows.ApplicationModel.Background.BackgroundTaskRegistration",
         0x3Eu,
         &hstringHeader,
         &string);
  if ( v2 < 0 )
  {
LABEL_31:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2);
    goto LABEL_32;
  }
  v24 = 0LL;
  ActivationFactory = RoGetActivationFactory(string, &GUID_4c542f69_b000_42ba_a093_6a563c65e3f8, &v24);
  v4 = retaddr;
  if ( ActivationFactory < 0 )
  {
LABEL_32:
    wil::details::in1diag3::Throw_Hr(
      v4,
      (void *)0x23,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_33;
  }
  v27 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 48LL))(v24, &v27);
  v6 = retaddr;
  if ( v5 < 0 )
  {
LABEL_33:
    wil::details::in1diag3::Throw_Hr(
      v6,
      (void *)0x26,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_34;
  }
  v28 = 0LL;
  v7 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v27)(
         v27,
         &GUID_80fb0327_5a00_55cc_85db_a852719981b9,
         &v23);
  v8 = retaddr;
  if ( v7 < 0 )
  {
LABEL_34:
    wil::details::in1diag3::Throw_Hr(
      v8,
      (void *)0x16A8,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v7);
    goto LABEL_35;
  }
  v9 = v23;
  v28 = v23;
  v22 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23 + 48LL))(v23, &v22);
  v11 = retaddr;
  if ( v10 < 0 )
  {
LABEL_35:
    wil::details::in1diag3::Throw_Hr(
      v11,
      (void *)0x2C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v10);
LABEL_36:
    wil::details::in1diag3::Throw_Hr(
      v17,
      (void *)0x46,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v16);
    JUMPOUT(0x1800A8A0FLL);
  }
  v21[0] = 1;
  while ( 1 )
  {
    if ( (*(int (__fastcall **)(__int64, char *))(*(_QWORD *)v22 + 56LL))(v22, v21) < 0 || !v21[0] )
      goto LABEL_18;
    v23 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 48LL))(v22, &v23);
    v13 = retaddr;
    if ( v12 < 0 )
      goto LABEL_30;
    v26 = 0LL;
    v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23 + 56LL))(v23, &v26);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x35,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v14);
LABEL_30:
      wil::details::in1diag3::Throw_Hr(
        v13,
        (void *)0x32,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v12);
      goto LABEL_31;
    }
    v15 = v26;
    v25 = 0LL;
    WindowsDeleteString(0LL);
    v25 = 0LL;
    v16 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v15 + 56LL))(v15, &v25);
    v17 = retaddr;
    if ( v16 < 0 )
      goto LABEL_36;
    StringRawBuffer = WindowsGetStringRawBuffer(v25, 0LL);
    **a1 = CompareStringOrdinal(*(LPCWCH *)a1[1], -1, StringRawBuffer, -1, 1) == 2;
    v19 = **a1;
    WindowsDeleteString(v25);
    if ( v19 || (*(unsigned int (__fastcall **)(__int64, char *))(*(_QWORD *)v22 + 64LL))(v22, v21) == -2147483637 )
      break;
    if ( v26 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
LABEL_18:
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v27 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  if ( v24 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  return result;
}
