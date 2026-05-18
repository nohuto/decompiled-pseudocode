/*
 * XREFs of sub_18000B5F0 @ 0x18000B5F0
 * Callers:
 *     sub_18000AFB8 @ 0x18000AFB8 (sub_18000AFB8.c)
 *     sub_18000B5F0 @ 0x18000B5F0 (sub_18000B5F0.c)
 * Callees:
 *     sub_18000B5F0 @ 0x18000B5F0 (sub_18000B5F0.c)
 *     sub_18000D458 @ 0x18000D458 (sub_18000D458.c)
 */

char __fastcall sub_18000B5F0(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  char result; // al
  __int64 v9; // rdx
  __int64 v10; // rcx
  _BYTE *v11; // r10
  __int64 v12; // rax
  _BYTE *v13; // rdi
  _BYTE *v14; // rdi
  __int64 v15; // r8
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rbx

  result = 0;
  *a3 = 0;
  if ( a2 )
  {
    result = sub_18000B5F0(a1, *(_QWORD *)(a2 + 16), a3, a4);
    v9 = *(_QWORD *)(a2 + 32);
    if ( v9 )
    {
      if ( !*(_DWORD *)v9 )
        *(_DWORD *)v9 = _InterlockedIncrement(&dword_180258004);
      if ( !*(_DWORD *)(a1 + 72) )
      {
        *(_OWORD *)(a1 + 72) = *(_OWORD *)v9;
        *(_QWORD *)(a1 + 88) = *(_QWORD *)(v9 + 16);
      }
      v10 = -1LL;
      v11 = &a3[a4];
      v12 = -1LL;
      *(_OWORD *)(a1 + 96) = *(_OWORD *)v9;
      *(_QWORD *)(a1 + 112) = *(_QWORD *)(v9 + 16);
      do
        ++v12;
      while ( a3[v12] );
      v13 = &a3[v12];
      if ( v11 - v13 > 2 )
      {
        *v13 = 92;
        v14 = v13 + 1;
        v15 = *(_QWORD *)(v9 + 8);
        do
          ++v10;
        while ( *(_BYTE *)(v15 + v10) );
        v16 = v10 + 1;
        v17 = v11 - v14;
        if ( v16 < v11 - v14 )
          v17 = v16;
        sub_18000D458(v14, v11 - v14, v15, v17);
        v14[v17 - 1] = 0;
      }
      return 1;
    }
  }
  return result;
}
