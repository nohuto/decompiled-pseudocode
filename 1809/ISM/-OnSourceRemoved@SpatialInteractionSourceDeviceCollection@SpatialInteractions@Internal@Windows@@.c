/*
 * XREFs of ?OnSourceRemoved@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJPEAVSpatialInteractionObjectDevice@234@AEBV?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800B34B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_46e712f1d4a8bfe7f662a31e53621789_::__lambda_46e712f1d4a8bfe7f662a31e53621789_ @ 0x1800B3804 (_lambda_46e712f1d4a8bfe7f662a31e53621789_--__lambda_46e712f1d4a8bfe7f662a31e53621789_.c)
 *     ?QueueInputThreadCallback@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJV?$function@$$A6AXPEAUISpatialInteractionSourceCollectionCallbacks@SpatialInteractions@Internal@Windows@@@Z@std@@@Z @ 0x1800B388C (-QueueInputThreadCallback@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::OnSourceRemoved(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // edi
  _QWORD v12[4]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v13[3]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v14; // [rsp+58h] [rbp-28h]
  _QWORD *v15; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  v6 = a1 - 32;
  v12[0] = v6;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  v7 = a3[1];
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    v7 = a3[1];
  }
  v15 = 0LL;
  v12[1] = 0LL;
  v8 = *a3;
  v12[2] = *a3;
  v12[3] = v7;
  v13[0] = off_18013E6A0;
  v13[1] = v6;
  v13[2] = a2;
  v14 = 0LL;
  if ( v7 )
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
  *((_QWORD *)&v14 + 1) = v7;
  *(_QWORD *)&v14 = v8;
  v15 = v13;
  lambda_46e712f1d4a8bfe7f662a31e53621789_::__lambda_46e712f1d4a8bfe7f662a31e53621789_(v12);
  v9 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueInputThreadCallback(
         v6,
         v13);
  v10 = v9;
  if ( v9 >= 0 )
    v10 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5A3,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v9);
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
  return v10;
}
