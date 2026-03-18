/*
 * XREFs of KiExpireTimerTable @ 0x140166994
 * Callers:
 *     KiTimerExpiration @ 0x140166854 (KiTimerExpiration.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiProcessExpiredTimerList @ 0x1400A3270 (KiProcessExpiredTimerList.c)
 *     KiRemoveEntryTimer @ 0x1401300B8 (KiRemoveEntryTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

int __fastcall KiExpireTimerTable(__int64 a1, __int64 a2, int a3, int a4, int a5, unsigned __int64 a6, int *a7)
{
  unsigned __int64 v7; // rax
  unsigned int v8; // ecx
  int v9; // r12d
  unsigned int v10; // r13d
  int v11; // r8d
  __int64 v12; // r15
  __int64 v14; // rbx
  _QWORD *v15; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  _QWORD *v18; // rsi
  ULONG_PTR v19; // rsi
  struct _KPRCB *v20; // rcx
  _DWORD *v21; // rdx
  ULONG_PTR BugCheckParameter4; // rcx
  char v23; // al
  int v24; // eax
  bool v25; // zf
  _DWORD *v26; // rcx
  int v27; // eax
  struct _KPRCB *v28; // rcx
  _DWORD *v29; // rdx
  int v30; // eax
  char v32; // [rsp+33h] [rbp-35h]
  unsigned int v33; // [rsp+48h] [rbp-20h]
  unsigned int v35; // [rsp+C0h] [rbp+58h]
  int v36; // [rsp+C8h] [rbp+60h] BYREF

  LODWORD(v7) = 0;
  v8 = a4 + a3 - 1;
  v32 = -64;
  v9 = a3 - 1;
  v10 = 0;
  v11 = v8 + a5;
  a5 += v8;
  v12 = 0LL;
  v35 = v8;
  do
  {
    v14 = 32 * ((unsigned __int8)++v9 + 16LL);
    if ( v10 > v8 )
    {
      LODWORD(v7) = a6;
      if ( *(_QWORD *)(v14 + a2 + 24) > a6 )
        continue;
    }
    v15 = (_QWORD *)(v14 + a2 + 8);
    if ( v15 != (_QWORD *)*v15 )
    {
      do
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v36 = 0;
        while ( 1 )
        {
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          if ( SchedulerAssist )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v24 = SchedulerAssist[5];
              v25 = v24 == -1;
              LODWORD(v7) = v24 + 1;
              SchedulerAssist[5] = v7;
              if ( v25 )
                LODWORD(v7) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v14 + a2), 0LL) )
            break;
          v26 = CurrentPrcb->SchedulerAssist;
          if ( v26 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v27 = v26[5] - 1;
              v26[5] = v27;
              if ( !v27 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          do
          {
            KeYieldProcessorEx(&v36);
            v7 = *(_QWORD *)(v14 + a2);
          }
          while ( v7 );
        }
        do
        {
          v18 = (_QWORD *)*v15;
          if ( v15 == (_QWORD *)*v15 )
            goto LABEL_15;
          v7 = *(v18 - 1);
          v19 = (ULONG_PTR)(v18 - 4);
          if ( v7 > a6 )
          {
            *(_QWORD *)(v14 + a2 + 24) = v7;
LABEL_15:
            _InterlockedAnd64((volatile signed __int64 *)(v14 + a2), 0LL);
            v20 = KeGetCurrentPrcb();
            v21 = v20->SchedulerAssist;
            if ( v21 )
            {
              if ( v20->NestingLevel <= 1u )
              {
                LODWORD(v7) = v21[5] - 1;
                v21[5] = v7;
                if ( !(_DWORD)v7 )
                  LODWORD(v7) = KiRemoveSystemWorkPriorityKick(v20);
              }
            }
            goto LABEL_16;
          }
          KiRemoveEntryTimer(a2, v19, (unsigned __int8)v9);
          BugCheckParameter4 = _InterlockedExchange64((volatile __int64 *)(a2 + 8 * v12), v19);
          if ( BugCheckParameter4 )
            KeBugCheckEx(0xC7u, 8uLL, 1uLL, v19, BugCheckParameter4);
          v23 = v32 ^ v12;
          v12 = (unsigned int)(v12 + 1);
          v33 = 0;
          v32 ^= v23 & 0x3F;
          HIBYTE(v33) = v32 ^ *(_BYTE *)(v19 + 3);
          LODWORD(v7) = v33;
          _InterlockedXor((volatile signed __int32 *)v19, v33);
        }
        while ( (_DWORD)v12 != 64 );
        _InterlockedAnd64((volatile signed __int64 *)(v14 + a2), 0LL);
        v28 = KeGetCurrentPrcb();
        v29 = v28->SchedulerAssist;
        if ( v29 )
        {
          if ( v28->NestingLevel <= 1u )
          {
            v30 = v29[5] - 1;
            v29[5] = v30;
            if ( !v30 )
              KiRemoveSystemWorkPriorityKick(v28);
          }
        }
        LODWORD(v7) = KiProcessExpiredTimerList(a1, a7, a2, 0x40u);
        v12 = 0LL;
      }
      while ( v15 != (_QWORD *)*v15 );
LABEL_16:
      v8 = v35;
      v11 = a5;
    }
    ++v10;
  }
  while ( v9 != v11 );
  if ( (_DWORD)v12 )
    LODWORD(v7) = KiProcessExpiredTimerList(a1, a7, a2, v12);
  return v7;
}
