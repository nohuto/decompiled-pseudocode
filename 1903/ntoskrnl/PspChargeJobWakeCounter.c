/*
 * XREFs of PspChargeJobWakeCounter @ 0x140611040
 * Callers:
 *     PspChargeProcessWakeCounter @ 0x1405E3900 (PspChargeProcessWakeCounter.c)
 *     PspAssignProcessToJob @ 0x140695C0C (PspAssignProcessToJob.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C730 (ExAcquireResourceSharedLite.c)
 *     PspUnlockJob @ 0x140611910 (PspUnlockJob.c)
 *     PspLockRootJobShared @ 0x140611A4C (PspLockRootJobShared.c)
 *     PspSendWakeNotification @ 0x14061306C (PspSendWakeNotification.c)
 *     EtwTraceWakeCounter @ 0x1408F4988 (EtwTraceWakeCounter.c)
 */

void __fastcall PspChargeJobWakeCounter(
        char *Object,
        char *a2,
        int a3,
        signed __int64 a4,
        char a5,
        __int64 a6,
        __int64 a7)
{
  struct _KTHREAD *CurrentThread; // r13
  int v8; // r14d
  char *v9; // rbx
  int v10; // ebp
  int v12; // edi
  int v14; // esi
  __int64 v15; // rax
  signed __int64 v16; // rdi
  bool v17; // r14
  int v18; // eax
  int v19; // [rsp+90h] [rbp+8h]
  unsigned int v20; // [rsp+98h] [rbp+10h]
  __int64 v22; // [rsp+A8h] [rbp+20h] BYREF

  v19 = (int)Object;
  CurrentThread = KeGetCurrentThread();
  v8 = (int)Object;
  v9 = Object;
  v22 = 0LL;
  v10 = a5 & 4;
  v20 = 1 << a3;
  v12 = a3;
  v14 = a5 & 1;
  if ( (a5 & 1) != 0 )
    PspLockRootJobShared(Object, CurrentThread, &v22);
  do
  {
    if ( v14 )
      ExAcquireResourceSharedLite((PERESOURCE)(v9 + 56), 1u);
    if ( v10 )
      v15 = 944LL;
    else
      v15 = 8LL * v12 + 888;
    v16 = a4 + _InterlockedExchangeAdd64((volatile signed __int64 *)&v9[v15], a4);
    if ( v10 )
    {
      if ( *((_DWORD *)v9 + 214) )
      {
        if ( (a5 & 2) != 0 && (_BYTE)KdDebuggerEnabled )
          __int2c();
        if ( (xmmword_140572410 & 0x200) != 0 )
          EtwTraceWakeCounter(v8, a3, 0, a6, a7);
      }
      if ( v14 )
        ExReleaseResourceLite((PERESOURCE)(v9 + 56));
    }
    else
    {
      v17 = (*((_DWORD *)v9 + 326) & 0x800) != 0;
      if ( (*((_DWORD *)v9 + 326) & 0x800) != 0 && !v16 )
      {
        v17 = (*((_DWORD *)v9 + 326) & 0x800) != 0;
        if ( (HIDWORD(*((_QWORD *)v9 + 119)) & v20) == 0 )
        {
          v17 = 0;
          _InterlockedOr((volatile signed __int32 *)v9 + 240, v20);
        }
      }
      if ( v14 )
        ExReleaseResourceLite((PERESOURCE)(v9 + 56));
      if ( v17 )
      {
        v18 = 6;
        if ( a4 <= 0 )
          v18 = 0;
        if ( v14 )
          v18 |= 1u;
        PspSendWakeNotification(v9, v18);
      }
      v8 = v19;
    }
    v9 = (char *)*((_QWORD *)v9 + 134);
    if ( v9 == a2 )
      break;
    v12 = a3;
  }
  while ( (*((_DWORD *)v9 + 326) & 0x1000) != 0 );
  if ( v14 )
    PspUnlockJob(v22, CurrentThread);
}
