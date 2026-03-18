/*
 * XREFs of ?ScheduleComponentIdleListTimer@DXGADAPTER@@QEAAX_J@Z @ 0x1C00345DC
 * Callers:
 *     ?ProcessComponentIdleList@DXGADAPTER@@QEAAXXZ @ 0x1C0033FAC (-ProcessComponentIdleList@DXGADAPTER@@QEAAXXZ.c)
 *     ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z @ 0x1C0034D2C (-SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::ScheduleComponentIdleListTimer(DXGADAPTER *this, __int64 a2)
{
  if ( !*((_BYTE *)this + 3029) )
  {
    *((_BYTE *)this + 3029) = 1;
    KeSetTimer((PKTIMER)((char *)this + 3144), (LARGE_INTEGER)-a2, (PKDPC)((char *)this + 3208));
  }
}
