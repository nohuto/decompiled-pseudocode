/*
 * XREFs of MiInitializeProtoPfn @ 0x1402DE7F0
 * Callers:
 *     MiFillPerSessionProtos @ 0x1408987B4 (MiFillPerSessionProtos.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002B050 (MiMakeValidPte.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiLockProtoPoolPage @ 0x140054DD0 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x140055030 (MiUnlockProtoPoolPage.c)
 *     MmAccessFault @ 0x1400AA630 (MmAccessFault.c)
 *     MiDecrementShareCount @ 0x1400BB990 (MiDecrementShareCount.c)
 *     MiInitializePfn @ 0x1400DD7F0 (MiInitializePfn.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 */

__int64 __fastcall MiInitializeProtoPfn(__int64 a1, _QWORD *a2, unsigned int a3, int a4)
{
  __int64 v7; // rbx
  ULONG_PTR v8; // rbp
  BOOL v9; // eax
  __int64 v10; // rdx
  int v11; // r8d
  int v12; // r11d
  int v14; // [rsp+50h] [rbp+18h] BYREF
  int v15; // [rsp+58h] [rbp+20h] BYREF

  v15 = a4;
  v7 = 48 * a1 - 0x58000000000LL;
  while ( 1 )
  {
    v8 = MiLockProtoPoolPage((unsigned __int64)a2, (unsigned __int8 *)&v15);
    if ( v8 )
      break;
    MmAccessFault(2uLL, (signed __int64)a2, 0, 0LL);
  }
  v14 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v14);
    while ( *(__int64 *)(v7 + 24) < 0 );
  }
  MiInitializePfn(v7, (unsigned __int64)a2, a3, 23);
  MiMakeValidPte(0LL, a1, a3 | 0x80000000);
  v9 = MiPteInShadowRange((unsigned __int64)a2);
  LOWORD(v12) = v11 + 1;
  if ( v9 )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v11 = v12;
      if ( HIBYTE(word_1404658EC) )
        goto LABEL_14;
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
    {
      goto LABEL_14;
    }
    if ( ((unsigned __int8)v10 & (unsigned __int8)v12) != 0 )
      v10 |= 0x8000000000000000uLL;
  }
LABEL_14:
  *a2 = v10;
  if ( v11 )
    MiWritePteShadow((__int64)a2);
  *(_WORD *)(v7 + 32) += v12;
  MiDecrementShareCount(v7);
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return MiUnlockProtoPoolPage(v8, v15);
}
