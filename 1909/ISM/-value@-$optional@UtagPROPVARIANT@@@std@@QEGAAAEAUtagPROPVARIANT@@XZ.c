/*
 * XREFs of ?value@?$optional@UtagPROPVARIANT@@@std@@QEGAAAEAUtagPROPVARIANT@@XZ @ 0x18008B9B8
 * Callers:
 *     ?ChangeConstant@MPCConstantManager@@QEAAJW4InputType@@PEBGV?$variant@K_NM@std@@@Z @ 0x180088E14 (-ChangeConstant@MPCConstantManager@@QEAAJW4InputType@@PEBGV-$variant@K_NM@std@@@Z.c)
 *     ?GetConstant@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEBGPEAVBamoAsyncResult_PROPVARIANT_Proxy@@@Z @ 0x180089770 (-GetConstant@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEBGPEA.c)
 *     ?OnCallbacksChanged@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@@Z @ 0x18008A160 (-OnCallbacksChanged@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@@Z.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x18002C71A (_CxxThrowException_0.c)
 */

__int64 __fastcall std::optional<tagPROPVARIANT>::value(__int64 a1)
{
  void **v2; // [rsp+20h] [rbp-28h] BYREF
  __int128 v3; // [rsp+28h] [rbp-20h]

  if ( !*(_BYTE *)(a1 + 24) )
  {
    v3 = 0uLL;
    v2 = &std::bad_optional_access::`vftable';
    throw (std::bad_optional_access *)&v2;
  }
  return a1;
}
