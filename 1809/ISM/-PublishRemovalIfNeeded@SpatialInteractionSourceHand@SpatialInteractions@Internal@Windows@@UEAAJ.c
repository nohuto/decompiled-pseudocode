/*
 * XREFs of ?PublishRemovalIfNeeded@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAJPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800BD7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FillDeviceInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAJPEAUMPCControllerDeviceInfo@@@Z @ 0x1800BD8E0 (-FillDeviceInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAJPEAUMPCC.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::PublishRemovalIfNeeded(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand *this,
        struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  _BYTE v9[944]; // [rsp+20h] [rbp-3C8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+3E8h] [rbp+0h]

  v4 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::FillDeviceInfo(
         this,
         (struct MPCControllerDeviceInfo *)v9);
  if ( v4 < 0 )
  {
    v5 = 47LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v7 = *(_QWORD *)a2;
  v8 = *((unsigned int *)this + 2);
  v9[412] = 0;
  v4 = (*(__int64 (__fastcall **)(struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *, __int64, _BYTE *))(v7 + 64))(
         a2,
         v8,
         v9);
  if ( v4 < 0 )
  {
    v5 = 50LL;
    goto LABEL_3;
  }
  return 0LL;
}
