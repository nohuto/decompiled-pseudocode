/*
 * XREFs of MiWriteSharedDemandZeroPte @ 0x1402CB098
 * Callers:
 *     MiBuildForkPte @ 0x1402C7DE0 (MiBuildForkPte.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 */

char __fastcall MiWriteSharedDemandZeroPte(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, _QWORD *a5)
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
      if ( !HIBYTE(word_14043B26C) )
      {
LABEL_7:
        if ( ((unsigned __int8)v11 & (unsigned __int8)v13) != 0 )
          v11 |= 0x8000000000000000uLL;
      }
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
    {
      goto LABEL_7;
    }
  }
  *(_QWORD *)v7 = v11;
  if ( v12 )
    MiWritePteShadow(v7, v11);
  v14 = *(_QWORD *)(v7 + 16) & 0xF800000000000001uLL;
  *(_QWORD *)(v7 + 24) = v13;
  *(_QWORD *)(v7 + 16) = v13 | v14;
  v15 = *(unsigned __int16 *)(a1 + 1454);
  a5[1] += v13;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(qword_14043B808 + 8 * v15) + 7816LL), v13);
LABEL_13:
  MiSwizzleInvalidPte((v7 << 16) | 0x400);
  LODWORD(CurrentThread) = MiPteInShadowRange((unsigned __int64)a4);
  if ( !(_DWORD)CurrentThread )
    goto LABEL_20;
  LODWORD(CurrentThread) = MiPteHasShadow();
  if ( (_DWORD)CurrentThread )
  {
    v18 = v13;
    if ( HIBYTE(word_14043B26C) )
      goto LABEL_20;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    if ( (CurrentThread->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
      goto LABEL_20;
  }
  if ( ((unsigned __int8)v17 & (unsigned __int8)v13) != 0 )
    v17 |= 0x8000000000000000uLL;
LABEL_20:
  *a4 = v17;
  if ( v18 )
    LOBYTE(CurrentThread) = MiWritePteShadow((__int64)a4, v17);
  return (char)CurrentThread;
}
