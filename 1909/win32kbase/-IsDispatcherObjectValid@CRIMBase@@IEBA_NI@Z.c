/*
 * XREFs of ?IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z @ 0x1C00547F8
 * Callers:
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C00546F0 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C0059D80 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 *     ?PopulateDispatcherObjectWithCustomInputEvents@CBaseInput@@QEAAJAEAVCEventBitmap@@PEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C0176F90 (-PopulateDispatcherObjectWithCustomInputEvents@CBaseInput@@QEAAJAEAVCEventBitmap@@PEAVIRegisterI.c)
 * Callees:
 *     ?IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ @ 0x1C0054B78 (-IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall CRIMBase::IsDispatcherObjectValid(CRIMBase *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx

  v3 = (unsigned int)a2;
  if ( (unsigned int)a2 >= 0x10 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  return CRIMBase::SensorDispatcherObject::IsValid((CRIMBase *)((char *)this + 64 * v3 + 152));
}
