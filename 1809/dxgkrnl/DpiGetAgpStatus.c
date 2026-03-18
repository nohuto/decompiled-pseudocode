/*
 * XREFs of DpiGetAgpStatus @ 0x1C015E1B4
 * Callers:
 *     DpiAddDevice @ 0x1C0149BF0 (DpiAddDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetAgpStatus(__int64 a1)
{
  __int64 v1; // r8
  unsigned int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  unsigned __int16 v5; // dx
  __int16 v6; // dx
  __int16 v7; // ax
  unsigned __int16 v8; // cx
  __int64 v10; // rax

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1104LL);
  if ( (*(_BYTE *)(v1 + 6) & 0x10) == 0 )
    return (unsigned int)-1073741823;
  v2 = *(unsigned __int8 *)(v1 + 52);
  v3 = v2 - 64;
  if ( v2 < 0x40 )
    v3 = 0xFFFFFFFFLL;
  v4 = v2 < 0x40 ? 0xC0000095 : 0;
  if ( v2 < 0x40 )
  {
LABEL_15:
    v10 = WdLogNewEntry5_WdError(v3);
    *(_QWORD *)(v10 + 24) = (int)v4;
    WdLogEvent5_WdError(v10);
    return v4;
  }
  v5 = *(_WORD *)((unsigned int)v3 + v1 + 64);
  if ( (_BYTE)v5 != 2 )
  {
    v6 = HIBYTE(v5);
    LOBYTE(v7) = v6;
    while ( (_BYTE)v6 )
    {
      v3 = (unsigned int)(unsigned __int8)v7 - 64;
      if ( (unsigned __int8)v7 < 0x40u )
        v3 = 0xFFFFFFFFLL;
      v4 = (unsigned __int8)v7 < 0x40u ? 0xC0000095 : 0;
      if ( (unsigned __int8)v7 < 0x40u )
        goto LABEL_15;
      v8 = *(_WORD *)((unsigned int)v3 + v1 + 64);
      v7 = HIBYTE(v8);
      LOBYTE(v6) = HIBYTE(v8);
      if ( (_BYTE)v8 == 2 )
        return v4;
    }
    return (unsigned int)-1073741823;
  }
  return v4;
}
