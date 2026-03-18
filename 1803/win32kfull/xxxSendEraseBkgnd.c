/*
 * XREFs of xxxSendEraseBkgnd @ 0x1C00E99D8
 * Callers:
 *     xxxSimpleDoSyncPaint @ 0x1C0026490 (xxxSimpleDoSyncPaint.c)
 *     xxxInternalDoSyncPaint @ 0x1C0029330 (xxxInternalDoSyncPaint.c)
 *     xxxBeginPaint @ 0x1C0037D64 (xxxBeginPaint.c)
 * Callees:
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 */

__int64 __fastcall xxxSendEraseBkgnd(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  __int64 DCEx; // rdi
  unsigned int v6; // ebp

  if ( !a3 || (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x20) != 0 )
    return 0LL;
  if ( a2 )
    DCEx = a2;
  else
    DCEx = _GetDCEx(a1, a3, 327808LL);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) != *(_QWORD *)(gptiCurrent + 416LL) )
    GreSetDCOwnerEx(DCEx, 0LL, 0LL, 0LL);
  v6 = xxxSendMessage(a1);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) != *(_QWORD *)(gptiCurrent + 416LL) )
    GreSetDCOwnerEx(DCEx, 2147483650LL, 0LL, 0LL);
  if ( !v6 )
  {
    SetOrClrWF(1, a1, 260, 1);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 21LL) & 1) == 0 )
      SetOrClrWF(1, a1, 258, 1);
  }
  if ( !a2 )
    ReleaseCacheDC(DCEx, 1LL);
  return v6;
}
