/*
 * XREFs of MiIsRegularMemory @ 0x1409C144C
 * Callers:
 *     MxMovePageTables @ 0x1409C0EB0 (MxMovePageTables.c)
 *     MxCreatePfns @ 0x1409C108C (MxCreatePfns.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsRegularMemory(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdx
  __int64 v5; // r8
  __int64 i; // rdx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  __int64 v9; // rcx

  if ( !MxLastMemoryDescriptorChecked
    || (v3 = *(_QWORD *)(MxLastMemoryDescriptorChecked + 24), a2 < v3)
    || a2 >= v3 + *(_QWORD *)(MxLastMemoryDescriptorChecked + 32) )
  {
    v5 = a1 + 32;
    for ( i = *(_QWORD *)(a1 + 32); ; i = *(_QWORD *)i )
    {
      if ( i == v5 )
        return 0LL;
      v7 = *(_QWORD *)(i + 24);
      if ( a2 < v7 )
        return 0LL;
      if ( a2 < *(_QWORD *)(i + 32) + v7 )
        break;
    }
    v8 = *(_DWORD *)(i + 16) & 0x3FFFFFFF;
    if ( (unsigned int)v8 <= 0x22 )
    {
      v9 = 0x5C0C00048LL;
      if ( _bittest64(&v9, v8) )
        return 0LL;
    }
    MxLastMemoryDescriptorChecked = i;
  }
  return 1LL;
}
