/*
 * XREFs of MmSetPfnListInfo @ 0x14013FD90
 * Callers:
 *     PfpPfnPrioRequest @ 0x14062B240 (PfpPfnPrioRequest.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     MiSetNonResidentPteHeat @ 0x140081E40 (MiSetNonResidentPteHeat.c)
 *     MiGetPfnPriority @ 0x140082B60 (MiGetPfnPriority.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     MiIdentifyPfn @ 0x1400A7E20 (MiIdentifyPfn.c)
 *     MiRelinkStandbyPage @ 0x1400F0AB8 (MiRelinkStandbyPage.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiAddPageToHeatRanges @ 0x1402CECC0 (MiAddPageToHeatRanges.c)
 *     MiNotifyPageHeat @ 0x1402CF130 (MiNotifyPageHeat.c)
 */

__int64 __fastcall MmSetPfnListInfo(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *v4; // rdi
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int64 v6; // r14
  unsigned int v7; // r15d
  unsigned __int64 v8; // r14
  __int64 v9; // rbx
  unsigned __int8 v10; // si
  char v11; // r8
  int PfnPriority; // eax
  int v13; // edx
  ULONG_PTR v14; // rcx
  char v15; // r8
  __int64 v17; // xmm1_8
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int8 v21; // dl
  struct _KPRCB *v22; // rcx
  struct _KPRCB *v23; // rcx
  __int128 v24; // [rsp+28h] [rbp-99h] BYREF
  __int64 v25; // [rsp+38h] [rbp-89h]
  struct _KTHREAD *v26; // [rsp+40h] [rbp-81h]
  unsigned __int64 v27; // [rsp+48h] [rbp-79h]
  int v28; // [rsp+58h] [rbp-69h] BYREF
  int v29; // [rsp+5Ch] [rbp-65h]
  int v30; // [rsp+60h] [rbp-61h]

  v4 = a2;
  if ( a3 )
  {
    if ( (HvlEnlightenments & 0x400000) == 0 )
      return 3221225659LL;
    v28 = 0;
  }
  else
  {
    v28 = 1;
  }
  CurrentThread = KeGetCurrentThread();
  v6 = (unsigned __int64)&a2[3 * a1];
  v29 = 0;
  v30 = 16;
  v7 = 0;
  v27 = v6;
  --CurrentThread->SpecialApcDisable;
  v26 = CurrentThread;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_14043DAB8, 0LL);
  if ( (unsigned __int64)v4 < v6 )
  {
    while ( 1 )
    {
      v8 = v4[1];
      if ( v8 <= 0xFFFFFFFFFLL && (*(_QWORD *)(48 * v8 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0 )
      {
        v9 = 48 * v8 - 0x58000000000LL;
        *((_QWORD *)&v24 + 1) = v4[1];
        *(_QWORD *)&v24 = 0LL;
        v25 = 0LL;
        v10 = MiLockPageInline(v9);
        MiIdentifyPfn((__int128 *)v9, (unsigned __int64 *)&v24);
        if ( v25 == v4[2] && (((unsigned __int64)v24 ^ *v4) & 0x1FFFFFFFFFFFE00LL) == 0 )
        {
          v11 = *(_BYTE *)(v9 + 34) & 7;
          if ( v11 == 6 || (unsigned __int8)(v11 - 2) <= 2u )
          {
            if ( !a3 )
            {
              PfnPriority = MiGetPfnPriority(48 * v8 - 0x58000000000LL);
              if ( v13 != PfnPriority )
              {
                if ( v15 == 2 )
                  MiRelinkStandbyPage(v14, v13);
                else
                  *(_BYTE *)(v9 + 35) = v13 | *(_BYTE *)(v9 + 35) & 0xF8;
              }
              _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
              __writecr8(v10);
              goto LABEL_15;
            }
            if ( (*v4 & 0x80u) != 0LL && v11 == 2 && !*(_WORD *)(v9 + 32) )
            {
              v19 = *(_QWORD *)(v9 + 16);
              v20 = (v19 & 0x400) != 0 ? v19 >> 11 : v19 >> 3;
              if ( (v20 & 1) == 0 )
              {
                MiSetNonResidentPteHeat((unsigned __int64 *)(v9 + 16), 1);
                _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                if ( KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & v21) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
                {
                  v22 = KeGetCurrentPrcb();
                  _InterlockedAnd((volatile signed __int32 *)v22->SchedulerAssist, 0xFFFEFFFF);
                  KiRemoveSystemWorkPriorityKick(v22);
                }
                __writecr8(v10);
                if ( (unsigned int)MiAddPageToHeatRanges(&v28, v8) )
                  MiNotifyPageHeat(&v28);
                goto LABEL_15;
              }
            }
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
        {
          v23 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v23->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v23);
        }
        __writecr8(v10);
        v25 |= 2uLL;
        v7 = -1073741788;
        v17 = v25;
        *(_OWORD *)v4 = v24;
        v4[2] = v17;
      }
      else
      {
        v7 = -1073741584;
      }
LABEL_15:
      v4 += 3;
      if ( (unsigned __int64)v4 >= v27 )
      {
        CurrentThread = v26;
        break;
      }
    }
  }
  if ( a3 && v29 )
    MiNotifyPageHeat(&v28);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14043DAB8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_14043DAB8);
  KeAbPostRelease((ULONG_PTR)&qword_14043DAB8);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v7;
}
