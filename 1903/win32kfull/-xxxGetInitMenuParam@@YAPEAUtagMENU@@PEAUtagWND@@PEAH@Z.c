/*
 * XREFs of ?xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z @ 0x1C02105FC
 * Callers:
 *     xxxMNStartMenu @ 0x1C0210ED8 (xxxMNStartMenu.c)
 * Callees:
 *     xxxGetSysMenu @ 0x1C000C4CC (xxxGetSysMenu.c)
 */

struct tagMENU *__fastcall xxxGetInitMenuParam(struct tagWND *a1, int *a2)
{
  char v3; // r8
  __int64 v4; // rcx

  v3 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
  if ( (v3 & 0x20) != 0
    || (v3 & 0xC0) == 0x40
    || (v4 = *((_QWORD *)a1 + 21)) == 0
    || !*(_DWORD *)(*(_QWORD *)(v4 + 40) + 44LL) )
  {
    if ( a2 )
      *a2 = 1;
    return (struct tagMENU *)xxxGetSysMenu(a1, 0);
  }
  else
  {
    if ( a2 )
    {
      *a2 = 0;
      return (struct tagMENU *)*((_QWORD *)a1 + 21);
    }
    return (struct tagMENU *)v4;
  }
}
