/*
 * XREFs of ?StartStopCoreDripsBlockerAccounting@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1C0212308
 * Callers:
 *     ?ApplyCsFunctionAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0228700 (-ApplyCsFunctionAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?StartStopAccounting@DripsBlockerTrackingHelper@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1C02121E8 (-StartStopAccounting@DripsBlockerTrackingHelper@@QEAAX_KPEAU_EPROCESS@@_N@Z.c)
 */

void __fastcall DXGGLOBAL::StartStopCoreDripsBlockerAccounting(
        DXGGLOBAL *this,
        __int64 a2,
        struct _EPROCESS *a3,
        bool a4)
{
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (DXGGLOBAL *)((char *)this + 1736), 0);
  DripsBlockerTrackingHelper::StartStopAccounting((DXGGLOBAL *)((char *)this + 1800), a2, a3, a4);
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
}
