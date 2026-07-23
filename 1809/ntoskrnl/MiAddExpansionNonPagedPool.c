/*
 * XREFs of MiAddExpansionNonPagedPool @ 0x14017FB0C
 * Callers:
 *     MiFreeInitializationCode @ 0x1406C8ABC (MiFreeInitializationCode.c)
 *     MiInitializeNonPagedPool @ 0x1409BE0D4 (MiInitializeNonPagedPool.c)
 *     MxConsumeLargePageSlush @ 0x1409BE51C (MxConsumeLargePageSlush.c)
 * Callees:
 *     MiReturnPhysicalPoolPages @ 0x140025380 (MiReturnPhysicalPoolPages.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MiChangePageAttribute @ 0x1400EF9A0 (MiChangePageAttribute.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiAddExpansionNonPagedPool(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r8
  unsigned __int64 v4; // rdi
  __int64 v5; // rdx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  unsigned __int8 v10; // r15
  char v11; // cl
  char v12; // al
  char v13; // al
  struct _KPRCB *CurrentPrcb; // rcx

  if ( a2 )
  {
    v2 = MiSwizzleInvalidPte(128LL);
    v4 = 48 * v3 - 0x58000000000LL;
    v6 = 0LL;
    v7 = v4 + 48 * v5;
    LOWORD(v8) = -1;
    do
    {
      v9 = *(_QWORD *)(v4 + 40);
      if ( (_WORD)v8 != v9 >> 58 )
      {
        if ( v6 )
        {
          MiReturnPhysicalPoolPages(v6, 0);
          v9 = *(_QWORD *)(v4 + 40);
          v6 = 0LL;
        }
        v8 = v9 >> 58;
      }
      v10 = MiLockPageInline(v4);
      v11 = *(_BYTE *)(v4 + 34) & 0xC7;
      *(_WORD *)(v4 + 32) = 0;
      *(_QWORD *)(v4 + 16) = v2;
      *(_QWORD *)(v4 + 40) &= ~0x200000000000000uLL;
      *(_QWORD *)(v4 + 24) &= 0xC000000000000000uLL;
      *(_QWORD *)(v4 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
      *(_BYTE *)(v4 + 34) = v11;
      v12 = *(_BYTE *)(v4 + 35) & 0xDF;
      *(_BYTE *)(v4 + 35) = v12;
      *(_BYTE *)(v4 + 35) = v12 | 0x10;
      *(_QWORD *)(v4 + 40) &= 0xFFFFFFF000000000uLL;
      v13 = *(_BYTE *)(v4 + 34);
      if ( (v13 & 0xC0) != 0x40 )
      {
        MiChangePageAttribute(v4, 1u, 3);
        v13 = *(_BYTE *)(v4 + 34);
      }
      *(_QWORD *)(v4 + 8) = -8LL;
      *(_BYTE *)(v4 + 34) = v13 & 0xF8 | 5;
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v10);
      *(_QWORD *)v4 = v6;
      v6 = v4;
      v4 += 48LL;
    }
    while ( v4 < v7 );
    MiReturnPhysicalPoolPages(v6, 0);
  }
}
