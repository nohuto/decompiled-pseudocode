/*
 * XREFs of ?CompositorRunningStateChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJ_NPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800EBD10
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002B220 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@V?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z@6@_N@Z @ 0x1800E4490 (-QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AE.c)
 *     ?CreateDevice@SpatialInteractionHeadObjectDevice@SpatialInteractions@Internal@Windows@@QEAAJPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800F09CC (-CreateDevice@SpatialInteractionHeadObjectDevice@SpatialInteractions@Internal@Windows@@QEAAJPEAU.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::CompositorRunningStateChanged(
        RTL_SRWLOCK *this,
        char a2,
        struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *a3)
{
  RTL_SRWLOCK *v3; // rsi
  Windows::Internal::SpatialInteractions::SpatialInteractionHeadObjectDevice *Ptr; // rcx
  std::_Ref_count_base *v9[2]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v10[8]; // [rsp+30h] [rbp-48h] BYREF

  v3 = this + 88;
  AcquireSRWLockExclusive(this + 88);
  LOBYTE(this[89].Ptr) = a2;
  Ptr = (Windows::Internal::SpatialInteractions::SpatialInteractionHeadObjectDevice *)this[86].Ptr;
  if ( a2 )
    Windows::Internal::SpatialInteractions::SpatialInteractionHeadObjectDevice::CreateDevice(Ptr, a3);
  else
    (*(void (__fastcall **)(struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *, _QWORD))(*(_QWORD *)a3 + 88LL))(
      a3,
      *(unsigned int *)Ptr);
  v10[0] = off_1801763B0;
  v10[1] = this - 1;
  v10[7] = v10;
  *(_OWORD *)v9 = 0LL;
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueWorkItem(
    (__int64)&this[-1],
    v9,
    (__int64)v10,
    1);
  if ( v9[1] )
    std::_Ref_count_base::_Decref(v9[1]);
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  return 0LL;
}
