/*
 * XREFs of MiDeletePhysmemPte @ 0x14015B04C
 * Callers:
 *     MiDeleteVa @ 0x14004B520 (MiDeleteVa.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiInsertTbFlushEntry @ 0x140058D70 (MiInsertTbFlushEntry.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiIsPfnLocked @ 0x14015B204 (MiIsPfnLocked.c)
 *     MiShowBadMapper @ 0x1402BCB38 (MiShowBadMapper.c)
 */

__int64 __fastcall MiDeletePhysmemPte(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // r9
  unsigned __int64 v5; // rax
  ULONG_PTR v6; // r11
  volatile signed __int32 *v7; // rsi
  __int64 v8; // rdx
  int v9; // r8d
  unsigned int v10; // ebx
  int v12; // edx
  __int64 v13; // r9
  int v14; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v15; // [rsp+58h] [rbp+10h] BYREF

  v15 = MI_READ_PTE_LOCK_FREE(a2);
  if ( ((*(_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v15) >> 12) & 0xFFFFFFFFFLL)
                   - 0x57FFFFFFFD8LL) >> 53) & 1) != 0 )
  {
    v5 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v15);
    if ( !(unsigned int)MiIsPfnLocked(48 * ((v5 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) )
      MiShowBadMapper(v6);
    v14 = 0;
    v7 = (volatile signed __int32 *)(48
                                   * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFLL)
                                   - 0x57FFFFFFFE8LL);
    while ( _interlockedbittestandset64(v7, 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v14);
      while ( *(__int64 *)v7 < 0 );
    }
    *(_QWORD *)v7 ^= (*(_QWORD *)v7 ^ (*(_QWORD *)v7 - 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)v7, 0x7FFFFFFFFFFFFFFFuLL);
    if ( !MiPteInShadowRange(a2) )
      goto LABEL_7;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v9 = 1;
      if ( !HIBYTE(word_1404658EC) )
      {
LABEL_23:
        if ( (v8 & 1) != 0 )
          v8 |= 0x8000000000000000uLL;
      }
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
    {
      goto LABEL_23;
    }
LABEL_7:
    *(_QWORD *)a2 = v8;
    if ( v9 )
      MiWritePteShadow(a2);
    v10 = 1;
    goto LABEL_10;
  }
  v10 = 0;
  v15 = v4 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
  if ( MiPteInShadowRange(a2) && (unsigned int)MiPteHasShadow() )
    v12 = 1;
  *(_QWORD *)a2 = v13;
  if ( v12 )
    MiWritePteShadow(a2);
LABEL_10:
  MiInsertTbFlushEntry(*(_QWORD *)(a1 + 8), (__int64)(a2 << 25) >> 16, 1LL, 0);
  return v10;
}
