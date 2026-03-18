/*
 * XREFs of SdbpCheckForMatch @ 0x1407756AC
 * Callers:
 *     SdbpCheckKObject @ 0x140775578 (SdbpCheckKObject.c)
 *     SdbpCheckExe @ 0x140921C18 (SdbpCheckExe.c)
 * Callees:
 *     SdbReadWORDTag @ 0x14070DE08 (SdbReadWORDTag.c)
 *     SdbFindFirstTag @ 0x14070E0C0 (SdbFindFirstTag.c)
 *     SdbpMatchList @ 0x1407757A8 (SdbpMatchList.c)
 *     SdbpMatchOsVersion @ 0x140775920 (SdbpMatchOsVersion.c)
 *     SdbpGetExeEntryFlags @ 0x140775A00 (SdbpGetExeEntryFlags.c)
 */

__int64 __fastcall SdbpCheckForMatch(int a1, __int64 a2, unsigned int a3, __int64 a4, _DWORD *a5, __int64 a6)
{
  unsigned int v9; // ebx
  int v11; // r15d
  BOOL v12; // r12d
  _DWORD *v14; // rdi
  unsigned int FirstTag; // eax
  unsigned int v16; // [rsp+88h] [rbp+20h] BYREF

  v9 = 0;
  v16 = 0;
  v11 = 1;
  v12 = SdbFindFirstTag(a2, a3, 4109) != 0;
  if ( (unsigned int)SdbpMatchOsVersion(a2, a3) )
  {
    if ( (unsigned int)SdbpMatchList((unsigned int)&v16, a1, a2, a3, a4, 0)
      && (v9 = v16) != 0
      && (unsigned int)SdbpGetExeEntryFlags(a2, a3, a6) )
    {
      v14 = a5;
      if ( a5 )
      {
        FirstTag = SdbFindFirstTag(a2, a3, 12289);
        if ( FirstTag )
          *v14 = (unsigned __int16)SdbReadWORDTag(a2, FirstTag, 2u);
        else
          *v14 = 2;
      }
    }
    else
    {
      v9 = 0;
    }
  }
  if ( !*(_DWORD *)(a4 + 80) || v12 )
    v11 = 0;
  *(_DWORD *)(a4 + 80) = v11;
  return v9;
}
