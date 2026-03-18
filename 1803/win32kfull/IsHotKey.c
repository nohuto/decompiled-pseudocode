/*
 * XREFs of IsHotKey @ 0x1C00EA190
 * Callers:
 *     IsUninterceptable @ 0x1C00E9C20 (IsUninterceptable.c)
 *     xxxDoHotKeyStuff @ 0x1C00E9CA0 (xxxDoHotKeyStuff.c)
 *     EditionIsHotKey @ 0x1C01B3DB0 (EditionIsHotKey.c)
 * Callees:
 *     GetDesktopView @ 0x1C0011D20 (GetDesktopView.c)
 */

struct tagHOTKEY * near *__fastcall IsHotKey(int a1, int a2)
{
  struct tagHOTKEY * near *i; // rbx
  int v4; // esi
  struct tagHOTKEY *v5; // rbp
  __int64 v6; // r14
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r9

  for ( i = (&gphkHashTable)[a2 & 0x7F]; ; i = (struct tagHOTKEY * near *)i[5] )
  {
    if ( !i )
      return i;
    v4 = *((unsigned __int16 *)i + 12);
    if ( v4 == a1 && *((_DWORD *)i + 7) == a2 && (*((_WORD *)i + 13) & 0x100) == 0 )
      break;
  }
  v5 = *i;
  if ( (*((_DWORD *)*i + 120) & 0xC) != 0 )
    return i;
  v6 = *((_QWORD *)v5 + 52);
  if ( GetDesktopView(v6, grpdeskRitInput) )
  {
    if ( (v4 & 0xB) == 0 )
    {
      if ( gpqForeground )
      {
        if ( (unsigned int)(a2 - 173) > 6 )
        {
          v7 = *(_QWORD *)(gpqForeground + 428LL);
          v8 = *(_QWORD *)(v6 + 872);
          if ( gbEnforceUIPI )
          {
            if ( (unsigned int)v8 <= (unsigned int)v7 )
            {
              if ( (_DWORD)v8 != (_DWORD)v7
                || (v9 = HIDWORD(v7), v10 = HIDWORD(v8), (_DWORD)v10 != (_DWORD)v9)
                && (_DWORD)v10 != -1
                && (_DWORD)v9 != -1 )
              {
                EtwTraceUIPIInputError(v5, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 428LL), 7);
                return 0LL;
              }
            }
          }
        }
      }
    }
    return i;
  }
  return 0LL;
}
