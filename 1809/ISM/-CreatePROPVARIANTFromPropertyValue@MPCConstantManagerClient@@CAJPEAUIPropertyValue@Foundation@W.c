/*
 * XREFs of ?CreatePROPVARIANTFromPropertyValue@MPCConstantManagerClient@@CAJPEAUIPropertyValue@Foundation@Windows@@PEAUtagPROPVARIANT@@@Z @ 0x1800E13CC
 * Callers:
 *     ?UpdateConstantForDeviceAsync@MPCConstantManagerClient@@UEAAJIW4InputType@MPCManager@Input@Internal@Windows@@PEAUHSTRING__@@PEAUIPropertyValue@Foundation@6@PEAPEAUIAsyncAction@96@@Z @ 0x1800E07A0 (-UpdateConstantForDeviceAsync@MPCConstantManagerClient@@UEAAJIW4InputType@MPCManager@Input@Inter.c)
 *     ?UpdateConstantForTypeAsync@MPCConstantManagerClient@@UEAAJW4InputType@MPCManager@Input@Internal@Windows@@PEAUHSTRING__@@PEAUIPropertyValue@Foundation@6@PEAPEAUIAsyncAction@96@@Z @ 0x1800E0890 (-UpdateConstantForTypeAsync@MPCConstantManagerClient@@UEAAJW4InputType@MPCManager@Input@Internal.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCConstantManagerClient::CreatePROPVARIANTFromPropertyValue(
        struct Windows::Foundation::IPropertyValue *a1,
        struct tagPROPVARIANT *a2)
{
  int v4; // eax
  DOUBLE v6; // xmm0_8
  LARGE_INTEGER v7[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v9; // [rsp+40h] [rbp+8h] BYREF
  int v10; // [rsp+50h] [rbp+18h] BYREF
  float v11; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0;
  *(_QWORD *)&a2->vt = 0LL;
  a2->hVal.QuadPart = 0LL;
  a2->bstrblobVal.pData = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct Windows::Foundation::IPropertyValue *, int *))(*(_QWORD *)a1 + 48LL))(a1, &v10);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x12E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
      (const char *)(unsigned int)v4);
    JUMPOUT(0x1800E14CDLL);
  }
  switch ( v10 )
  {
    case 7:
      (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *, LARGE_INTEGER *))(*(_QWORD *)a1 + 112LL))(
        a1,
        v7);
      a2->vt = 21;
      a2->hVal = v7[0];
      break;
    case 8:
      (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *, float *))(*(_QWORD *)a1 + 120LL))(a1, &v11);
      v6 = v11;
      a2->vt = 5;
      a2->dblVal = v6;
      break;
    case 11:
      (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *, char *))(*(_QWORD *)a1 + 144LL))(a1, &v9);
      a2->vt = 11;
      a2->iVal = -(v9 != 0);
      break;
    default:
      return 2147942487LL;
  }
  return 0LL;
}
