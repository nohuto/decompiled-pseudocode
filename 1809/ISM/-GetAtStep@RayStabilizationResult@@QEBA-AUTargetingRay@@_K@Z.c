/*
 * XREFs of ?GetAtStep@RayStabilizationResult@@QEBA?AUTargetingRay@@_K@Z @ 0x1801038DC
 * Callers:
 *     ?StabilizeInput@RayStabilizer@@QEAAXPEAUInputInfo@@@Z @ 0x180102EA8 (-StabilizeInput@RayStabilizer@@QEAAXPEAUInputInfo@@@Z.c)
 *     ?PerformLowPassFilterStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x1801030F4 (-PerformLowPassFilterStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall RayStabilizationResult::GetAtStep(__int64 a1, __int64 a2, unsigned __int64 a3, const char *a4)
{
  __int64 v4; // xmm1_8
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 >= 4 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\raystabilizationresult.cpp",
      a4);
    JUMPOUT(0x18010391BLL);
  }
  v4 = *(_QWORD *)(a1 + 24 * a3 + 20);
  result = a2;
  *(_OWORD *)a2 = *(_OWORD *)(a1 + 24 * a3 + 4);
  *(_QWORD *)(a2 + 16) = v4;
  return result;
}
