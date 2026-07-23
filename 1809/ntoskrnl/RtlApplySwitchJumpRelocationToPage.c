/*
 * XREFs of RtlApplySwitchJumpRelocationToPage @ 0x1402F6F1C
 * Callers:
 *     MiApplyRetpolineFixups @ 0x140854968 (MiApplyRetpolineFixups.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     RtlpApplyGenericRetpolineFixup @ 0x1402F774C (RtlpApplyGenericRetpolineFixup.c)
 *     RtlpConstructSwitchJumpRelocationFixup @ 0x1402F7E48 (RtlpConstructSwitchJumpRelocationFixup.c)
 */

__int64 __fastcall RtlApplySwitchJumpRelocationToPage(__int64 a1, int a2, int a3, int a4, _WORD *a5, int a6, int a7)
{
  int v9; // ebx
  _BYTE v11[16]; // [rsp+30h] [rbp-38h] BYREF

  v9 = a2 + (*a5 & 0xFFF) - 4096;
  if ( !a7 )
    v9 = a2 + (*a5 & 0xFFF);
  RtlpConstructSwitchJumpRelocationFixup(v9, a3, a4, (_DWORD)a5, a6, (__int64)v11);
  return RtlpApplyGenericRetpolineFixup(a1, 4096LL, v11, (unsigned int)(v9 - a2));
}
