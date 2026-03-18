/*
 * XREFs of xxxSendEraseBkgnd @ 0x1C003B4F8
 * Callers:
 *     xxxSimpleDoSyncPaint @ 0x1C002B824 (xxxSimpleDoSyncPaint.c)
 *     xxxBeginPaint @ 0x1C0039480 (xxxBeginPaint.c)
 *     xxxInternalDoSyncPaint @ 0x1C0050C60 (xxxInternalDoSyncPaint.c)
 * Callees:
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
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
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) != *(_QWORD *)(gptiCurrent + 416LL) )
    GreSetDCOwnerEx(DCEx, 0LL, 0LL, 1LL);
  v6 = xxxSendMessage(a1, 20LL, DCEx, 0LL);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) != *(_QWORD *)(gptiCurrent + 416LL) )
    GreSetDCOwnerEx(DCEx, 2147483650LL, 0LL, 1LL);
  if ( !v6 )
  {
    SetOrClrWF(1LL, a1, 260LL, 1LL);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 21LL) & 1) == 0 )
      SetOrClrWF(1LL, a1, 258LL, 1LL);
  }
  if ( !a2 )
    ReleaseCacheDC(DCEx, 1LL);
  return v6;
}
