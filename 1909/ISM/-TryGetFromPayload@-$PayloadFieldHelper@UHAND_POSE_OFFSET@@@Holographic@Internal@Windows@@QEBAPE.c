/*
 * XREFs of ?TryGetFromPayload@?$PayloadFieldHelper@UHAND_POSE_OFFSET@@@Holographic@Internal@Windows@@QEBAPEBUHAND_POSE_OFFSET@@PEBX_K@Z @ 0x1800F1E18
 * Callers:
 *     ?UpdateState@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@AEAAJ_J@Z @ 0x1800F1E58 (-UpdateState@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@AEAAJ_J.c)
 *     _lambda_831c036b4ad6511f8a8292a9f8f911ac_::operator() @ 0x1800F36E8 (_lambda_831c036b4ad6511f8a8292a9f8f911ac_--operator().c)
 *     ?ReadNextState@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAA_NXZ @ 0x1800F6150 (-ReadNextState@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAA_NXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall Windows::Internal::Holographic::PayloadFieldHelper<HAND_POSE_OFFSET>::TryGetFromPayload(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        const char *a4)
{
  __int64 result; // rax
  __int64 v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  result = *a1;
  if ( *a1 )
  {
    v5 = *(unsigned int *)(result + 16);
    if ( (unsigned int)(v5 + *(_DWORD *)(result + 20)) > a3 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        785LL,
        (__int64)"internal\\onecoreuapanalog\\inc\\spatialobjectddiclient.h",
        a4);
      __debugbreak();
    }
    return a2 + v5;
  }
  return result;
}
