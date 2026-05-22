/*
 * XREFs of ?SendInputInfo@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJW4MPCAugmentedInputGestureType@@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1801285A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::SendInputInfo(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  char v6; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = *(_BYTE *)(a1 + 441);
  v3 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, char, __int64, __int64))(*(_QWORD *)a3 + 24LL))(
         a3,
         a2,
         *(unsigned int *)(a1 + 8),
         *(unsigned int *)(a1 + 12),
         v6,
         a1 + 1024,
         a1 + 960);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x678,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
