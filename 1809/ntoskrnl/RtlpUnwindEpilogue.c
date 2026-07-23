/*
 * XREFs of RtlpUnwindEpilogue @ 0x14013A494
 * Callers:
 *     RtlUnwindEx @ 0x14009DE70 (RtlUnwindEx.c)
 *     RtlpWalkFrameChain @ 0x14009EAD0 (RtlpWalkFrameChain.c)
 *     RtlpVirtualUnwind @ 0x1400A05B0 (RtlpVirtualUnwind.c)
 *     RtlDispatchException @ 0x1400A0E80 (RtlDispatchException.c)
 *     RtlVirtualUnwind @ 0x1401377A0 (RtlVirtualUnwind.c)
 * Callees:
 *     RtlpUnwindOpSlots @ 0x14013A64C (RtlpUnwindOpSlots.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpUnwindEpilogue(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        _BYTE *a4,
        __int64 a5,
        __int64 a6,
        unsigned __int64 *a7,
        _QWORD *a8)
{
  unsigned int v9; // r13d
  int v11; // ebp
  _BYTE *v12; // rsi
  unsigned int v13; // edi
  __int64 v14; // rbx
  __int64 v15; // rcx
  unsigned int v16; // r8d
  unsigned __int16 v17; // cx
  __int64 v18; // rbp
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v23; // r9
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // r8

  v9 = a3;
  v11 = 0;
  while ( 1 )
  {
    v12 = (_BYTE *)(a1 + *((unsigned int *)a4 + 2));
    if ( a2 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v12 & 3) != 0 )
      goto LABEL_54;
    v13 = (unsigned __int8)v12[2];
    v14 = 0LL;
    if ( v12[2] )
    {
      do
      {
        v15 = *(unsigned __int16 *)&v12[2 * v14 + 4];
        if ( (v15 & 0xF00) == 0 )
          break;
        if ( (BYTE1(v15) & 0xF) == 0xA )
          break;
        v14 = (unsigned int)RtlpUnwindOpSlots(v15, a2, a3) + (unsigned int)v14;
      }
      while ( (unsigned int)v14 < v13 );
      if ( (unsigned int)v14 < v13 )
        goto LABEL_8;
    }
    if ( (*v12 & 0x20) == 0 )
    {
LABEL_8:
      v16 = 0;
      if ( (unsigned int)v14 >= v13 )
        goto LABEL_18;
      while ( 1 )
      {
        v17 = HIBYTE(*(_WORD *)&v12[2 * v14 + 4]);
        v18 = v17 >> 4;
        if ( (v17 & 0xF) != 0 )
          break;
        if ( v16 >= v9 )
        {
          v19 = *(_QWORD *)(a5 + 152);
          if ( a2 <= 0x7FFFFFFEFFFFLL && (v19 & 3) != 0 )
            goto LABEL_54;
          if ( a7 && (v19 < *a7 || v19 > *a8 - 8LL) )
            return 3221225512LL;
          *(_QWORD *)(a5 + 152) += 8LL;
          *(_QWORD *)(a5 + 8 * v18 + 120) = *(_QWORD *)v19;
          if ( a6 )
            *(_QWORD *)(a6 + 8 * v18 + 128) = v19;
        }
        v14 = (unsigned int)(v14 + 1);
        v16 += 2 - ((unsigned int)v18 < 8);
        if ( (unsigned int)v14 >= v13 )
          goto LABEL_18;
      }
      if ( (v17 & 0xF) == 2 && v17 < 0x10u )
      {
        if ( v16 >= v9 )
          *(_QWORD *)(a5 + 152) += 8LL;
        v14 = (unsigned int)(v14 + 1);
      }
      if ( (unsigned int)v14 < v13 && (HIBYTE(*(_WORD *)&v12[2 * v14 + 4]) & 0xF) == 0xA )
      {
        v24 = *(_QWORD *)(a5 + 152);
        v25 = v24 + 24;
        if ( a2 > 0x7FFFFFFEFFFFLL || (v24 & 3) == 0 )
        {
          if ( a7 && (v24 < *a7 || v24 > *a8 - 8LL) )
            return 3221225512LL;
          if ( a2 > 0x7FFFFFFEFFFFLL || (v25 & 3) == 0 )
          {
            if ( !a7 || v25 >= *a7 && v25 <= *a8 - 8LL )
            {
              *(_QWORD *)(a5 + 248) = *(_QWORD *)v24;
              *(_QWORD *)(a5 + 152) = *(_QWORD *)v25;
              return 0LL;
            }
            return 3221225512LL;
          }
        }
      }
      else
      {
LABEL_18:
        v20 = *(_QWORD *)(a5 + 152);
        if ( a2 > 0x7FFFFFFEFFFFLL || (v20 & 3) == 0 )
        {
          if ( !a7 || v20 >= *a7 && v20 <= *a8 - 8LL )
          {
            v21 = *(_QWORD *)v20;
            *(_QWORD *)(a5 + 152) += 8LL;
            *(_QWORD *)(a5 + 248) = v21;
            return 0LL;
          }
          return 3221225512LL;
        }
      }
LABEL_54:
      ExRaiseDatatypeMisalignment();
    }
    if ( (unsigned int)++v11 > 0x20 )
      return 3221225727LL;
    v23 = v13 + 1;
    if ( (v13 & 1) == 0 )
      v23 = v13;
    a4 = &v12[2 * v23 + 4];
  }
}
