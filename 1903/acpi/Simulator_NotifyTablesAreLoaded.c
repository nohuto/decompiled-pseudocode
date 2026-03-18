/*
 * XREFs of Simulator_NotifyTablesAreLoaded @ 0x1C00C0558
 * Callers:
 *     ACPIInitializeDDBs @ 0x1C00BD808 (ACPIInitializeDDBs.c)
 * Callees:
 *     HeapAlloc @ 0x1C0003960 (HeapAlloc.c)
 *     CreateNameSpaceObject @ 0x1C0017B60 (CreateNameSpaceObject.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     Simulator_AllocAndInitTestData @ 0x1C0063368 (Simulator_AllocAndInitTestData.c)
 *     Simulator_TestNotify @ 0x1C0063DFC (Simulator_TestNotify.c)
 */

__int64 Simulator_NotifyTablesAreLoaded()
{
  struct _EX_RUNDOWN_REF *v0; // rbx
  void *v1; // rax
  unsigned __int64 Count; // rcx
  struct _EX_RUNDOWN_REF *v3; // rbx
  void *v4; // rax
  unsigned __int64 v5; // rcx
  _DWORD *inited; // rax
  void *v7; // rbx
  __int128 v9; // [rsp+30h] [rbp-20h]
  struct _EX_RUNDOWN_REF *v10; // [rsp+68h] [rbp+18h] BYREF

  v10 = 0LL;
  *(_QWORD *)&v9 = 0x544D49530D1F5BA4LL;
  *((_QWORD *)&v9 + 1) = 0x68005446534D0D00LL;
  if ( !(unsigned int)CreateNameSpaceObject((struct _SLIST_ENTRY *)gpheapGlobal, "MSLT", 0LL, 0LL, &v10, 0) )
  {
    v0 = v10;
    if ( v10 )
    {
      WORD1(v10[8].Ptr) = 8;
      LODWORD(v0[11].Count) = 222;
      v1 = (void *)HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1381258056, 0xDEu);
      v0[12].Count = (unsigned __int64)v1;
      if ( v1 )
      {
        memset(v1, 0, LODWORD(v0[11].Count));
        *(_BYTE *)(v0[12].Count + 193) |= 1u;
        Count = v0[12].Count;
        *(_OWORD *)(Count + 194) = v9;
        *(_DWORD *)(Count + 210) = 218127373;
        *(_WORD *)(Count + 214) = 2560;
        *(_BYTE *)(Count + 216) = 0;
      }
    }
  }
  v10 = 0LL;
  if ( !(unsigned int)CreateNameSpaceObject((struct _SLIST_ENTRY *)gpheapGlobal, "MSUT", 0LL, 0LL, &v10, 0) )
  {
    v3 = v10;
    if ( v10 )
    {
      WORD1(v10[8].Ptr) = 8;
      LODWORD(v3[11].Count) = 202;
      v4 = (void *)HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1381258056, 0xCAu);
      v3[12].Count = (unsigned __int64)v4;
      if ( v4 )
      {
        memset(v4, 0, LODWORD(v3[11].Count));
        *(_BYTE *)(v3[12].Count + 193) |= 1u;
        v5 = v3[12].Count;
        *(_WORD *)(v5 + 194) = 10843;
        *(_BYTE *)(v5 + 196) = 104;
      }
    }
  }
  inited = Simulator_AllocAndInitTestData();
  v7 = inited;
  if ( !inited )
    return 3221225626LL;
  *inited = 1;
  inited[1] = 5;
  inited[2] = 1;
  *((_QWORD *)inited + 2) = gpnsNameSpaceRoot;
  Simulator_TestNotify(inited);
  ExFreePoolWithTag(v7, 0);
  return 0LL;
}
