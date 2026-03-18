/*
 * XREFs of sub_140343AB0 @ 0x140343AB0
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x14003AEC0 (KeDelayExecutionThread.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x1400896E0 (KeResetEvent.c)
 *     ExGenRandom @ 0x14009C340 (ExGenRandom.c)
 *     KeExitRetpoline @ 0x140101AD8 (KeExitRetpoline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     PsQueryThreadTerminationPort @ 0x1405B0380 (PsQueryThreadTerminationPort.c)
 *     KeRundownApcQueues @ 0x14060F35C (KeRundownApcQueues.c)
 */

void __fastcall __noreturn sub_140343AB0(__int64 a1)
{
  unsigned __int64 v2; // rdi
  struct _KTHREAD *CurrentThread; // rax
  struct _KEVENT *p_Object; // r14
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdi
  unsigned __int8 CurrentIrql; // r13
  _BYTE *v12; // rdx
  __int64 v13; // r10
  __int64 v14; // rdi
  unsigned __int64 v15; // r10
  _QWORD *v16; // r8
  char *v17; // rcx
  char v18; // al
  unsigned int v19; // r9d
  unsigned int v20; // ebx
  __int64 v21; // r12
  unsigned int v22; // r11d
  char v23; // di
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v28; // rdi
  bool v29; // zf
  __int64 v30; // rdi
  __int64 *ThreadTerminationPort; // [rsp+38h] [rbp-40h]
  __int64 v32; // [rsp+40h] [rbp-38h] BYREF
  _DWORD v33[4]; // [rsp+48h] [rbp-30h] BYREF
  __int16 Object; // [rsp+58h] [rbp-20h] BYREF
  char v35; // [rsp+5Ah] [rbp-1Eh]
  int v36; // [rsp+5Ch] [rbp-1Ch]
  _QWORD v37[3]; // [rsp+60h] [rbp-18h] BYREF
  __int64 v38; // [rsp+D0h] [rbp+58h]
  LARGE_INTEGER Interval; // [rsp+D8h] [rbp+60h] BYREF

  KeExitRetpoline();
  ThreadTerminationPort = (__int64 *)PsQueryThreadTerminationPort();
  v2 = (unsigned int)ExGenRandom(1);
  v29 = *(_QWORD *)(a1 + 8) == 1LL;
  Interval.QuadPart = -1200000000LL - v2 % 0x5F5E100;
  if ( v29 )
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
    v37[1] = v37;
    p_Object = (struct _KEVENT *)&Object;
    v35 = 6;
    v37[0] = v37;
    v36 = 0;
  }
  v5 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0LL;
  v6 = *(_QWORD *)(v5 + 32);
  v7 = (unsigned int)ExGenRandom(1) ^ 0x6A15A217BC2A27DBLL;
  *ThreadTerminationPort = 0LL;
  v8 = v6 ^ v7;
  v9 = v5 ^ v7;
  v10 = v8;
  while ( 1 )
  {
    if ( (v10 ^ v7) >> 47 == -1 || (v10 ^ v7) >> 47 == 0 )
    {
      (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))((v9 ^ v7) + 0x18))(
        v9 ^ v7,
        v10 ^ v7,
        *(_QWORD *)((v9 ^ v7) + 0x28),
        *(_QWORD *)((v9 ^ v7) + 0x30));
      v10 = v7 ^ *(_QWORD *)((v9 ^ v7) + 0x20);
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v33[0] = 34539786;
    v33[1] = 218497804;
    v33[2] = 235143175;
    v12 = v33;
    v33[3] = 134284555;
    v13 = v10 ^ v7 ^ *(_QWORD *)((v9 ^ v7) + 0x40);
    v14 = 16LL;
    v15 = v13 | 0xFFFF800000000000uLL;
    v16 = (_QWORD *)v15;
    v17 = (char *)v33;
    v38 = __ROR8__(v15, v15 & 0x3F);
    do
    {
      v18 = *v17++;
      *v12++ = v18 ^ 0xA;
      --v14;
    }
    while ( v14 );
    v19 = 0;
    v20 = 16;
    v21 = v38;
    v22 = 25;
    do
    {
      v23 = ~(unsigned __int8)*v16 & 0x3F;
      *v16 = v15 + (KiWaitAlways ^ _byteswap_uint64(v21 ^ __ROL8__(KiWaitNever ^ *v16, KiWaitNever))) + v19;
      v21 = (v15 + __ROL8__(__ROR8__(v19 ^ (unsigned __int64)(200 - v19), v23) ^ v21, v23)) ^ 0x3D406922;
      v24 = v20;
      do
      {
        v25 = __ROL8__(*v16, 4);
        *v16 = *((unsigned __int8 *)v33 + (v25 & 0xF)) | v25 & 0xFFFFFFFFFFFFFFF0uLL;
        --v24;
      }
      while ( v24 );
      ++v16;
      if ( ++v19 == 25 )
      {
        if ( *(_QWORD *)v15 != 0x85131481131482ELL )
        {
          *(v16 - 1) ^= *(_QWORD *)v15 ^ 0x85131481131482ELL;
          v22 += *((_DWORD *)v16 - 1);
          *(v16 - 1) ^= *(_QWORD *)v15 ^ 0x85131481131482ELL;
        }
        v20 = 1;
      }
    }
    while ( v19 < v22 );
    v26 = *(_QWORD *)v15 ^ 0x85131481131482ELL;
    *(_BYTE *)(v15 + 3) = 17;
    *(_BYTE *)(v15 + 2) = 49;
    *(_BYTE *)(v15 + 1) = 72;
    *(_BYTE *)v15 = 46;
    ((void (__fastcall *)(unsigned __int64, __int64, _QWORD, _QWORD))v15)(v15, v26, 0LL, 0LL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(CurrentIrql);
    v28 = *ThreadTerminationPort;
    v29 = *ThreadTerminationPort == 0;
    if ( *ThreadTerminationPort > 0 )
    {
      v30 = -v28;
      *ThreadTerminationPort = 0LL;
      v32 = v30;
      (*(void (__fastcall **)(_QWORD))(v30 + 16))(*(_QWORD *)(v30 + 24));
      memset((void *)v30, 0, 0x20uLL);
      memset(&v32, 0, sizeof(v32));
      v28 = *ThreadTerminationPort;
      v29 = *ThreadTerminationPort == 0;
    }
    if ( v29 )
    {
      do
      {
        if ( (v7 & 1) != 0 )
          KeDelayExecutionThread(0, 0, &Interval);
        else
          KeWaitForSingleObject(p_Object, Executive, 0, 0, &Interval);
        v28 = *ThreadTerminationPort;
      }
      while ( !*ThreadTerminationPort );
    }
    v9 = v7 ^ v28;
    v10 = v7 ^ *(_QWORD *)(v28 + 32);
    *ThreadTerminationPort = 0LL;
    if ( (v7 & 1) != 0 )
      KeDelayExecutionThread(0, 0, &Interval);
    else
      KeWaitForSingleObject(p_Object, Executive, 0, 0, &Interval);
  }
}
