/*
 * XREFs of RtlFindNextForwardRunClearEx @ 0x14030D120
 * Callers:
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x1405A90C0 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x1405A9254 (IopLiveDumpPopulateBitmapForDump.c)
 *     MiDeleteAweInfoPages @ 0x1408966B0 (MiDeleteAweInfoPages.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlFindNextForwardRunClearEx(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // r10
  unsigned __int64 v5; // r9
  __int64 v8; // rcx
  _DWORD *v9; // rbx
  _DWORD *v10; // r8
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdi
  _DWORD *v13; // r8
  unsigned __int64 i; // rax

  v3 = *(_QWORD *)a1;
  v5 = a2;
  if ( *(_QWORD *)a1 > a2 )
  {
    v8 = *(_QWORD *)(a1 + 8);
    v9 = (_DWORD *)(v8 + 4 * ((v3 - 1) >> 5));
    v10 = (_DWORD *)(v8 + 4 * (a2 >> 5));
    if ( v10 != v9 && (*v10 | dword_14037C7E0[a2 & 0x1F]) == -1 )
    {
      v5 = (a2 & 0xFFFFFFFFFFFFFFE0uLL) + 32;
      for ( ++v10; v10 < v9 && *v10 == -1; ++v10 )
        v5 += 32LL;
    }
    for ( ; v5 < v3; ++v5 )
    {
      if ( !_bittest64(*(const signed __int64 **)(a1 + 8), v5) )
        break;
    }
    v11 = 0LL;
    if ( v10 != v9 )
    {
      v12 = v5 & 0x1F;
      if ( (~dword_14037C7E0[v12] & *v10) == 0 )
      {
        v11 = 32 - v12;
        if ( v12 == 33 )
        {
LABEL_23:
          *a3 = v5;
          return v11;
        }
        v13 = v10 + 1;
        while ( v13 < v9 && !*v13 )
        {
          ++v13;
          v11 += 32LL;
          if ( v11 == -1LL )
            goto LABEL_23;
        }
      }
    }
    for ( i = v11 + v5; i < *(_QWORD *)a1; ++v11 )
    {
      if ( _bittest64(*(const signed __int64 **)(a1 + 8), i) )
        break;
      if ( v11 == -1LL )
        break;
      ++i;
    }
    goto LABEL_23;
  }
  *a3 = a2;
  return 0LL;
}
