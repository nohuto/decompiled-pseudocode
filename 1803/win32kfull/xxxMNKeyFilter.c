/*
 * XREFs of xxxMNKeyFilter @ 0x1C0206EB8
 * Callers:
 *     xxxSysCommand @ 0x1C00F50F8 (xxxSysCommand.c)
 * Callees:
 *     MNPositionSysMenu @ 0x1C012D1EC (MNPositionSysMenu.c)
 *     xxxMessageBeep @ 0x1C01339F0 (xxxMessageBeep.c)
 *     xxxMNStartMenu @ 0x1C01D5620 (xxxMNStartMenu.c)
 *     xxxMNLoop @ 0x1C01E3580 (xxxMNLoop.c)
 *     xxxMNCancel @ 0x1C01E59BC (xxxMNCancel.c)
 *     xxxMNChar @ 0x1C01E5D78 (xxxMNChar.c)
 *     xxxMNCloseHierarchy @ 0x1C01E61D0 (xxxMNCloseHierarchy.c)
 *     xxxMNOpenHierarchy @ 0x1C01E7B08 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C01E8994 (xxxMNSelectItem.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C01E945C (xxxMNSwitchToAlternateMenu.c)
 */

__int64 __fastcall xxxMNKeyFilter(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  int v6; // ebp

  result = *(unsigned int *)(a2 + 8);
  v6 = (*(_DWORD *)(a2 + 8) >> 2) & 1;
  if ( (result & 8) == 0 )
  {
    if ( !v6 )
    {
      result = xxxMNStartMenu(a1, a2, 1);
      if ( !(_DWORD)result )
        return result;
      *(_DWORD *)(a2 + 8) |= 4u;
    }
    if ( a3 )
    {
      if ( a3 == 32
        || a3 == 45
        && (!*(_QWORD *)(*(_QWORD *)*a1 + 8LL)
         || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)*a1 + 8LL) + 40LL) + 31LL) & 0xC0) == 0x40) )
      {
        if ( *(_QWORD *)(*(_QWORD *)*a1 + 8LL)
          && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)*a1 + 8LL) + 40LL) + 30LL) & 8) == 0 )
        {
          xxxMessageBeep(0LL);
          goto LABEL_19;
        }
        xxxMNCloseHierarchy(*(_QWORD *)*a1, a2);
        if ( (**(_DWORD **)*a1 & 4) == 0 && *(_QWORD *)(*(_QWORD *)*a1 + 48LL) )
          xxxMNSwitchToAlternateMenu((__int64 **)a1, a2);
        if ( (**(_DWORD **)*a1 & 4) == 0 )
          goto LABEL_19;
        MNPositionSysMenu(*(_QWORD *)(*(_QWORD *)*a1 + 16LL), *(struct _NT_TIB **)(*(_QWORD *)*a1 + 40LL));
        xxxMNSelectItem((__int64 **)a1, a2, 0);
        xxxMNOpenHierarchy((__int64 **)a1, a2);
        result = *a1;
        **(_DWORD **)*a1 &= ~0x80u;
      }
      else
      {
        xxxMNChar((__int64 **)a1, a2, a3);
        result = *a1;
        if ( *(_DWORD *)(*(_QWORD *)*a1 + 80LL) == -1 )
        {
LABEL_19:
          *(_DWORD *)(a2 + 8) &= ~0x100u;
          result = *a1;
          if ( (**(_DWORD **)*a1 & 0x80000) == 0 )
            return (__int64)xxxMNCancel(a2, 0, 0, 0LL);
          return result;
        }
      }
    }
    else
    {
      result = xxxMNSelectItem((__int64 **)a1, a2, 0);
    }
    if ( !v6 )
    {
      result = *(unsigned int *)(a2 + 8);
      if ( (result & 4) != 0 )
        return xxxMNLoop((__int64 **)a1, a2, 0LL, 0);
    }
  }
  return result;
}
