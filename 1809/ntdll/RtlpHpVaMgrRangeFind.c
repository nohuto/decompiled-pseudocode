/*
 * XREFs of RtlpHpVaMgrRangeFind @ 0x180063408
 * Callers:
 *     RtlpHpVaMgrAlloc @ 0x180063220 (RtlpHpVaMgrAlloc.c)
 * Callees:
 *     RtlSparseArrayElementAllocated @ 0x18006586C (RtlSparseArrayElementAllocated.c)
 */

unsigned __int64 __fastcall RtlpHpVaMgrRangeFind(
        _QWORD *a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int64 *a4)
{
  __int64 v5; // r10
  unsigned __int64 i; // rbx
  __int64 v8; // r14
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r11
  __int64 v13; // rdx
  _QWORD **v14; // rax
  unsigned __int64 v15; // rcx
  _QWORD *v16; // rcx

  v5 = a1[2];
  i = a1[1];
  v8 = a2;
  if ( (v5 & 1) != 0 && i )
    i ^= (unsigned __int64)(a1 + 1);
  v9 = 0LL;
  while ( i )
  {
    if ( a2 < *(_WORD *)(i + 24) )
    {
      v10 = *(_QWORD *)i;
      v9 = i;
    }
    else
    {
      if ( a2 <= *(_WORD *)(i + 24) )
        goto LABEL_15;
      v10 = *(_QWORD *)(i + 8);
    }
    if ( (v5 & 1) != 0 && v10 )
      i ^= v10;
    else
      i = v10;
  }
  i = v9;
LABEL_15:
  if ( i )
  {
    if ( a3 > 1u )
    {
      v11 = a1[3];
      v12 = a3 - 1LL;
      while ( 1 )
      {
        v13 = (__int64)(i - *(_QWORD *)(v11 + 32)) >> *(_DWORD *)(v11 + 88);
        if ( v8 + v13 + a3 - (v12 & (v13 + (unsigned __int64)a3 - 1)) - 1 <= v13
                                                                           + (unsigned __int64)*(unsigned __int16 *)(i + 24) )
          break;
        v14 = *(_QWORD ***)(i + 8);
        v15 = i;
        if ( v14 )
        {
          v16 = *v14;
          for ( i = *(_QWORD *)(i + 8); v16; v16 = (_QWORD *)*v16 )
            i = (unsigned __int64)v16;
        }
        else
        {
          while ( 1 )
          {
            i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !i || *(_QWORD *)i == v15 )
              break;
            v15 = i;
          }
        }
        if ( !i )
          return i;
      }
      *a4 = RtlSparseArrayElementAllocated(v11 + 16, v13 + a3 - (v12 & (v13 + a3 - 1LL)) - 1);
    }
    else
    {
      *a4 = i;
    }
  }
  return i;
}
