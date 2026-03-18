/*
 * XREFs of SnapshotMonitorRects @ 0x1C0048AA0
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C0046FB0 (xxxResetDisplayDevice.c)
 * Callees:
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     HdevFromMonitor @ 0x1C0045520 (HdevFromMonitor.c)
 */

_DWORD *SnapshotMonitorRects()
{
  int v0; // edx
  __int64 v1; // rax
  _DWORD *v2; // rsi
  _DWORD *result; // rax
  __int64 v4; // rbx
  __int64 *i; // rdi
  __int64 v6; // rcx
  __int64 v7; // rax

  v0 = **(_DWORD **)gpDispInfo;
  if ( (unsigned int)(v0 - 1) > 0xFFFE )
    return 0LL;
  v1 = Win32AllocPool(48LL * (unsigned int)(v0 - 1) + 56, 0x726D7355u);
  v2 = (_DWORD *)v1;
  if ( !v1 )
  {
    UserSetLastError(14LL);
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
      if ( (unsigned int)HdevFromMonitor((__int64)i) == -1 )
        v7 = 0LL;
      else
        v7 = *i;
      *(_QWORD *)(v4 + 40) = v7;
      v4 += 48LL;
    }
  }
  result = v2;
  *v2 = (v4 - (__int64)v2 - 8) / 48;
  return result;
}
