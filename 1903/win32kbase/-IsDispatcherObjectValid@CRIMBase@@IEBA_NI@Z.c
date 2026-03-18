/*
 * XREFs of ?IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z @ 0x1C0098948
 * Callers:
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C006D770 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C0098840 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 *     ?PopulateDispatcherObjectWithCustomInputEvents@CBaseInput@@QEAAJAEAVCEventBitmap@@PEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C0179180 (-PopulateDispatcherObjectWithCustomInputEvents@CBaseInput@@QEAAJAEAVCEventBitmap@@PEAVIRegisterI.c)
 * Callees:
 *     ?IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ @ 0x1C0036AD4 (-IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall CRIMBase::IsDispatcherObjectValid(CRIMBase *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx

  v3 = (unsigned int)a2;
  if ( (unsigned int)a2 >= 0x10 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  return CRIMBase::SensorDispatcherObject::IsValid((CRIMBase *)((char *)this + 64 * v3 + 152));
}
