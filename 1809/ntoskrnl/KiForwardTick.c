/*
 * XREFs of KiForwardTick @ 0x140061720
 * Callers:
 *     KeClockInterruptNotify @ 0x140060C40 (KeClockInterruptNotify.c)
 * Callees:
 *     KeOrAffinityEx @ 0x1400DC970 (KeOrAffinityEx.c)
 *     KeCountSetBitsAffinityEx @ 0x1400ED9C0 (KeCountSetBitsAffinityEx.c)
 *     KeCopyAffinityEx @ 0x1400EDB30 (KeCopyAffinityEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall KiForwardTick(__int64 a1, unsigned int a2, int a3, char a4, char *a5)
{
  unsigned int v6; // r13d
  int v7; // r15d
  __int64 *v8; // rcx
  __int64 v9; // rdi
  unsigned __int16 v10; // dx
  __int64 v11; // r8
  unsigned __int16 v12; // dx
  __int64 v13; // rdx
  __int64 *v14; // rcx
  unsigned int v15; // r9d
  __int64 v16; // rax
  unsigned __int16 v17; // r8
  __int16 v18; // dx
  unsigned __int16 i; // ax
  __int64 v20; // rcx
  __int16 *v21; // rdx
  __int64 v22; // rcx
  char v23; // r15
  unsigned __int16 v24; // di
  unsigned int v25; // edx
  __int64 v26; // r9
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
  __int64 v37; // rbp
  unsigned int v38; // r8d
  __int64 result; // rax
  __int64 *v40; // rdx
  __int64 v41; // rdi
  unsigned __int16 v42; // cx
  __int64 v43; // rax
  __int64 v44; // rcx
  unsigned __int64 v45; // rax
  char v46; // cl
  int v50; // [rsp+40h] [rbp-248h] BYREF
  _DWORD v51[43]; // [rsp+44h] [rbp-244h] BYREF
  char v52; // [rsp+F0h] [rbp-198h] BYREF
  char v53; // [rsp+1A0h] [rbp-E8h] BYREF

  v6 = 1;
  v7 = a3;
  if ( PoSkipTickMode == 2 )
  {
    v37 = a1;
    v41 = 0LL;
    KeCopyAffinityEx(a5, KeActiveProcessors);
    goto LABEL_49;
  }
  v50 = 1310721;
  memset(v51, 0, 0xA4uLL);
  if ( KeNumberNodes )
  {
    v8 = KeNodeBlock;
    v9 = (unsigned __int16)KeNumberNodes;
    do
    {
      v10 = *(_WORD *)(*v8 + 144);
      v11 = *(_QWORD *)(*v8 + 64);
      if ( (unsigned __int16)v50 <= v10 )
        LOWORD(v50) = v10 + 1;
      ++v8;
      *(_QWORD *)&v51[2 * v10 + 1] |= v11;
      --v9;
    }
    while ( v9 );
  }
  v12 = 0;
  if ( !(_WORD)v50 )
    goto LABEL_55;
  while ( !*(_QWORD *)&v51[2 * v12 + 1] )
  {
    if ( ++v12 >= (unsigned __int16)v50 )
      goto LABEL_55;
  }
  v13 = (unsigned __int16)v50;
  v14 = (__int64 *)&v51[1];
  v15 = (unsigned __int16)v50;
  do
  {
    v16 = *v14++;
    *(__int64 *)((char *)v14 + a5 - (char *)&v51[1]) = ~v16;
    --v13;
  }
  while ( v13 );
  v17 = HIWORD(v50);
  v18 = HIWORD(v50);
  if ( v15 < HIWORD(v50) )
    memset(&a5[8 * v15 + 8], 0xFFu, 8LL * (HIWORD(v50) - v15));
  *((_DWORD *)a5 + 1) = 0;
  *(_WORD *)a5 = v17;
  *((_WORD *)a5 + 1) = v17;
  if ( v17 >= LOWORD(KeActiveProcessors[0]) )
    v18 = KeActiveProcessors[0];
  *(_WORD *)a5 = v18;
  for ( i = 0; i < *(_WORD *)a5; *(_QWORD *)v21 &= *(_QWORD *)&KeActiveProcessors[2 * v20 + 2] )
  {
    v20 = i;
    v21 = (__int16 *)&a5[8 * i++ + 8];
  }
  if ( a5 != &v52 )
  {
    *((_WORD *)a5 + 1) = 20;
    *((_DWORD *)a5 + 1) = 0;
    if ( i < 0x14u )
    {
      do
      {
        v22 = i++;
        *(_QWORD *)&a5[8 * v22 + 8] = 0LL;
      }
      while ( i < *((_WORD *)a5 + 1) );
    }
  }
  if ( a4 )
    KeOrAffinityEx(a5, &KiGroupSchedulingOverQuotaMask, a5);
  if ( !KiSerializeTimerExpiration )
  {
    v23 = KiLastForwardedHand;
    v50 = 1310721;
    v24 = 0;
    memset(v51, 0, 0xA4uLL);
    do
    {
      LOBYTE(v25) = v23 - 1;
      v26 = qword_1405434C8[2 * v24];
      do
      {
        v25 = (unsigned __int8)(v25 + 1);
        v27 = *(_QWORD *)(((unsigned __int64)v25 << 6) + v26);
        if ( (unsigned __int16)v50 <= v24 )
          LOWORD(v50) = v24 + 1;
        *(_QWORD *)&v51[2 * v24 + 1] |= v27;
      }
      while ( v25 != (unsigned __int8)a3 );
      ++v24;
    }
    while ( v24 < (unsigned __int16)KiActiveGroups );
    LOWORD(v28) = *(_WORD *)a5;
    if ( *(_WORD *)a5 < (unsigned __int16)v50 )
    {
      v29 = &v50;
    }
    else
    {
      v29 = (int *)a5;
      LOWORD(v28) = v50;
    }
    v30 = 0;
    *((_WORD *)a5 + 1) = 20;
    *(_WORD *)a5 = *(_WORD *)v29;
    if ( (_WORD)v28 )
    {
      v30 = v28;
      v31 = a5 + 8;
      v28 = (unsigned __int16)v28;
      do
      {
        *v31 |= *(_QWORD *)((char *)v31 + (char *)&v50 - a5);
        ++v31;
        --v28;
      }
      while ( v28 );
    }
    for ( ; v30 < *(_WORD *)v29; *(_QWORD *)&a5[8 * v43 + 8] = *(_QWORD *)&v29[2 * v43 + 2] )
      v43 = v30++;
    if ( a5 != &v53 )
    {
      for ( *((_DWORD *)a5 + 1) = 0; v30 < *((_WORD *)a5 + 1); *(_QWORD *)&a5[8 * v32 + 8] = 0LL )
        v32 = v30++;
    }
    v7 = a3;
  }
  v33 = *(_WORD *)a5;
  v34 = KeActiveProcessors[0];
  if ( *(_WORD *)a5 < LOWORD(KeActiveProcessors[0]) )
  {
    v35 = KeActiveProcessors;
    v34 = *(_WORD *)a5;
  }
  else
  {
    v35 = (int *)a5;
  }
  v36 = 0;
  if ( !v34 )
  {
LABEL_58:
    if ( v36 < *(_WORD *)v35 )
    {
      while ( !*(_QWORD *)&v35[2 * v36 + 2] )
      {
        if ( ++v36 >= *(_WORD *)v35 )
          goto LABEL_55;
      }
      goto LABEL_44;
    }
LABEL_55:
    v37 = a1;
LABEL_56:
    v41 = 0LL;
    KeCopyAffinityEx(a5, KeActiveProcessors);
    goto LABEL_49;
  }
  while ( *(_QWORD *)&a5[8 * v36 + 8] == *(_QWORD *)&KeActiveProcessors[2 * v36 + 2] )
  {
    if ( ++v36 >= v34 )
      goto LABEL_58;
  }
LABEL_44:
  v37 = a1;
  v38 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)];
  result = v33;
  if ( v33 > v38 >> 6 )
  {
    v40 = (__int64 *)&a5[8 * (v38 >> 6) + 8];
    result = *v40 & ~(1LL << (v38 & 0x3F));
    *v40 = result;
  }
  if ( PoSkipTickMode )
  {
    result = KeCountSetBitsAffinityEx(a5);
    if ( (unsigned int)result > 3 )
      goto LABEL_56;
  }
  v6 = 0;
  v41 = (__int64)a5;
  v42 = 0;
  if ( !*(_WORD *)a5 )
    goto LABEL_50;
  while ( 1 )
  {
    result = v42;
    if ( *(_QWORD *)&a5[8 * v42 + 8] )
      break;
    if ( ++v42 >= *(_WORD *)a5 )
      goto LABEL_50;
  }
LABEL_49:
  result = HalRequestClockInterrupt(v6, v41);
  KiLastForwardedHand = v7;
LABEL_50:
  if ( (_BYTE)KdDebuggerEnabled )
  {
    v44 = (unsigned int)KiPollSlotNext;
    result = (unsigned int)(KiPollSlotNext + 1);
    KiPollSlot = KiPollSlotNext;
    KiPollSlotNext = result;
    if ( (unsigned int)result >= a2 )
      KiPollSlotNext = 0;
    if ( (_DWORD)v44 != *(_DWORD *)(v37 + 36) )
    {
      v45 = (unsigned int)KiProcessorIndexToNumberMappingTable[v44];
      v46 = v45 & 0x3F;
      result = v45 >> 6;
      if ( ((*(_QWORD *)&a5[8 * result + 8] >> v46) & 1) == 0 )
        KiPollSlot = *(_DWORD *)(v37 + 36);
    }
  }
  return result;
}
