/*
 * XREFs of ??_GSESSION_ADAPTER@@QEAAPEAXI@Z @ 0x1C001A2E4
 * Callers:
 *     ?RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z @ 0x1C00BB9FC (-RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z.c)
 *     ?AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z @ 0x1C00BBB2C (-AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z.c)
 *     DxgkDestroyCsrssProcess @ 0x1C013BA34 (DxgkDestroyCsrssProcess.c)
 * Callees:
 *     ??1SESSION_ADAPTER@@QEAA@XZ @ 0x1C013B640 (--1SESSION_ADAPTER@@QEAA@XZ.c)
 */

SESSION_ADAPTER *__fastcall SESSION_ADAPTER::`scalar deleting destructor'(SESSION_ADAPTER *P)
{
  SESSION_ADAPTER::~SESSION_ADAPTER(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
