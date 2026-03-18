/*
 * XREFs of MiMakeSystemLeavesNonZero @ 0x1401748BC
 * Callers:
 *     MiComputePxeWalkAction @ 0x14004A690 (MiComputePxeWalkAction.c)
 *     MiCreateSystemPageTable @ 0x1400A3390 (MiCreateSystemPageTable.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x1400763F0 (MiSwizzleInvalidPte.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 */

char __fastcall MiMakeSystemLeavesNonZero(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  unsigned __int64 v9; // rdi
  struct _KTHREAD *CurrentThread; // rax
  int i; // edi
  __int64 v12; // rdx
  int v13; // r8d
  char v14; // r11
  bool v15; // zf

  v4 = *(_QWORD *)(a1 + 24);
  v5 = *(_QWORD *)(a1 + 32);
  v6 = a2 << 25 >> 16;
  if ( a3 > 0 )
  {
    v7 = (unsigned int)a3;
    do
    {
      v4 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v5 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v7;
    }
    while ( v7 );
  }
  v8 = (_QWORD *)v6;
  v9 = v6 + 4088;
  if ( v4 >= v6 )
    v8 = (_QWORD *)v4;
  if ( v5 < v6 + 4096 )
    v9 = v5;
  LOBYTE(CurrentThread) = MiSwizzleInvalidPte(768LL);
  for ( i = ((__int64)(v9 - (_QWORD)v8) >> 3) + 1; i; --i )
  {
    LODWORD(CurrentThread) = MiPteInShadowRange((unsigned __int64)v8);
    if ( (_DWORD)CurrentThread )
    {
      LODWORD(CurrentThread) = MiPteHasShadow();
      if ( (_DWORD)CurrentThread )
      {
        v13 = 1;
        if ( !HIBYTE(word_140465BEC) )
        {
          v15 = (v14 & 1) == 0;
          goto LABEL_19;
        }
      }
      else
      {
        CurrentThread = KeGetCurrentThread();
        if ( (CurrentThread->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
        {
          v15 = (v14 & 1) == 0;
LABEL_19:
          if ( !v15 )
            v12 |= 0x8000000000000000uLL;
        }
      }
    }
    *v8 = v12;
    if ( v13 )
      LOBYTE(CurrentThread) = MiWritePteShadow((__int64)v8);
    ++v8;
  }
  return (char)CurrentThread;
}
