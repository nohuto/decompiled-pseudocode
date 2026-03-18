/*
 * XREFs of HdevFromMonitor @ 0x1C0045520
 * Callers:
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C0044B64 (-UpdateUserScreen@@YAJXZ.c)
 *     DestroyMonitorDCs @ 0x1C00489F0 (DestroyMonitorDCs.c)
 *     SnapshotMonitorRects @ 0x1C0048AA0 (SnapshotMonitorRects.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HdevFromMonitor(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r9
  unsigned int v3; // r8d

  v1 = 0LL;
  v2 = *(_QWORD *)(gpDispInfo + 16);
  v3 = *(_DWORD *)(v2 + 20);
  if ( !v3 )
    return 0xFFFFFFFFLL;
  while ( *(_QWORD *)(v2 + 40 * v1 + 32) != *(_QWORD *)(a1 + 232) )
  {
    v1 = (unsigned int)(v1 + 1);
    if ( (unsigned int)v1 >= v3 )
      return 0xFFFFFFFFLL;
  }
  return (unsigned int)v1;
}
