/*
 * XREFs of IsHotKey @ 0x1C00E0094
 * Callers:
 *     IsUninterceptable @ 0x1C00DFAAC (IsUninterceptable.c)
 *     xxxDoHotKeyStuff @ 0x1C00DFB30 (xxxDoHotKeyStuff.c)
 *     EditionIsHotKey @ 0x1C01D6620 (EditionIsHotKey.c)
 * Callees:
 *     GetDesktopView @ 0x1C00B2670 (GetDesktopView.c)
 */

struct tagHOTKEY * near *__fastcall IsHotKey(int a1, int a2)
{
  struct tagHOTKEY * near *i; // rbx
  int v4; // esi
  struct tagHOTKEY *v6; // rbp
  __int64 v7; // r14
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r9

  for ( i = (&gphkHashTable)[a2 & 0x7F]; ; i = (struct tagHOTKEY * near *)i[5] )
  {
    if ( !i )
      return i;
    v4 = *((unsigned __int16 *)i + 12);
    if ( v4 == a1 && *((_DWORD *)i + 7) == a2 && (*((_WORD *)i + 13) & 0x100) == 0 )
      break;
  }
  v6 = *i;
  if ( (*((_DWORD *)*i + 122) & 0xC) != 0 )
    return i;
  v7 = *((_QWORD *)v6 + 53);
  if ( GetDesktopView(v7, grpdeskRitInput) )
  {
    if ( (v4 & 0xB) == 0 )
    {
      if ( gpqForeground )
      {
        if ( (unsigned int)(a2 - 173) > 6 && a2 != 7 )
        {
          v8 = *(_QWORD *)(gpqForeground + 428LL);
          v9 = *(_QWORD *)(v7 + 880);
          if ( gbEnforceUIPI )
          {
            if ( (unsigned int)v9 <= (unsigned int)v8 )
            {
              if ( (_DWORD)v9 != (_DWORD)v8
                || (v10 = HIDWORD(v8), v11 = HIDWORD(v9), (_DWORD)v11 != (_DWORD)v10)
                && (_DWORD)v11 != -1
                && (_DWORD)v10 != -1 )
              {
                EtwTraceUIPIInputError(v6, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 428LL), 7);
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
