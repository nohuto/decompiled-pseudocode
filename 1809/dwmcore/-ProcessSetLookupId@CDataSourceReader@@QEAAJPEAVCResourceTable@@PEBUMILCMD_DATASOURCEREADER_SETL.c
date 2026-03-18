/*
 * XREFs of ?ProcessSetLookupId@CDataSourceReader@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DATASOURCEREADER_SETLOOKUPID@@@Z @ 0x180194030
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddReaderToReadyList@DataProviderManager@@QEAAXPEAVCDataSourceReader@@@Z @ 0x180153810 (-AddReaderToReadyList@DataProviderManager@@QEAAXPEAVCDataSourceReader@@@Z.c)
 *     ?GetDataSourceProxy@DataProviderManager@@QEAAPEAVBamoDataSourceProxy@@_K0@Z @ 0x180153BF0 (-GetDataSourceProxy@DataProviderManager@@QEAAPEAVBamoDataSourceProxy@@_K0@Z.c)
 *     ?RegisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z @ 0x18016FE44 (-RegisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z.c)
 */

__int64 __fastcall CDataSourceReader::ProcessSetLookupId(
        CDataSourceReader *this,
        struct CResourceTable *a2,
        const struct MILCMD_DATASOURCEREADER_SETLOOKUPID *a3)
{
  __int64 v3; // rdx
  __int64 v5; // rax
  unsigned __int64 v6; // r8
  DataProviderManager *v7; // rdi
  DataSourceProxy *DataSourceProxy; // rax
  __int64 v9; // r8
  const char *v10; // r9
  int v11; // eax
  unsigned int v12; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *((_QWORD *)a3 + 1);
  v5 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 7) = v3;
  v6 = *((_QWORD *)a3 + 2);
  *((_QWORD *)this + 8) = v6;
  v7 = *(DataProviderManager **)(v5 + 1216);
  DataSourceProxy = DataProviderManager::GetDataSourceProxy(v7, v3, v6);
  if ( DataSourceProxy )
  {
    v11 = DataSourceProxy::RegisterReader(DataSourceProxy, this);
    v12 = v11;
    if ( v11 >= 0 )
      v12 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C4,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
        (const char *)(unsigned int)v11);
    if ( (int)(v12 + 0x80000000) >= 0 && v12 != -2147024891 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x48,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\datasourcereader.cpp",
        (const char *)v12);
      return v12;
    }
  }
  else
  {
    DataProviderManager::AddReaderToReadyList(v7, this, v9, v10);
  }
  return 0LL;
}
