/*
 * XREFs of xxxSendEraseBkgnd @ 0x1C001C804
 * Callers:
 *     xxxBeginPaint @ 0x1C001DEFC (xxxBeginPaint.c)
 *     xxxSimpleDoSyncPaint @ 0x1C0030150 (xxxSimpleDoSyncPaint.c)
 *     xxxInternalDoSyncPaint @ 0x1C0070780 (xxxInternalDoSyncPaint.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 */

__int64 __fastcall xxxSendEraseBkgnd(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 DCEx; // rdi
  unsigned int v6; // ebp

  if ( !a3 || (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x20) != 0 )
    return 0LL;
  if ( a2 )
    DCEx = a2;
  else
    DCEx = _GetDCEx(a1, a3, 327808LL);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) != *(_QWORD *)(gptiCurrent + 424LL) )
    GreSetDCOwnerEx(DCEx, 0LL, 0LL, 0LL);
  v6 = xxxSendMessage(a1, 20LL, DCEx, 0LL);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) != *(_QWORD *)(gptiCurrent + 424LL) )
    GreSetDCOwnerEx(DCEx, 2147483650LL, 0LL, 0LL);
  if ( !v6 )
  {
    SetOrClrWF(1, a1, 0x104u, 1);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 21LL) & 1) == 0 )
      SetOrClrWF(1, a1, 0x102u, 1);
  }
  if ( !a2 )
    ReleaseCacheDC(DCEx, 1LL);
  return v6;
}
