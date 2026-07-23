/*
 * XREFs of sub_140322760 @ 0x140322760
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     ExGenRandom @ 0x1400627E0 (ExGenRandom.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     KeExitRetpoline @ 0x14013926C (KeExitRetpoline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     PsQueryThreadTerminationPort @ 0x1405813A4 (PsQueryThreadTerminationPort.c)
 *     KeRundownApcQueues @ 0x1405F8DE0 (KeRundownApcQueues.c)
 */

void __fastcall __noreturn sub_140322760(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *ThreadTerminationPort; // r15
  unsigned __int64 v6; // rdi
  struct _KTHREAD *CurrentThread; // rax
  struct _KEVENT *p_Object; // r14
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rdi
  unsigned __int8 CurrentIrql; // r12
  _BYTE *v16; // rdx
  __int64 v17; // r10
  __int64 v18; // rdi
  unsigned __int64 v19; // r10
  _QWORD *v20; // r9
  char *v21; // rcx
  char v22; // al
  unsigned int v23; // r11d
  __int64 v24; // rbx
  unsigned __int64 v25; // r13
  char v26; // di
  char v27; // cl
  __int64 v28; // rdx
  char v29; // cl
  __int64 v30; // rdi
  __int64 v31; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v33; // rdi
  bool v34; // zf
  __int64 v35; // rdi
  __int64 v36; // [rsp+38h] [rbp-40h] BYREF
  _DWORD v37[4]; // [rsp+40h] [rbp-38h] BYREF
  __int16 Object; // [rsp+50h] [rbp-28h] BYREF
  char v39; // [rsp+52h] [rbp-26h]
  int v40; // [rsp+54h] [rbp-24h]
  _QWORD v41[4]; // [rsp+58h] [rbp-20h] BYREF
  LARGE_INTEGER Interval; // [rsp+D0h] [rbp+58h] BYREF
  __int64 v43; // [rsp+D8h] [rbp+60h]

  KeExitRetpoline(a1, a2, a3, a4);
  ThreadTerminationPort = (__int64 *)PsQueryThreadTerminationPort();
  v6 = (unsigned int)ExGenRandom(1);
  v34 = *(_QWORD *)(a1 + 8) == 1LL;
  Interval.QuadPart = -1200000000LL - v6 % 0x5F5E100;
  if ( v34 )
    KeRundownApcQueues(KeGetCurrentThread());
  if ( (unsigned int)ExGenRandom(1) % 0xA < 3 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
  }
  p_Object = *(struct _KEVENT **)a1;
  KeWaitForSingleObject(*(PVOID *)a1, Executive, 0, 0, 0LL);
  if ( (unsigned int)ExGenRandom(1) % 0xA >= 5 )
  {
    KeResetEvent(p_Object);
  }
  else
  {
    Object = 0;
    v41[1] = v41;
    p_Object = (struct _KEVENT *)&Object;
    v39 = 6;
    v41[0] = v41;
    v40 = 0;
  }
  v9 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0LL;
  v10 = *(_QWORD *)(v9 + 32);
  v11 = (unsigned int)ExGenRandom(1) ^ 0x6A15A217BC2A27DBLL;
  *ThreadTerminationPort = 0LL;
  v12 = v10 ^ v11;
  v13 = v9 ^ v11;
  v14 = v12;
  while ( 1 )
  {
    if ( (v14 ^ v11) >> 47 == -1 || (v14 ^ v11) >> 47 == 0 )
    {
      (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))((v13 ^ v11) + 0x18))(
        v13 ^ v11,
        v14 ^ v11,
        *(_QWORD *)((v13 ^ v11) + 0x28),
        *(_QWORD *)((v13 ^ v11) + 0x30));
      v14 = v11 ^ *(_QWORD *)((v13 ^ v11) + 0x20);
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v37[0] = 34539786;
    v37[1] = 218497804;
    v37[2] = 235143175;
    v16 = v37;
    v37[3] = 134284555;
    v17 = v14 ^ v11 ^ *(_QWORD *)((v13 ^ v11) + 0x40);
    v18 = 16LL;
    v19 = v17 | 0xFFFF800000000000uLL;
    v20 = (_QWORD *)v19;
    v21 = (char *)v37;
    v43 = __ROR8__(v19, v19 & 0x3F);
    do
    {
      v22 = *v21++;
      *v16++ = v22 ^ 0xA;
      --v18;
    }
    while ( v18 );
    v23 = 0;
    v24 = 0LL;
    v25 = v43;
    do
    {
      v26 = *v20 & 0x3F;
      v27 = ~(unsigned __int8)*v20 & 0x3F;
      *v20 = v24 + (KiWaitAlways ^ _byteswap_uint64(v25 ^ __ROL8__(KiWaitNever ^ *v20, KiWaitNever)));
      v28 = __ROR8__(v23 * (200 - v23), v27);
      v29 = v26;
      v30 = 16LL;
      v25 = v19 + __ROL8__(v28 ^ v25, v29);
      do
      {
        *v20 = __ROR8__(*((unsigned __int8 *)v37 + (*(_BYTE *)v20 & 0xF)) | *v20 & 0xFFFFFFFFFFFFFFF0uLL, 4);
        --v30;
      }
      while ( v30 );
      ++v20;
      ++v23;
      v24 += v19;
    }
    while ( v23 < 0x19 );
    v43 = v25;
    v43 = *(_QWORD *)v19 ^ 0x85131481131482ELL;
    v31 = v43;
    *(_BYTE *)(v19 + 3) = 17;
    *(_BYTE *)(v19 + 2) = 49;
    *(_BYTE *)(v19 + 1) = 72;
    *(_BYTE *)v19 = 46;
    ((void (__fastcall *)(unsigned __int64, __int64, _QWORD, _QWORD))v19)(v19, v31, 0LL, 0LL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(CurrentIrql);
    v33 = *ThreadTerminationPort;
    v34 = *ThreadTerminationPort == 0;
    if ( *ThreadTerminationPort > 0 )
    {
      v35 = -v33;
      *ThreadTerminationPort = 0LL;
      v36 = v35;
      (*(void (__fastcall **)(_QWORD))(v35 + 16))(*(_QWORD *)(v35 + 24));
      memset((void *)v35, 0, 0x20uLL);
      memset(&v36, 0, sizeof(v36));
      v33 = *ThreadTerminationPort;
      v34 = *ThreadTerminationPort == 0;
    }
    if ( v34 )
    {
      do
      {
        if ( (v11 & 1) != 0 )
          KeDelayExecutionThread(0, 0, &Interval);
        else
          KeWaitForSingleObject(p_Object, Executive, 0, 0, &Interval);
        v33 = *ThreadTerminationPort;
      }
      while ( !*ThreadTerminationPort );
    }
    v13 = v11 ^ v33;
    v14 = v11 ^ *(_QWORD *)(v33 + 32);
    *ThreadTerminationPort = 0LL;
    if ( (v11 & 1) != 0 )
      KeDelayExecutionThread(0, 0, &Interval);
    else
      KeWaitForSingleObject(p_Object, Executive, 0, 0, &Interval);
  }
}
