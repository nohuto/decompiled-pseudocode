/*
 * XREFs of MiConvertHiberPhasePte @ 0x14059C380
 * Callers:
 *     <none>
 * Callees:
 *     MiIsPfn @ 0x140005EA0 (MiIsPfn.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiReadPteShadow @ 0x14004B430 (MiReadPteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 */

__int64 __fastcall MiConvertHiberPhasePte(__int64 a1, __int64 *a2, int a3)
{
  __int64 PteShadow; // r9
  unsigned __int64 v5; // r10
  __int64 v6; // r11
  __int64 v7; // r11
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r9
  unsigned __int64 v12; // r10
  __int64 v13; // r11
  __int64 v15; // r9
  _QWORD *v16; // r10
  unsigned __int64 v17; // [rsp+30h] [rbp+8h] BYREF

  PteShadow = *a2;
  v5 = (unsigned __int64)a2;
  v6 = a1;
  if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a2 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow((unsigned __int64)a2, *a2);
  v7 = *(_QWORD *)(v6 + 160);
  v17 = PteShadow;
  if ( v7 )
  {
    if ( (PteShadow & 1) != 0 && !a3 )
    {
      v9 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v17);
      if ( (unsigned int)MiIsPfn((v9 >> 12) & 0xFFFFFFFFFLL) )
      {
        if ( v10 != qword_140466860
          && v10 != qword_140466848
          && !_bittest64(*(const signed __int64 **)(v13 + 8), (unsigned int)v10) )
        {
          v17 = v11 & 0xFFFFFFFFFFFFFBFAuLL | 0x404;
          if ( MiPteInShadowRange(v12) && (unsigned int)MiPteHasShadow() )
          {
LABEL_18:
            *v16 = v15;
            MiWritePteShadow((__int64)v16);
            return 0LL;
          }
LABEL_27:
          *v16 = v15;
        }
      }
    }
  }
  else if ( (PteShadow & 1) == 0 && (PteShadow & 0x400) != 0 && (PteShadow & 4) != 0 )
  {
    v17 = PteShadow & 0xFFFFFFFFFFFFFBFAuLL | 1;
    if ( MiPteInShadowRange(v5) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140465BEC) )
          v15 |= 0x8000000000000000uLL;
        goto LABEL_18;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
        v15 |= 0x8000000000000000uLL;
    }
    goto LABEL_27;
  }
  return 0LL;
}
