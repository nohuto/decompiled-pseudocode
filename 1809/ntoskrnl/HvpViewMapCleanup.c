/*
 * XREFs of HvpViewMapCleanup @ 0x1406C5098
 * Callers:
 *     HvHiveCleanup @ 0x1405FC440 (HvHiveCleanup.c)
 * Callees:
 *     CmSiCloseSection @ 0x14016E6C8 (CmSiCloseSection.c)
 *     HvpViewMapDeleteViewTreeNode @ 0x1406C8DC8 (HvpViewMapDeleteViewTreeNode.c)
 */

char __fastcall HvpViewMapCleanup(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rax
  unsigned __int64 v4; // rcx
  int v5; // esi
  _QWORD *v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rbx

  v1 = a1 + 40;
  v3 = *(_QWORD *)(a1 + 48);
  v4 = *(_QWORD *)(a1 + 40);
  if ( (v3 & 1) != 0 && v4 )
    v4 ^= v1;
  v5 = v3 & 1;
  if ( v4 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *(_QWORD *)v4 )
        {
          v6 = (_QWORD *)v4;
          if ( v5 )
            v4 ^= *(_QWORD *)v4;
          else
            v4 = *(_QWORD *)v4;
          *v6 = 0LL;
        }
        v7 = *(_QWORD *)(v4 + 8);
        if ( !v7 )
          break;
        v8 = v4;
        if ( v5 )
          v4 ^= v7;
        else
          v4 = *(_QWORD *)(v4 + 8);
        *(_QWORD *)(v8 + 8) = 0LL;
      }
      v9 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v5 && v9 )
        v9 ^= v4;
      HvpViewMapDeleteViewTreeNode((PPRIVILEGE_SET)v4);
      if ( !v9 )
        break;
      v4 = v9;
    }
    LOBYTE(v3) = *(_BYTE *)(v1 + 8);
  }
  *(_QWORD *)v1 = 0LL;
  *(_QWORD *)(v1 + 8) = 0LL;
  if ( (v3 & 1) != 0 )
    *(_BYTE *)(v1 + 8) = 1;
  if ( *(_QWORD *)a1 )
    LOBYTE(v3) = CmSiCloseSection(*(void **)a1);
  return v3;
}
