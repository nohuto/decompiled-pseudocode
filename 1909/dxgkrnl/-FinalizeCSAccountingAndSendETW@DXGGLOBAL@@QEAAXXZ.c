/*
 * XREFs of ?FinalizeCSAccountingAndSendETW@DXGGLOBAL@@QEAAXXZ @ 0x1C0243B30
 * Callers:
 *     ?AccountingforCSCallBackFn@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1C0241380 (-AccountingforCSCallBackFn@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?EmitSleepStudyBlockerDataEvents@DripsBlockerTrackingHelper@@QEAAXE@Z @ 0x1C02429F4 (-EmitSleepStudyBlockerDataEvents@DripsBlockerTrackingHelper@@QEAAXE@Z.c)
 *     ?FinalizeTracking@DripsBlockerTrackingHelper@@QEAAXXZ @ 0x1C0243BA4 (-FinalizeTracking@DripsBlockerTrackingHelper@@QEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::FinalizeCSAccountingAndSendETW(DXGGLOBAL *this)
{
  _BYTE v2[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v2, (DXGGLOBAL *)((char *)this + 1696), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v2);
  DripsBlockerTrackingHelper::FinalizeTracking((DXGGLOBAL *)((char *)this + 1744));
  DripsBlockerTrackingHelper::EmitSleepStudyBlockerDataEvents(
    (DXGGLOBAL *)((char *)this + 1744),
    *((_BYTE *)this + 1736));
  *((_DWORD *)this + 422) = 0;
  if ( v2[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v2);
}
