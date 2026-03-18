/*
 * XREFs of ?Register@DataProviderRegistrarPrincipal@@MEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataProviderProxy@@@Z @ 0x180078AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterDataProvider@DataProviderManager@@QEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataProviderProxy@@@Z @ 0x180078AEC (-RegisterDataProvider@DataProviderManager@@QEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataP.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DataProviderRegistrarPrincipal::Register(
        DataProviderManager **this,
        struct BamoDataProviderRegistrarStub *a2,
        struct BamoDataProviderProxy *a3)
{
  int v4; // r8d

  v4 = DataProviderManager::RegisterDataProvider(this[7], a2, a3);
  if ( v4 < 0 )
    (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)a2 + 1) + 24LL))((char *)a2 + 8, (unsigned int)v4);
  return 0LL;
}
