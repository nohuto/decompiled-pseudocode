/*
 * XREFs of SnapshotMonitorRects @ 0x1C00641F0
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C00639B0 (xxxResetDisplayDevice.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0014930 (Win32AllocPool.c)
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     HdevFromMonitor @ 0x1C00642F0 (HdevFromMonitor.c)
 */

_DWORD *SnapshotMonitorRects()
{
  int v0; // edx
  __int64 v1; // rax
  __int64 v2; // rdx
  _DWORD *v3; // rsi
  __int64 v4; // rbx
  __int64 *i; // rdi
  __int64 v6; // rcx
  __int64 v7; // rax
  _DWORD *result; // rax

  v0 = **(_DWORD **)gpDispInfo;
  if ( (unsigned int)(v0 - 1) > 0xFFFE )
    return 0LL;
  v1 = Win32AllocPool(48LL * (unsigned int)(v0 - 1) + 56, 0x726D7355u);
  v3 = (_DWORD *)v1;
  if ( !v1 )
  {
    UserSetLastError(14LL, v2);
    return 0LL;
  }
  v4 = v1 + 8;
  for ( i = *(__int64 **)(gpDispInfo + 104); i; i = (__int64 *)i[7] )
  {
    v6 = i[5];
    if ( (*(_DWORD *)(v6 + 24) & 1) != 0 )
    {
      *(_OWORD *)v4 = *(_OWORD *)(v6 + 28);
      *(_OWORD *)(v4 + 16) = *(_OWORD *)(i[5] + 44);
      *(_WORD *)(v4 + 32) = *(_WORD *)(i[5] + 64);
      *(_WORD *)(v4 + 34) = *(_WORD *)(i[5] + 66);
      if ( (unsigned int)HdevFromMonitor(i) == -1 )
        v7 = 0LL;
      else
        v7 = *i;
      *(_QWORD *)(v4 + 40) = v7;
      v4 += 48LL;
    }
  }
  result = v3;
  *v3 = (v4 - (__int64)v3 - 8) / 48;
  return result;
}
