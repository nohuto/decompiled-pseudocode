/*
 * XREFs of ??$GetPropertyValue@K@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAK@Z @ 0x18006F950
 * Callers:
 *     ?GetAccessibilitySettings@@YA_N_KPEAUIPropertySet@Collections@Foundation@Windows@@PEA_K2PEAEPEA_N@Z @ 0x18006CC00 (-GetAccessibilitySettings@@YA_N_KPEAUIPropertySet@Collections@Foundation@Windows@@PEA_K2PEAEPEA_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005AA30 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall GetPropertyValue<unsigned long>(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  unsigned int v6; // edi
  __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 (__fastcall ***v15)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v16; // rcx
  __int64 (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-60h] BYREF
  __int64 v19; // [rsp+28h] [rbp-58h] BYREF
  __int64 v20; // [rsp+30h] [rbp-50h] BYREF
  __int64 v21; // [rsp+38h] [rbp-48h]
  const WCHAR *v22[3]; // [rsp+40h] [rbp-40h] BYREF
  char v23[32]; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v22[2] = (const WCHAR *)-2LL;
  v22[0] = L"GamepadAccessibilityVibrationSetting";
  v5 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  if ( !a1 )
  {
    v6 = -2147483637;
    v7 = 2147483659LL;
    v8 = 107LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)v7);
    goto LABEL_18;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  v5 = a1;
  v21 = a1;
  v9 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))a1)(
         a1,
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         &v20);
  v6 = v9;
  if ( v9 < 0 )
  {
    v8 = 110LL;
LABEL_15:
    v7 = (unsigned int)v9;
    goto LABEL_16;
  }
  v10 = v20;
  v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v23, v22);
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v10 + 48LL))(v10, *(_QWORD *)(v11 + 24), &v18);
  v6 = v9;
  if ( v9 < 0 )
  {
    v8 = 111LL;
    goto LABEL_15;
  }
  v12 = v18;
  if ( !v18 )
  {
    v6 = -2147483637;
    v7 = 2147483659LL;
    v8 = 114LL;
    goto LABEL_16;
  }
  v13 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v12 = v18;
  }
  v9 = (**v12)(v12, &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62, &v19);
  v6 = v9;
  if ( v9 < 0 )
  {
    v8 = 116LL;
    goto LABEL_15;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 96LL))(v19, a3);
  v6 = v9;
  if ( v9 < 0 )
  {
    v8 = 117LL;
    goto LABEL_15;
  }
  v6 = 0;
LABEL_18:
  v14 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v15)[2])(v15);
  }
  v16 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return v6;
}
