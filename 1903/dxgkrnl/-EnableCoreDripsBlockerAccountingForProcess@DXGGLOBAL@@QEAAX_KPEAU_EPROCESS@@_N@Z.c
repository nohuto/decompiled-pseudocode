/*
 * XREFs of ?EnableCoreDripsBlockerAccountingForProcess@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1C0242E98
 * Callers:
 *     ?ApplyCsFunctionAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C025D260 (-ApplyCsFunctionAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?EnableAccountingForProcess@DripsBlockerTrackingHelper@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1C0242C60 (-EnableAccountingForProcess@DripsBlockerTrackingHelper@@QEAAX_KPEAU_EPROCESS@@_N@Z.c)
 */

void __fastcall DXGGLOBAL::EnableCoreDripsBlockerAccountingForProcess(
        DXGGLOBAL *this,
        __int64 a2,
        struct _EPROCESS *a3,
        bool a4)
{
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (DXGGLOBAL *)((char *)this + 1696), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  DripsBlockerTrackingHelper::EnableAccountingForProcess((DXGGLOBAL *)((char *)this + 1744), a2, a3, a4);
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
}
