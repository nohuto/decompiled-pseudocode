/*
 * XREFs of MiIsProbeActive @ 0x140122F4C
 * Callers:
 *     MiReplaceRotateWithDemandZero @ 0x140122AC0 (MiReplaceRotateWithDemandZero.c)
 *     MmIsIoSpaceActive @ 0x1402ABF70 (MmIsIoSpaceActive.c)
 *     MiSwitchToTransition @ 0x1402AF830 (MiSwitchToTransition.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14009D700 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiIsProbeActive(unsigned __int64 a1, __int64 a2, char a3)
{
  unsigned int v4; // ebx
  int v5; // ebp
  KIRQL v8; // al
  _QWORD *v9; // r9
  KIRQL v10; // r15
  struct _KPRCB *v12; // rcx
  unsigned __int64 v13; // r11
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r8
  __int64 v16; // r10
  unsigned __int64 v17; // rax
  _WORD *v18; // rdx
  unsigned __int64 v19; // rcx
  _QWORD *v20; // rax
  _QWORD *v21; // rcx
  unsigned __int64 v22; // r12
  unsigned __int64 v23; // r9
  __int64 v24; // r10
  _QWORD *v25; // r11
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v27; // rax
  _QWORD *v28; // rcx
  unsigned __int64 v29; // rax

  v4 = 0;
  v5 = 0;
  v8 = ExAcquireSpinLockShared(&dword_14043BDC0);
  v9 = (_QWORD *)qword_14043BDC8[0];
  v10 = v8;
  if ( qword_14043BDC8[0] )
  {
    if ( (a3 & 1) != 0 )
    {
      v22 = a1 + 8 * a2;
      while ( a1 < v22 )
      {
        v23 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(a1) >> 12) & 0xFFFFFFFFFLL;
        if ( (*(_QWORD *)(48 * v23 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0 )
        {
          if ( (a3 & 2) != 0 && *(_WORD *)(48 * v23 - 0x57FFFFFFFE0LL) > 2u )
          {
LABEL_40:
            v5 = 1;
            break;
          }
        }
        else
        {
          v27 = v23 & 0xFFFFFFE00LL;
          if ( v24 == -1 || v24 != v27 )
          {
            if ( v25 && v25[5] == v27 )
            {
LABEL_61:
              if ( (*(_WORD *)(v25[6] + 2 * (v23 - v25[5])) & 0x3FFF) != 0 )
                goto LABEL_40;
            }
            else
            {
              v28 = (_QWORD *)qword_14043BDC8[0];
              while ( v28 )
              {
                v29 = v28[5];
                if ( v23 < v29 )
                {
                  v28 = (_QWORD *)*v28;
                }
                else
                {
                  if ( v23 < v29 + 512 )
                  {
                    v25 = v28;
                    goto LABEL_61;
                  }
                  v28 = (_QWORD *)v28[1];
                }
              }
            }
          }
        }
        a1 += 8LL;
      }
    }
    else
    {
      v13 = a1 + a2 - 1;
      while ( v9 )
      {
        v14 = v9[5];
        if ( v13 < v14 )
        {
          v9 = (_QWORD *)*v9;
        }
        else
        {
          if ( a1 <= v14 + 512 )
            break;
          v9 = (_QWORD *)v9[1];
        }
      }
      while ( v9 )
      {
        v15 = v9[5];
        if ( v13 < v15 )
          break;
        v16 = v9[6];
        v17 = a1 - v15;
        if ( a1 < v15 )
          v17 = 0LL;
        v18 = (_WORD *)(v16 + 2 * v17);
        v19 = a1 + a2 > v15 + 512 ? v16 + 1024 : v16 + 2 * (a1 + a2 - v15);
        while ( (unsigned __int64)v18 < v19 )
        {
          if ( (*v18 & 0x3FFF) != 0 )
          {
            v5 = 1;
            break;
          }
          ++v18;
        }
        if ( v5 == 1 )
          break;
        v20 = (_QWORD *)v9[1];
        v21 = v9;
        if ( v20 )
        {
          do
          {
            v9 = v20;
            v20 = (_QWORD *)*v20;
          }
          while ( v20 );
        }
        else
        {
          while ( 1 )
          {
            v9 = (_QWORD *)(v9[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !v9 || (_QWORD *)*v9 == v21 )
              break;
            v21 = v9;
          }
        }
      }
    }
    ExReleaseSpinLockSharedFromDpcLevel(&dword_14043BDC0);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    v4 = v5;
  }
  else
  {
    ExReleaseSpinLockSharedFromDpcLevel(&dword_14043BDC0);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
    {
      v12 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v12->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v12);
    }
  }
  __writecr8(v10);
  return v4;
}
