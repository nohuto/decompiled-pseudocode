/*
 * XREFs of ?GetConstant@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEBGPEAVBamoAsyncResult_PROPVARIANT_Proxy@@@Z @ 0x180089770
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?GetPROPVARIANT@MPCConstantManager@@AEAA?AV?$optional@UtagPROPVARIANT@@@std@@W4InputType@@PEBG@Z @ 0x180089E28 (-GetPROPVARIANT@MPCConstantManager@@AEAA-AV-$optional@UtagPROPVARIANT@@@std@@W4InputType@@PEBG@Z.c)
 *     ?value@?$optional@UtagPROPVARIANT@@@std@@QEGAAAEAUtagPROPVARIANT@@XZ @ 0x18008B9B8 (-value@-$optional@UtagPROPVARIANT@@@std@@QEGAAAEAUtagPROPVARIANT@@XZ.c)
 */

__int64 __fastcall MPCConstantManager::GetConstant(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdi
  __int64 v7; // rax
  _BYTE v8[40]; // [rsp+20h] [rbp-28h] BYREF

  MPCConstantManager::GetPROPVARIANT(a1, v8);
  v5 = *(_QWORD *)(a5 + 8);
  if ( !v8[24] )
    return (*(__int64 (__fastcall **)(__int64, __int64))(v5 + 32))(a5 + 8, 2147942487LL);
  v7 = std::optional<tagPROPVARIANT>::value(v8);
  return (*(__int64 (__fastcall **)(__int64, __int64))(v5 + 24))(a5 + 8, v7);
}
