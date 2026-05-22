/*
 * XREFs of ?UpdateConstantForDevice@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@IW4InputType@@PEBGAEBUtagPROPVARIANT@@PEAVBamoAsyncHRESULTProxy@@@Z @ 0x180048B30
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ChangeConstantForDeviceId@MPCConstantManager@@QEAAJKW4InputType@@PEBGV?$variant@K_NM@std@@@Z @ 0x1800481F0 (-ChangeConstantForDeviceId@MPCConstantManager@@QEAAJKW4InputType@@PEBGV-$variant@K_NM@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCConstantManager::UpdateConstantForDevice(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        void *a5,
        PROPVARIANT *propvarIn,
        __int64 a7)
{
  HRESULT v10; // eax
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rdx
  HRESULT v15; // eax
  HRESULT v16; // eax
  __int64 v17; // [rsp+30h] [rbp-20h]
  ULONGLONG pullRet; // [rsp+38h] [rbp-18h] BYREF
  DOUBLE pdblRet[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  if ( *(_WORD *)propvarIn >= 4u )
  {
    if ( *(_WORD *)propvarIn <= 5u )
    {
      v16 = PropVariantToDouble(propvarIn, pdblRet);
      if ( v16 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x120,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          (const char *)(unsigned int)v16);
        __debugbreak();
      }
      BYTE4(v17) = 2;
      *(float *)&v17 = pdblRet[0];
      goto LABEL_7;
    }
    if ( *(_WORD *)propvarIn == 11 )
    {
      v15 = PropVariantToBoolean(propvarIn, (BOOL *)&propvarIn);
      if ( v15 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x11B,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          (const char *)(unsigned int)v15);
        JUMPOUT(0x180048C83LL);
      }
      BYTE4(v17) = 1;
      LOBYTE(v17) = (_DWORD)propvarIn != 0;
      goto LABEL_7;
    }
    if ( *(_WORD *)propvarIn == 21 )
    {
      v10 = PropVariantToUInt64(propvarIn, &pullRet);
      if ( v10 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x117,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          (const char *)(unsigned int)v10);
        __debugbreak();
      }
      LODWORD(v17) = pullRet;
      BYTE4(v17) = 0;
LABEL_7:
      v11 = a7;
      v12 = *(_QWORD *)(a7 + 8);
      v13 = (unsigned int)MPCConstantManager::ChangeConstantForDeviceId(a1, a3, a4, a5, v17);
      return (*(__int64 (__fastcall **)(__int64, __int64))(v12 + 24))(v11 + 8, v13);
    }
  }
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a7 + 8) + 24LL))(a7 + 8, 2147942487LL);
}
