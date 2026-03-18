/*
 * XREFs of DpiReportDevicePowerStateDownWorkItemCallback @ 0x1C029D110
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AddD0LagTimeToLastActiveEntry@DripsBlockerTrackingHelper@@AEAAXXZ @ 0x1C0240F04 (-AddD0LagTimeToLastActiveEntry@DripsBlockerTrackingHelper@@AEAAXXZ.c)
 */

void __fastcall DpiReportDevicePowerStateDownWorkItemCallback(
        __int64 IoObject,
        __int64 Context,
        PIO_WORKITEM IoWorkItem)
{
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v5; // rbx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  Global = DXGGLOBAL::GetGlobal(IoObject, Context);
  v5 = Global;
  if ( *((_DWORD *)Global + 422) )
  {
    if ( *((_BYTE *)Global + 303824) )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v6, (struct DXGGLOBAL *)((char *)Global + 1696), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
      DripsBlockerTrackingHelper::AddD0LagTimeToLastActiveEntry((struct DXGGLOBAL *)((char *)v5 + 1744));
      if ( v6[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v6);
    }
  }
  IoFreeWorkItem(IoWorkItem);
}
