/*
 * XREFs of ?GetConstantForType@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEBGPEAVBamoAsyncResult_PROPVARIANT_Proxy@@@Z @ 0x180048E40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPROPVARIANT@MPCConstantManager@@QEAA?AV?$optional@UtagPROPVARIANT@@@std@@KW4InputType@@PEBG@Z @ 0x180048F44 (-GetPROPVARIANT@MPCConstantManager@@QEAA-AV-$optional@UtagPROPVARIANT@@@std@@KW4InputType@@PEBG@.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCConstantManager::GetConstantForType(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  _BYTE v8[40]; // [rsp+30h] [rbp-28h] BYREF

  MPCConstantManager::GetPROPVARIANT(a1, v8);
  v5 = a5 + 8;
  v6 = *(_QWORD *)(a5 + 8);
  if ( v8[24] )
    return (*(__int64 (__fastcall **)(__int64, _BYTE *))(v6 + 24))(v5, v8);
  else
    return (*(__int64 (__fastcall **)(__int64, __int64))(v6 + 32))(v5, 2147942487LL);
}
