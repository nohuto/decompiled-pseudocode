/*
 * XREFs of MiAddToReservationCluster @ 0x14015096C
 * Callers:
 *     MiBuildReservationCluster @ 0x1401501BC (MiBuildReservationCluster.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14011BA24 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiReferencePageForModifiedWrite @ 0x14011BC04 (MiReferencePageForModifiedWrite.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiAddToReservationCluster(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        _QWORD *a5,
        _DWORD *a6)
{
  unsigned int v6; // r15d
  __int64 v7; // r14
  __int64 v9; // rax
  __int64 v11; // r13
  __int64 v12; // rbx
  unsigned int v13; // esi
  unsigned __int8 v14; // di
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // r9
  const signed __int64 *v17; // rcx
  int v18; // r14d
  struct _KPRCB *v20; // rcx
  unsigned int v21; // r9d
  int *v22; // r8
  int v23; // r10d
  int *v24; // rdx
  bool v25; // zf
  bool i; // zf
  struct _KPRCB *v27; // rcx
  struct _KPRCB *v28; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v30; // [rsp+20h] [rbp-48h]
  __int64 v31; // [rsp+70h] [rbp+8h]

  v6 = 0;
  v7 = *(_QWORD *)(a1 + 256);
  v31 = v7;
  v9 = 5LL * (*(_WORD *)(a1 + 204) & 0xF);
  v30 = v9;
  if ( a3 )
  {
    while ( 1 )
    {
      v11 = *(_QWORD *)(v7 + 8 * v9 + 2768);
      if ( v11 == 0xFFFFFFFFFLL )
        return v6;
      v12 = 48 * v11 - 0x58000000000LL;
      v13 = 0;
      v14 = MiLockPageInline(v12);
      if ( v11 == *(_QWORD *)(v7 + 8 * v30 + 2768) )
      {
        v15 = *(_QWORD *)(v12 + 16);
        if ( qword_14043B180 && (v15 & 0x10) == 0 )
          v15 &= ~qword_14043B180;
        v16 = HIDWORD(v15);
        if ( (_DWORD)v16 != a4 )
        {
          v13 = v16 - a4;
          if ( !MI_IS_PTE_IN_WS_SWAP_SET(v7, (_WORD *)(v12 + 16))
            || (unsigned int)v16 < a4
            || v13 > 0x1F
            || v13 + v6 >= a3 )
          {
            goto LABEL_18;
          }
        }
        v17 = *(const signed __int64 **)(a2 + 8);
        if ( _bittest64(v17, v16) )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v14 < 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
          goto LABEL_19;
        }
        if ( v13 )
        {
          v21 = v13 + a4 - 1;
          if ( v21 >= *(_DWORD *)a2 )
            goto LABEL_18;
          if ( v13 > 1 )
          {
            v22 = (int *)v17 + ((unsigned __int64)a4 >> 5);
            v23 = *v22;
            v24 = (int *)v17 + ((unsigned __int64)v21 >> 5);
            if ( v22 != v24 )
            {
              for ( i = (v23 & (-1 << a4)) == 0; i; i = *v22 == 0 )
              {
                if ( ++v22 == v24 )
                {
                  v25 = ((0xFFFFFFFF >> ~(_BYTE)v21) & *v22) == 0;
                  goto LABEL_42;
                }
              }
LABEL_18:
              _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v14 < 2u )
              {
                v28 = KeGetCurrentPrcb();
                _InterlockedAnd((volatile signed __int32 *)v28->SchedulerAssist, 0xFFFEFFFF);
                KiRemoveSystemWorkPriorityKick(v28);
              }
LABEL_19:
              __writecr8(v14);
              return v6;
            }
            v25 = (v23 & (0xFFFFFFFF >> (32 - v13) << a4)) == 0;
LABEL_42:
            if ( !v25 )
              goto LABEL_18;
          }
          else if ( _bittest((const signed __int32 *)v17, a4) )
          {
            goto LABEL_18;
          }
        }
        v18 = MiReferencePageForModifiedWrite(48 * v11 - 0x58000000000LL, 0);
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v14 < 2u )
        {
          v27 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v27->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v27);
        }
        __writecr8(v14);
        if ( !v18 )
          return v6;
        if ( v13 )
        {
          v6 += v13;
          a4 += v13;
          *a6 += v13;
          do
          {
            *a5++ = qword_14043BE88;
            --v13;
          }
          while ( v13 );
        }
        *a5 = v11;
        ++v6;
        ++a5;
        ++a4;
        if ( v18 == 3 && v6 >= 0x10 )
          return v6;
        v7 = v31;
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v14 < 2u )
        {
          v20 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v20->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v20);
        }
        __writecr8(v14);
      }
      if ( v6 == a3 )
        return v6;
      v9 = v30;
    }
  }
  return v6;
}
