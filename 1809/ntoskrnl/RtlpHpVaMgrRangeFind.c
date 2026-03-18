/*
 * XREFs of RtlpHpVaMgrRangeFind @ 0x14000DCE0
 * Callers:
 *     RtlpHpVaMgrAlloc @ 0x14000D358 (RtlpHpVaMgrAlloc.c)
 * Callees:
 *     RtlSparseArrayElementAllocated @ 0x14000CB98 (RtlSparseArrayElementAllocated.c)
 */

unsigned __int64 __fastcall RtlpHpVaMgrRangeFind(_QWORD *a1, unsigned __int16 a2, unsigned __int16 a3, _QWORD *a4)
{
  __int64 v5; // r10
  unsigned __int64 i; // rbx
  __int64 v8; // r15
  unsigned __int64 v9; // rdx
  unsigned __int16 v10; // ax
  unsigned __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r10
  __int64 v14; // rdi
  __int64 v15; // rdx
  _QWORD **v16; // rax
  unsigned __int64 v17; // rcx
  _QWORD *v18; // rcx

  v5 = a1[2];
  i = a1[1];
  v8 = a2;
  if ( (v5 & 1) != 0 && i )
    i ^= (unsigned __int64)(a1 + 1);
  v9 = 0LL;
  while ( i )
  {
    v10 = *(_WORD *)(i + 24);
    if ( a2 < v10 )
    {
      v11 = *(_QWORD *)i;
      v9 = i;
    }
    else
    {
      if ( a2 <= v10 )
        goto LABEL_15;
      v11 = *(_QWORD *)(i + 8);
    }
    if ( (v5 & 1) != 0 && v11 )
      i ^= v11;
    else
      i = v11;
  }
  i = v9;
LABEL_15:
  if ( i )
  {
    if ( a3 > 1u )
    {
      v12 = a1[3];
      v13 = a3;
      v14 = a3 - 1LL;
      while ( 1 )
      {
        v15 = (__int64)(i - *(_QWORD *)(v12 + 32)) >> *(_DWORD *)(v12 + 88);
        if ( v8 + v15 + v13 - (v14 & (unsigned __int64)(v15 + v13 - 1)) - 1 <= v15
                                                                             + (unsigned __int64)*(unsigned __int16 *)(i + 24) )
          break;
        v16 = *(_QWORD ***)(i + 8);
        v17 = i;
        if ( v16 )
        {
          v18 = *v16;
          for ( i = *(_QWORD *)(i + 8); v18; v18 = (_QWORD *)*v18 )
            i = (unsigned __int64)v18;
        }
        else
        {
          while ( 1 )
          {
            i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !i || *(_QWORD *)i == v17 )
              break;
            v17 = i;
          }
        }
        if ( !i )
          return i;
      }
      *a4 = RtlSparseArrayElementAllocated(v12 + 16, v15 + v13 - (v14 & (v15 + v13 - 1)) - 1);
    }
    else
    {
      *a4 = i;
    }
  }
  return i;
}
