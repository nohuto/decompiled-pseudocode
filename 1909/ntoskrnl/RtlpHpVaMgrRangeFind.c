/*
 * XREFs of RtlpHpVaMgrRangeFind @ 0x140110464
 * Callers:
 *     RtlpHpVaMgrAlloc @ 0x14010E914 (RtlpHpVaMgrAlloc.c)
 * Callees:
 *     RtlSparseArrayElementAllocated @ 0x14002029C (RtlSparseArrayElementAllocated.c)
 */

unsigned __int64 __fastcall RtlpHpVaMgrRangeFind(__int64 a1, unsigned __int16 a2, unsigned __int16 a3, _QWORD *a4)
{
  unsigned __int64 i; // rbx
  __int64 v8; // r15
  int v9; // ecx
  unsigned __int64 v10; // rdx
  unsigned __int16 v11; // ax
  unsigned __int64 v12; // rax
  __int64 v14; // r8
  __int64 v15; // r10
  __int64 v16; // rdi
  __int64 v17; // rdx
  _QWORD **v18; // rax
  unsigned __int64 v19; // rcx
  _QWORD *v20; // rcx

  i = *(_QWORD *)(a1 + 8);
  v8 = a2;
  if ( (*(_BYTE *)(a1 + 16) & 1) != 0 && i )
    i ^= a1 + 8;
  v9 = *(_BYTE *)(a1 + 16) & 1;
  v10 = 0LL;
  while ( i )
  {
    v11 = *(_WORD *)(i + 24);
    if ( a2 < v11 )
    {
      v12 = *(_QWORD *)i;
      v10 = i;
    }
    else
    {
      if ( a2 <= v11 )
        goto LABEL_15;
      v12 = *(_QWORD *)(i + 8);
    }
    if ( v9 && v12 )
      i ^= v12;
    else
      i = v12;
  }
  i = v10;
LABEL_15:
  if ( i )
  {
    if ( a3 > 1u )
    {
      v14 = *(_QWORD *)(a1 + 24);
      v15 = a3;
      v16 = a3 - 1LL;
      while ( 1 )
      {
        v17 = (__int64)(i - *(_QWORD *)(v14 + 40)) >> *(_DWORD *)(v14 + 24);
        if ( v8 + v17 + v15 - (v16 & (unsigned __int64)(v17 + v15 - 1)) - 1 <= v17
                                                                             + (unsigned __int64)*(unsigned __int16 *)(i + 24) )
          break;
        v18 = *(_QWORD ***)(i + 8);
        v19 = i;
        if ( v18 )
        {
          v20 = *v18;
          for ( i = *(_QWORD *)(i + 8); v20; v20 = (_QWORD *)*v20 )
            i = (unsigned __int64)v20;
        }
        else
        {
          while ( 1 )
          {
            i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !i || *(_QWORD *)i == v19 )
              break;
            v19 = i;
          }
        }
        if ( !i )
          return i;
      }
      *a4 = RtlSparseArrayElementAllocated(v14 + 16, v17 + v15 - (v16 & (v17 + v15 - 1)) - 1);
    }
    else
    {
      *a4 = i;
    }
  }
  return i;
}
