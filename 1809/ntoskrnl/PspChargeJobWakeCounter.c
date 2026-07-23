/*
 * XREFs of PspChargeJobWakeCounter @ 0x1405FE81C
 * Callers:
 *     PspAssignProcessToJob @ 0x140606664 (PspAssignProcessToJob.c)
 *     PspChargeProcessWakeCounter @ 0x140637C90 (PspChargeProcessWakeCounter.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     PspUnlockJob @ 0x1405FF0C0 (PspUnlockJob.c)
 *     PspLockRootJobShared @ 0x1405FF1FC (PspLockRootJobShared.c)
 *     PspSendWakeNotification @ 0x1406010F4 (PspSendWakeNotification.c)
 *     EtwTraceWakeCounter @ 0x1408B9144 (EtwTraceWakeCounter.c)
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
  int v8; // ebp
  char *v9; // rbx
  __int64 v10; // r12
  unsigned int v11; // r15d
  __int64 v12; // rax
  signed __int64 v13; // rsi
  __int64 v14; // rcx
  bool v15; // zf
  int v16; // eax
  bool v17; // bp
  int v18; // ecx
  int v19; // eax
  _QWORD v20[2]; // [rsp+30h] [rbp-58h] BYREF
  struct _KTHREAD *v21; // [rsp+40h] [rbp-48h]
  int v22; // [rsp+90h] [rbp+8h]

  v22 = (int)Object;
  CurrentThread = KeGetCurrentThread();
  v8 = (int)Object;
  v9 = Object;
  v10 = a3;
  v21 = CurrentThread;
  v20[0] = 0LL;
  v11 = 1 << a3;
  if ( (a5 & 1) != 0 )
    PspLockRootJobShared(Object, CurrentThread, v20);
  do
  {
    if ( (a5 & 1) != 0 )
      ExAcquireResourceSharedLite((PERESOURCE)(v9 + 56), 1u);
    v12 = 944LL;
    if ( (a5 & 4) == 0 )
      v12 = 8 * v10 + 888;
    v13 = a4 + _InterlockedExchangeAdd64((volatile signed __int64 *)&v9[v12], a4);
    if ( (a5 & 4) != 0 )
    {
      if ( *((_DWORD *)v9 + 214) )
      {
        if ( (a5 & 2) != 0 && (_BYTE)KdDebuggerEnabled )
          __int2c();
        if ( (xmmword_140542350 & 0x200) != 0 )
          EtwTraceWakeCounter(v8, v10, 0, a6, a7);
      }
      if ( (a5 & 1) != 0 )
        ExReleaseResourceLite((PERESOURCE)(v9 + 56));
    }
    else
    {
      v14 = *((_QWORD *)v9 + 119);
      v15 = (*((_DWORD *)v9 + 326) & 0x800) == 0;
      v16 = *((_DWORD *)v9 + 326) & 0x800;
      v20[1] = v14;
      v17 = !v15;
      if ( v16 )
      {
        if ( !v13 )
        {
          v17 = !v15;
          if ( (HIDWORD(v14) & v11) == 0 )
          {
            v17 = 0;
            _InterlockedOr((volatile signed __int32 *)v9 + 240, v11);
          }
        }
      }
      if ( (a5 & 1) != 0 )
        ExReleaseResourceLite((PERESOURCE)(v9 + 56));
      if ( v17 )
      {
        v18 = 6;
        if ( a4 <= 0 )
          v18 = 0;
        v19 = v18 | 1;
        if ( (a5 & 1) == 0 )
          v19 = v18;
        PspSendWakeNotification(v9, v19);
      }
      v8 = v22;
    }
    v9 = (char *)*((_QWORD *)v9 + 134);
  }
  while ( v9 != a2 && (*((_DWORD *)v9 + 326) & 0x1000) != 0 );
  if ( (a5 & 1) != 0 )
    PspUnlockJob(v20[0], v21);
}
