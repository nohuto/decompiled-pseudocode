/*
 * XREFs of AMLIGetNameSpaceObjectNoLock @ 0x1C000AAE8
 * Callers:
 *     AMLIGetNameSpaceObject @ 0x1C000ABD0 (AMLIGetNameSpaceObject.c)
 * Callees:
 *     FreeNameSpaceObjects @ 0x1C0003550 (FreeNameSpaceObjects.c)
 *     GetNameSpaceObjectNoLock @ 0x1C0008BF0 (GetNameSpaceObjectNoLock.c)
 *     AMLIDebugger @ 0x1C0063760 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C0063840 (ConPrintf.c)
 */

__int64 __fastcall AMLIGetNameSpaceObjectNoLock(const char *Src, __int64 *a2, unsigned __int64 *a3, unsigned int a4)
{
  __int64 v8; // rdx
  int NameSpaceObjectNoLock; // ebx
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  char v12; // al
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rcx
  unsigned __int64 v19[3]; // [rsp+20h] [rbp-18h] BYREF

  dword_1C0080868 = 0;
  pszDest = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger(v15, v14, v16, v17);
  }
  if ( Src && *Src )
  {
    if ( a2 )
    {
      v8 = *a2;
      if ( (*(_BYTE *)(*a2 + 64) & 4) != 0 )
        return (unsigned int)-1073741738;
    }
    else
    {
      v8 = 0LL;
    }
    NameSpaceObjectNoLock = GetNameSpaceObjectNoLock(Src, v8, (__int64 *)v19, a4);
    if ( NameSpaceObjectNoLock >= 0 )
    {
      v10 = v19[0];
      if ( v19[0] )
      {
        dword_1C0080868 = 0;
        v11 = v19[0] + 120;
        pszDest = 0;
        if ( (gdwfAMLI & 4) != 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v19[0] + 128));
          v10 = v19[0];
        }
        v12 = gdwfAMLI;
        *a3 = v11;
        if ( (v12 & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 112), 0xFFFFFFFF) == 1 )
        {
          v18 = v19[0];
          *(_WORD *)(v19[0] + 64) |= 4u;
          if ( (*(_WORD *)(v18 + 64) & 0x40) == 0 )
            FreeNameSpaceObjects(v18);
        }
      }
    }
    if ( NameSpaceObjectNoLock == 32772 )
      return 259;
    return (unsigned int)NameSpaceObjectNoLock;
  }
  return 3221225486LL;
}
