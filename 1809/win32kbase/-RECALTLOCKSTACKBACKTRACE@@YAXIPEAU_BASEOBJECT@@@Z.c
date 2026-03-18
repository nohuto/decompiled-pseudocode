/*
 * XREFs of ?RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z @ 0x1C00F8E70
 * Callers:
 *     EngLockSurface @ 0x1C0021210 (EngLockSurface.c)
 *     ?RECALTLOCK@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z @ 0x1C002537C (-RECALTLOCK@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0025778 (PALLOCMEM2.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

void __fastcall RECALTLOCKSTACKBACKTRACE(unsigned int a1, struct _BASEOBJECT *a2)
{
  struct tagAltStackTraceEntry **v2; // rsi
  __int64 v4; // rdi
  struct tagAltStackTraceEntry *v5; // rax
  unsigned __int64 v6; // rbx

  v2 = gpentHmgrAltStacks;
  v4 = a1;
  v5 = gpentHmgrAltStacks[a1];
  if ( v5 || (v5 = (struct tagAltStackTraceEntry *)PALLOCMEM2(0x2008uLL, 1651729991LL, 1), (v2[v4] = v5) != 0LL) )
  {
    if ( *((_DWORD *)a2 + 2) == 1 )
    {
      memset(v5, 0, 0x2008uLL);
      v5 = v2[v4];
    }
    v6 = (unsigned __int64)(*(_DWORD *)v5 & 0xF) << 8;
    memset((char *)v5 + v6 + 8, 0, 0x100uLL);
    RtlWalkFrameChain((PVOID *)((char *)v2[v4] + v6 + 8), 0x20u, 0);
    ++*(_DWORD *)gpentHmgrAltStacks[v4];
  }
}
