/*
 * XREFs of ?GetDispatcherObjectByIndex@CRIMBase@@IEBAPEAXI@Z @ 0x1C00545F4
 * Callers:
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C00546F0 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 *     ?PopulateDispatcherObjectWithCustomInputEvents@CBaseInput@@QEAAJAEAVCEventBitmap@@PEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C0176F90 (-PopulateDispatcherObjectWithCustomInputEvents@CBaseInput@@QEAAJAEAVCEventBitmap@@PEAVIRegisterI.c)
 * Callees:
 *     ?IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ @ 0x1C0054B78 (-IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void *__fastcall CRIMBase::GetDispatcherObjectByIndex(CRIMBase *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8

  v3 = (unsigned int)a2;
  if ( (unsigned int)a2 >= 0x10 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v5 = v3 << 6;
  if ( !CRIMBase::SensorDispatcherObject::IsValid((CRIMBase *)((char *)this + v5 + 152)) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  return *(void **)((char *)this + v5 + 200);
}
