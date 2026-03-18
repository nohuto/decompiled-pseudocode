/*
 * XREFs of MiIsProbeActive @ 0x1400F4D24
 * Callers:
 *     MiReplaceRotateWithDemandZero @ 0x1400F4884 (MiReplaceRotateWithDemandZero.c)
 *     MmIsIoSpaceActive @ 0x1402C4D20 (MmIsIoSpaceActive.c)
 *     MiSwitchToTransition @ 0x1402C7218 (MiSwitchToTransition.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x140061A20 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061AC0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiIsProbeActive(unsigned __int64 a1, __int64 a2, char a3)
{
  unsigned int v4; // ebx
  int v5; // ebp
  KIRQL v8; // al
  _QWORD *v9; // r9
  KIRQL v10; // r15
  struct _KPRCB *v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r10
  __int64 v16; // r11
  unsigned __int64 v17; // rax
  _WORD *v18; // r8
  unsigned __int64 v19; // rcx
  _QWORD *v20; // rax
  _QWORD *v21; // rcx
  unsigned __int64 v22; // r12
  unsigned __int64 v23; // r9
  _QWORD *v24; // r10
  __int64 v25; // r11
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v27; // rdx
  _QWORD *v28; // rcx
  unsigned __int64 v29; // rax

  v4 = 0;
  v5 = 0;
  v8 = ExAcquireSpinLockShared(&dword_140466480);
  v9 = (_QWORD *)qword_140466488;
  v10 = v8;
  if ( qword_140466488 )
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
LABEL_41:
            v5 = 1;
            break;
          }
        }
        else
        {
          v27 = v23 & 0xFFFFFFE00LL;
          if ( v25 == -1 || v25 != v27 )
          {
            if ( v24 && v24[5] == v27 )
            {
LABEL_62:
              if ( (*(_WORD *)(v24[6] + 2 * (v23 - v24[5])) & 0x3FFF) != 0 )
                goto LABEL_41;
            }
            else
            {
              v28 = (_QWORD *)qword_140466488;
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
                    v24 = v28;
                    goto LABEL_62;
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
        if ( v13 + 1 > v15 + 512 )
          v19 = v16 + 1024;
        else
          v19 = v16 + 2 * (v13 - v15 + 1);
        if ( (unsigned __int64)v18 < v19 )
        {
          while ( (*v18 & 0x3FFF) == 0 )
          {
            if ( (unsigned __int64)++v18 >= v19 )
              goto LABEL_27;
          }
          v5 = 1;
LABEL_27:
          v13 = a1 + a2 - 1;
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
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140466480);
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
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140466480);
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
