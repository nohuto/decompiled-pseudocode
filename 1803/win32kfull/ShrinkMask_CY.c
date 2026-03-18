/*
 * XREFs of ShrinkMask_CY @ 0x1C0234B60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 */

__int64 __fastcall ShrinkMask_CY(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 v3; // r9
  size_t v4; // rcx
  unsigned int v5; // r8d
  int v6; // ecx
  unsigned __int64 i; // r8
  int v8; // eax
  __int64 v9; // rcx
  unsigned __int16 *v10; // rax
  int v11; // r10d
  unsigned int v12; // edx
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax
  char v16; // al

  v1 = *(_QWORD *)(a1 + 216);
  v3 = *(_QWORD *)(a1 + 208);
  v4 = *(unsigned int *)(a1 + 200);
  if ( (*(_DWORD *)a1 & 0x100) != 0 )
  {
    v5 = v4;
    v6 = v4 & 3;
    for ( i = v5 >> 2; (_DWORD)i; i = (unsigned int)(i - 1) )
    {
      v8 = *(_DWORD *)v1;
      v1 += 4LL;
      *(_DWORD *)v3 = ~v8;
      v3 += 4LL;
    }
    if ( v6 )
    {
      v3 -= v1;
      do
      {
        *(_BYTE *)(v3 + v1) = ~*(_BYTE *)v1;
        ++v1;
        --v6;
      }
      while ( v6 );
    }
  }
  else
  {
    memmove((void *)v3, (const void *)v1, v4);
  }
  if ( (int)--*(_DWORD *)(a1 + 228) > 0 )
    *(_QWORD *)(a1 + 216) += *(int *)(a1 + 224);
  v9 = *(_QWORD *)(a1 + 312);
  v10 = *(unsigned __int16 **)(v9 + 152);
  v11 = *v10;
  *(_QWORD *)(v9 + 152) = v10 + 1;
  while ( --v11 )
  {
    v12 = *(_DWORD *)(a1 + 200);
    i = *(_QWORD *)(a1 + 216);
    v3 = v12 & 3;
    v13 = *(_QWORD *)(a1 + 208);
    v1 = v12 >> 2;
    if ( (*(_DWORD *)a1 & 0x100) != 0 )
    {
      for ( ; (_DWORD)v1; v1 = (unsigned int)(v1 - 1) )
      {
        v14 = *(_DWORD *)i;
        i += 4LL;
        *(_DWORD *)v13 |= ~v14;
        v13 += 4LL;
      }
      if ( (_DWORD)v3 )
      {
        i -= v13;
        do
        {
          *(_BYTE *)v13 |= ~*(_BYTE *)(i + v13);
          ++v13;
          v3 = (unsigned int)(v3 - 1);
        }
        while ( (_DWORD)v3 );
      }
    }
    else
    {
      for ( ; (_DWORD)v1; v1 = (unsigned int)(v1 - 1) )
      {
        v15 = *(_DWORD *)i;
        i += 4LL;
        *(_DWORD *)v13 |= v15;
        v13 += 4LL;
      }
      for ( ; (_DWORD)v3; v3 = (unsigned int)(v3 - 1) )
      {
        v16 = *(_BYTE *)i++;
        *(_BYTE *)v13++ |= v16;
      }
    }
    if ( (int)--*(_DWORD *)(a1 + 228) > 0 )
      *(_QWORD *)(a1 + 216) += *(int *)(a1 + 224);
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64, unsigned __int64))(a1 + 184))(a1, v1, i, v3);
}
