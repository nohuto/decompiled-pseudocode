/*
 * XREFs of ?DoesReaderHaveAccess@DataSourceProxy@@AEAA_NPEAVCDataSourceReader@@@Z @ 0x180197CB4
 * Callers:
 *     ?GetPropertyValue@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@IPEAVCExpressionValue@@@Z @ 0x180197F08 (-GetPropertyValue@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@IPEAVCExpressionValue@@@Z.c)
 *     ?RegisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z @ 0x1801982B4 (-RegisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall DataSourceProxy::DoesReaderHaveAccess(DataSourceProxy *this, struct CDataSourceReader *a2)
{
  int v3; // edi

  v3 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 40LL))((char *)this + 8);
  return !v3 || (*(unsigned int (__fastcall **)(struct CDataSourceReader *))(*(_QWORD *)a2 + 144LL))(a2) == v3;
}
