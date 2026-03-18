/*
 * XREFs of MmSetPfnListInfo @ 0x14017801C
 * Callers:
 *     PfpPfnPrioRequest @ 0x1405CED50 (PfpPfnPrioRequest.c)
 * Callees:
 *     MiIdentifyPfn @ 0x1400054D0 (MiIdentifyPfn.c)
 *     MiRelinkStandbyPage @ 0x14000E990 (MiRelinkStandbyPage.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     MiSetNonResidentPteHeat @ 0x1400DBAC0 (MiSetNonResidentPteHeat.c)
 *     MiGetPfnPriority @ 0x1400DBC80 (MiGetPfnPriority.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiAddPageToHeatRanges @ 0x1402EBB38 (MiAddPageToHeatRanges.c)
 *     MiNotifyPageHeat @ 0x1402EBFB4 (MiNotifyPageHeat.c)
 */

__int64 __fastcall MmSetPfnListInfo(__int64 a1, _QWORD *a2, int a3)
{
  struct _KTHREAD *CurrentThread; // r12
  unsigned int v7; // r15d
  unsigned __int64 v8; // r14
  __int64 v9; // rbx
  unsigned __int8 v10; // si
  char v11; // r8
  int PfnPriority; // eax
  int v13; // edx
  ULONG_PTR v14; // rcx
  char v15; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int8 v20; // dl
  struct _KPRCB *v21; // rcx
  struct _KPRCB *v22; // rcx
  __int64 v23; // xmm1_8
  __int128 v24; // [rsp+28h] [rbp-99h] BYREF
  __int64 v25; // [rsp+38h] [rbp-89h]
  struct _KTHREAD *v26; // [rsp+40h] [rbp-81h]
  _QWORD *v27; // [rsp+48h] [rbp-79h]
  int v28; // [rsp+58h] [rbp-69h] BYREF
  int v29; // [rsp+5Ch] [rbp-65h]
  int v30; // [rsp+60h] [rbp-61h]
  _BYTE v31[132]; // [rsp+64h] [rbp-5Dh] BYREF

  v24 = 0uLL;
  v25 = 0LL;
  memset(v31, 0, sizeof(v31));
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
  v29 = 0;
  v30 = 16;
  v7 = 0;
  v27 = &a2[3 * a1];
  --CurrentThread->SpecialApcDisable;
  v26 = CurrentThread;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140468538, 0LL);
  if ( a2 < &a2[3 * a1] )
  {
    while ( 1 )
    {
      v8 = a2[1];
      if ( v8 <= 0xFFFFFFFFFLL && (*(_QWORD *)(48 * v8 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0 )
      {
        v9 = 48 * v8 - 0x58000000000LL;
        *(_QWORD *)&v24 = 0LL;
        v25 = 0LL;
        *((_QWORD *)&v24 + 1) = v8;
        v10 = MiLockPageInline(v9);
        MiIdentifyPfn(v9, (unsigned __int64 *)&v24);
        if ( v25 == a2[2] && (((unsigned __int64)v24 ^ *a2) & 0x1FFFFFFFFFFFE00LL) == 0 )
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
            if ( (*a2 & 0x80u) != 0LL && v11 == 2 && !*(_WORD *)(v9 + 32) )
            {
              v18 = *(_QWORD *)(v9 + 16);
              v19 = (v18 & 0x400) != 0 ? v18 >> 11 : v18 >> 3;
              if ( (v19 & 1) == 0 )
              {
                MiSetNonResidentPteHeat((unsigned __int64 *)(v9 + 16), 1);
                _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                if ( KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & v20) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
                {
                  v21 = KeGetCurrentPrcb();
                  _InterlockedAnd((volatile signed __int32 *)v21->SchedulerAssist, 0xFFFEFFFF);
                  KiRemoveSystemWorkPriorityKick(v21);
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
          v22 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v22->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v22);
        }
        __writecr8(v10);
        v25 |= 2uLL;
        v7 = -1073741788;
        v23 = v25;
        *(_OWORD *)a2 = v24;
        a2[2] = v23;
      }
      else
      {
        v7 = -1073741584;
      }
LABEL_15:
      a2 += 3;
      if ( a2 >= v27 )
      {
        CurrentThread = v26;
        break;
      }
    }
  }
  if ( a3 && v29 )
    MiNotifyPageHeat(&v28);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140468538, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140468538);
  KeAbPostRelease((ULONG_PTR)&qword_140468538);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v7;
}
