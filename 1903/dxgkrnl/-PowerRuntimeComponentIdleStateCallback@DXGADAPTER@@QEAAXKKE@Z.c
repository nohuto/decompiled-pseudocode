/*
 * XREFs of ?PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z @ 0x1C0033B84
 * Callers:
 *     ?SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z @ 0x1C00347E4 (-SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z.c)
 *     ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z @ 0x1C0034D2C (-SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z.c)
 *     ?DxgkPowerRuntimeComponentIdleStateCallback@@YAXPEAXKK@Z @ 0x1C003AFC0 (-DxgkPowerRuntimeComponentIdleStateCallback@@YAXPEAXKK@Z.c)
 * Callees:
 *     ?PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z @ 0x1C0033CA0 (-PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z.c)
 */

void __fastcall DXGADAPTER::PowerRuntimeComponentIdleStateCallback(
        DXGADAPTER *this,
        unsigned int a2,
        unsigned int a3,
        unsigned __int8 a4)
{
  PSLIST_ENTRY v8; // rax

  if ( *((_QWORD *)this + 426)
    && (a2 == 1 || a2 == 4)
    && _InterlockedIncrement((volatile signed __int32 *)this + 840) > 1 )
  {
    while ( 1 )
    {
      v8 = ExpInterlockedPopEntrySList((PSLIST_HEADER)this + 212);
      if ( v8 )
        break;
      if ( KeGetCurrentIrql() < 2u )
        KeWaitForSingleObject((char *)this + 3328, Executive, 0, 0, 0LL);
      else
        KeStallExecutionProcessor(0x64u);
    }
    LODWORD(v8[1].Next) = a2;
    HIDWORD(v8[1].Next) = a3;
    *((_BYTE *)&v8[1].Next + 8) = a4;
    ExInterlockedInsertTailList((PLIST_ENTRY)((char *)this + 3368), (PLIST_ENTRY)v8, (PKSPIN_LOCK)this + 419);
    KeSetEvent((PRKEVENT)((char *)this + 3280), 0, 0);
  }
  else
  {
    DXGADAPTER::PowerRuntimeComponentIdleStateCallback_Worker(this, a2, a3, a4);
  }
}
