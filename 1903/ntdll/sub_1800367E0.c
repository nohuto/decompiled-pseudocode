/*
 * XREFs of sub_1800367E0 @ 0x1800367E0
 * Callers:
 *     sub_180036AE0 @ 0x180036AE0 (sub_180036AE0.c)
 *     sub_18004F1D0 @ 0x18004F1D0 (sub_18004F1D0.c)
 * Callees:
 *     TpSetTimerEx @ 0x1800323F0 (TpSetTimerEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     sub_180036634 @ 0x180036634 (sub_180036634.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_180047490 @ 0x180047490 (sub_180047490.c)
 *     sub_180107238 @ 0x180107238 (sub_180107238.c)
 */

__int64 __fastcall sub_1800367E0(__int64 a1, __int64 a2, char a3, int a4, _BYTE *a5)
{
  _BYTE *v5; // r13
  __int64 v10; // rdi
  __int64 v11; // rcx
  unsigned int v12; // r14d
  __int64 v13; // rcx
  __int64 v14; // rbp
  __int64 v15; // rdx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rbp
  __int64 v19; // rcx
  char v21; // cl
  char v22; // dl
  __int64 v23; // rcx
  char v24; // al
  char v25; // [rsp+78h] [rbp+10h] BYREF

  v5 = a5;
  while ( 1 )
  {
    v10 = 0LL;
    v11 = (a2 - (a2 & *(_QWORD *)a1)) >> 5;
    v12 = (unsigned __int16)~*(_WORD *)(a2 + 28);
    if ( (unsigned int)v11 + *(unsigned __int8 *)(a2 + 31) < 0x100 )
    {
      v10 = a2 + 32LL * *(unsigned __int8 *)(a2 + 31);
      if ( (*(_BYTE *)(v10 + 24) & 1) != 0 )
        v10 = 0LL;
    }
    if ( (unsigned int)v11 > *(unsigned __int8 *)(a1 + 10) )
    {
      v13 = a2 - 32;
      if ( (*(_BYTE *)(a2 - 32 + 24) & 2) == 0 )
        v13 += -32LL * *(unsigned __int8 *)(v13 + 31);
      v14 = 0LL;
      if ( (*(_BYTE *)(v13 + 24) & 1) == 0 )
        v14 = v13;
      if ( v14 )
      {
        sub_180036634(a1, v14);
        *(_BYTE *)(v14 + 31) += *(_BYTE *)(a2 + 31);
        v12 += (unsigned __int16)~*(_WORD *)(v14 + 28);
        *(_WORD *)(v14 + 28) = ~(_WORD)v12;
        *(_BYTE *)(a2 + 24) &= (*(_BYTE *)(a2 + 31) <= 1u) - 4;
        a2 = v14;
        *(_BYTE *)(32LL * ((unsigned int)*(unsigned __int8 *)(v14 + 31) - 1) + v14 + 31) = *(_BYTE *)(v14 + 31) - 1;
      }
    }
    *(_BYTE *)(a2 + 24) |= 0x11u;
    if ( v10 )
    {
      sub_180036634(a1, v10);
      v21 = *(_BYTE *)(a2 + 31);
      if ( v21 != 1 )
      {
        *(_BYTE *)(a2 + 32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 31) - 1) + 24) &= ~1u;
        v21 = *(_BYTE *)(a2 + 31);
      }
      *(_BYTE *)(a2 + 31) = v21 + *(_BYTE *)(v10 + 31);
      v12 += (unsigned __int16)~*(_WORD *)(v10 + 28);
      *(_WORD *)(a2 + 28) = ~(_WORD)v12;
      *(_BYTE *)(v10 + 24) &= ~2u;
      v22 = *(_BYTE *)(a2 + 31) - 1;
      v23 = 32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 31) - 1);
      *(_BYTE *)(v23 + a2 + 24) |= 1u;
      *(_BYTE *)(v23 + a2 + 31) = v22;
    }
    if ( !v12 )
      break;
    if ( !a4 && (*(_BYTE *)(a1 + 13) & 8) == 0 )
    {
      v15 = *(__int16 *)(a1 + 22);
      v16 = *(_QWORD *)(v15 + a1 + 8) >> *(_BYTE *)(a1 + 11);
      if ( v16 <= 8 )
        v16 = 8LL;
      v17 = *(_QWORD *)(v15 + a1 + 8) >> *(_BYTE *)(a1 + 12);
      if ( v17 <= 8 )
        v17 = 8LL;
      v18 = v12 + *(_QWORD *)(v15 + a1 + 16) + *(_QWORD *)(v15 + a1 + 24);
      if ( v18 > v16 )
      {
        if ( (dword_180163534 & 0x40) == 0 || byte_180165408 || !dword_180166364 )
          goto LABEL_33;
        if ( !_InterlockedCompareExchange(&dword_180166360, 1, 0) )
        {
          TpSetTimerEx(Timer, &DueTime, 0, 0x1388u);
          if ( (byte_180166058 & 8) != 0 )
            sub_180107238();
        }
      }
      if ( v18 <= v17 )
        break;
    }
LABEL_33:
    if ( (a3 & 1) == 0 )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
    sub_180047490(a1, 0, (__int64)&v25);
    if ( (a3 & 1) == 0 )
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
    v24 = *(_BYTE *)(a2 + 24) & 0xEF;
    *v5 = -1;
    *(_BYTE *)(a2 + 24) = v24;
  }
  v19 = 32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 31) - 1);
  *(_BYTE *)(v19 + a2 + 24) &= ~1u;
  *(_BYTE *)(a2 + 24) &= 0xEEu;
  return a2;
}
