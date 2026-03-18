/*
 * XREFs of ?SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C0058AFC
 * Callers:
 *     ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1C0055610 (-HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z.c)
 *     ?ProcessPTPInertiaActions@CHidInput@@QEAA_NPEAX_K@Z @ 0x1C017D5B8 (-ProcessPTPInertiaActions@CHidInput@@QEAA_NPEAX_K@Z.c)
 *     ?ProcessPTPMouseInput@CHidInput@@QEAAXPEAXPEAU_MOUSE_INPUT_DATA@@_K2K@Z @ 0x1C017D9B0 (-ProcessPTPMouseInput@CHidInput@@QEAAXPEAXPEAU_MOUSE_INPUT_DATA@@_K2K@Z.c)
 *     ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C018B400 (-ivHandleTouchInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     ?GetWorkAndWait@SensorDispatcherObject@CRIMBase@@QEBA?AVDoWorkAndWait@2@XZ @ 0x1C0058BC0 (-GetWorkAndWait@SensorDispatcherObject@CRIMBase@@QEBA-AVDoWorkAndWait@2@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

int __fastcall CRIMBase::SensorDoWorkAndWait(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rdi
  int result; // eax
  PVOID v7; // rbx
  PRKEVENT v8; // rdi
  PRKEVENT Event; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+38h] [rbp-10h]

  v3 = (unsigned int)a2;
  if ( (unsigned int)a2 >= 0x10 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v5 = (v3 << 6) + a1;
  if ( *(_DWORD *)(v5 + 168) != (_DWORD)v3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  result = CRIMBase::SensorDispatcherObject::GetWorkAndWait(v5 + 152, &Event);
  v7 = Object;
  v8 = Event;
  if ( Object || Event )
  {
    KeSetEvent(Event, 1, 0);
    result = KeWaitForSingleObject(v7, WrUserRequest, 0, 0, 0LL);
    if ( v8 )
      result = ObfDereferenceObject(v8);
    if ( v7 )
      return ObfDereferenceObject(v7);
  }
  return result;
}
