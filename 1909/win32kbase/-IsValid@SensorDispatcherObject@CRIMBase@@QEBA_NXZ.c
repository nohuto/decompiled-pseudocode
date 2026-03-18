/*
 * XREFs of ?IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ @ 0x1C0054B78
 * Callers:
 *     ?GetDispatcherObjectByIndex@CRIMBase@@IEBAPEAXI@Z @ 0x1C00545F4 (-GetDispatcherObjectByIndex@CRIMBase@@IEBAPEAXI@Z.c)
 *     ?GetDispatcherObjectByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@@Z @ 0x1C005469C (-GetDispatcherObjectByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@@Z.c)
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C00546F0 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 *     ?IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z @ 0x1C00547F8 (-IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z.c)
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1C0054860 (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CRIMBase::SensorDispatcherObject::IsValid(CRIMBase::SensorDispatcherObject *this)
{
  bool v2; // bl

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(this, 0LL);
  v2 = *((_DWORD *)this + 5) != 0;
  ExReleasePushLockSharedEx(this, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
