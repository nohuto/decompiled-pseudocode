/*
 * XREFs of ??$GetUniqueId@VDataSourceProxy@@@DataProviderHelper@@YA_KPEAVDataSourceProxy@@@Z @ 0x180187DE4
 * Callers:
 *     ?CheckAndRegisterReadyReaders@DataProviderManager@@QEAAXPEAVBamoDataProviderProxy@@PEAVBamoDataSourceProxy@@@Z @ 0x180187FF4 (-CheckAndRegisterReadyReaders@DataProviderManager@@QEAAXPEAVBamoDataProviderProxy@@PEAVBamoDataS.c)
 *     ?RegisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z @ 0x1801969F4 (-RegisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z.c)
 *     ?AddDataSource@DataProviderProxy@@MEAAJPEAVBamoDataSourceProxy@@@Z @ 0x180197730 (-AddDataSource@DataProviderProxy@@MEAAJPEAVBamoDataSourceProxy@@@Z.c)
 *     ?RemoveSourceEntry@DataProviderProxy@@QEAAJPEAVBamoDataSourceProxy@@@Z @ 0x180197D88 (-RemoveSourceEntry@DataProviderProxy@@QEAAJPEAVBamoDataSourceProxy@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DataProviderHelper::GetUniqueId<DataSourceProxy>(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // [rsp+30h] [rbp+8h]

  v1 = a1 + 8;
  LODWORD(v3) = *(_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 32LL))(a1 + 8);
  HIDWORD(v3) = *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 32LL))(v1) + 4);
  return v3;
}
