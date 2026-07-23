/*
 * XREFs of KdpLowWriteContent @ 0x140919F7C
 * Callers:
 *     KdpDeleteBreakpoint @ 0x140919D78 (KdpDeleteBreakpoint.c)
 *     KdpSuspendAllBreakpoints @ 0x14091A280 (KdpSuspendAllBreakpoints.c)
 * Callees:
 *     KdpIsBreakpoint @ 0x14028D208 (KdpIsBreakpoint.c)
 *     KdpCopyCodeStream @ 0x1409198A8 (KdpCopyCodeStream.c)
 *     KdpRemoveBreakpoint @ 0x14091A04C (KdpRemoveBreakpoint.c)
 */

bool __fastcall KdpLowWriteContent(unsigned int a1)
{
  char *v1; // rbx
  int v2; // ecx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  ++KdpBreakpointChangeCount;
  v1 = (char *)&KdpBreakpointTable + 40 * a1;
  v2 = *((_DWORD *)v1 + 8);
  if ( (v2 & 2) != 0 )
  {
    *((_DWORD *)v1 + 8) = v2 & 0xFFFFFFFD;
    return 1;
  }
  if ( (v2 & 0x10) == 0 && (unsigned int)KdpIsBreakpoint((__int64)v1, v1 + 24) == 1 )
    return 1;
  if ( (int)KdpCopyCodeStream(
              (PVOID)(*(_QWORD *)v1 & ~(unsigned __int64)(unsigned __int8)v1[37]),
              (__int64)&v4,
              (unsigned __int8)v1[36],
              4) < 0 )
    goto LABEL_7;
  if ( !(unsigned int)KdpIsBreakpoint((__int64)v1, &v4) )
  {
    KdpOweBreakpoint = 1;
LABEL_7:
    *((_DWORD *)v1 + 8) |= 8u;
    return 0;
  }
  if ( !(unsigned int)KdpRemoveBreakpoint(v1, &v4) )
  {
    *((_DWORD *)v1 + 8) |= 8u;
    return 0;
  }
  return (*((_DWORD *)v1 + 8) & 8) == 0;
}
