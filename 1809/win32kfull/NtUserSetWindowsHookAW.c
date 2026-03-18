/*
 * XREFs of NtUserSetWindowsHookAW @ 0x1C021DEC0
 * Callers:
 *     <none>
 * Callees:
 *     zzzSetWindowsHookEx @ 0x1C00B5454 (zzzSetWindowsHookEx.c)
 */

__int64 __fastcall NtUserSetWindowsHookAW(int a1, __int64 a2, char a3)
{
  __int64 v4; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  _BYTE *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx

  v4 = a1;
  EnterCrit(0LL, 1LL);
  v6 = zzzSetWindowsHookEx(0LL, 0LL, gptiCurrent, (unsigned int)v4, a2, a3);
  v11 = v6;
  if ( v6 )
  {
    if ( !*(_QWORD *)(v6 + 40) )
    {
      v8 = byte_1C02CDED9;
      if ( (byte_1C02CDED9[v4] & 8) == 0 )
        v11 = 0LL;
    }
    if ( v11 != -1 && v11 )
      v11 = *(_QWORD *)v11;
  }
  else
  {
    v11 = -1LL;
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v11;
}
