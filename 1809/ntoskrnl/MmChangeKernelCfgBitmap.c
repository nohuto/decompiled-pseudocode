/*
 * XREFs of MmChangeKernelCfgBitmap @ 0x14085D1B0
 * Callers:
 *     PsDispatchIumService @ 0x1402EAD84 (PsDispatchIumService.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MiGetPteAddress @ 0x140065DD8 (MiGetPteAddress.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 */

char __fastcall MmChangeKernelCfgBitmap(unsigned __int64 a1)
{
  __int64 v1; // rdx
  _QWORD *PteAddress; // rbx
  unsigned __int64 v3; // rcx
  char v4; // r8
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdx
  int v7; // r8d
  bool v8; // zf

  PteAddress = (_QWORD *)MiGetPteAddress(a1);
  v3 = (unsigned __int64)PteAddress;
  if ( v4 )
  {
    MiMakeValidPte((unsigned __int64)PteAddress, v1, 536870913);
    v3 = (unsigned __int64)PteAddress;
  }
  LODWORD(CurrentThread) = MiPteInShadowRange(v3);
  if ( (_DWORD)CurrentThread )
  {
    LODWORD(CurrentThread) = MiPteHasShadow();
    if ( (_DWORD)CurrentThread )
    {
      v7 = 1;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_12;
      v8 = (v6 & 1) == 0;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (CurrentThread->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
        goto LABEL_12;
      v8 = (v6 & 1) == 0;
    }
    if ( !v8 )
    {
      LOBYTE(CurrentThread) = 0;
      v6 |= 0x8000000000000000uLL;
    }
  }
LABEL_12:
  *PteAddress = v6;
  if ( v7 )
    LOBYTE(CurrentThread) = MiWritePteShadow((__int64)PteAddress, v6);
  return (char)CurrentThread;
}
