/*
 * XREFs of ?GetUInt64KeyFromUInt64Value@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@_KPEA_K@Z @ 0x18006C7FC
 * Callers:
 *     ?GetAccessibilitySettings@@YA_N_KPEAUIPropertySet@Collections@Foundation@Windows@@PEA_K2PEAEPEA_N@Z @ 0x18006CC00 (-GetAccessibilitySettings@@YA_N_KPEAUIPropertySet@Collections@Foundation@Windows@@PEA_K2PEAEPEA_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall GetUInt64KeyFromUInt64Value(
        struct Windows::Foundation::Collections::IPropertySet *a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  struct Windows::Foundation::Collections::IPropertySet *v6; // rbx
  __int64 v7; // rdx
  int v8; // eax
  unsigned int v9; // edi
  unsigned __int64 v10; // r9
  int v11; // eax
  int v12; // eax
  int v13; // eax
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 (__fastcall ***v16)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v17; // rcx
  const wchar_t *StringRawBuffer; // rdi
  size_t v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 (__fastcall ***v22)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 (__fastcall ***v26)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  HSTRING string; // [rsp+20h] [rbp-50h] BYREF
  __int64 v31; // [rsp+28h] [rbp-48h] BYREF
  __int64 (__fastcall ***v32)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-40h] BYREF
  __int64 v33; // [rsp+38h] [rbp-38h] BYREF
  __int64 v34; // [rsp+40h] [rbp-30h] BYREF
  __int64 v35; // [rsp+48h] [rbp-28h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v36; // [rsp+50h] [rbp-20h]
  _QWORD v37[3]; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  char v39; // [rsp+A0h] [rbp+30h] BYREF
  UINT32 length; // [rsp+B8h] [rbp+48h] BYREF

  v37[1] = -2LL;
  v6 = 0LL;
  v36 = 0LL;
  v35 = 0LL;
  v33 = 0LL;
  v39 = 0;
  if ( !a1 )
  {
    v7 = 134LL;
    goto LABEL_11;
  }
  (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)a1 + 8LL))(a1);
  v6 = a1;
  v36 = a1;
  v8 = (**(__int64 (__fastcall ***)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, __int64 *))a1)(
         a1,
         &GUID_fe2f3d47_5d47_5499_8374_430c7cda0204,
         &v35);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = (unsigned int)v8;
    v7 = 138LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)v10);
    goto LABEL_47;
  }
  v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v35 + 48LL))(v35, &v33);
  v9 = v11;
  if ( v11 < 0 )
  {
    v10 = (unsigned int)v11;
    v7 = 139LL;
    goto LABEL_13;
  }
  v12 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v33 + 56LL))(v33, &v39);
  v9 = v12;
  if ( v12 < 0 )
  {
    v10 = (unsigned int)v12;
    v7 = 140LL;
    goto LABEL_13;
  }
  if ( !v39 )
  {
    v7 = 143LL;
LABEL_11:
    v9 = -2147483637;
LABEL_12:
    v10 = v9;
    goto LABEL_13;
  }
  while ( 1 )
  {
    v32 = 0LL;
    v31 = 0LL;
    v34 = 0LL;
    string = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v33 + 48LL))(v33, &v34);
    v9 = v13;
    if ( v13 < 0 )
      break;
    v14 = v34;
    WindowsDeleteString(string);
    string = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v14 + 48LL))(v14, &string);
    v9 = v13;
    if ( v13 < 0 )
    {
      v23 = 154LL;
      goto LABEL_40;
    }
    v15 = v34;
    v16 = v32;
    if ( v32 )
    {
      v32 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v16)[2])(v16);
    }
    v13 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v15 + 56LL))(
            v15,
            &v32);
    v9 = v13;
    if ( v13 < 0 )
    {
      v23 = 155LL;
      goto LABEL_40;
    }
    v17 = v31;
    if ( v31 )
    {
      v31 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    v13 = (**v32)(v32, &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62, &v31);
    v9 = v13;
    if ( v13 < 0 )
    {
      v23 = 157LL;
      goto LABEL_40;
    }
    if ( (*(int (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v31 + 112LL))(v31, v37) >= 0 && v37[0] == a2 )
    {
      length = 0;
      StringRawBuffer = WindowsGetStringRawBuffer(string, &length);
      v19 = wcsspn(StringRawBuffer, L"0123456789abcdefABCDEF");
      if ( v19 == length )
      {
        *a3 = _o__wcstoui64(StringRawBuffer, 0LL, 16LL);
        v9 = 0;
        goto LABEL_41;
      }
    }
    v13 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v33 + 64LL))(v33, &v39);
    v9 = v13;
    if ( v13 < 0 )
    {
      v23 = 172LL;
      goto LABEL_40;
    }
    WindowsDeleteString(string);
    string = 0LL;
    v20 = v34;
    if ( v34 )
    {
      v34 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    v21 = v31;
    if ( v31 )
    {
      v31 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
    v22 = v32;
    if ( v32 )
    {
      v32 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v22)[2])(v22);
    }
    if ( !v39 )
    {
      v9 = -2147023728;
      v7 = 175LL;
      goto LABEL_12;
    }
  }
  v23 = 153LL;
LABEL_40:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v23,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
    (const char *)(unsigned int)v13);
LABEL_41:
  WindowsDeleteString(string);
  string = 0LL;
  v24 = v34;
  if ( v34 )
  {
    v34 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  v25 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  v26 = v32;
  if ( v32 )
  {
    v32 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v26)[2])(v26);
  }
LABEL_47:
  v27 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  }
  v28 = v35;
  if ( v35 )
  {
    v35 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  }
  if ( v6 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v6 + 16LL))(v6);
  return v9;
}
