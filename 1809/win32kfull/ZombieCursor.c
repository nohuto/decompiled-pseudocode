/*
 * XREFs of ZombieCursor @ 0x1C014CDF0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlinkCursor@@YAXPEAUtagCURSOR@@@Z @ 0x1C014CE5C (-UnlinkCursor@@YAXPEAUtagCURSOR@@@Z.c)
 */

__int64 __fastcall ZombieCursor(__int64 a1)
{
  int v1; // eax
  int v4; // edi
  __int64 v5; // rsi

  v1 = *(_DWORD *)(a1 + 80);
  if ( (v1 & 0x100) != 0 )
  {
    UnlinkCursor((struct tagCURSOR *)a1);
    v1 = *(_DWORD *)(a1 + 80);
  }
  if ( (v1 & 8) != 0 )
  {
    v4 = 0;
    if ( *(int *)(a1 + 88) > 0 )
    {
      v5 = 0LL;
      do
      {
        HMChangeOwnerPheProcess(
          gSharedInfo[1]
        + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)**(_DWORD **)(v5 + *(_QWORD *)(a1 + 96)),
          gptiRit);
        ++v4;
        v5 += 8LL;
      }
      while ( v4 < *(_DWORD *)(a1 + 88) );
    }
  }
  return HMChangeOwnerPheProcess(
           gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1,
           gptiRit);
}
