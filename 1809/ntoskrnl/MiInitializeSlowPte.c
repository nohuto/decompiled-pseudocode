/*
 * XREFs of MiInitializeSlowPte @ 0x1402AF504
 * Callers:
 *     MiSlowRotateCopy @ 0x1402AF728 (MiSlowRotateCopy.c)
 * Callees:
 *     MiMakeProtectionPfnCompatible @ 0x14002DDB4 (MiMakeProtectionPfnCompatible.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 */

char __fastcall MiInitializeSlowPte(__int64 *a1, unsigned __int64 a2, int a3)
{
  __int64 v4; // r10
  int ProtectionPfnCompatible; // r8d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdx
  int v9; // r8d
  bool v10; // zf

  v4 = a2;
  ProtectionPfnCompatible = 4;
  if ( a2 <= 0xFFFFFFFFFLL && ((*(_QWORD *)(48 * a2 - 0x57FFFFFFFD8LL) >> 53) & 1) != 0 )
  {
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, 48 * a2 - 0x58000000000LL);
  }
  else if ( a3 )
  {
    if ( a3 == 2 )
      ProtectionPfnCompatible = 28;
  }
  else
  {
    ProtectionPfnCompatible = 12;
  }
  MiMakeValidPte((unsigned __int64)a1, v4, ProtectionPfnCompatible | 0xA0000000);
  LODWORD(CurrentThread) = MiPteInShadowRange((unsigned __int64)a1);
  if ( (_DWORD)CurrentThread )
  {
    LODWORD(CurrentThread) = MiPteHasShadow();
    if ( (_DWORD)CurrentThread )
    {
      v9 = 1;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_16;
      v10 = (v8 & 1) == 0;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (CurrentThread->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
        goto LABEL_16;
      v10 = (v8 & 1) == 0;
    }
    if ( !v10 )
    {
      LOBYTE(CurrentThread) = 0;
      v8 |= 0x8000000000000000uLL;
    }
  }
LABEL_16:
  *a1 = v8;
  if ( v9 )
    LOBYTE(CurrentThread) = MiWritePteShadow((__int64)a1, v8);
  return (char)CurrentThread;
}
