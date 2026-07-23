/*
 * XREFs of MiGetUltraHugeAlreadyActive @ 0x140185734
 * Callers:
 *     MiGetHugePageToZero @ 0x1401855A4 (MiGetHugePageToZero.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     RtlFindClearBitsAndSet @ 0x1400D9660 (RtlFindClearBitsAndSet.c)
 *     MiDecrementHugeContext @ 0x140185B88 (MiDecrementHugeContext.c)
 */

unsigned int **__fastcall MiGetUltraHugeAlreadyActive(__int64 a1, __int64 a2, int a3)
{
  unsigned int **p_Buffer; // rdi
  __int64 v5; // r14
  ULONG ClearBitsAndSet; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int16 v9; // r15
  unsigned int *v10; // rbx
  _RTL_BITMAP **v12; // r14
  _RTL_BITMAP *i; // rsi
  ULONG v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF
  int v18; // [rsp+60h] [rbp+18h] BYREF

  v18 = a3;
  v17 = a1;
  p_Buffer = *(unsigned int ***)(a2 + 216);
  v5 = *(_QWORD *)(a2 + 224);
  if ( p_Buffer )
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)(p_Buffer + 11), 1u, 0);
    v9 = ClearBitsAndSet;
    if ( ClearBitsAndSet != -1 )
    {
      v10 = p_Buffer[21];
      v18 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v10 + 6, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v18, v7, v8);
        while ( *((__int64 *)v10 + 3) < 0 );
      }
      if ( !*((_BYTE *)p_Buffer + 69) )
        goto LABEL_6;
      _InterlockedAnd64((volatile signed __int64 *)v10 + 3, 0x7FFFFFFFFFFFFFFFuLL);
    }
    MiDecrementHugeContext(p_Buffer);
    *(_QWORD *)(a2 + 216) = 0LL;
  }
  v12 = (_RTL_BITMAP **)(v5 + 32);
  for ( i = *v12; ; i = *(_RTL_BITMAP **)&i->SizeOfBitMap )
  {
    if ( i == (_RTL_BITMAP *)v12 )
      return 0LL;
    p_Buffer = &i[-5].Buffer;
    v14 = RtlFindClearBitsAndSet(i + 1, 1u, 0);
    v9 = v14;
    if ( v14 != -1 )
      break;
LABEL_17:
    ;
  }
  v10 = p_Buffer[21];
  LODWORD(v17) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)v10 + 6, 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v17, v15, v16);
    while ( *((__int64 *)v10 + 3) < 0 );
  }
  if ( *((_BYTE *)p_Buffer + 69) )
  {
    _InterlockedAnd64((volatile signed __int64 *)v10 + 3, 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_17;
  }
  ++*((_DWORD *)p_Buffer + 47);
  *(_QWORD *)(a2 + 216) = p_Buffer;
LABEL_6:
  _InterlockedAnd64((volatile signed __int64 *)v10 + 3, 0x7FFFFFFFFFFFFFFFuLL);
  *(_WORD *)(a2 + 208) = v9;
  return p_Buffer;
}
