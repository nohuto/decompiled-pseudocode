/*
 * XREFs of ?UpdateConstantForType@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEBGAEBUtagPROPVARIANT@@PEAVBamoAsyncHRESULTProxy@@@Z @ 0x180048C90
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ChangeConstantForInputType@MPCConstantManager@@QEAAJW4InputType@@PEBGV?$variant@K_NM@std@@@Z @ 0x180048160 (-ChangeConstantForInputType@MPCConstantManager@@QEAAJW4InputType@@PEBGV-$variant@K_NM@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCConstantManager::UpdateConstantForType(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        void *a4,
        PROPVARIANT *propvarIn,
        __int64 a6)
{
  HRESULT v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rbx
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
          (void *)0x13C,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          (const char *)(unsigned int)v15);
        __debugbreak();
      }
      BYTE4(v16) = 2;
      *(float *)&v16 = pdblRet[0];
      goto LABEL_7;
    }
    if ( *(_WORD *)propvarIn == 11 )
    {
      v14 = PropVariantToBoolean(propvarIn, (BOOL *)&propvarIn);
      if ( v14 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x137,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          (const char *)(unsigned int)v14);
        JUMPOUT(0x180048DD9LL);
      }
      BYTE4(v16) = 1;
      LOBYTE(v16) = (_DWORD)propvarIn != 0;
      goto LABEL_7;
    }
    if ( *(_WORD *)propvarIn == 21 )
    {
      v9 = PropVariantToUInt64(propvarIn, &pullRet);
      if ( v9 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x133,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          (const char *)(unsigned int)v9);
        __debugbreak();
      }
      LODWORD(v16) = pullRet;
      BYTE4(v16) = 0;
LABEL_7:
      v10 = a6;
      v11 = *(_QWORD *)(a6 + 8);
      v12 = (unsigned int)MPCConstantManager::ChangeConstantForInputType(a1, a3, a4, v16);
      return (*(__int64 (__fastcall **)(__int64, __int64))(v11 + 24))(v10 + 8, v12);
    }
  }
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a6 + 8) + 24LL))(a6 + 8, 2147942487LL);
}
