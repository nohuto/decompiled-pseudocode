/*
 * XREFs of ?SetInt64@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEAAJPEB_W_J@Z @ 0x180075A7C
 * Callers:
 *     ?SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800744C0 (-SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV-$shared_ptr@VISettingsCo.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001563C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::SetInt64(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, PVOID, __int64, _BYTE *); // rdi
  HSTRING_HEADER *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  _BYTE v16[8]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v17; // [rsp+38h] [rbp-48h] BYREF
  __int64 v18; // [rsp+40h] [rbp-40h] BYREF
  const WCHAR *v19[2]; // [rsp+48h] [rbp-38h] BYREF
  HSTRING_HEADER v20; // [rsp+58h] [rbp-28h] BYREF
  __int64 v21; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v19[1] = (const WCHAR *)-2LL;
  v19[0] = L"delay";
  v4 = *(_DWORD *)(a1 + 16);
  if ( (v4 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x159,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
      (const char *)v4);
    return v4;
  }
  v17 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 8) + 96LL))(
         *(_QWORD *)(a1 + 8),
         a3,
         &v17);
  v4 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
      (const char *)(unsigned int)v5);
LABEL_5:
    v6 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    return v4;
  }
  v16[0] = 0;
  v18 = 0LL;
  v7 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a1)(
         *(_QWORD *)a1,
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         &v18);
  v4 = v7;
  if ( v7 < 0 )
  {
    v8 = 352LL;
    goto LABEL_9;
  }
  v10 = v18;
  v11 = *(__int64 (__fastcall **)(__int64, PVOID, __int64, _BYTE *))(*(_QWORD *)v18 + 80LL);
  v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v20, v19);
  v7 = v11(v10, v12[1].Reserved.Reserved1, v17, v16);
  v4 = v7;
  v21 = 0LL;
  if ( v7 < 0 )
  {
    v8 = 353LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
      (const char *)(unsigned int)v7);
    v9 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    goto LABEL_5;
  }
  v13 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return 0;
}
