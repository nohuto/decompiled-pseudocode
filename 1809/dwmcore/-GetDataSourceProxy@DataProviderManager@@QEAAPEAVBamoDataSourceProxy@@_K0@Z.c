/*
 * XREFs of ?GetDataSourceProxy@DataProviderManager@@QEAAPEAVBamoDataSourceProxy@@_K0@Z @ 0x180153BF0
 * Callers:
 *     ?RegisterDataProvider@DataProviderManager@@QEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataProviderProxy@@@Z @ 0x180078AEC (-RegisterDataProvider@DataProviderManager@@QEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataP.c)
 *     ?UnregisterReaderForDataSource@DataProviderManager@@QEAAJ_K0PEAVCDataSourceReader@@@Z @ 0x180154918 (-UnregisterReaderForDataSource@DataProviderManager@@QEAAJ_K0PEAVCDataSourceReader@@@Z.c)
 *     ?ProcessSetLookupId@CDataSourceReader@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DATASOURCEREADER_SETLOOKUPID@@@Z @ 0x180194030 (-ProcessSetLookupId@CDataSourceReader@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DATASOURCEREADER_SETL.c)
 * Callees:
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x18005E3D8 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ?GetDataSource@DataProviderProxy@@QEAAPEAVBamoDataSourceProxy@@_K@Z @ 0x180170B48 (-GetDataSource@DataProviderProxy@@QEAAPEAVBamoDataSourceProxy@@_K@Z.c)
 */

struct BamoDataSourceProxy *__fastcall DataProviderManager::GetDataSourceProxy(
        DataProviderManager *this,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v5; // rax
  _QWORD *v6; // r11
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 *v9; // rdx
  __int64 v10; // r8
  __int64 *i; // rcx
  __int64 *v12; // rax
  __int64 v14; // [rsp+38h] [rbp+10h] BYREF

  v14 = a2;
  v5 = std::_Hash_bytes((const unsigned __int8 *)&v14, 8uLL);
  v7 = v6[9];
  v8 = v6[12] & v5;
  v9 = (__int64 *)v6[7];
  v10 = 2 * v8;
  for ( i = *(__int64 **)(v7 + 16 * v8); ; i = (__int64 *)*i )
  {
    v12 = *(__int64 **)(v7 + 8 * v10) == v9 ? (__int64 *)v6[7] : **(__int64 ***)(v7 + 8 * v10 + 8);
    if ( i == v12 )
      break;
    if ( i[2] == a2 )
      goto LABEL_9;
  }
  i = (__int64 *)v6[7];
LABEL_9:
  if ( i == v9 )
    return 0LL;
  else
    return DataProviderProxy::GetDataSource((DataProviderProxy *)i[3], a3);
}
