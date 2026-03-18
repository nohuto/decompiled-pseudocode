/*
 * XREFs of NtUserfnPOINTERINPUT @ 0x1C0220EB0
 * Callers:
 *     NtUserfnPARENTNOTIFY @ 0x1C012CC30 (NtUserfnPARENTNOTIFY.c)
 * Callees:
 *     IsPointerInputMessage @ 0x1C002E58C (IsPointerInputMessage.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     xxxSendPointerMessage @ 0x1C01DBEB8 (xxxSendPointerMessage.c)
 */

__int64 __fastcall NtUserfnPOINTERINPUT(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // r10
  __int64 v9; // r11
  int v10; // r8d

  v6 = 0LL;
  v7 = a3;
  v9 = gptiCurrent;
  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    UserSetLastError(1400LL, a2, a3, a4);
    return v6;
  }
  v10 = a6;
  if ( a6 != 689 && a6 != 691 && (a6 <= 0x2B6 || a6 > 0x2B8) )
    return v6;
  if ( (_DWORD)a2 == 528 )
  {
    if ( (_WORD)v7 != 582 )
      return v6;
    v7 >>= 16;
    return xxxSendPointerMessage(v9, (unsigned __int16)v7, a1, (unsigned int)a2, v6, a5, v10);
  }
  if ( (_DWORD)a2 == 587 )
  {
    v6 = a4;
    return xxxSendPointerMessage(v9, (unsigned __int16)v7, a1, (unsigned int)a2, v6, a5, v10);
  }
  if ( ((_DWORD)a2 != 592 || (*(_DWORD *)(gptiCurrent + 1208LL) & 0x2000) != 0)
    && IsPointerInputMessage(a2)
    && *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) == *(_QWORD *)(v9 + 424) )
  {
    return xxxSendPointerMessage(v9, (unsigned __int16)v7, a1, (unsigned int)a2, v6, a5, v10);
  }
  return v6;
}
