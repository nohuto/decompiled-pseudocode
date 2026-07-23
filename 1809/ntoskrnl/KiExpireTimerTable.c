/*
 * XREFs of KiExpireTimerTable @ 0x140156E30
 * Callers:
 *     KiTimerExpiration @ 0x140156CD4 (KiTimerExpiration.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiProcessExpiredTimerList @ 0x1400C7760 (KiProcessExpiredTimerList.c)
 *     KiRemoveEntryTimer @ 0x14013199C (KiRemoveEntryTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

void __fastcall KiExpireTimerTable(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, unsigned __int64 a6, __int64 a7)
{
  int v8; // edx
  int v9; // r15d
  unsigned int v10; // ecx
  __int64 v11; // rdx
  unsigned int v12; // r12d
  __int64 v13; // rbp
  __int64 v14; // rbx
  _QWORD *v15; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  _QWORD *v18; // rsi
  unsigned __int64 v19; // rax
  ULONG_PTR v20; // rsi
  struct _KPRCB *v21; // rcx
  _DWORD *v22; // rdx
  int v23; // eax
  _DWORD *v24; // rcx
  int v25; // eax
  ULONG_PTR BugCheckParameter4; // rcx
  char v27; // al
  char v28; // dl
  char v29; // al
  struct _KPRCB *v30; // rcx
  _DWORD *v31; // rdx
  int v32; // eax
  int v33; // eax
  unsigned int v34; // [rsp+30h] [rbp-68h]
  int v36; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v37; // [rsp+B0h] [rbp+18h]
  unsigned int v38; // [rsp+B8h] [rbp+20h]

  v8 = a5;
  v9 = a3 - 1;
  v10 = a3 + a4 - 1;
  LOBYTE(a5) = -64;
  v11 = v10 + v8;
  v37 = v10;
  v12 = 0;
  v38 = v11;
  v13 = 0LL;
  do
  {
    v14 = 32 * ((unsigned __int8)++v9 + 16LL);
    if ( v12 <= v10 || *(_QWORD *)(v14 + a2 + 24) <= a6 )
    {
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
                v23 = SchedulerAssist[5];
                SchedulerAssist[5] = v23 + 1;
                if ( v23 == -1 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            if ( !_interlockedbittestandset64((volatile signed __int32 *)(v14 + a2), 0LL) )
              break;
            v24 = CurrentPrcb->SchedulerAssist;
            if ( v24 )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v25 = v24[5] - 1;
                v24[5] = v25;
                if ( !v25 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            do
              KeYieldProcessorEx(&v36, v11, a3);
            while ( *(_QWORD *)(v14 + a2) );
          }
          do
          {
            v18 = (_QWORD *)*v15;
            if ( v15 == (_QWORD *)*v15 )
              goto LABEL_14;
            v19 = *(v18 - 1);
            v20 = (ULONG_PTR)(v18 - 4);
            if ( v19 > a6 )
            {
              *(_QWORD *)(v14 + a2 + 24) = v19;
LABEL_14:
              _InterlockedAnd64((volatile signed __int64 *)(v14 + a2), 0LL);
              v21 = KeGetCurrentPrcb();
              v22 = v21->SchedulerAssist;
              if ( v22 )
              {
                if ( v21->NestingLevel <= 1u )
                {
                  v33 = v22[5] - 1;
                  v22[5] = v33;
                  if ( !v33 )
                    KiRemoveSystemWorkPriorityKick(v21);
                }
              }
              goto LABEL_15;
            }
            KiRemoveEntryTimer(a2, v20, (unsigned __int8)v9);
            BugCheckParameter4 = _InterlockedExchange64((volatile __int64 *)(a2 + 8 * v13), v20);
            if ( BugCheckParameter4 )
              KeBugCheckEx(0xC7u, 8uLL, 1uLL, v20, BugCheckParameter4);
            v34 = 0;
            v27 = v13 ^ a5;
            v13 = (unsigned int)(v13 + 1);
            v28 = v27 & 0x3F ^ a5;
            v29 = v28 ^ *(_BYTE *)(v20 + 3);
            LOBYTE(a5) = v28;
            HIBYTE(v34) = v29;
            _InterlockedXor((volatile signed __int32 *)v20, v34);
          }
          while ( (_DWORD)v13 != 64 );
          _InterlockedAnd64((volatile signed __int64 *)(v14 + a2), 0LL);
          v30 = KeGetCurrentPrcb();
          v31 = v30->SchedulerAssist;
          if ( v31 )
          {
            if ( v30->NestingLevel <= 1u )
            {
              v32 = v31[5] - 1;
              v31[5] = v32;
              if ( !v32 )
                KiRemoveSystemWorkPriorityKick(v30);
            }
          }
          KiProcessExpiredTimerList(a1, a7, a2, 0x40uLL);
          v13 = 0LL;
        }
        while ( v15 != (_QWORD *)*v15 );
LABEL_15:
        v10 = v37;
        v11 = v38;
      }
      ++v12;
    }
  }
  while ( v9 != (_DWORD)v11 );
  if ( (_DWORD)v13 )
    KiProcessExpiredTimerList(a1, a7, a2, (unsigned int)v13);
}
