/*
 * XREFs of ?OnConstantChanged@MPCConstantManager@@QEAAXW4InputType@@PEBGAEBUtagPROPVARIANT@@2@Z @ 0x18008A338
 * Callers:
 *     ?ChangeConstant@MPCConstantManager@@QEAAJW4InputType@@PEBGV?$variant@K_NM@std@@@Z @ 0x180088E14 (-ChangeConstant@MPCConstantManager@@QEAAJW4InputType@@PEBGV-$variant@K_NM@std@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$EnumerateStubs@W4InputType@@PEBGUtagPROPVARIANT@@U2@@BamoMPCConstantManagerClientPrincipal@@QEAAJP6AJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEBGUtagPROPVARIANT@@3@Z_N1233@Z @ 0x180087B44 (--$EnumerateStubs@W4InputType@@PEBGUtagPROPVARIANT@@U2@@BamoMPCConstantManagerClientPrincipal@@Q.c)
 */

__int64 __fastcall MPCConstantManager::OnConstantChanged(
        __int64 a1,
        Microsoft::BamoImpl::BamoImplObject *a2,
        __int64 a3,
        __int128 *a4,
        __int128 *a5)
{
  __int64 v5; // xmm1_8
  __int128 v6; // xmm0
  __int64 v7; // xmm1_8
  __int64 result; // rax
  __int128 v9; // [rsp+40h] [rbp-48h] BYREF
  __int64 v10; // [rsp+50h] [rbp-38h]
  __int128 v11; // [rsp+60h] [rbp-28h] BYREF
  __int64 v12; // [rsp+70h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v5 = *((_QWORD *)a5 + 2);
  v9 = *a5;
  v6 = *a4;
  v10 = v5;
  v7 = *((_QWORD *)a4 + 2);
  v11 = v6;
  v12 = v7;
  result = BamoMPCConstantManagerClientPrincipal::EnumerateStubs<enum InputType,unsigned short const *,tagPROPVARIANT,tagPROPVARIANT>(
             a1,
             a2,
             a3,
             (unsigned int)a2,
             a3,
             (__int64)&v11,
             (__int64)&v9);
  if ( (int)result < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      342LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      (const char *)(unsigned int)result);
    __debugbreak();
  }
  return result;
}
