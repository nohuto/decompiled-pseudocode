/*
 * XREFs of ?AddSourceOnInputThread@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@QEAAJAEBV?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800EB9DC
 * Callers:
 *     _lambda_73536ef6a7ee89bb5b58de675fe62586_::operator() @ 0x1800EB0AC (_lambda_73536ef6a7ee89bb5b58de675fe62586_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002B220 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?AcquireInterestInHeadEvent@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAAXPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800E135C (-AcquireInterestInHeadEvent@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@.c)
 *     ?AddDeviceToCache@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJKKAEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800E1388 (-AddDeviceToCache@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@.c)
 *     ?QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@V?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z@6@_N@Z @ 0x1800E4490 (-QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AE.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AddSourceOnInputThread(
        struct _RTL_CRITICAL_SECTION *a1,
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice **a2,
        struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  volatile signed __int32 *v8; // rcx
  int v9; // eax
  __int64 v10; // rdx
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *v12; // [rsp+28h] [rbp-58h] BYREF
  std::_Ref_count_base *v13; // [rsp+30h] [rbp-50h]
  _QWORD v14[9]; // [rsp+38h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v6 = (*(__int64 (__fastcall **)(Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *, struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *))(*(_QWORD *)*a2 + 208LL))(
         *a2,
         a3);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D0,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  v8 = (volatile signed __int32 *)a2[1];
  if ( v8 )
  {
    _InterlockedIncrement(v8 + 2);
    v8 = (volatile signed __int32 *)a2[1];
  }
  v12 = *a2;
  v13 = (std::_Ref_count_base *)v8;
  v9 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AddDeviceToCache(
         a1,
         *((_DWORD *)v12 + 2),
         *((_DWORD *)v12 + 3),
         &v12);
  v7 = v9;
  if ( v9 < 0 )
  {
    v10 = 468LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_11;
  }
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::AcquireInterestInHeadEvent(v12, a3);
  v14[0] = off_180176700;
  v14[1] = a1;
  v14[7] = v14;
  v9 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueWorkItem(
         (__int64)a1,
         &v12,
         (__int64)v14,
         1);
  v7 = v9;
  if ( v9 < 0 )
  {
    v10 = 477LL;
    goto LABEL_9;
  }
  v7 = 0;
LABEL_11:
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  return v7;
}
