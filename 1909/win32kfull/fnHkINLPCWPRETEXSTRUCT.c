/*
 * XREFs of fnHkINLPCWPRETEXSTRUCT @ 0x1C0243590
 * Callers:
 *     <none>
 * Callees:
 *     xxxCallNextHookEx @ 0x1C00552B8 (xxxCallNextHookEx.c)
 *     PhkNextValid @ 0x1C005530C (PhkNextValid.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall fnHkINLPCWPRETEXSTRUCT(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 Valid; // rax

  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  v3 = *(_QWORD *)(gptiCurrent + 680LL);
  if ( v3 && (Valid = PhkNextValid(v3)) != 0 && *(_DWORD *)(Valid + 48) != 12 )
    return 0LL;
  else
    return xxxCallNextHookEx();
}
