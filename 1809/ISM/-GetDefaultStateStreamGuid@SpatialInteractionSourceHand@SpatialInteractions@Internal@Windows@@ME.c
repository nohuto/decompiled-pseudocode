/*
 * XREFs of ?GetDefaultStateStreamGuid@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@MEAAJPEAU_GUID@@@Z @ 0x1800BDB20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::GetDefaultStateStreamGuid(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand *this,
        struct _GUID *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, void *, struct _GUID *, __int64, _QWORD))(**((_QWORD **)this + 15) + 72LL))(
         *((_QWORD *)this + 15),
         &SPATIALPROP_Hand_StateStream,
         a2,
         16LL,
         0LL);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x80,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
