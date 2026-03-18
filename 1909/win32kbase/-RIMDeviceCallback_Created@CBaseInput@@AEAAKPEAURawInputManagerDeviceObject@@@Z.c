/*
 * XREFs of ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0062340
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C002D794 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     isRootPartition @ 0x1C0031CA8 (isRootPartition.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C004AB90 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     HMCreateHandleForObject @ 0x1C00623F0 (HMCreateHandleForObject.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C0062540 (RawInputManagerDeviceObjectReference.c)
 *     ?HMMarkObjectDestroyWorker@@YAHPEAX@Z @ 0x1C007343C (-HMMarkObjectDestroyWorker@@YAHPEAX@Z.c)
 *     HMRemoveHandleForObject @ 0x1C0073480 (HMRemoveHandleForObject.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     ?ivRootPnpCreated@CBaseInput@@AEAAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x1C018CF3C (-ivRootPnpCreated@CBaseInput@@AEAAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 */

__int64 __fastcall CBaseInput::RIMDeviceCallback_Created(CBaseInput *this, struct RawInputManagerDeviceObject *a2)
{
  struct RawInputManagerDeviceObject *v3; // rbx
  char *v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  _BYTE v9[24]; // [rsp+30h] [rbp-18h] BYREF
  int v10; // [rsp+58h] [rbp+10h] BYREF

  v3 = a2;
  v4 = (char *)a2 + 88;
  LOBYTE(a2) = 19;
  v5 = HMCreateHandleForObject(v4, a2);
  if ( v5 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CBaseInput *, struct RawInputManagerDeviceObject *, __int64))(*(_QWORD *)this + 80LL))(
           this,
           v3,
           v5) )
    {
      *(_QWORD *)(v5 + 56) = CBaseInput::_spDevList;
      CBaseInput::_spDevList = (struct RIMDEV *)v5;
      RawInputManagerDeviceObjectReference(v3);
      wil_details_FeaturePropertyCache_ReportUsageToService(
        &Feature_InputVirtualization__private_propertyCache,
        0xF89686u,
        (const struct FEATURE_LOGGED_TRAITS *)&unk_1C01D70B4,
        1,
        3);
      if ( isRootPartition() && *((_DWORD *)this + 298) )
      {
        if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*((_QWORD *)v3 + 53) + 40LL) )
        {
          v10 = 0;
          CBaseInput::ivRootPnpCreated(this, v3, (const struct CONTAINER_ID *)&v10);
        }
        else
        {
          *((_DWORD *)v3 + 68) |= 0x20000000u;
        }
      }
    }
    else
    {
      CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
        (__int64)v9,
        v6,
        v7);
      HMMarkObjectDestroyWorker((void *)v5);
      HMRemoveHandleForObject();
    }
  }
  return 0LL;
}
