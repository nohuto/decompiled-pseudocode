/*
 * XREFs of QueryTrackMouseEvent @ 0x1C00644AC
 * Callers:
 *     NtUserTrackMouseEvent @ 0x1C00643D0 (NtUserTrackMouseEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall QueryTrackMouseEvent(__int64 a1)
{
  __int64 v1; // rdx
  int v2; // r9d

  v1 = *(_QWORD *)(gptiCurrent + 448LL);
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)a1 = 24;
  v2 = *(_DWORD *)(v1 + 48);
  if ( (v2 & 0xC0) != 0
    && *(_QWORD *)(gptiCurrent + 424LL) == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 184) + 16LL) + 424LL) )
  {
    if ( *(_DWORD *)(v1 + 192) != 1 )
    {
      *(_DWORD *)(a1 + 4) |= 0x10u;
      v2 = *(_DWORD *)(v1 + 48);
    }
    if ( (v2 & 0x80u) != 0 )
    {
      *(_DWORD *)(a1 + 4) |= 2u;
      v2 = *(_DWORD *)(v1 + 48);
    }
    if ( (v2 & 0x40) != 0 )
    {
      *(_DWORD *)(a1 + 4) |= 1u;
      *(_DWORD *)(a1 + 16) = *(_DWORD *)(v1 + 212);
    }
    *(_QWORD *)(a1 + 8) = **(_QWORD **)(v1 + 184);
  }
  return 1LL;
}
