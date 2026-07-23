/*
 * XREFs of PfTFreeBufferList @ 0x140685478
 * Callers:
 *     PfTCreateTraceDump @ 0x140684C80 (PfTCreateTraceDump.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     PfTLbInitialize @ 0x140685548 (PfTLbInitialize.c)
 */

__int64 __fastcall PfTFreeBufferList(unsigned int *a1)
{
  __int64 result; // rax
  _QWORD *v2; // rsi
  _QWORD *v3; // rbx
  unsigned int v5; // ebp
  _QWORD *v6; // rcx
  _QWORD *v7; // rax

  result = *a1;
  v2 = a1 + 6;
  v3 = (_QWORD *)*((_QWORD *)a1 + 4);
  v5 = *a1 >> 4;
  v6 = (_QWORD *)*((_QWORD *)a1 + 3);
  if ( v6 != v3 )
  {
    do
    {
      if ( (_QWORD *)*v3 != v2 || (v7 = (_QWORD *)v3[1], (_QWORD *)*v7 != v3) )
        __fastfail(3u);
      v2[1] = v7;
      *v7 = v2;
      if ( (*a1 & 0xF) != 0 )
      {
        memset(v3, 0, v5);
        v3[1] = v3;
        *v3 = v3;
        *((_DWORD *)v3 + 8) = 2048;
      }
      else
      {
        PfTLbInitialize(v3, v5, 1LL);
      }
      *v3 = *((_QWORD *)a1 + 2);
      *((_QWORD *)a1 + 2) = v3;
      ++*((_WORD *)a1 + 5);
      v6 = (_QWORD *)*v2;
      v3 = (_QWORD *)v2[1];
    }
    while ( (_QWORD *)*v2 != v3 );
    result = *a1;
  }
  if ( (result & 0xF) == 0 )
    return PfTLbInitialize(v6, v5, 1LL);
  return result;
}
