/*
 * XREFs of ?VirtualizeFullKeyboardStates@CKeyboardSensor@@QEAAXK@Z @ 0x1C0180CF8
 * Callers:
 *     VirtualizeFullKeyboardStates @ 0x1C0184D00 (VirtualizeFullKeyboardStates.c)
 * Callees:
 *     isRootPartition @ 0x1C00329F8 (isRootPartition.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0040490 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     LockProcessByClientId @ 0x1C009AE20 (LockProcessByClientId.c)
 *     ?ivRootDeliverFullKeyboardStates@CKeyboardSensor@@AEAAJAEBUCONTAINER_ID@@@Z @ 0x1C0181084 (-ivRootDeliverFullKeyboardStates@CKeyboardSensor@@AEAAJAEBUCONTAINER_ID@@@Z.c)
 */

void __fastcall CKeyboardSensor::VirtualizeFullKeyboardStates(CKeyboardSensor *this, int a2)
{
  __int64 v2; // rbx
  __int64 ProcessWin32Process; // rbx
  int v5; // eax
  int v6; // [rsp+50h] [rbp+18h] BYREF
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  v2 = a2;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &Feature_KeyboardInputVirtualization__private_propertyCache,
    0x11F7129u,
    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C01EE8D8,
    1,
    3);
  if ( isRootPartition() && *((_DWORD *)this + 298) )
  {
    Object = 0LL;
    if ( (int)LockProcessByClientId(v2, &Object) >= 0
      && (ProcessWin32Process = PsGetProcessWin32Process(Object), ObfDereferenceObject(Object), ProcessWin32Process) )
    {
      v5 = *(_DWORD *)(ProcessWin32Process + 1080);
    }
    else
    {
      v5 = 0;
    }
    v6 = v5;
    if ( v5 )
      CKeyboardSensor::ivRootDeliverFullKeyboardStates(this, (const struct CONTAINER_ID *)&v6);
  }
}
