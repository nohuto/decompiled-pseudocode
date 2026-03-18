/*
 * XREFs of ?RECSTACKBACKTRACE@@YAXI@Z @ 0x1C0125904
 * Callers:
 *     ?RECHMGRCREATE@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z @ 0x1C0021FAC (-RECHMGRCREATE@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00148AC (PALLOCMEM2.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

void __fastcall RECSTACKBACKTRACE(unsigned int a1)
{
  struct tagStackTraceEntry **v1; // rdi
  __int64 v2; // rbx
  struct tagStackTraceEntry *v3; // rcx
  struct tagStackTraceEntry *v4; // rax
  unsigned int CurrentProcessId; // eax
  struct tagStackTraceEntry **v6; // rdx

  v1 = gpentHmgrStacks;
  v2 = a1;
  v3 = gpentHmgrStacks[a1];
  if ( v3 || (v4 = (struct tagStackTraceEntry *)PALLOCMEM2(0x108uLL, 0x62736647u, 1), v1[v2] = v4, (v3 = v4) != 0LL) )
  {
    memset((char *)v3 + 8, 0, 0x100uLL);
    RtlWalkFrameChain((PVOID *)v1[v2] + 1, 8u, 0);
    RtlWalkFrameChain((PVOID *)gpentHmgrStacks[v2] + 9, 0x18u, 1u);
    CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
    v6 = gpentHmgrStacks;
    *(_DWORD *)gpentHmgrStacks[v2] = CurrentProcessId & 0xFFFFFFFC;
    *((_DWORD *)v6[v2] + 1) = -1;
  }
}
