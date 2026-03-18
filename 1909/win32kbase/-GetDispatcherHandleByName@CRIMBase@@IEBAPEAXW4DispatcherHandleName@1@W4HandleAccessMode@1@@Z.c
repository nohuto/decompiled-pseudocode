/*
 * XREFs of ?GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z @ 0x1C005A13C
 * Callers:
 *     ?Read@CBaseInput@@QEAAJXZ @ 0x1C0059D10 (-Read@CBaseInput@@QEAAJXZ.c)
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C0059D80 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 *     ?GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ @ 0x1C0099848 (-GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ.c)
 *     ?HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z @ 0x1C017C48C (-HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z.c)
 *     ?HandleFlushDelayZonePalmRejectInputTimer@CHidInput@@QEAAX_NK@Z @ 0x1C017C510 (-HandleFlushDelayZonePalmRejectInputTimer@CHidInput@@QEAAX_NK@Z.c)
 *     ?HandlePTPInertiaTimer@CHidInput@@QEAAX_NKPEAX@Z @ 0x1C017C56C (-HandlePTPInertiaTimer@CHidInput@@QEAAX_NKPEAX@Z.c)
 *     ?HandlePTPTimer@CHidInput@@QEAAX_NKPEAX@Z @ 0x1C017C610 (-HandlePTPTimer@CHidInput@@QEAAX_NKPEAX@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CRIMBase::GetDispatcherHandleByName(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  int v4; // esi
  __int64 v6; // rax

  v3 = (unsigned int)a2;
  v4 = a3;
  if ( (unsigned int)a2 >= 0x10 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v6 = v3 << 6;
  if ( v4 )
    return *(_QWORD *)(v6 + a1 + 192);
  else
    return *(_QWORD *)(v6 + a1 + 176);
}
