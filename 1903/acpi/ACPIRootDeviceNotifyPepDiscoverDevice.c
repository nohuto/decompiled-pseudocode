/*
 * XREFs of ACPIRootDeviceNotifyPepDiscoverDevice @ 0x1C0005DF8
 * Callers:
 *     ACPIRootInitialize @ 0x1C0090730 (ACPIRootInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_sqqDqss @ 0x1C0005F5C (WPP_RECORDER_SF_sqqDqss.c)
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C0006210 (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 */

__int64 ACPIRootDeviceNotifyPepDiscoverDevice()
{
  ULONG_PTR v0; // rbx
  int v1; // edi
  __int64 v2; // rcx
  void *v3; // rax
  void *v4; // rdx
  __int64 v6; // [rsp+60h] [rbp+27h] BYREF
  struct _KEVENT *p_Event; // [rsp+68h] [rbp+2Fh]
  __int64 v8; // [rsp+70h] [rbp+37h]
  struct _KEVENT Event; // [rsp+78h] [rbp+3Fh] BYREF

  v0 = RootDeviceExtension;
  v6 = 0LL;
  p_Event = 0LL;
  v8 = 0LL;
  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v6 = 0LL;
  p_Event = &Event;
  v8 = 3221225473LL;
  v1 = AcpiNotifyPlExtDiscoverDeviceAsync(*(_QWORD *)(v0 + 712), ACPIRootDeviceDiscoverDeviceCompletion, &v6);
  if ( v1 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v1 = v8;
  }
  if ( v1 >= 0 )
  {
    if ( v6 )
    {
      *(_QWORD *)(v0 + 896) = v6;
      _InterlockedOr64((volatile signed __int64 *)(v0 + 952), 0x4000000uLL);
    }
    v2 = *(_QWORD *)(v0 + 8);
    v3 = &unk_1C006FE7D;
    v4 = &unk_1C006FE7D;
    if ( (v2 & 0x200000000000LL) != 0 )
    {
      v3 = *(void **)(v0 + 560);
      if ( (v2 & 0x400000000000LL) != 0 )
        v4 = *(void **)(v0 + 568);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sqqDqss(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v4,
        0,
        30,
        (__int64)&WPP_07c7b752520234d9370002fcc10364f5_Traceguids,
        (__int64)"ACPIRootDeviceNotifyPepDiscoverDevice",
        v0,
        *(_QWORD *)(v0 + 896),
        v1,
        v0,
        (__int64)v3,
        (__int64)v4);
  }
  _InterlockedOr64((volatile signed __int64 *)(v0 + 952), 0x2000000uLL);
  return (unsigned int)v1;
}
