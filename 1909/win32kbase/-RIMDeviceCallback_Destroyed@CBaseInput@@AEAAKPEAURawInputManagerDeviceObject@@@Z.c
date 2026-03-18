/*
 * XREFs of ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C00732C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C002D794 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     isRootPartition @ 0x1C0031CA8 (isRootPartition.c)
 *     WPP_RECORDER_SF_q @ 0x1C00378D4 (WPP_RECORDER_SF_q.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C004AB90 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?HMMarkObjectDestroyWorker@@YAHPEAX@Z @ 0x1C007343C (-HMMarkObjectDestroyWorker@@YAHPEAX@Z.c)
 *     HMRemoveHandleForObject @ 0x1C0073480 (HMRemoveHandleForObject.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     ?ivRootPnp@CBaseInput@@AEAAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x1C018CC90 (-ivRootPnp@CBaseInput@@AEAAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 */

__int64 __fastcall CBaseInput::RIMDeviceCallback_Destroyed(CBaseInput *this, _QWORD *Object)
{
  struct RIMDEV *v2; // rax
  struct DEVICEINFO *v3; // rbx
  _QWORD *v5; // rsi
  struct RIMDEV **v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  char v10; // [rsp+28h] [rbp-20h]
  _BYTE v11[24]; // [rsp+30h] [rbp-18h] BYREF
  int v12; // [rsp+58h] [rbp+10h] BYREF

  v2 = CBaseInput::_spDevList;
  v3 = (struct DEVICEINFO *)(Object + 11);
  v5 = Object;
  v6 = &CBaseInput::_spDevList;
  while ( v2 )
  {
    if ( v2 == v3 )
    {
      *v6 = (struct RIMDEV *)Object[18];
      Object[18] = 0LL;
      ObfDereferenceObject(Object);
      wil_details_FeaturePropertyCache_ReportUsageToService(
        &Feature_InputVirtualization__private_propertyCache,
        0xF89686u,
        (const struct FEATURE_LOGGED_TRAITS *)&unk_1C01D70B4,
        1,
        3);
      if ( isRootPartition() && *((_DWORD *)this + 298) )
      {
        v12 = 0;
        CBaseInput::ivRootPnp(this, v3, 4u, (const struct CONTAINER_ID *)&v12);
      }
      if ( (*(unsigned __int8 (__fastcall **)(CBaseInput *, _QWORD *, struct DEVICEINFO *))(*(_QWORD *)this + 104LL))(
             this,
             v5,
             v3) )
      {
        CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
          (__int64)v11,
          v7,
          v8);
        if ( (unsigned int)HMMarkObjectDestroyWorker(v3) )
          HMRemoveHandleForObject();
      }
      return 0LL;
    }
    v6 = (struct RIMDEV **)((char *)v2 + 56);
    v2 = (struct RIMDEV *)*((_QWORD *)v2 + 7);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = (char)Object;
    LOBYTE(Object) = 2;
    WPP_RECORDER_SF_q(
      (_DWORD)gBaseLog,
      (_DWORD)Object,
      3,
      19,
      (__int64)&WPP_44b8ec6d33df3f9b1bf122fa07e6f557_Traceguids,
      v10);
  }
  return 0LL;
}
