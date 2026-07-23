/*
 * XREFs of MiEncodeProtoFill @ 0x1400939CC
 * Callers:
 *     MiInitializePrototypePtes @ 0x140620030 (MiInitializePrototypePtes.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x14006CA10 (MiLockPageTableInternal.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 */

__int64 __fastcall MiEncodeProtoFill(unsigned __int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r14
  char *AnyMultiplexedVm; // rbp
  unsigned __int8 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // r8d
  bool v13; // zf
  unsigned __int8 v14; // [rsp+50h] [rbp+8h]

  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = 0LL;
  v6 = v4 + 8 * (a2 >> 12);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  v14 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  v8 = v14;
  if ( v4 >= v6 )
    return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v8);
  do
  {
    if ( v5 )
    {
      if ( (v4 & 0xFFF) != 0 )
        goto LABEL_4;
      MiUnlockPageTableInternal(AnyMultiplexedVm, v5);
    }
    v5 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal((__int64)AnyMultiplexedVm, v5, 0);
LABEL_4:
    if ( !MiPteInShadowRange(v4) )
      goto LABEL_5;
    if ( (unsigned int)MiPteHasShadow(v10, v9) )
    {
      v11 = 1;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_5;
      v13 = (a3 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
        goto LABEL_5;
      v13 = (a3 & 1) == 0;
    }
    if ( !v13 )
      v9 |= 0x8000000000000000uLL;
LABEL_5:
    *(_QWORD *)v4 = v9;
    if ( v11 )
      MiWritePteShadow(v4);
    v4 += 8LL;
  }
  while ( v4 < v6 );
  v8 = v14;
  if ( v5 )
    MiUnlockPageTableInternal(AnyMultiplexedVm, v5);
  return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v8);
}
