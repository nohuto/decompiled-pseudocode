/*
 * XREFs of ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1C0069B00
 * Callers:
 *     UpdateKeyLights @ 0x1C0067950 (UpdateKeyLights.c)
 *     ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1C0069570 (-HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z.c)
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1C00697AC (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 *     ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x1C0069944 (-PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z.c)
 *     ?OnMouseCursorUpdateNotification@CMouseSensor@@EEAAJXZ @ 0x1C0069AC0 (-OnMouseCursorUpdateNotification@CMouseSensor@@EEAAJXZ.c)
 *     CleanupSensorExplicitly @ 0x1C0099570 (CleanupSensorExplicitly.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBaseInput::ExecutingOnSensorHostingThread(CBaseInput *this)
{
  return *((_DWORD *)this + 303) == (unsigned int)PsGetCurrentThreadId();
}
