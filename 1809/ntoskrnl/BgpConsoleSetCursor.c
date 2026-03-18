/*
 * XREFs of BgpConsoleSetCursor @ 0x140953E30
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x14016F1E8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14016F238 (BgpFwAcquireLock.c)
 *     BgpConsoleDrawCursor @ 0x140953A78 (BgpConsoleDrawCursor.c)
 */

__int64 __fastcall BgpConsoleSetCursor(unsigned int a1, unsigned int a2, unsigned int a3)
{
  _DWORD *v6; // rax
  unsigned int v7; // ebx

  BgpFwAcquireLock();
  v6 = (_DWORD *)qword_1404C64D8;
  v7 = 0;
  if ( qword_1404C64D8 )
  {
    if ( a1 >= 0x50 || a2 >= *(_DWORD *)(qword_1404C64D8 + 4) || a3 > 0x64 )
    {
      v7 = -1073741811;
    }
    else if ( *(_DWORD *)(qword_1404C64D8 + 68) != a1
           || *(_DWORD *)(qword_1404C64D8 + 72) != a2
           || *(_DWORD *)(qword_1404C64D8 + 76) != a3 )
    {
      if ( *(_DWORD *)(qword_1404C64D8 + 76) )
      {
        *(_DWORD *)(qword_1404C64D8 + 76) = 0;
        BgpConsoleDrawCursor();
        v6 = (_DWORD *)qword_1404C64D8;
      }
      v6[17] = a1;
      v6[18] = a2;
      v6[19] = a3;
      if ( a3 )
        BgpConsoleDrawCursor();
    }
  }
  else
  {
    v7 = -1073741823;
  }
  BgpFwReleaseLock();
  return v7;
}
