/*
 * XREFs of ?StartListeningToSpatialObjects@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800F6A90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice::StartListeningToSpatialObjects(
        Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *, char *, char *))(**((_QWORD **)this + 14) + 32LL))(
         *((_QWORD *)this + 14),
         *((_QWORD *)this + 25),
         &SPATIALPROP_HandTracker_HandList,
         (char *)this + 8,
         (char *)this + 216);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3A9,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
