/*
 * XREFs of MiDecrementHugeContext @ 0x140185B88
 * Callers:
 *     MiDeleteZeroThreadContext @ 0x1401851F4 (MiDeleteZeroThreadContext.c)
 *     MiGetHugePageToZero @ 0x1401855A4 (MiGetHugePageToZero.c)
 *     MiGetUltraHugeAlreadyActive @ 0x140185734 (MiGetUltraHugeAlreadyActive.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MiRemoveFaultNode @ 0x1400F9744 (MiRemoveFaultNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReleaseLargeZeroingVa @ 0x1402C1E50 (MiReleaseLargeZeroingVa.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall MiDecrementHugeContext(_QWORD *P, __int64 a2)
{
  __int64 *v5; // rcx
  __int64 v6; // rax
  __int64 **v7; // rdx
  __int64 v8; // rdi
  unsigned __int8 v9; // bp
  __int64 v10; // rcx
  struct _KPRCB *CurrentPrcb; // rcx

  if ( (*((_DWORD *)P + 47))-- == 1 )
  {
    v5 = P + 9;
    v6 = *v5;
    if ( *v5 )
    {
      v7 = (__int64 **)v5[1];
      if ( *(__int64 **)(v6 + 8) != v5 || *v7 != v5 )
        __fastfail(3u);
      *v7 = (__int64 *)v6;
      *(_QWORD *)(v6 + 8) = v7;
      if ( *((_DWORD *)P + 48) != 512 )
      {
        if ( !*((_BYTE *)P + 69) )
        {
          v8 = P[3];
          if ( v8 )
          {
            v9 = MiLockPageInline(P[3]);
            *(_BYTE *)(v8 + 34) &= ~8u;
            v10 = *(_QWORD *)(v8 + 16);
            *(_QWORD *)(v10 + 24) = 0LL;
            *(_BYTE *)(v10 + 69) = 1;
            *(_QWORD *)(v8 + 16) = MiSwizzleInvalidPte(128LL);
            _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
            __writecr8(v9);
          }
        }
        if ( a2 )
          MiReleaseLargeZeroingVa(a2, 1LL);
      }
    }
    if ( *((_BYTE *)P + 68) )
      MiRemoveFaultNode((__int64)P);
    ExFreePoolWithTag(P, 0);
  }
}
