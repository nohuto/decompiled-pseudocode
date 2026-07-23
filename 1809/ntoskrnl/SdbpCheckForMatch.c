/*
 * XREFs of SdbpCheckForMatch @ 0x140724154
 * Callers:
 *     SdbpCheckExe @ 0x140723F58 (SdbpCheckExe.c)
 *     SdbpCheckKObject @ 0x140724020 (SdbpCheckKObject.c)
 * Callees:
 *     SdbReadWORDTag @ 0x14067E08C (SdbReadWORDTag.c)
 *     SdbFindFirstTag @ 0x14067E340 (SdbFindFirstTag.c)
 *     SdbpMatchList @ 0x140724254 (SdbpMatchList.c)
 *     SdbpMatchOsVersion @ 0x1407243CC (SdbpMatchOsVersion.c)
 *     SdbpGetExeEntryFlags @ 0x1407244AC (SdbpGetExeEntryFlags.c)
 */

__int64 __fastcall SdbpCheckForMatch(int a1, __int64 a2, unsigned int a3, __int64 a4, _DWORD *a5, __int64 a6)
{
  int v10; // r15d
  BOOL v11; // r12d
  unsigned int v12; // ebx
  _DWORD *v14; // rdi
  unsigned int FirstTag; // eax
  unsigned int v16; // [rsp+88h] [rbp+20h] BYREF

  v16 = 0;
  v10 = 1;
  v11 = SdbFindFirstTag(a2, a3, 4109) != 0;
  if ( (unsigned int)SdbpMatchOsVersion(a2, a3)
    && (unsigned int)SdbpMatchList((unsigned int)&v16, a1, a2, a3, a4, 0)
    && (v12 = v16) != 0
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
    v12 = 0;
  }
  if ( !*(_DWORD *)(a4 + 80) || v11 )
    v10 = 0;
  *(_DWORD *)(a4 + 80) = v10;
  return v12;
}
