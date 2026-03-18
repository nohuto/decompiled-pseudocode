/*
 * XREFs of KiForwardTick @ 0x140036140
 * Callers:
 *     KeClockInterruptNotify @ 0x1400348F0 (KeClockInterruptNotify.c)
 * Callees:
 *     KeCountSetBitsAffinityEx @ 0x140098BB0 (KeCountSetBitsAffinityEx.c)
 *     KeCopyAffinityEx @ 0x14009A190 (KeCopyAffinityEx.c)
 *     KeOrAffinityEx @ 0x1400FFF10 (KeOrAffinityEx.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall KiForwardTick(__int64 a1, unsigned int a2, __int64 a3, char a4, unsigned __int16 *a5)
{
  __int64 v5; // r15
  unsigned int v7; // r14d
  __int64 *v8; // rcx
  __int64 v9; // rdi
  unsigned __int16 v10; // dx
  __int64 v11; // r8
  unsigned __int16 v12; // cx
  __int64 v13; // rdi
  __int64 *v14; // rdx
  unsigned int v15; // ecx
  __int64 v16; // rax
  unsigned __int16 v17; // r15
  unsigned __int16 v18; // r14
  unsigned __int16 i; // ax
  __int64 v20; // rcx
  __int16 *v21; // rdx
  __int64 v22; // rcx
  char v23; // r15
  unsigned __int16 v24; // di
  unsigned int v25; // edx
  __int64 v26; // r10
  __int64 v27; // rcx
  __int64 v28; // rdi
  int *v29; // r9
  unsigned __int16 v30; // dx
  _QWORD *v31; // rcx
  __int64 v32; // rax
  unsigned __int16 v33; // di
  unsigned __int16 v34; // dx
  int *v35; // r9
  unsigned __int16 v36; // r8
  unsigned int v37; // r8d
  __int64 result; // rax
  __int64 *v39; // rdx
  __int64 v40; // rdi
  unsigned __int16 v41; // cx
  __int64 v42; // rax
  __int64 v43; // rcx
  unsigned __int64 v44; // rax
  char v45; // cl
  int v49; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD v50[43]; // [rsp+4Ch] [rbp-BCh] BYREF
  _BYTE v51[168]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v52[168]; // [rsp+1A8h] [rbp+A0h] BYREF

  v5 = a1;
  memset(&v50[1], 0, 0xA0uLL);
  v7 = 1;
  if ( PoSkipTickMode == 2 )
  {
    v40 = 0LL;
    KeCopyAffinityEx(a5, KeActiveProcessors);
    goto LABEL_48;
  }
  v49 = 1310721;
  memset(v50, 0, 0xA4uLL);
  if ( KeNumberNodes )
  {
    v8 = KeNodeBlock;
    v9 = (unsigned __int16)KeNumberNodes;
    do
    {
      v10 = *(_WORD *)(*v8 + 144);
      v11 = *(_QWORD *)(*v8 + 64);
      if ( (unsigned __int16)v49 <= v10 )
        LOWORD(v49) = v10 + 1;
      ++v8;
      *(_QWORD *)&v50[2 * v10 + 1] |= v11;
      --v9;
    }
    while ( v9 );
  }
  v12 = 0;
  if ( !(_WORD)v49 )
    goto LABEL_54;
  while ( !*(_QWORD *)&v50[2 * v12 + 1] )
  {
    if ( ++v12 >= (unsigned __int16)v49 )
      goto LABEL_54;
  }
  v13 = (unsigned __int16)v49;
  v14 = (__int64 *)&v50[1];
  v15 = (unsigned __int16)v49;
  do
  {
    v16 = *v14++;
    *(__int64 *)((char *)v14 + (char *)a5 - (char *)&v50[1]) = ~v16;
    --v13;
  }
  while ( v13 );
  v17 = HIWORD(v49);
  v18 = HIWORD(v49);
  if ( v15 < HIWORD(v49) )
    memset(&a5[4 * v15 + 4], 0xFFu, 8LL * (HIWORD(v49) - v15));
  *((_DWORD *)a5 + 1) = 0;
  *a5 = v17;
  a5[1] = v17;
  memset(v51, 0, sizeof(v51));
  if ( v17 >= LOWORD(KeActiveProcessors[0]) )
    v18 = KeActiveProcessors[0];
  *a5 = v18;
  for ( i = 0; i < *a5; *(_QWORD *)v21 &= *(_QWORD *)&KeActiveProcessors[2 * v20 + 2] )
  {
    v20 = i;
    v21 = (__int16 *)&a5[4 * i++ + 4];
  }
  if ( a5 != (unsigned __int16 *)v51 )
  {
    *((_DWORD *)a5 + 1) = 0;
    for ( a5[1] = 20; i < a5[1]; *(_QWORD *)&a5[4 * v22 + 4] = 0LL )
      v22 = i++;
  }
  if ( a4 )
    KeOrAffinityEx(a5, &KiGroupSchedulingOverQuotaMask, a5);
  if ( !KiSerializeTimerExpiration )
  {
    v23 = KiLastForwardedHand;
    v49 = 1310721;
    v24 = 0;
    memset(v50, 0, 0xA4uLL);
    do
    {
      LOBYTE(v25) = v23 - 1;
      v26 = qword_140573688[2 * v24];
      do
      {
        v25 = (unsigned __int8)(v25 + 1);
        v27 = *(_QWORD *)(((unsigned __int64)v25 << 6) + v26);
        if ( (unsigned __int16)v49 <= v24 )
          LOWORD(v49) = v24 + 1;
        *(_QWORD *)&v50[2 * v24 + 1] |= v27;
      }
      while ( v25 != (unsigned __int8)a3 );
      ++v24;
    }
    while ( v24 < (unsigned __int16)KiActiveGroups );
    memset(v52, 0, sizeof(v52));
    LOWORD(v28) = *a5;
    if ( *a5 < (unsigned __int16)v49 )
    {
      v29 = &v49;
    }
    else
    {
      v29 = (int *)a5;
      LOWORD(v28) = v49;
    }
    v30 = 0;
    a5[1] = 20;
    *a5 = *(_WORD *)v29;
    if ( (_WORD)v28 )
    {
      v30 = v28;
      v31 = a5 + 4;
      v28 = (unsigned __int16)v28;
      do
      {
        *v31 |= *(_QWORD *)((char *)v31 + (char *)&v49 - (char *)a5);
        ++v31;
        --v28;
      }
      while ( v28 );
    }
    for ( ; v30 < *(_WORD *)v29; *(_QWORD *)&a5[4 * v42 + 4] = *(_QWORD *)&v29[2 * v42 + 2] )
      v42 = v30++;
    if ( a5 != (unsigned __int16 *)v52 )
    {
      for ( *((_DWORD *)a5 + 1) = 0; v30 < a5[1]; *(_QWORD *)&a5[4 * v32 + 4] = 0LL )
        v32 = v30++;
    }
  }
  v33 = *a5;
  v34 = KeActiveProcessors[0];
  if ( *a5 < LOWORD(KeActiveProcessors[0]) )
  {
    v35 = KeActiveProcessors;
    v34 = *a5;
  }
  else
  {
    v35 = (int *)a5;
  }
  v36 = 0;
  if ( v34 )
  {
    while ( *(_QWORD *)&a5[4 * v36 + 4] == *(_QWORD *)&KeActiveProcessors[2 * v36 + 2] )
    {
      if ( ++v36 >= v34 )
        goto LABEL_56;
    }
  }
  else
  {
LABEL_56:
    if ( v36 >= *(_WORD *)v35 )
    {
LABEL_57:
      v5 = a1;
LABEL_58:
      v7 = 1;
LABEL_54:
      v40 = 0LL;
      KeCopyAffinityEx(a5, KeActiveProcessors);
      goto LABEL_48;
    }
    while ( !*(_QWORD *)&v35[2 * v36 + 2] )
    {
      if ( ++v36 >= *(_WORD *)v35 )
        goto LABEL_57;
    }
  }
  v5 = a1;
  v37 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)];
  result = v33;
  if ( v33 > v37 >> 6 )
  {
    v39 = (__int64 *)&a5[4 * (v37 >> 6) + 4];
    result = *v39 & ~(1LL << (v37 & 0x3F));
    *v39 = result;
  }
  if ( PoSkipTickMode )
  {
    result = KeCountSetBitsAffinityEx(a5);
    if ( (unsigned int)result > 3 )
      goto LABEL_58;
  }
  v7 = 0;
  v40 = (__int64)a5;
  v41 = 0;
  if ( !*a5 )
    goto LABEL_49;
  while ( 1 )
  {
    result = v41;
    if ( *(_QWORD *)&a5[4 * v41 + 4] )
      break;
    if ( ++v41 >= *a5 )
      goto LABEL_49;
  }
LABEL_48:
  HalRequestClockInterrupt(v7, v40);
  result = a3;
  KiLastForwardedHand = a3;
LABEL_49:
  if ( (_BYTE)KdDebuggerEnabled )
  {
    v43 = (unsigned int)KiPollSlotNext;
    result = (unsigned int)(KiPollSlotNext + 1);
    KiPollSlot = KiPollSlotNext;
    KiPollSlotNext = result;
    if ( (unsigned int)result >= a2 )
      KiPollSlotNext = 0;
    if ( (_DWORD)v43 != *(_DWORD *)(v5 + 36) )
    {
      v44 = (unsigned int)KiProcessorIndexToNumberMappingTable[v43];
      v45 = v44 & 0x3F;
      result = v44 >> 6;
      if ( ((*(_QWORD *)&a5[4 * result + 4] >> v45) & 1) == 0 )
        KiPollSlot = *(_DWORD *)(v5 + 36);
    }
  }
  return result;
}
