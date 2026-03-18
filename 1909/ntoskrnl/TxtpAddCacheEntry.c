/*
 * XREFs of TxtpAddCacheEntry @ 0x14099158C
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x140183298 (BgpTxtDisplayCharacter.c)
 * Callees:
 *     BgpFwAllocateMemory @ 0x1401793D0 (BgpFwAllocateMemory.c)
 *     TxtpDestroyCacheEntry @ 0x1409948F8 (TxtpDestroyCacheEntry.c)
 */

__int64 __fastcall TxtpAddCacheEntry(__int64 *a1, __int16 a2, __int64 a3, __int64 a4)
{
  __int64 Memory; // rax
  unsigned int v9; // edi
  __int64 v10; // rcx
  int v11; // ecx
  __int64 **v13; // rcx
  __int64 **v14; // rax

  Memory = BgpFwAllocateMemory(0x38uLL);
  v9 = 0;
  if ( !Memory )
    return (unsigned int)-1073741801;
  *(_WORD *)(Memory + 16) = a2;
  *(_OWORD *)(Memory + 24) = *(_OWORD *)a3;
  *(_QWORD *)(Memory + 40) = *(_QWORD *)(a3 + 16);
  *(_QWORD *)(Memory + 48) = a4;
  v10 = *a1;
  if ( *(__int64 **)(*a1 + 8) != a1 )
LABEL_10:
    __fastfail(3u);
  *(_QWORD *)Memory = v10;
  *(_QWORD *)(Memory + 8) = a1;
  *(_QWORD *)(v10 + 8) = Memory;
  *a1 = Memory;
  v11 = *((_DWORD *)a1 + 4);
  if ( v11 == 125 )
  {
    v13 = (__int64 **)a1[1];
    if ( *v13 == a1 )
    {
      v14 = (__int64 **)v13[1];
      if ( *v14 == (__int64 *)v13 )
      {
        a1[1] = (__int64)v14;
        *v14 = a1;
        TxtpDestroyCacheEntry();
        return v9;
      }
    }
    goto LABEL_10;
  }
  *((_DWORD *)a1 + 4) = v11 + 1;
  return v9;
}
