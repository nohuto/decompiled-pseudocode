/*
 * XREFs of WheaSelLogEvent @ 0x140343094
 * Callers:
 *     WheaLogInternalEvent @ 0x140199660 (WheaLogInternalEvent.c)
 * Callees:
 *     WheapLogIpmiSELEvent @ 0x140341888 (WheapLogIpmiSELEvent.c)
 *     WheaSelLogErrorPkt @ 0x140342FA8 (WheaSelLogErrorPkt.c)
 */

__int64 __fastcall WheaSelLogEvent(__int64 a1)
{
  size_t v1; // rdx
  int v2; // r8d

  if ( (*(_BYTE *)(a1 + 24) & 0x10) != 0 )
  {
    v1 = *(unsigned int *)(a1 + 28);
    v2 = (*(_DWORD *)(a1 + 16) << 16) | 1;
    *(_DWORD *)(a1 + 16) = 1280201291;
    a1 += 32LL;
    return WheapLogIpmiSELEvent((void *)a1, v1, v2);
  }
  if ( *(_DWORD *)(a1 + 20) != -2147483643 )
  {
    v1 = (unsigned int)(*(_DWORD *)(a1 + 28) + 32);
    v2 = 0;
    return WheapLogIpmiSELEvent((void *)a1, v1, v2);
  }
  return WheaSelLogErrorPkt(a1);
}
