/*
 * XREFs of MmInvalidateDumpAddresses @ 0x14056D630
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140568DB8 (PopInvokeSystemStateHandler.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiGetPteAddress @ 0x140065DE8 (MiGetPteAddress.c)
 *     MiWritePteShadow @ 0x140120E50 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120EB0 (MiPteHasShadow.c)
 *     KeFlushSingleCurrentTb @ 0x140156EB8 (KeFlushSingleCurrentTb.c)
 */

char __fastcall MmInvalidateDumpAddresses(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  unsigned int v4; // esi
  unsigned __int64 PteAddress; // r11
  __int64 v6; // rdx
  __int64 v7; // rdx
  int v8; // r8d
  __int64 *v9; // r11
  unsigned __int64 v10; // r11
  __int64 v11; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // rdx
  int v14; // r8d
  __int64 *v15; // r11
  bool v16; // zf
  bool v17; // zf

  v3 = a1;
  v4 = 0;
  PteAddress = MiGetPteAddress(a1);
  if ( v6 )
  {
    do
    {
      if ( MiPteInShadowRange(PteAddress) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v8 = 1;
          if ( !HIBYTE(word_14043A1AC) )
          {
            v16 = (v7 & 1) == 0;
            goto LABEL_19;
          }
        }
        else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
        {
          v16 = (v7 & 1) == 0;
LABEL_19:
          if ( !v16 )
            v7 |= 0x8000000000000000uLL;
        }
      }
      *v9 = v7;
      if ( v8 )
        MiWritePteShadow((__int64)v9, v7);
      ++v4;
      PteAddress = (unsigned __int64)(v9 + 1);
    }
    while ( v4 < a2 );
  }
  for ( ; a2; --a2 )
  {
    KeFlushSingleCurrentTb(v3, 0);
    v3 += 4096LL;
  }
  v10 = qword_14043A7D0;
  v11 = 32LL;
  do
  {
    LODWORD(CurrentThread) = MiPteInShadowRange(v10);
    if ( !(_DWORD)CurrentThread )
      goto LABEL_10;
    LODWORD(CurrentThread) = MiPteHasShadow();
    if ( (_DWORD)CurrentThread )
    {
      v14 = 1;
      if ( HIBYTE(word_14043A1AC) )
        goto LABEL_10;
      v17 = (v13 & 1) == 0;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (CurrentThread->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
        goto LABEL_10;
      v17 = (v13 & 1) == 0;
    }
    if ( !v17 )
      v13 |= 0x8000000000000000uLL;
LABEL_10:
    *v15 = v13;
    if ( v14 )
      LOBYTE(CurrentThread) = MiWritePteShadow((__int64)v15, v13);
    v10 = (unsigned __int64)(v15 + 1);
    --v11;
  }
  while ( v11 );
  return (char)CurrentThread;
}
