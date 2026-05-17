/*
 * XREFs of RtlUpcaseUnicodeToCustomCPN @ 0x1800E6960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUpcaseUnicodeToCustomCPN(
        __int64 a1,
        _BYTE *a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned __int16 *a5,
        unsigned int a6)
{
  unsigned int v6; // r11d
  unsigned int v7; // ebx
  _BYTE *v8; // r10
  unsigned int v9; // eax
  __int64 v10; // rsi
  unsigned __int16 *v11; // r9
  __int64 v12; // r14
  __int64 v13; // rbp
  unsigned __int16 v14; // r8
  __int64 v15; // r14
  int v16; // esi
  __int64 v17; // r12
  __int64 v18; // r13
  unsigned __int16 *v19; // rbp
  __int64 v20; // rax
  unsigned __int16 v21; // dx
  unsigned __int64 v22; // rax
  unsigned __int16 v23; // r8
  __int16 v24; // dx
  unsigned int v25; // eax
  int v27; // [rsp+30h] [rbp+8h]

  v6 = a6 >> 1;
  v7 = a3;
  v8 = a2;
  if ( *(_WORD *)(a1 + 12) )
  {
    v15 = *(_QWORD *)(a1 + 56);
    v16 = (int)a2;
    v17 = *(_QWORD *)(a1 + 40);
    v27 = (int)a2;
    if ( v6 )
    {
      v18 = Nls844UnicodeUpcaseTable;
      v19 = a5;
      do
      {
        if ( !v7 )
          break;
        v20 = *v19++;
        v21 = *(_WORD *)(v17 + 2 * v20);
        v22 = (unsigned __int64)v21 >> 8;
        if ( *(_WORD *)(v15 + 2 * v22) )
          v23 = *(_WORD *)(v15 + 2 * ((unsigned __int8)v21 + (unsigned __int64)*(unsigned __int16 *)(v15 + 2 * v22)));
        else
          v23 = *(_WORD *)(*(_QWORD *)(a1 + 32) + 2LL * (unsigned __int8)v21);
        if ( v23 >= 0x61u )
        {
          if ( v23 > 0x7Au )
            v23 += *(_WORD *)(v18
                            + 2LL
                            * ((v23 & 0xF)
                             + (unsigned int)*(unsigned __int16 *)(v18
                                                                 + 2LL
                                                                 * (((v23 >> 4) & 0xF)
                                                                  + (unsigned int)*(unsigned __int16 *)(v18 + 2 * ((unsigned __int64)v23 >> 8))))));
          else
            v23 -= 32;
        }
        v24 = *(_WORD *)(v17 + 2LL * v23);
        if ( HIBYTE(v24) )
        {
          v25 = v7--;
          if ( v25 < 2 )
            break;
          *v8++ = HIBYTE(v24);
        }
        *v8 = v24;
        --v7;
        ++v8;
        --v6;
      }
      while ( v6 );
      v16 = v27;
    }
    if ( a4 )
      *a4 = (_DWORD)v8 - v16;
  }
  else
  {
    v9 = a3;
    if ( v6 < a3 )
      v9 = a6 >> 1;
    if ( a4 )
      *a4 = v9;
    v10 = *(_QWORD *)(a1 + 40);
    if ( v9 )
    {
      v11 = a5;
      v12 = Nls844UnicodeUpcaseTable;
      v13 = v9;
      do
      {
        v14 = *(_WORD *)(*(_QWORD *)(a1 + 32) + 2LL * *(unsigned __int8 *)(*v11 + v10));
        if ( v14 >= 0x61u )
        {
          if ( v14 > 0x7Au )
            v14 += *(_WORD *)(v12
                            + 2LL
                            * ((v14 & 0xF)
                             + (unsigned int)*(unsigned __int16 *)(v12
                                                                 + 2LL
                                                                 * (((v14 >> 4) & 0xF)
                                                                  + (unsigned int)*(unsigned __int16 *)(v12 + 2 * ((unsigned __int64)v14 >> 8))))));
          else
            v14 -= 32;
        }
        ++v11;
        *v8++ = *(_BYTE *)(v14 + v10);
        --v13;
      }
      while ( v13 );
    }
  }
  return v7 < v6 ? 0x80000005 : 0;
}
