/*
 * XREFs of ?PopulateDetectedOrLostReport@MPCHandProcessor@@MEAAX_NIAEAULegacyInputInfo@@@Z @ 0x180135DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@W4InputType@@KPEAUInputInfo@@@Z @ 0x180093394 (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 */

void __fastcall MPCHandProcessor::PopulateDetectedOrLostReport(
        MPCHandProcessor *this,
        unsigned __int8 a2,
        __int64 a3,
        struct LegacyInputInfo *a4)
{
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(0, (a2 ^ 1u) + 4, 512, **((_DWORD **)this + 6), (__int64)a4);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      225LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpchandprocessor.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
}
