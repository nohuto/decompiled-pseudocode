/*
 * XREFs of EtwpProfileInterrupt @ 0x140311540
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x1400891D0 (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpProfileInterrupt(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r9
  unsigned __int64 v2; // rdx
  int v3; // r8d
  unsigned int CurrentRunTime; // eax
  _KPROCESS *Process; // r10
  char v6; // cl
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int8 NestingLevel; // al
  char v9; // cl
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rax
  char v11; // r9
  char *v12; // rdx
  unsigned __int64 v14; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v15; // [rsp+38h] [rbp-28h]
  __int16 v16; // [rsp+3Ch] [rbp-24h]
  char v17; // [rsp+3Eh] [rbp-22h]
  char v18; // [rsp+3Fh] [rbp-21h]
  unsigned __int64 *v19; // [rsp+40h] [rbp-20h] BYREF
  int v20; // [rsp+48h] [rbp-18h]
  int v21; // [rsp+4Ch] [rbp-14h]

  CurrentThread = KeGetCurrentThread();
  v2 = *(_QWORD *)(a1 + 360);
  v3 = 34656770;
  CurrentRunTime = CurrentThread[1].CurrentRunTime;
  if ( v2 > 0x7FFFFFFEFFFFLL )
    v3 = 34658818;
  Process = CurrentThread->Process;
  v17 = 0;
  v15 = CurrentRunTime;
  v6 = 8 * CurrentThread->Priority;
  v17 = v6;
  v14 = v2;
  v16 = 1;
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
  v3 &= ~0x4000u;
  v17 = v9;
LABEL_9:
  SchedulingGroup = CurrentThread->SchedulingGroup;
  if ( SchedulingGroup )
  {
    v12 = (char *)SchedulingGroup + CurrentPrcb->ScbOffset;
    do
    {
      v11 = -1;
      if ( *((_DWORD *)v12 + 29) <= 0xFFu )
        v11 = *((_DWORD *)v12 + 29);
      if ( v11 )
        break;
      v12 = (char *)*((_QWORD *)v12 + 51);
    }
    while ( v12 );
  }
  else
  {
    v11 = 0;
  }
  v21 = 0;
  v19 = &v14;
  v18 = v11;
  v20 = 16;
  return EtwTraceSiloKernelEvent(*(_QWORD *)&Process[2].ActiveProcessors.Count, (int)&v19, 1, 0x20000002u, 3886, v3);
}
