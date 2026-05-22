/*
 * XREFs of ?Init@?$PayloadFieldHelper@UJOINT_OFFSET@@@Holographic@Internal@Windows@@QEAAJPEAUISpatialPayloadDescriptor@234@AEBU_GUID@@@Z @ 0x1800F4E50
 * Callers:
 *     ?InitializeStreamReaderHelpers@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@MEAAJXZ @ 0x1800F4F60 (-InitializeStreamReaderHelpers@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Holographic::PayloadFieldHelper<JOINT_OFFSET>::Init(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 56LL))(a2, a3);
  if ( !v4 )
    return 2147943568LL;
  if ( *(_DWORD *)(v4 + 20) == 36 )
  {
    *a1 = v4;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2EC,
      (__int64)"internal\\onecoreuapanalog\\inc\\spatialobjectddiclient.h",
      (const char *)0x8007000DLL);
    return 2147942413LL;
  }
}
