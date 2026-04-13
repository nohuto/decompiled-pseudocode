/*
 * XREFs of CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_b3d6e316dac81e3a4143ec7bc1109520___ @ 0x1800A8B4C
 * Callers:
 *     ?UnregisterTask@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800A75EC (-UnregisterTask@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@V-$shared_ptr@VCorrelationVect.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000480C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$TaskUnregistered@PEB_WAEAY0CH@_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEB_WAEAY0CH@_WPEBD@Z @ 0x1800A8A18 (--$TaskUnregistered@PEB_WAEAY0CH@_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryMa.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C71FD (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_b3d6e316dac81e3a4143ec7bc1109520___(
        __int64 a1)
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
  __int64 v15; // rsi
  int v16; // eax
  const WCHAR *StringRawBuffer; // rdi
  const WCHAR *v18; // rax
  int v19; // eax
  wil::details::in1diag3 *v20; // rcx
  __int64 result; // rax
  __int64 v22; // [rsp+38h] [rbp-89h] BYREF
  HSTRING v23; // [rsp+40h] [rbp-81h] BYREF
  __int64 v24; // [rsp+48h] [rbp-79h] BYREF
  __int64 v25; // [rsp+50h] [rbp-71h] BYREF
  __int64 v26; // [rsp+58h] [rbp-69h] BYREF
  __int64 v27; // [rsp+60h] [rbp-61h] BYREF
  __int64 v28; // [rsp+68h] [rbp-59h] BYREF
  __int64 v29; // [rsp+70h] [rbp-51h]
  const WCHAR *v30[2]; // [rsp+78h] [rbp-49h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp-39h] BYREF
  HSTRING string; // [rsp+A0h] [rbp-21h] BYREF
  OLECHAR sz[40]; // [rsp+A8h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]

  v30[1] = (const WCHAR *)-2LL;
  v26 = 0LL;
  string = 0LL;
  v2 = WindowsCreateStringReference(
         L"Windows.ApplicationModel.Background.BackgroundTaskRegistration",
         0x3Eu,
         &hstringHeader,
         &string);
  if ( v2 < 0 )
  {
LABEL_33:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2);
    goto LABEL_34;
  }
  v26 = 0LL;
  ActivationFactory = RoGetActivationFactory(string, &GUID_4c542f69_b000_42ba_a093_6a563c65e3f8, &v26);
  v4 = retaddr;
  if ( ActivationFactory < 0 )
  {
LABEL_34:
    wil::details::in1diag3::Throw_Hr(
      v4,
      (void *)0x23,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_35;
  }
  v28 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v26 + 48LL))(v26, &v28);
  v6 = retaddr;
  if ( v5 < 0 )
  {
LABEL_35:
    wil::details::in1diag3::Throw_Hr(
      v6,
      (void *)0x26,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_36;
  }
  v29 = 0LL;
  v7 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v28)(
         v28,
         &GUID_80fb0327_5a00_55cc_85db_a852719981b9,
         &v25);
  v8 = retaddr;
  if ( v7 < 0 )
  {
LABEL_36:
    wil::details::in1diag3::Throw_Hr(
      v8,
      (void *)0x16A8,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v7);
    goto LABEL_37;
  }
  v9 = v25;
  v29 = v25;
  v24 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 48LL))(v25, &v24);
  v11 = retaddr;
  if ( v10 < 0 )
  {
LABEL_37:
    wil::details::in1diag3::Throw_Hr(
      v11,
      (void *)0x2C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v10);
LABEL_38:
    wil::details::in1diag3::Throw_Hr(
      v20,
      (void *)0x57,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v19);
    __debugbreak();
  }
  LOBYTE(v22) = 1;
  while ( 1 )
  {
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 56LL))(v24, &v22) < 0 || !(_BYTE)v22 )
      goto LABEL_24;
    v25 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 48LL))(v24, &v25);
    v13 = retaddr;
    if ( v12 < 0 )
      goto LABEL_32;
    v27 = 0LL;
    v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 56LL))(v25, &v27);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x35,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v14);
LABEL_32:
      wil::details::in1diag3::Throw_Hr(
        v13,
        (void *)0x32,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v12);
      goto LABEL_33;
    }
    v15 = v27;
    v23 = 0LL;
    WindowsDeleteString(0LL);
    v23 = 0LL;
    v16 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v15 + 56LL))(v15, &v23);
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x53,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v16);
      JUMPOUT(0x1800A8F9ALL);
    }
    StringRawBuffer = WindowsGetStringRawBuffer(v23, 0LL);
    v18 = WindowsGetStringRawBuffer(**(HSTRING **)a1, 0LL);
    if ( CompareStringOrdinal(v18, -1, StringRawBuffer, -1, 1) == 2 )
      break;
    WindowsDeleteString(v23);
    if ( (*(unsigned int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 64LL))(v24, &v22) == -2147483637 )
      goto LABEL_20;
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  v19 = (*(__int64 (__fastcall **)(__int64, HSTRING_HEADER *))(*(_QWORD *)v15 + 48LL))(v15, &hstringHeader);
  v20 = retaddr;
  if ( v19 < 0 )
    goto LABEL_38;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 96LL))(v15, 0LL);
  memset_0(sz, 0, 0x4EuLL);
  StringFromGUID2((const GUID *const)&hstringHeader, sz, 39);
  v30[0] = WindowsGetStringRawBuffer(v23, 0LL);
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TaskUnregistered<wchar_t const *,wchar_t (&)[39]>(
    v30,
    sz,
    (const unsigned __int16 *)(**(_QWORD **)(a1 + 8) + 8LL));
  WindowsDeleteString(v23);
LABEL_20:
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
LABEL_24:
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v28 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  if ( v26 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  return result;
}
