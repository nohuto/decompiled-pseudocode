/*
 * XREFs of ?GetCommonTargetingQueryParameters@FeatureManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAPEAU3@@Z @ 0x18000D750
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000366C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ContentManagement::FeatureManager::GetCommonTargetingQueryParameters(
        ContentManagement::FeatureManager *this,
        HSTRING a2,
        HSTRING a3,
        HSTRING *a4)
{
  int ActivationFactory; // eax
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v14; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v15[2]; // [rsp+38h] [rbp-38h] BYREF
  HSTRING string; // [rsp+48h] [rbp-28h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v15[1] = -2LL;
  *a4 = 0LL;
  v14 = 0LL;
  if ( WindowsCreateStringReference(L"Windows.Internal.Flighting.ClientAttributes", 0x2Bu, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  ActivationFactory = RoGetActivationFactory(string, &GUID_41845433_1668_4264_8a63_315eb82ab0d6, &v14);
  v8 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C1,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_13;
  }
  v15[0] = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, HSTRING, HSTRING, _QWORD *))(*(_QWORD *)v14 + 48LL))(v14, a2, a3, v15);
  v8 = v9;
  if ( v9 < 0 )
  {
    v10 = 452LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_11;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, HSTRING *))(*(_QWORD *)v15[0] + 56LL))(v15[0], a4);
  v8 = v9;
  if ( v9 < 0 )
  {
    v10 = 453LL;
    goto LABEL_9;
  }
  v8 = 0;
LABEL_11:
  v11 = v15[0];
  if ( v15[0] )
  {
    v15[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
LABEL_13:
  v12 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return v8;
}
