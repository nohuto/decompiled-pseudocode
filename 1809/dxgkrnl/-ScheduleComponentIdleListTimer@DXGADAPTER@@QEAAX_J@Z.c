/*
 * XREFs of ?ScheduleComponentIdleListTimer@DXGADAPTER@@QEAAX_J@Z @ 0x1C002EE40
 * Callers:
 *     ?ProcessComponentIdleList@DXGADAPTER@@QEAAXXZ @ 0x1C002E768 (-ProcessComponentIdleList@DXGADAPTER@@QEAAXXZ.c)
 *     ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z @ 0x1C002F520 (-SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::ScheduleComponentIdleListTimer(DXGADAPTER *this, __int64 a2)
{
  if ( !*((_BYTE *)this + 2997) )
  {
    *((_BYTE *)this + 2997) = 1;
    KeSetTimer((PKTIMER)((char *)this + 3112), (LARGE_INTEGER)-a2, (PKDPC)((char *)this + 3176));
  }
}
