/*
 * XREFs of fnHkINLPCWPEXSTRUCT @ 0x1C0005C70
 * Callers:
 *     <none>
 * Callees:
 *     xxxCallNextHookEx @ 0x1C00552B8 (xxxCallNextHookEx.c)
 *     PhkNextValid @ 0x1C005530C (PhkNextValid.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall fnHkINLPCWPEXSTRUCT(__int64 *a1, int a2, __int64 a3, __int64 a4)
{
  _DWORD *v8; // r11
  __int64 Valid; // rax
  _QWORD v11[2]; // [rsp+30h] [rbp-38h] BYREF
  int v12; // [rsp+40h] [rbp-28h]
  __int64 v13; // [rsp+48h] [rbp-20h]
  __int64 v14; // [rsp+50h] [rbp-18h]

  v8 = *(_DWORD **)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 472);
  if ( *(_QWORD *)(gptiCurrent + 680LL) )
  {
    Valid = PhkNextValid();
    if ( Valid )
    {
      if ( *(_DWORD *)(Valid + 48) != 4 )
        return 0LL;
    }
  }
  if ( a1 )
    v13 = *a1;
  else
    v13 = 0LL;
  v12 = a2;
  v11[1] = a3;
  v11[0] = a4;
  v14 = 0LL;
  return xxxCallNextHookEx(0LL, (*v8 >> 4) & 1, v11);
}
