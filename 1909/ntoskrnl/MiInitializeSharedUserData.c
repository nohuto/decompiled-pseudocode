/*
 * XREFs of MiInitializeSharedUserData @ 0x140A1D07C
 * Callers:
 *     MiInitSystem @ 0x1409F0D98 (MiInitSystem.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002B050 (MiMakeValidPte.c)
 *     MiSwizzleInvalidPte @ 0x140076660 (MiSwizzleInvalidPte.c)
 *     ExGenRandom @ 0x14009C340 (ExGenRandom.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     HvlGetSharedPageVa @ 0x1406A870C (HvlGetSharedPageVa.c)
 */

__int64 MiInitializeSharedUserData()
{
  unsigned __int64 v0; // rsi
  unsigned __int64 SharedPageVa; // rax
  char v2; // al
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // r15
  __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r9
  _QWORD *v10; // r14
  __int64 v11; // rdx
  int v12; // r9d
  __int64 v13; // rbx
  unsigned __int8 v14; // bp
  char v15; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD v17[7]; // [rsp+20h] [rbp-38h]
  unsigned __int64 ValidPte; // [rsp+60h] [rbp+8h] BYREF

  v17[0] = 0xFFFFF78000000000uLL;
  v0 = 1LL;
  SharedPageVa = (unsigned __int64)HvlGetSharedPageVa();
  v17[1] = SharedPageVa;
  if ( SharedPageVa )
  {
    ValidPte = MI_READ_PTE_LOCK_FREE(((SharedPageVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( (ValidPte & 1) != 0
      && (*(_QWORD *)(48
                    * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&ValidPte) >> 12) & 0xFFFFFFFFFLL)
                    - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0 )
    {
      v0 = 2LL;
      v2 = ExGenRandom(1);
      v3 = 15LL;
      v4 = v2 & 0xF;
      if ( v4 )
        v3 = v4;
      qword_140465720 = (v3 + 524256) << 12;
    }
  }
  result = (__int64)ExAllocatePoolWithTag(PagedPool, 8 * v0, 0x20206D4Du);
  v6 = result;
  if ( result )
  {
    v7 = 0LL;
    while ( 1 )
    {
      v8 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(((v17[v7] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFLL;
      v10 = (_QWORD *)(v6 + 8 * v7);
      ValidPte = MiMakeValidPte(v9, v8, 536870913);
      if ( MiPteInShadowRange((unsigned __int64)v10) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v12 = 1;
          if ( !HIBYTE(word_1404658EC) )
            goto LABEL_20;
        }
        else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
        {
LABEL_20:
          if ( (v15 & 1) != 0 )
            v11 |= 0x8000000000000000uLL;
        }
      }
      *v10 = v11;
      if ( v12 )
        MiWritePteShadow(v6 + 8 * v7);
      qword_140465710[v7] = (__int64)v10;
      v13 = 48 * v8 - 0x58000000000LL;
      v14 = MiLockPageInline(v13);
      *(_QWORD *)(v13 + 16) = MiSwizzleInvalidPte(128LL);
      *(_QWORD *)(v13 + 40) |= 0x200000000000000uLL;
      *(_QWORD *)(v13 + 8) = v10;
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v14 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(v14);
      if ( ++v7 >= v0 )
        return 1LL;
    }
  }
  return result;
}
