/*
 * XREFs of ?GetConstantForDevice@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@IW4InputType@@PEBGPEAVBamoAsyncResult_PROPVARIANT_Proxy@@@Z @ 0x180048DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPROPVARIANT@MPCConstantManager@@QEAA?AV?$optional@UtagPROPVARIANT@@@std@@KW4InputType@@PEBG@Z @ 0x180048F44 (-GetPROPVARIANT@MPCConstantManager@@QEAA-AV-$optional@UtagPROPVARIANT@@@std@@KW4InputType@@PEBG@.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCConstantManager::GetConstantForDevice(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  _BYTE v9[40]; // [rsp+30h] [rbp-28h] BYREF

  MPCConstantManager::GetPROPVARIANT(a1, v9);
  v6 = a6 + 8;
  v7 = *(_QWORD *)(a6 + 8);
  if ( v9[24] )
    return (*(__int64 (__fastcall **)(__int64, _BYTE *))(v7 + 24))(v6, v9);
  else
    return (*(__int64 (__fastcall **)(__int64, __int64))(v7 + 32))(v6, 2147942487LL);
}
