/*
 * XREFs of ?CreatePROPVARIANTFromPropertyValue@MPCConstantManagerClient@@CAJPEAUIPropertyValue@Foundation@Windows@@PEAUtagPROPVARIANT@@@Z @ 0x18011BB84
 * Callers:
 *     ?SetConstantAsync@MPCConstantManagerClient@@UEAAJW4InputType@MPCManager@Input@Internal@Windows@@PEAUHSTRING__@@PEAUIPropertyValue@Foundation@6@PEAPEAUIAsyncAction@96@@Z @ 0x1801206B0 (-SetConstantAsync@MPCConstantManagerClient@@UEAAJW4InputType@MPCManager@Input@Internal@Windows@@.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?InitPropVariantFromString@@YAJPEBGPEAUtagPROPVARIANT@@@Z @ 0x18011E940 (-InitPropVariantFromString@@YAJPEBGPEAUtagPROPVARIANT@@@Z.c)
 */

__int64 __fastcall MPCConstantManagerClient::CreatePROPVARIANTFromPropertyValue(
        struct Windows::Foundation::IPropertyValue *a1,
        struct tagPROPVARIANT *a2)
{
  int v3; // esi
  __int64 v5; // rax
  int v6; // eax
  const unsigned __int16 *StringRawBuffer; // rax
  int inited; // eax
  bool v10; // zf
  double v11; // xmm0_8
  HSTRING string; // [rsp+20h] [rbp-20h] BYREF
  double v13; // [rsp+28h] [rbp-18h] BYREF
  LARGE_INTEGER v14[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  char v16; // [rsp+60h] [rbp+20h] BYREF
  int v17; // [rsp+70h] [rbp+30h] BYREF
  float v18; // [rsp+78h] [rbp+38h] BYREF

  *(_QWORD *)&a2->vt = 0LL;
  v3 = 0;
  a2->hVal.QuadPart = 0LL;
  a2->bstrblobVal.pData = 0LL;
  v5 = *(_QWORD *)a1;
  v17 = 0;
  v6 = (*(__int64 (__fastcall **)(struct Windows::Foundation::IPropertyValue *, int *))(v5 + 48))(a1, &v17);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      394LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  switch ( v17 )
  {
    case 7:
      (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *, LARGE_INTEGER *))(*(_QWORD *)a1 + 112LL))(
        a1,
        v14);
      a2->vt = 21;
      a2->hVal = v14[0];
      return 0LL;
    case 8:
      (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *, float *))(*(_QWORD *)a1 + 120LL))(a1, &v18);
      v11 = v18;
      goto LABEL_14;
    case 9:
      (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *, double *))(*(_QWORD *)a1 + 128LL))(a1, &v13);
      v11 = v13;
LABEL_14:
      a2->dblVal = v11;
      a2->vt = 5;
      return 0LL;
    case 11:
      (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *, char *))(*(_QWORD *)a1 + 144LL))(a1, &v16);
      v10 = v16 == 0;
      a2->vt = 11;
      LOBYTE(v3) = !v10;
      a2->iVal = -(v3 != 0);
      break;
    case 12:
      (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *, HSTRING *))(*(_QWORD *)a1 + 152LL))(
        a1,
        &string);
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      inited = InitPropVariantFromString(StringRawBuffer, a2);
      if ( inited < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          421LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
          (const char *)(unsigned int)inited);
        __debugbreak();
      }
      break;
    default:
      return 2147942487LL;
  }
  return 0LL;
}
