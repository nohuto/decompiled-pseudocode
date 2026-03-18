/*
 * XREFs of MiWriteSharedDemandZeroPte @ 0x1402E50F4
 * Callers:
 *     MiBuildForkPte @ 0x1402E1BC0 (MiBuildForkPte.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x140076660 (MiSwizzleInvalidPte.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 */

char __fastcall MiWriteSharedDemandZeroPte(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v5; // rax
  __int64 v7; // r11
  unsigned __int64 v9; // r11
  BOOL v10; // eax
  __int64 v11; // rdx
  int v12; // r8d
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v17; // rdx
  int v18; // r8d

  v5 = *(_QWORD *)(a3 + 24);
  v7 = a3;
  if ( v5 )
  {
    LODWORD(v13) = 1;
    ++*(_QWORD *)(a3 + 16);
    *(_QWORD *)(a3 + 24) = v5 + 1;
    ++*a5;
    goto LABEL_13;
  }
  MiSwizzleInvalidPte((*(_QWORD *)(a3 + 16) >> 54) & 0x3E0LL);
  v10 = MiPteInShadowRange(v9);
  v13 = (unsigned int)(v12 + 1);
  if ( v10 )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v12 = v13;
      if ( !HIBYTE(word_1404658EC) )
      {
LABEL_7:
        if ( ((unsigned __int8)v11 & (unsigned __int8)v13) != 0 )
          v11 |= 0x8000000000000000uLL;
      }
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
    {
      goto LABEL_7;
    }
  }
  *(_QWORD *)v7 = v11;
  if ( v12 )
    MiWritePteShadow(v7);
  v14 = *(_QWORD *)(v7 + 16) & 0xF800000000000001uLL;
  *(_QWORD *)(v7 + 24) = v13;
  *(_QWORD *)(v7 + 16) = v13 | v14;
  v15 = *(unsigned __int16 *)(a1 + 1454);
  a5[1] += v13;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(qword_140465E88 + 8 * v15) + 8584LL), v13);
LABEL_13:
  MiSwizzleInvalidPte((v7 << 16) | 0x400);
  LODWORD(CurrentThread) = MiPteInShadowRange((unsigned __int64)a4);
  if ( !(_DWORD)CurrentThread )
    goto LABEL_20;
  LODWORD(CurrentThread) = MiPteHasShadow();
  if ( (_DWORD)CurrentThread )
  {
    v18 = v13;
    if ( HIBYTE(word_1404658EC) )
      goto LABEL_20;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    if ( (CurrentThread->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
      goto LABEL_20;
  }
  if ( ((unsigned __int8)v17 & (unsigned __int8)v13) != 0 )
    v17 |= 0x8000000000000000uLL;
LABEL_20:
  *a4 = v17;
  if ( v18 )
    LOBYTE(CurrentThread) = MiWritePteShadow((__int64)a4);
  return (char)CurrentThread;
}
