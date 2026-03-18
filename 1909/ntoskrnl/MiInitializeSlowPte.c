/*
 * XREFs of MiInitializeSlowPte @ 0x1402C6ED8
 * Callers:
 *     MiSlowRotateCopy @ 0x1402C70FC (MiSlowRotateCopy.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002B050 (MiMakeValidPte.c)
 *     MiMakeProtectionPfnCompatible @ 0x14002C1E0 (MiMakeProtectionPfnCompatible.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 */

char __fastcall MiInitializeSlowPte(_QWORD *a1, unsigned __int64 a2, int a3)
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
      if ( HIBYTE(word_1404658EC) )
        goto LABEL_16;
      v10 = (v8 & 1) == 0;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (CurrentThread->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
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
    LOBYTE(CurrentThread) = MiWritePteShadow((__int64)a1);
  return (char)CurrentThread;
}
