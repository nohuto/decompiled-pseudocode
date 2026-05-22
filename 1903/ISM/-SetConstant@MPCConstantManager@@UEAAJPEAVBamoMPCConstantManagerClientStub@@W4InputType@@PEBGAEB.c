/*
 * XREFs of ?SetConstant@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEBGAEBUtagPROPVARIANT@@PEAVBamoAsyncHRESULTProxy@@@Z @ 0x18008AC20
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?ChangeConstant@MPCConstantManager@@QEAAJW4InputType@@PEBGV?$variant@K_NM@std@@@Z @ 0x180089054 (-ChangeConstant@MPCConstantManager@@QEAAJW4InputType@@PEBGV-$variant@K_NM@std@@@Z.c)
 */

__int64 __fastcall MPCConstantManager::SetConstant(
        __int64 a1,
        __int64 a2,
        int a3,
        _WORD *a4,
        PROPVARIANT *propvarIn,
        __int64 a6)
{
  HRESULT v9; // eax
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, __int64); // rbx
  __int64 v12; // rdx
  HRESULT v14; // eax
  HRESULT v15; // eax
  __int64 v16; // [rsp+20h] [rbp-20h]
  ULONGLONG pullRet; // [rsp+28h] [rbp-18h] BYREF
  DOUBLE pdblRet[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]

  if ( *(_WORD *)propvarIn >= 4u )
  {
    if ( *(_WORD *)propvarIn <= 5u )
    {
      v15 = PropVariantToDouble(propvarIn, pdblRet);
      if ( v15 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          252LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          (const char *)(unsigned int)v15);
        __debugbreak();
      }
      BYTE4(v16) = 2;
      *(float *)&v16 = pdblRet[0];
      goto LABEL_8;
    }
    if ( *(_WORD *)propvarIn == 11 )
    {
      v14 = PropVariantToBoolean(propvarIn, (BOOL *)&propvarIn);
      if ( v14 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          247LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          (const char *)(unsigned int)v14);
        __debugbreak();
      }
      BYTE4(v16) = 1;
      LOBYTE(v16) = (_DWORD)propvarIn != 0;
      goto LABEL_8;
    }
    if ( *(_WORD *)propvarIn == 21 )
    {
      v9 = PropVariantToUInt64(propvarIn, &pullRet);
      if ( v9 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          243LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          (const char *)(unsigned int)v9);
        __debugbreak();
      }
      LODWORD(v16) = pullRet;
      BYTE4(v16) = 0;
LABEL_8:
      v10 = a6;
      v11 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a6 + 8) + 24LL);
      v12 = (unsigned int)MPCConstantManager::ChangeConstant(a1, a3, a4, v16, v16);
      return v11(v10 + 8, v12);
    }
  }
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a6 + 8) + 24LL))(a6 + 8, 2147942487LL);
}
