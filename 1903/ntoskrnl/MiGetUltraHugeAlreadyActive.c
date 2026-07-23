/*
 * XREFs of MiGetUltraHugeAlreadyActive @ 0x14018EED0
 * Callers:
 *     MiGetHugePageToZero @ 0x14018ED40 (MiGetHugePageToZero.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     RtlFindClearBitsAndSet @ 0x140085350 (RtlFindClearBitsAndSet.c)
 *     MiDecrementHugeContext @ 0x14018EFF0 (MiDecrementHugeContext.c)
 */

unsigned int **__fastcall MiGetUltraHugeAlreadyActive(__int64 a1, __int64 a2, int a3)
{
  unsigned int **p_Buffer; // rdi
  __int64 v5; // r14
  ULONG ClearBitsAndSet; // eax
  __int16 v7; // r15
  unsigned int *v8; // rbx
  _RTL_BITMAP **v10; // r14
  _RTL_BITMAP *i; // rsi
  ULONG v12; // eax
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  int v14; // [rsp+60h] [rbp+18h] BYREF

  v14 = a3;
  v13 = a1;
  p_Buffer = *(unsigned int ***)(a2 + 216);
  v5 = *(_QWORD *)(a2 + 224);
  if ( p_Buffer )
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)(p_Buffer + 11), 1u, 0);
    v7 = ClearBitsAndSet;
    if ( ClearBitsAndSet != -1 )
    {
      v8 = p_Buffer[21];
      v14 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v8 + 6, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v14);
        while ( *((__int64 *)v8 + 3) < 0 );
      }
      if ( !*((_BYTE *)p_Buffer + 69) )
        goto LABEL_6;
      _InterlockedAnd64((volatile signed __int64 *)v8 + 3, 0x7FFFFFFFFFFFFFFFuLL);
    }
    MiDecrementHugeContext(p_Buffer);
    *(_QWORD *)(a2 + 216) = 0LL;
  }
  v10 = (_RTL_BITMAP **)(v5 + 32);
  for ( i = *v10; ; i = *(_RTL_BITMAP **)&i->SizeOfBitMap )
  {
    if ( i == (_RTL_BITMAP *)v10 )
      return 0LL;
    p_Buffer = &i[-5].Buffer;
    v12 = RtlFindClearBitsAndSet(i + 1, 1u, 0);
    v7 = v12;
    if ( v12 != -1 )
      break;
LABEL_16:
    ;
  }
  v8 = p_Buffer[21];
  LODWORD(v13) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)v8 + 6, 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v13);
    while ( *((__int64 *)v8 + 3) < 0 );
  }
  if ( *((_BYTE *)p_Buffer + 69) )
  {
    _InterlockedAnd64((volatile signed __int64 *)v8 + 3, 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_16;
  }
  ++*((_DWORD *)p_Buffer + 47);
  *(_QWORD *)(a2 + 216) = p_Buffer;
LABEL_6:
  _InterlockedAnd64((volatile signed __int64 *)v8 + 3, 0x7FFFFFFFFFFFFFFFuLL);
  *(_WORD *)(a2 + 208) = v7;
  return p_Buffer;
}
