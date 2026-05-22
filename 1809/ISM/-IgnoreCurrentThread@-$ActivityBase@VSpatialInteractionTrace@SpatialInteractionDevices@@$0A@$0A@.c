/*
 * XREFs of ?IgnoreCurrentThread@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800B4284
 * Callers:
 *     ?StopActivity@DeviceRemoved@SpatialInteractionTrace@SpatialInteractionDevices@@MEAAXXZ @ 0x1800AAC60 (-StopActivity@DeviceRemoved@SpatialInteractionTrace@SpatialInteractionDevices@@MEAAXXZ.c)
 *     ?StopActivity@OnHolographicDisplayChanged@SpatialInteractionTrace@SpatialInteractionDevices@@MEAAXXZ @ 0x1800AB180 (-StopActivity@OnHolographicDisplayChanged@SpatialInteractionTrace@SpatialInteractionDevices@@MEA.c)
 *     ?Stop@OnHolographicDisplayChanged@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJPEB_W_N1@Z @ 0x1800AB66C (-Stop@OnHolographicDisplayChanged@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJPEB_W.c)
 *     ?StopActivity@InitializeSpatialObjectDeviceSupport@SpatialInteractionTrace@SpatialInteractionDevices@@MEAAXXZ @ 0x1800ABF40 (-StopActivity@InitializeSpatialObjectDeviceSupport@SpatialInteractionTrace@SpatialInteractionDev.c)
 *     ?StopActivity@SpatialObjectDeviceAdded@SpatialInteractionTrace@SpatialInteractionDevices@@MEAAXXZ @ 0x1800AC430 (-StopActivity@SpatialObjectDeviceAdded@SpatialInteractionTrace@SpatialInteractionDevices@@MEAAXX.c)
 *     ?StopActivity@SpatialObjectDeviceRemoved@SpatialInteractionTrace@SpatialInteractionDevices@@MEAAXXZ @ 0x1800AC950 (-StopActivity@SpatialObjectDeviceRemoved@SpatialInteractionTrace@SpatialInteractionDevices@@MEAA.c)
 *     ?StopActivity@DdiSource_BackgroundInit@SpatialInteractionTrace@SpatialInteractionDevices@@MEAAXXZ @ 0x1800AD010 (-StopActivity@DdiSource_BackgroundInit@SpatialInteractionTrace@SpatialInteractionDevices@@MEAAXX.c)
 *     ?StopActivity@DdiSource_InputThreadInit@SpatialInteractionTrace@SpatialInteractionDevices@@MEAAXXZ @ 0x1800AD530 (-StopActivity@DdiSource_InputThreadInit@SpatialInteractionTrace@SpatialInteractionDevices@@MEAAX.c)
 *     ?StopActivity@DdiSource_InputThreadRemoval@SpatialInteractionTrace@SpatialInteractionDevices@@MEAAXXZ @ 0x1800ADA50 (-StopActivity@DdiSource_InputThreadRemoval@SpatialInteractionTrace@SpatialInteractionDevices@@ME.c)
 *     ?Stop@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800B4150 (-Stop@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflect.c)
 *     ?StopActivity@HandSpatialObjectAdded@SpatialInteractionTrace@SpatialInteractionDevices@@MEAAXXZ @ 0x1800BCC80 (-StopActivity@HandSpatialObjectAdded@SpatialInteractionTrace@SpatialInteractionDevices@@MEAAXXZ.c)
 *     ?StopActivity@OnHandSpatialObjectRemoved@SpatialInteractionTrace@SpatialInteractionDevices@@MEAAXXZ @ 0x1800BD1A0 (-StopActivity@OnHandSpatialObjectRemoved@SpatialInteractionTrace@SpatialInteractionDevices@@MEAA.c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18005EF6C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

void __fastcall wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 *v2; // rcx
  __int64 v3; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 32) )
  {
    v1 = a1 + 8;
    if ( *(_DWORD *)(a1 + 32) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3B1,
        (__int64)"internal\\sdk\\inc\\wil\\result.h",
        (const char *)0x8007029CLL);
    *(_DWORD *)(v1 + 24) = 0;
    v2 = *(__int64 **)v1;
    while ( 1 )
    {
      v3 = *v2;
      if ( !*v2 )
        break;
      if ( v3 == v1 )
      {
        *v2 = *(_QWORD *)(v1 + 16);
        break;
      }
      v2 = (__int64 *)(v3 + 16);
      *(_QWORD *)v1 = v3 + 16;
    }
    *(_QWORD *)v1 = 0LL;
  }
}
