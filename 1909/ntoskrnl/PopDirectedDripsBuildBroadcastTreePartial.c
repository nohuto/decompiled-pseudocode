/*
 * XREFs of PopDirectedDripsBuildBroadcastTreePartial @ 0x1408B8BC8
 * Callers:
 *     PopDirectedDripsInitializeBroadcast @ 0x1408A3B54 (PopDirectedDripsInitializeBroadcast.c)
 * Callees:
 *     PopDirectedDripsDiagTraceBroadcastRootDevice @ 0x140303ED0 (PopDirectedDripsDiagTraceBroadcastRootDevice.c)
 *     PopDirectedDripsBuildBroadcastTreeFull @ 0x1408B89CC (PopDirectedDripsBuildBroadcastTreeFull.c)
 */

__int64 __fastcall PopDirectedDripsBuildBroadcastTreePartial(__int64 a1, int a2, _DWORD *a3)
{
  __int64 result; // rax
  __int64 v7; // rbx
  int v8; // esi
  int v9; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v10; // [rsp+58h] [rbp+20h] BYREF

  if ( (*(_DWORD *)(a1 + 760) & 0x30000) != 0 )
    return 0LL;
  PopDirectedDripsDiagTraceBroadcastRootDevice(a1, (int *)&v10);
  v9 = 0;
  v7 = a1;
  v8 = 0;
  do
  {
    if ( (*(_DWORD *)(v7 + 760) & 2) != 0 )
    {
      if ( *(_QWORD *)(v7 + 8) && (*(_DWORD *)(v7 + 760) & 4) == 0 )
      {
        v7 = *(_QWORD *)(v7 + 8);
        continue;
      }
    }
    else
    {
      result = PopDirectedDripsBuildBroadcastTreeFull(v7, v10, a2, &v9);
      if ( (int)result < 0 )
      {
        if ( (_DWORD)result != -1073741637 )
          return result;
      }
      else
      {
        ++v8;
      }
    }
    if ( v7 == a1 )
      break;
    while ( !*(_QWORD *)v7 )
    {
      v7 = *(_QWORD *)(v7 + 16);
      if ( v7 == a1 )
        goto LABEL_17;
    }
    v7 = *(_QWORD *)v7;
LABEL_17:
    ;
  }
  while ( v7 != a1 );
  *a3 |= v9;
  return v8 == 0 ? 0xC00000BB : 0;
}
