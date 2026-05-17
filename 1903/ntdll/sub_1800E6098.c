/*
 * XREFs of sub_1800E6098 @ 0x1800E6098
 * Callers:
 *     sub_1800100C4 @ 0x1800100C4 (sub_1800100C4.c)
 *     sub_18007B540 @ 0x18007B540 (sub_18007B540.c)
 * Callees:
 *     RtlCreateAcl @ 0x180011A50 (RtlCreateAcl.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

__int64 __fastcall sub_1800E6098(__int64 a1, char a2, unsigned __int8 *a3, __int64 *a4, _BYTE *a5)
{
  unsigned __int16 v8; // bx
  unsigned __int16 *v9; // rdi
  __int64 v10; // rdx
  unsigned __int16 v11; // cx
  __int64 i; // r9
  __int16 v13; // ax
  __int16 v14; // r8
  __int64 v15; // rax
  __int64 Heap; // rax
  __int64 v18; // r15
  unsigned int v19; // ebp
  unsigned int v20; // eax
  char *v21; // rbx
  char v22; // al
  __int64 v23; // rax
  char *v24; // r12
  unsigned __int8 *v25; // r14
  char *v26; // rbx
  char *v27; // rbx
  __int16 v28; // cx
  __int64 v29; // [rsp+60h] [rbp+8h]

  v8 = 8;
  if ( !a1 )
  {
    *a4 = 0LL;
    *a5 = 0;
    return 0LL;
  }
  v9 = (unsigned __int16 *)(a1 + 8);
  v10 = a1 + 8;
  v11 = 4 * (a3[1] + 2);
  if ( *(_WORD *)(a1 + 4) )
  {
    for ( i = *(unsigned __int16 *)(a1 + 4); i; --i )
    {
      if ( *(_BYTE *)v10 )
      {
        if ( !a2 || *(_BYTE *)v10 != 4 )
          goto LABEL_13;
        v14 = 4 * *(unsigned __int8 *)(v10 + 13);
        if ( (unsigned __int16)(v14 + 8) <= v11 )
          v13 = v11 - v14 - 8;
        else
          v13 = v14 + 8 - v11;
      }
      else
      {
        v13 = v11 + 4;
      }
      v8 += v13;
LABEL_13:
      v15 = *(unsigned __int16 *)(v10 + 2);
      v8 += v15;
      v10 += v15;
    }
  }
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18016542C + 1310720, v8);
  *a4 = Heap;
  if ( !Heap )
    return 3221225626LL;
  *a5 = 1;
  RtlCreateAcl(Heap, v8, 3);
  v18 = *a4;
  v19 = 0;
  LOWORD(v20) = *(_WORD *)(a1 + 4);
  v29 = *a4;
  v21 = (char *)(*a4 + 8);
  if ( (_WORD)v20 )
  {
    do
    {
      v22 = *(_BYTE *)v9;
      if ( !*(_BYTE *)v9 || a2 && v22 == 4 )
      {
        v24 = v21;
        if ( v22 )
          v25 = (unsigned __int8 *)&v9[2 * *((unsigned __int8 *)v9 + 13) + 10];
        else
          v25 = (unsigned __int8 *)(v9 + 4);
        *(_QWORD *)v21 = *(_QWORD *)v9;
        v26 = v21 + 12;
        memmove(v26, a3, 4LL * a3[1] + 8);
        v27 = &v26[(unsigned __int8)(4 * (a3[1] + 2))];
        memmove(v27, v25, 4LL * v25[1] + 8);
        v23 = v25[1];
        v28 = a3[1];
        *v24 = 4;
        *((_WORD *)v24 + 1) = 4 * (v23 + v28 + 7);
        *((_WORD *)v24 + 4) = 1;
        v21 = &v27[4 * v23 + 8];
        LOWORD(v23) = v9[1];
      }
      else
      {
        memmove(v21, v9, v9[1]);
        v23 = v9[1];
        v21 += v23;
      }
      ++v19;
      v9 = (unsigned __int16 *)((char *)v9 + (unsigned __int16)v23);
      v20 = *(unsigned __int16 *)(a1 + 4);
    }
    while ( v19 < v20 );
    v18 = v29;
  }
  *(_WORD *)(v18 + 4) = v20;
  return 0LL;
}
