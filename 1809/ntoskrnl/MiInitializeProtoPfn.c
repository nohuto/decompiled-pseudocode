/*
 * XREFs of MiInitializeProtoPfn @ 0x1402C4D4C
 * Callers:
 *     MiFillPerSessionProtos @ 0x14085D65C (MiFillPerSessionProtos.c)
 * Callees:
 *     MiLockProtoPoolPage @ 0x14002F030 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14002F1F0 (MiUnlockProtoPoolPage.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiDecrementShareCount @ 0x140081E90 (MiDecrementShareCount.c)
 *     MiInitializePfn @ 0x1401094B0 (MiInitializePfn.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 */

__int64 __fastcall MiInitializeProtoPfn(__int64 a1, __int64 *a2, unsigned int a3, int a4)
{
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rbp
  __int64 v10; // r8
  BOOL v11; // eax
  __int64 v12; // rdx
  int v13; // r8d
  int v14; // r11d
  int v16; // [rsp+50h] [rbp+18h] BYREF
  int v17; // [rsp+58h] [rbp+20h] BYREF

  v17 = a4;
  v7 = 48 * a1 - 0x58000000000LL;
  while ( 1 )
  {
    v9 = MiLockProtoPoolPage((unsigned __int64)a2, (unsigned __int8 *)&v17);
    if ( v9 )
      break;
    MmAccessFault(2uLL, (signed __int64)a2, 0LL, 0LL);
  }
  v16 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v16, v8, v10);
    while ( *(__int64 *)(v7 + 24) < 0 );
  }
  MiInitializePfn(v7, (unsigned __int64)a2, a3, 23);
  MiMakeValidPte(0LL, a1, a3 | 0x80000000);
  v11 = MiPteInShadowRange((unsigned __int64)a2);
  LOWORD(v14) = v13 + 1;
  if ( v11 )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v13 = v14;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_14;
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
    {
      goto LABEL_14;
    }
    if ( ((unsigned __int8)v12 & (unsigned __int8)v14) != 0 )
      v12 |= 0x8000000000000000uLL;
  }
LABEL_14:
  *a2 = v12;
  if ( v13 )
    MiWritePteShadow((__int64)a2, v12);
  *(_WORD *)(v7 + 32) += v14;
  MiDecrementShareCount(v7);
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return MiUnlockProtoPoolPage(v9, v17);
}
