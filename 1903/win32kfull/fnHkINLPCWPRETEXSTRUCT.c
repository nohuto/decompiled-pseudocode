/*
 * XREFs of fnHkINLPCWPRETEXSTRUCT @ 0x1C0243CD0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxCallNextHookEx @ 0x1C00B4548 (xxxCallNextHookEx.c)
 *     PhkNextValid @ 0x1C00B459C (PhkNextValid.c)
 */

__int64 __fastcall fnHkINLPCWPRETEXSTRUCT(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  __int64 Valid; // rax

  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v4 = *(_QWORD *)(gptiCurrent + 680LL);
  if ( v4 && (Valid = PhkNextValid(v4)) != 0 && *(_DWORD *)(Valid + 48) != 12 )
    return 0LL;
  else
    return xxxCallNextHookEx();
}
