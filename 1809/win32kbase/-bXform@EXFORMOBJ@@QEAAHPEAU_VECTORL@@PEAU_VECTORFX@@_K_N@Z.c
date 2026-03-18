/*
 * XREFs of ?bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@PEAU_VECTORFX@@_K_N@Z @ 0x1C00A9D40
 * Callers:
 *     ?bOldPenNominal@DC@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x1C00A0164 (-bOldPenNominal@DC@@QEAAHAEAVEXFORMOBJ@@J@Z.c)
 * Callees:
 *     EngSetLastError @ 0x1C0081C80 (EngSetLastError.c)
 *     bCvtVts @ 0x1C01865F8 (bCvtVts.c)
 */

__int64 __fastcall EXFORMOBJ::bXform(EXFORMOBJ *this, struct _VECTORL *a2, struct _VECTORFX *a3, __int64 a4, char a5)
{
  __int64 v5; // rcx
  struct _VECTORL *v6; // r10
  __int64 v7; // r8
  int v8; // r9d
  unsigned int v10; // ebx

  v5 = *(_QWORD *)this;
  if ( (*(_DWORD *)(v5 + 32) & 2) != 0 )
  {
    v6 = (struct _VECTORL *)((char *)a2 + 8 * a4);
    if ( a2 >= v6 )
    {
      return 1LL;
    }
    else
    {
      v7 = a3 - a2;
      while ( (unsigned int)(*(_DWORD *)a2 + 134217726) <= 0xFFFFFFC )
      {
        v8 = *((_DWORD *)a2 + 1);
        if ( (unsigned int)(v8 + 134217726) > 0xFFFFFFC )
          break;
        *(_DWORD *)((char *)a2 + v7) = 16 * *(_DWORD *)a2;
        *(_DWORD *)((char *)a2 + v7 + 4) = 16 * v8;
        a2 = (struct _VECTORL *)((char *)a2 + 8);
        if ( a2 >= v6 )
          return 1LL;
      }
      EngSetLastError(0x216u);
      return 0LL;
    }
  }
  else
  {
    v10 = bCvtVts(v5, (_DWORD)a2, (_DWORD)a3, a4, a5);
    if ( !v10 )
      EngSetLastError(0x216u);
    return v10;
  }
}
