/*
 * XREFs of fnHkINLPCWPRETEXSTRUCT @ 0x1C022ACA0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxCallNextHookEx @ 0x1C00B5C2C (xxxCallNextHookEx.c)
 *     PhkNextValid @ 0x1C00B5C80 (PhkNextValid.c)
 */

__int64 __fastcall fnHkINLPCWPRETEXSTRUCT(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 Valid; // rax

  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v2 = *(_QWORD *)(gptiCurrent + 688LL);
  if ( v2 && (Valid = PhkNextValid(v2)) != 0 && *(_DWORD *)(Valid + 48) != 12 )
    return 0LL;
  else
    return xxxCallNextHookEx();
}
