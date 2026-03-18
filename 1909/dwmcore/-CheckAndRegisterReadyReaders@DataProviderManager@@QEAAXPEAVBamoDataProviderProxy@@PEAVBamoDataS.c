/*
 * XREFs of ?CheckAndRegisterReadyReaders@DataProviderManager@@QEAAXPEAVBamoDataProviderProxy@@PEAVBamoDataSourceProxy@@@Z @ 0x180187FF4
 * Callers:
 *     ?AddDataSource@DataProviderProxy@@MEAAJPEAVBamoDataSourceProxy@@@Z @ 0x180197730 (-AddDataSource@DataProviderProxy@@MEAAJPEAVBamoDataSourceProxy@@@Z.c)
 * Callees:
 *     ??$GetUniqueId@VBamoDataProviderProxy@@@DataProviderHelper@@YA_KPEAVBamoDataProviderProxy@@@Z @ 0x1800E4F44 (--$GetUniqueId@VBamoDataProviderProxy@@@DataProviderHelper@@YA_KPEAVBamoDataProviderProxy@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180153A88 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$GetUniqueId@VDataSourceProxy@@@DataProviderHelper@@YA_KPEAVDataSourceProxy@@@Z @ 0x180187DE4 (--$GetUniqueId@VDataSourceProxy@@@DataProviderHelper@@YA_KPEAVDataSourceProxy@@@Z.c)
 *     ?RegisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z @ 0x1801969F4 (-RegisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z.c)
 */

void __fastcall DataProviderManager::CheckAndRegisterReadyReaders(
        DataProviderManager *this,
        struct BamoDataProviderProxy *a2,
        struct BamoDataSourceProxy *a3)
{
  __int64 Unique; // rbp
  __int64 v6; // rax
  struct CDataSourceReader **v7; // rbx
  __int64 v8; // r14
  struct CDataSourceReader **i; // rsi
  struct CDataSourceReader *v10; // rdx
  int v11; // eax
  const char *v12; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Unique = DataProviderHelper::GetUniqueId<BamoDataProviderProxy>((__int64)a2);
  v6 = DataProviderHelper::GetUniqueId<DataSourceProxy>((__int64)a3);
  v7 = (struct CDataSourceReader **)*((_QWORD *)this + 13);
  v8 = v6;
  for ( i = (struct CDataSourceReader **)*((_QWORD *)this + 14); v7 != i; ++v7 )
  {
    v10 = *v7;
    if ( *((_QWORD *)*v7 + 7) == Unique && *((_QWORD *)v10 + 8) == v8 )
    {
      v11 = DataSourceProxy::RegisterReader(a3, v10);
      if ( ((v11 + 0x80000000) & 0x80000000) == 0 && v11 != -2147024891 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x232,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
          v12);
        JUMPOUT(0x1801880BDLL);
      }
      *((_BYTE *)*v7 + 72) &= ~2u;
    }
  }
  DataProviderManager::RemoveProcessedReadersFromReadyList(this);
}
