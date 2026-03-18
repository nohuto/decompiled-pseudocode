/*
 * XREFs of ZombieCursor @ 0x1C01EC270
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlinkCursor@@YAXPEAUtagCURSOR@@@Z @ 0x1C0124AC8 (-UnlinkCursor@@YAXPEAUtagCURSOR@@@Z.c)
 */

__int64 __fastcall ZombieCursor(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  int v6; // edi
  __int64 v7; // rsi

  v4 = *(_DWORD *)(a1 + 80);
  if ( (v4 & 0x100) != 0 )
  {
    UnlinkCursor((struct tagCURSOR *)a1, a2, a3, a4);
    v4 = *(_DWORD *)(a1 + 80);
  }
  if ( (v4 & 8) != 0 )
  {
    v6 = 0;
    if ( *(int *)(a1 + 88) > 0 )
    {
      v7 = 0LL;
      do
      {
        HMChangeOwnerProcessWorker(*(_QWORD *)(*(_QWORD *)(a1 + 96) + v7), gptiRit);
        ++v6;
        v7 += 8LL;
      }
      while ( v6 < *(_DWORD *)(a1 + 88) );
    }
  }
  return HMChangeOwnerProcessWorker(a1, gptiRit);
}
