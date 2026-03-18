/*
 * XREFs of _BuildPropList @ 0x1C007D4C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BuildPropList(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  int v4; // edi
  unsigned __int64 v5; // rbp
  unsigned int v6; // r10d
  __int64 v7; // rax
  int v10; // r9d
  __int64 v11; // r8
  unsigned int i; // r11d
  unsigned __int64 v13; // rcx
  unsigned int v14; // eax
  __int64 v15; // rdx

  v4 = 0;
  v5 = 16LL * a3 + a2 - 16;
  v6 = 0;
  v7 = *(_QWORD *)(a1 + 120);
  if ( v7 )
  {
    v10 = *(_DWORD *)(v7 + 4);
    v11 = v7 + 8;
    for ( i = 0; v10; --v10 )
    {
      v13 = a2 + 16LL * v6;
      if ( v13 > v5 )
        i = -1073741789;
      v14 = 0;
      if ( v13 <= v5 )
        v14 = v6;
      v6 = v14;
      if ( (*(_BYTE *)(v11 + 10) & 1) == 0 )
      {
        v15 = 2LL * v14;
        v6 = v14 + 1;
        ++v4;
        *(_QWORD *)(a2 + 8 * v15) = *(_QWORD *)v11;
        *(_WORD *)(a2 + 8 * v15 + 8) = *(_WORD *)(v11 + 8);
      }
      v11 += 16LL;
    }
    *a4 = v4;
    return i;
  }
  else
  {
    *a4 = 0;
    return 0LL;
  }
}
