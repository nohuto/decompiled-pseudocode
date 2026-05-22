/*
 * XREFs of ?PopulateDetectedOrLostReport@MPCClickerProcessor@@EEAAX_NIAEAULegacyInputInfo@@@Z @ 0x1800FFBB0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@W4InputType@@KPEAUInputInfo@@@Z @ 0x180056F34 (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 */

void __fastcall MPCClickerProcessor::PopulateDetectedOrLostReport(
        MPCClickerProcessor *this,
        unsigned __int8 a2,
        __int64 a3,
        struct LegacyInputInfo *a4)
{
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(
         4 * (unsigned int)a2 + 1,
         0,
         1024,
         **((_DWORD **)this + 6),
         (__int64)a4);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xE9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcclickerprocessor.cpp",
      (const char *)(unsigned int)v4);
    JUMPOUT(0x1800FFBF9LL);
  }
}
