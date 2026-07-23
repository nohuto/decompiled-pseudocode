/*
 * XREFs of ArbGetNextAllocationRange @ 0x14074C530
 * Callers:
 *     <none>
 * Callees:
 *     ArbpUpdatePriority @ 0x14074C6B0 (ArbpUpdatePriority.c)
 */

char __fastcall ArbGetNextAllocationRange(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned int v5; // ecx
  unsigned __int64 i; // rdi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r9
  int v9; // edx
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rdi
  unsigned int v13; // eax
  unsigned __int64 *v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // r11
  unsigned __int64 v19; // r10
  char result; // al
  unsigned __int64 v21; // rcx

  v2 = *(_QWORD *)(a2 + 40);
  while ( 1 )
  {
    if ( v2 )
    {
      ArbpUpdatePriority(a1, v2);
      v2 = *(_QWORD *)(a2 + 56);
      v5 = *(_DWORD *)(a2 + 48);
    }
    else
    {
      v2 = *(_QWORD *)(a2 + 56);
      v5 = *(_DWORD *)(a2 + 48);
      for ( i = v2; i < v2 + ((unsigned __int64)v5 << 6); v2 = *(_QWORD *)(a2 + 56) )
      {
        *(_DWORD *)(i + 32) = 0;
        ArbpUpdatePriority(a1, i);
        v5 = *(_DWORD *)(a2 + 48);
        i += 64LL;
      }
    }
    v7 = v2 + 64;
    v8 = v2 + ((v5 - 1 + 1LL) << 6);
    while ( v7 < v8 )
    {
      v21 = v7;
      if ( *(_DWORD *)(v7 + 32) >= *(_DWORD *)(v2 + 32) )
        v21 = v2;
      v7 += 64LL;
      v2 = v21;
    }
    v9 = *(_DWORD *)(v2 + 32);
    if ( v9 == 0x7FFFFFFF )
      return 0;
    v10 = *(_QWORD *)(v2 + 8);
    v11 = *(_QWORD *)v2;
    v12 = v10;
    if ( (unsigned int)(v9 - 2147483645) <= 1 )
    {
      v17 = *(_QWORD *)v2;
    }
    else
    {
      v13 = v9 - 1;
      if ( v9 <= 0 )
        v13 = ~v9;
      v14 = (unsigned __int64 *)(*(_QWORD *)(a1 + 64) + 16LL * v13);
      v15 = v14[1];
      v16 = *v14;
      v17 = *(_QWORD *)v2;
      if ( v11 <= v16 )
        v17 = v16;
      if ( v10 >= v15 )
        v12 = v15;
    }
    v18 = *(_QWORD *)(v2 + 16);
    if ( v18 )
    {
      v19 = *(_QWORD *)(v2 + 24);
      v11 = v19 + v17 - 1 - (v19 + v17 - 1) % v19;
      if ( v18 - 1 <= v12 - v11 )
      {
        v10 = v12 - (1 - v18 + v12) % v19;
        goto LABEL_18;
      }
      *(_QWORD *)(a2 + 40) = v2;
    }
    else
    {
LABEL_18:
      if ( v11 != *(_QWORD *)(a2 + 16) || v10 != *(_QWORD *)(a2 + 24) || *(_QWORD *)(a2 + 40) != v2 )
      {
        *(_QWORD *)(a2 + 16) = v11;
        result = 1;
        *(_QWORD *)(a2 + 24) = v10;
        *(_QWORD *)(a2 + 40) = v2;
        return result;
      }
      v2 = *(_QWORD *)(a2 + 40);
    }
  }
}
