/*
 * XREFs of EtwpProfileInterrupt @ 0x14032EEE0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x14001D750 (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpProfileInterrupt(__int64 a1)
{
  unsigned __int64 v1; // rdx
  int v2; // ecx
  struct _KTHREAD *CurrentThread; // r9
  unsigned int CurrentRunTime; // eax
  _KPROCESS *Process; // r11
  char v6; // r8
  struct _KPRCB *CurrentPrcb; // r10
  unsigned __int8 NestingLevel; // al
  char v9; // r8
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rdx
  char *v11; // rax
  unsigned __int64 v13; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v14; // [rsp+38h] [rbp-28h]
  __int16 v15; // [rsp+3Ch] [rbp-24h]
  char v16; // [rsp+3Eh] [rbp-22h]
  char v17; // [rsp+3Fh] [rbp-21h]
  unsigned __int64 *v18; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+48h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 360);
  v18 = 0LL;
  v19 = 0LL;
  v2 = 34656770;
  v17 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( v1 > 0x7FFFFFFEFFFFLL )
    v2 = 34658818;
  CurrentRunTime = CurrentThread[1].CurrentRunTime;
  Process = CurrentThread->Process;
  v16 = 0;
  v14 = CurrentRunTime;
  v6 = 8 * CurrentThread->Priority;
  v16 = v6;
  v13 = v1;
  v15 = 1;
  CurrentPrcb = KeGetCurrentPrcb();
  NestingLevel = CurrentPrcb->NestingLevel;
  if ( NestingLevel != 2 )
  {
    if ( NestingLevel <= 1u )
      goto LABEL_9;
    goto LABEL_7;
  }
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
  {
LABEL_7:
    v9 = v6 | 2;
    goto LABEL_8;
  }
  v9 = v6 | 1;
LABEL_8:
  v2 &= ~0x4000u;
  v16 = v9;
LABEL_9:
  SchedulingGroup = CurrentThread->SchedulingGroup;
  if ( SchedulingGroup )
  {
    v11 = (char *)SchedulingGroup + CurrentPrcb->ScbOffset;
    do
    {
      if ( *((_DWORD *)v11 + 29) > 0xFFu )
        LOBYTE(SchedulingGroup) = -1;
      else
        LOBYTE(SchedulingGroup) = v11[116];
      if ( (_BYTE)SchedulingGroup )
        break;
      v11 = (char *)*((_QWORD *)v11 + 51);
    }
    while ( v11 );
  }
  v18 = &v13;
  v17 = (char)SchedulingGroup;
  v19 = 16LL;
  return EtwTraceSiloKernelEvent(Process[2].ActiveProcessors.Bitmap[3], (int)&v18, 1, 0x20000002u, 3886, v2);
}
