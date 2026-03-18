/*
 * XREFs of fnHkINLPCWPRETEXSTRUCT @ 0x1C02022D0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     PhkNextValid @ 0x1C003BC60 (PhkNextValid.c)
 *     xxxCallNextHookEx @ 0x1C0129AEC (xxxCallNextHookEx.c)
 */

__int64 __fastcall fnHkINLPCWPRETEXSTRUCT(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 Valid; // rax

  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v2 = *(_QWORD *)(gptiCurrent + 680LL);
  if ( v2 && (Valid = PhkNextValid(v2)) != 0 && *(_DWORD *)(Valid + 48) != 12 )
    return 0LL;
  else
    return xxxCallNextHookEx();
}
