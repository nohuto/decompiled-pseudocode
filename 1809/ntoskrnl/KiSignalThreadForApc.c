/*
 * XREFs of KiSignalThreadForApc @ 0x1400F2004
 * Callers:
 *     KeRequestTerminationThread @ 0x1400F13C8 (KeRequestTerminationThread.c)
 *     KeInsertQueueApc @ 0x1400F1500 (KeInsertQueueApc.c)
 *     KiSchedulerApc @ 0x1400F1850 (KiSchedulerApc.c)
 *     KiResumeThread @ 0x1400F1CE0 (KiResumeThread.c)
 *     KiSuspendThread @ 0x1400F2428 (KiSuspendThread.c)
 *     KiInsertDeferredPreemptionApc @ 0x1400F2868 (KiInsertDeferredPreemptionApc.c)
 *     KeTryToInsertQueueApc @ 0x140294E10 (KeTryToInsertQueueApc.c)
 * Callees:
 *     KiSendSoftwareInterrupt @ 0x140003AE4 (KiSendSoftwareInterrupt.c)
 *     KiSignalThread @ 0x1400CE880 (KiSignalThread.c)
 */

char __fastcall KiSignalThreadForApc(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rbx
  unsigned int v4; // eax
  char v5; // r10
  __int64 v6; // rcx
  char v7; // al
  bool v8; // cf
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(char *)(a2 + 80);
  v5 = *(_BYTE *)(a2 + 81);
  if ( v4 == *(unsigned __int8 *)(v3 + 586) )
  {
    if ( v3 == *(_QWORD *)(a1 + 8) )
    {
      if ( !v5 )
      {
        v4 = *(_DWORD *)(v3 + 484);
        v6 = HIWORD(v4);
        if ( !v4 || !*(_QWORD *)(a2 + 48) && !HIWORD(v4) )
        {
          *(_BYTE *)(v3 + 193) = 1;
          if ( !a3 )
          {
            *(_DWORD *)(v3 + 116) |= 0x40u;
            return v4;
          }
LABEL_24:
          LOBYTE(v6) = 1;
          LOBYTE(v4) = HalRequestSoftwareInterrupt(v6);
        }
      }
    }
    else if ( v5 )
    {
      LOBYTE(v4) = *(_BYTE *)(v3 + 388);
      if ( (_BYTE)v4 == 5 && *(_BYTE *)(v3 + 391) == 1 )
      {
        v7 = *(_BYTE *)(v3 + 112) & 7;
        v8 = v7 == 3;
        LOBYTE(v4) = v7 - 3;
        if ( !v8 && (_BYTE)v4 != 1 )
        {
          v4 = *(_DWORD *)(v3 + 116);
          if ( (v4 & 0x10) != 0 || (*(_BYTE *)(v3 + 194) & 2) != 0 )
          {
            *(_BYTE *)(v3 + 112) |= 0x40u;
            LOBYTE(v4) = KiSignalThread(a1, v3, 192LL, 0LL);
            if ( (_BYTE)v4 )
              *(_BYTE *)(v3 + 194) |= 2u;
          }
        }
      }
    }
    else
    {
      *(_BYTE *)(v3 + 193) = 1;
      _InterlockedOr(v10, 0);
      LOBYTE(v4) = *(_BYTE *)(v3 + 388);
      if ( (_BYTE)v4 == 2 )
      {
        v6 = *(unsigned int *)(v3 + 536);
        LODWORD(v6) = v6 & 0x7FFFFFFF;
        if ( KeGetPcr()->Prcb.Number != (_DWORD)v6 )
        {
          LOBYTE(v4) = KiSendSoftwareInterrupt();
          return v4;
        }
        goto LABEL_24;
      }
      if ( (_BYTE)v4 == 5
        && !*(_BYTE *)(v3 + 390)
        && !*(_WORD *)(v3 + 486)
        && (!*(_QWORD *)(a2 + 48) || !*(_WORD *)(v3 + 484) && !*(_BYTE *)(v3 + 192)) )
      {
        LOBYTE(v4) = KiSignalThread(a1, v3, 256LL, 0LL);
        *(_BYTE *)(v3 + 112) |= 0x20u;
      }
    }
  }
  return v4;
}
