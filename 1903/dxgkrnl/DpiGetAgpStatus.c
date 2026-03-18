/*
 * XREFs of DpiGetAgpStatus @ 0x1C017EDF4
 * Callers:
 *     DpiAddDevice @ 0x1C01617D0 (DpiAddDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetAgpStatus(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  unsigned int i; // eax
  unsigned int v5; // ebx
  unsigned __int16 v6; // ax
  __int64 v8; // rax

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1112LL);
  if ( (*(_BYTE *)(v3 + 6) & 0x10) != 0 )
  {
    for ( i = *(unsigned __int8 *)(v3 + 52); i >= 0x40; i = (unsigned __int8)i )
    {
      v5 = 0;
      v6 = *(_WORD *)(i - 64 + v3 + 64);
      if ( (_BYTE)v6 == 2 )
        return v5;
      LOWORD(i) = HIBYTE(v6);
      if ( !(_BYTE)i )
        return (unsigned int)-1073741823;
    }
    v5 = -1073741675;
    v8 = WdLogNewEntry5_WdError(v3, a2, a3);
    *(_QWORD *)(v8 + 24) = -1073741675LL;
    WdLogEvent5_WdError(v8);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v5;
}
