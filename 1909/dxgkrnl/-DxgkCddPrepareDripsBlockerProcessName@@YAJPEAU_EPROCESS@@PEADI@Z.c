/*
 * XREFs of ?DxgkCddPrepareDripsBlockerProcessName@@YAJPEAU_EPROCESS@@PEADI@Z @ 0x1C020C620
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PrepareDripsBlockerProcessName@DripsBlockerTrackingHelper@@QEAAJPEADPEAU_EPROCESS@@0IPEA_K@Z @ 0x1C02455E0 (-PrepareDripsBlockerProcessName@DripsBlockerTrackingHelper@@QEAAJPEADPEAU_EPROCESS@@0IPEA_K@Z.c)
 */

__int64 __fastcall DxgkCddPrepareDripsBlockerProcessName(struct _EPROCESS *a1, char *a2, unsigned int a3)
{
  struct DXGGLOBAL *Global; // rax
  DripsBlockerTrackingHelper *v7; // rcx
  unsigned int v8; // ebx
  _BYTE v10[24]; // [rsp+30h] [rbp-18h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)a1, (__int64)a2);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (struct DXGGLOBAL *)((char *)Global + 1696), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  v8 = DripsBlockerTrackingHelper::PrepareDripsBlockerProcessName(v7, 0LL, a1, a2, a3, 0LL);
  if ( v10[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10);
  return v8;
}
