/*
 * XREFs of MxZeroBootMappings @ 0x140A16D10
 * Callers:
 *     MiZeroBootMappings @ 0x140A16CA0 (MiZeroBootMappings.c)
 *     MxZeroBootMappings @ 0x140A16D10 (MxZeroBootMappings.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MxZeroBootMappings @ 0x140A16D10 (MxZeroBootMappings.c)
 *     MiFreeBootPageTable @ 0x140A16E24 (MiFreeBootPageTable.c)
 */

void __fastcall MxZeroBootMappings(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // r8d
  bool v10; // zf
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 < a2 )
  {
    v5 = a1;
    while ( 1 )
    {
      v6 = MI_READ_PTE_LOCK_FREE(v5);
      v11 = v6;
      if ( v6 )
        break;
LABEL_4:
      v5 += 8LL;
      if ( v5 >= a2 )
        return;
    }
    if ( (v6 & 1) != 0 && (v6 & 0x80u) == 0LL )
    {
      if ( a3 > 1 )
        MxZeroBootMappings((__int64)(v5 << 25) >> 16, ((__int64)(v5 << 25) >> 16) + 4096);
      v7 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v11);
      MiFreeBootPageTable((v7 >> 12) & 0xFFFFFFFFFLL);
    }
    if ( !MiPteInShadowRange(v5) )
    {
LABEL_12:
      *(_QWORD *)v5 = v8;
      if ( v9 )
        MiWritePteShadow(v5);
      goto LABEL_4;
    }
    if ( (unsigned int)MiPteHasShadow() )
    {
      v9 = 1;
      if ( HIBYTE(word_140465BEC) )
        goto LABEL_12;
      v10 = (v8 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
        goto LABEL_12;
      v10 = (v8 & 1) == 0;
    }
    if ( !v10 )
      v8 |= 0x8000000000000000uLL;
    goto LABEL_12;
  }
}
