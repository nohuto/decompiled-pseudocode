/*
 * XREFs of ?InitializeDdiDevices@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAXPEAUISpatialObjectDDIClientFactory@Holographic@34@@Z @ 0x1800B2550
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@V?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z@6@_N@Z @ 0x1800AFC34 (-QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AE.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::InitializeDdiDevices(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        struct Windows::Internal::Holographic::ISpatialObjectDDIClientFactory *a2)
{
  __int64 v4; // rbx
  __int128 v5; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v6[9]; // [rsp+30h] [rbp-48h] BYREF

  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Holographic::ISpatialObjectDDIClientFactory *))(*(_QWORD *)a2 + 8LL))(a2);
  v5 = 0LL;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Holographic::ISpatialObjectDDIClientFactory *))(*(_QWORD *)a2 + 8LL))(a2);
  v6[1] = a2;
  v6[0] = off_18013E218;
  v6[2] = (char *)this - 8;
  v6[7] = v6;
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueWorkItem(
    (__int64)this - 8,
    (__int64)&v5,
    (__int64)v6,
    1);
  if ( *((_QWORD *)&v5 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v5 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v4 = *((_QWORD *)&v5 + 1);
      (***((void (__fastcall ****)(_QWORD))&v5 + 1))(*((_QWORD *)&v5 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v5 + 1) + 8LL))(*((_QWORD *)&v5 + 1));
    }
  }
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Holographic::ISpatialObjectDDIClientFactory *))(*(_QWORD *)a2 + 16LL))(a2);
}
