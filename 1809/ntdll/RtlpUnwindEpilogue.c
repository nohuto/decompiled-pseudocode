/*
 * XREFs of RtlpUnwindEpilogue @ 0x18009F448
 * Callers:
 *     RtlpWalkFrameChain @ 0x1800038B0 (RtlpWalkFrameChain.c)
 *     RtlDispatchException @ 0x1800048E0 (RtlDispatchException.c)
 *     RtlVirtualUnwind @ 0x1800053B0 (RtlVirtualUnwind.c)
 *     RtlUnwindEx @ 0x180005BF0 (RtlUnwindEx.c)
 *     RtlRaiseException @ 0x1800087D0 (RtlRaiseException.c)
 * Callees:
 *     RtlpPopUserShadowStack @ 0x180003738 (RtlpPopUserShadowStack.c)
 *     RtlpUnwindOpSlots @ 0x18009F66C (RtlpUnwindOpSlots.c)
 */

__int64 __fastcall RtlpUnwindEpilogue(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _BYTE *a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7,
        _QWORD *a8)
{
  int v10; // esi
  __int64 v11; // rbx
  _BYTE *v12; // rbp
  unsigned int v13; // edi
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v17; // r8d
  _WORD *v18; // rsi
  __int64 v19; // r14
  _QWORD *v20; // rcx
  _QWORD *v21; // rcx
  _QWORD *v22; // rcx
  _QWORD *v23; // r8
  unsigned __int64 v24; // rax

  v10 = 0;
  while ( 1 )
  {
    v11 = 0LL;
    v12 = (_BYTE *)(a1 + *((unsigned int *)a4 + 2));
    v13 = (unsigned __int8)v12[2];
    if ( v12[2] )
    {
      do
      {
        v14 = *(unsigned __int16 *)&v12[2 * v11 + 4];
        if ( (v14 & 0xF00) == 0 )
          break;
        if ( (BYTE1(v14) & 0xF) == 0xA )
          break;
        v11 = (unsigned int)RtlpUnwindOpSlots(v14, a2) + (unsigned int)v11;
      }
      while ( (unsigned int)v11 < v13 );
      if ( (unsigned int)v11 < v13 )
        break;
    }
    if ( (*v12 & 0x20) == 0 )
      break;
    if ( (unsigned int)++v10 > 0x20 )
      return 3221225727LL;
    v15 = v13 + 1;
    if ( (v13 & 1) == 0 )
      v15 = v13;
    a4 = &v12[2 * v15 + 4];
  }
  v17 = 0;
  if ( (unsigned int)v11 >= v13 )
    goto LABEL_23;
  v18 = &v12[2 * v11 + 4];
  while ( 1 )
  {
    v19 = (unsigned __int16)HIBYTE(*v18) >> 4;
    if ( (*v18 & 0xF00) != 0 )
      break;
    if ( v17 >= a3 )
    {
      v20 = *(_QWORD **)(a5 + 152);
      if ( a7 && ((unsigned __int64)v20 < *a7 || (unsigned __int64)v20 > *a8 - 8LL) )
        return 3221225512LL;
      *(_QWORD *)(a5 + 152) = v20 + 1;
      *(_QWORD *)(a5 + 8 * v19 + 120) = *v20;
      if ( a6 )
        *(_QWORD *)(a6 + 8 * v19 + 128) = v20;
    }
    v11 = (unsigned int)(v11 + 1);
    ++v18;
    v17 += 2 - ((unsigned int)v19 < 8);
    if ( (unsigned int)v11 >= v13 )
      goto LABEL_23;
  }
  if ( (unsigned int)v11 >= v13 )
    goto LABEL_23;
  if ( (HIBYTE(*v18) & 0xF) == 2 && (unsigned __int16)HIBYTE(*v18) < 0x10u )
  {
    if ( v17 >= a3 )
      *(_QWORD *)(a5 + 152) += 8LL;
    v11 = (unsigned int)(v11 + 1);
  }
  if ( (unsigned int)v11 >= v13 || (HIBYTE(*(_WORD *)&v12[2 * v11 + 4]) & 0xF) != 0xA )
  {
LABEL_23:
    v21 = *(_QWORD **)(a5 + 152);
    if ( !a7 || (unsigned __int64)v21 >= *a7 && (unsigned __int64)v21 <= *a8 - 8LL )
    {
      *(_QWORD *)(a5 + 248) = *v21;
      *(_QWORD *)(a5 + 152) = v21 + 1;
      RtlpPopUserShadowStack(a5);
      return 0LL;
    }
    return 3221225512LL;
  }
  v22 = *(_QWORD **)(a5 + 152);
  v23 = v22 + 3;
  if ( a7 )
  {
    if ( (unsigned __int64)v22 < *a7 )
      return 3221225512LL;
    v24 = *a8 - 8LL;
    if ( (unsigned __int64)v22 > v24 || (unsigned __int64)v23 < *a7 || (unsigned __int64)v23 > v24 )
      return 3221225512LL;
  }
  *(_QWORD *)(a5 + 248) = *v22;
  *(_QWORD *)(a5 + 152) = *v23;
  return 0LL;
}
