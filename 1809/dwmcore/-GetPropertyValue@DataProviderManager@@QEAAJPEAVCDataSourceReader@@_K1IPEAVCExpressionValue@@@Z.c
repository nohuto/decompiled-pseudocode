/*
 * XREFs of ?GetPropertyValue@DataProviderManager@@QEAAJPEAVCDataSourceReader@@_K1IPEAVCExpressionValue@@@Z @ 0x180153C80
 * Callers:
 *     ?GetProperty@CDataSourceReader@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180193FE0 (-GetProperty@CDataSourceReader@@UEAAJIPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x18005E3D8 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPropertyValue@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@IPEAVCExpressionValue@@@Z @ 0x18016FA7C (-GetPropertyValue@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@IPEAVCExpressionValue@@@Z.c)
 *     ?GetDataSource@DataProviderProxy@@QEAAPEAVBamoDataSourceProxy@@_K@Z @ 0x180170B48 (-GetDataSource@DataProviderProxy@@QEAAPEAVBamoDataSourceProxy@@_K@Z.c)
 */

int __fastcall DataProviderManager::GetPropertyValue(
        DataProviderManager *this,
        struct CDataSourceReader *a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        struct CExpressionValue *a6)
{
  __int64 v9; // rax
  _QWORD *v10; // r11
  __int64 v11; // r10
  __int64 v12; // rcx
  __int64 *v13; // rdx
  __int64 v14; // r8
  __int64 *i; // rcx
  __int64 *v16; // rax
  __int64 v17; // rdx
  DataSourceProxy *DataSource; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v21; // [rsp+40h] [rbp+18h] BYREF

  v21 = a3;
  v9 = std::_Hash_bytes((const unsigned __int8 *)&v21, 8uLL);
  v11 = v10[9];
  v12 = v10[12] & v9;
  v13 = (__int64 *)v10[7];
  v14 = 2 * v12;
  for ( i = *(__int64 **)(v11 + 16 * v12); ; i = (__int64 *)*i )
  {
    v16 = *(__int64 **)(v11 + 8 * v14) == v13 ? (__int64 *)v10[7] : **(__int64 ***)(v11 + 8 * v14 + 8);
    if ( i == v16 )
      break;
    if ( i[2] == a3 )
      goto LABEL_9;
  }
  i = (__int64 *)v10[7];
LABEL_9:
  if ( i == v13 )
  {
    v17 = 394LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
      (const char *)0x80004005LL);
    return -2147467259;
  }
  DataSource = DataProviderProxy::GetDataSource((DataProviderProxy *)i[3], a4);
  if ( !DataSource )
  {
    v17 = 397LL;
    goto LABEL_11;
  }
  return DataSourceProxy::GetPropertyValue(DataSource, a2, a5, a6);
}
