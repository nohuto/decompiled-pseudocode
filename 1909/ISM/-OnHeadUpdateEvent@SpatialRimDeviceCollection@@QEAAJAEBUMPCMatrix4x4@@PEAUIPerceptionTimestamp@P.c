/*
 * XREFs of ?OnHeadUpdateEvent@SpatialRimDeviceCollection@@QEAAJAEBUMPCMatrix4x4@@PEAUIPerceptionTimestamp@Perception@Windows@@@Z @ 0x18009E504
 * Callers:
 *     ?OnHeadUpdateEvent@SpatialRimDeviceCollectionHeadEventHandler@@AEAAJXZ @ 0x18009E55C (-OnHeadUpdateEvent@SpatialRimDeviceCollectionHeadEventHandler@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialRimDeviceCollection::OnHeadUpdateEvent(
        SpatialRimDeviceCollection *this,
        const struct MPCMatrix4x4 *a2,
        struct Windows::Perception::IPerceptionTimestamp *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (*(__int64 (__fastcall **)(_QWORD, const struct MPCMatrix4x4 *, struct Windows::Perception::IPerceptionTimestamp *, char *))(**((_QWORD **)this + 347) + 72LL))(
         *((_QWORD *)this + 347),
         a2,
         a3,
         (char *)this + 2760);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xCA,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
