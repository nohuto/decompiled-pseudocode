/*
 * XREFs of ?OnInputSourceRemoved@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJPEAVSpatialInteractionObjectDevice@234@AEBV?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800ECF70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     std::function_void___cdecl(Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks__)_::function_void___cdecl(Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks__)___lambda_4d3a91d4b58fb7dc9d374c8ed2a83795__void_ @ 0x180035B60 (std--function_void___cdecl(Windows--Internal--SpatialInteractions--ISpatialInteractionSourceColl.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?QueueInputThreadCallback@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJV?$function@$$A6AXPEAUISpatialInteractionSourceCollectionCallbacks@SpatialInteractions@Internal@Windows@@@Z@std@@@Z @ 0x1800E4318 (-QueueInputThreadCallback@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@.c)
 *     ??$?0VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@$0A@@?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@QEAA@AEBV?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@1@@Z @ 0x1800E99E8 (--$-0VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@$0A@@-$shared_ptr@VSp.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::OnInputSourceRemoved(
        RTL_SRWLOCK *a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  int v10[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v11; // [rsp+28h] [rbp-60h] BYREF
  __int64 v12; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v13[8]; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v15; // [rsp+90h] [rbp+8h] BYREF

  v15 = a2;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v15);
  a1 -= 4;
  v11 = a2;
  *(_QWORD *)v10 = a1;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v11);
  std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>(
    &v12,
    a3);
  v6 = std::function_void___cdecl_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks____::function_void___cdecl_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks______lambda_4d3a91d4b58fb7dc9d374c8ed2a83795__void_(
         v13,
         v10);
  v7 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueInputThreadCallback(
         a1,
         (__int64)v6);
  v8 = v7;
  if ( v7 >= 0 )
    v8 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1EA,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
      (const char *)(unsigned int)v7);
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
  return v8;
}
