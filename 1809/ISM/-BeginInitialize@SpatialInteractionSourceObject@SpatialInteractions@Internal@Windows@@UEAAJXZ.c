/*
 * XREFs of ?BeginInitialize@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800BB160
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject::BeginInitialize(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject *this)
{
  int v2; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject *))(*(_QWORD *)this + 224LL))(this);
  if ( v2 < 0 )
  {
    v3 = 49LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v2 = (*(__int64 (__fastcall **)(Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject *))(*(_QWORD *)this + 232LL))(this);
  if ( v2 < 0 )
  {
    v3 = 50LL;
    goto LABEL_3;
  }
  return 0LL;
}
