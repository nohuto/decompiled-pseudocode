/*
 * XREFs of ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1C0055BA0
 * Callers:
 *     UpdateKeyLights @ 0x1C00530E0 (UpdateKeyLights.c)
 *     ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1C0055610 (-HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z.c)
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1C005584C (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 *     ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x1C00559E4 (-PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z.c)
 *     ?OnMouseCursorUpdateNotification@CMouseSensor@@EEAAJXZ @ 0x1C0055B60 (-OnMouseCursorUpdateNotification@CMouseSensor@@EEAAJXZ.c)
 *     CleanupSensorExplicitly @ 0x1C00A6020 (CleanupSensorExplicitly.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBaseInput::ExecutingOnSensorHostingThread(CBaseInput *this)
{
  return *((_DWORD *)this + 303) == (unsigned int)PsGetCurrentThreadId();
}
