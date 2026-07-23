/*
 * XREFs of MiFillGapPtes @ 0x140186D0C
 * Callers:
 *     MiFillGapAddresses @ 0x140186C6C (MiFillGapAddresses.c)
 *     MiFillGapPtes @ 0x140186D0C (MiFillGapPtes.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiFillGapPtes @ 0x140186D0C (MiFillGapPtes.c)
 */

char __fastcall MiFillGapPtes(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rsi
  int v8; // ebp
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // r8d
  bool v13; // zf

  v5 = a1;
  v6 = a2;
  v8 = a3;
  if ( a1 < *(_QWORD *)(a3 + 16LL * a5) )
    v5 = *(_QWORD *)(a3 + 16LL * a5);
  CurrentThread = *(struct _KTHREAD **)(a3 + 16LL * a5 + 8);
  if ( a2 > (unsigned __int64)CurrentThread )
    v6 = *(_QWORD *)(a3 + 16LL * a5 + 8);
  while ( v5 <= v6 )
  {
    LOBYTE(CurrentThread) = MI_READ_PTE_LOCK_FREE(v5);
    if ( ((unsigned __int8)CurrentThread & 1) != 0 )
    {
      if ( a5 && (char)CurrentThread >= 0 )
        LOBYTE(CurrentThread) = MiFillGapPtes(
                                  (__int64)(v5 << 25) >> 16,
                                  (unsigned int)((__int64)(v5 << 25) >> 16) + 4088,
                                  v8,
                                  a4,
                                  a5 - 1);
      goto LABEL_12;
    }
    v10 = v5;
    if ( a5 )
      v10 = 0LL;
    MiMakeValidPte(v10, *(_QWORD *)(a4 + 8LL * a5), a5 != 0 ? -1476395004 : 536870913);
    LODWORD(CurrentThread) = MiPteInShadowRange(v5);
    if ( (_DWORD)CurrentThread )
    {
      LODWORD(CurrentThread) = MiPteHasShadow();
      if ( (_DWORD)CurrentThread )
      {
        v12 = 1;
        if ( !HIBYTE(word_14043B26C) )
        {
          v13 = (v11 & 1) == 0;
          goto LABEL_22;
        }
      }
      else
      {
        CurrentThread = KeGetCurrentThread();
        if ( (CurrentThread->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
        {
          v13 = (v11 & 1) == 0;
LABEL_22:
          if ( !v13 )
          {
            LOBYTE(CurrentThread) = 0;
            v11 |= 0x8000000000000000uLL;
          }
        }
      }
    }
    *(_QWORD *)v5 = v11;
    if ( v12 )
      LOBYTE(CurrentThread) = MiWritePteShadow(v5, v11);
LABEL_12:
    v5 += 8LL;
  }
  return (char)CurrentThread;
}
