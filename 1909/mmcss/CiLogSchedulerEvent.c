/*
 * XREFs of CiLogSchedulerEvent @ 0x1C0003BC4
 * Callers:
 *     CiSchedulerWait @ 0x1C0001160 (CiSchedulerWait.c)
 *     CiSchedulerTaskIndexYield @ 0x1C0001DF0 (CiSchedulerTaskIndexYield.c)
 *     CiSchedulerSetPriority @ 0x1C0002540 (CiSchedulerSetPriority.c)
 *     CiSchedulerThreadFunction @ 0x1C0002C80 (CiSchedulerThreadFunction.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002EE0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall CiLogSchedulerEvent(__int64 a1, int a2)
{
  struct _KTHREAD *v3; // rcx
  HANDLE ThreadProcessId; // rax
  struct _KTHREAD *v5; // rcx
  __int64 v6; // rax
  HANDLE v8; // [rsp+30h] [rbp-68h] BYREF
  HANDLE ThreadId; // [rsp+38h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-58h] BYREF
  HANDLE *p_ThreadId; // [rsp+50h] [rbp-48h]
  __int64 v12; // [rsp+58h] [rbp-40h]
  int *v13; // [rsp+60h] [rbp-38h]
  __int64 v14; // [rsp+68h] [rbp-30h]
  __int64 v15; // [rsp+70h] [rbp-28h]
  __int64 v16; // [rsp+78h] [rbp-20h]
  int v17; // [rsp+A8h] [rbp+10h] BYREF

  v17 = a2;
  v3 = *(struct _KTHREAD **)(a1 + 96);
  v8 = 0LL;
  ThreadId = 0LL;
  ThreadProcessId = PsGetThreadProcessId(v3);
  v5 = *(struct _KTHREAD **)(a1 + 96);
  v8 = ThreadProcessId;
  ThreadId = PsGetThreadId(v5);
  *(_QWORD *)&UserData.Size = 4LL;
  UserData.Ptr = (ULONGLONG)&v8;
  v12 = 4LL;
  p_ThreadId = &ThreadId;
  v13 = &v17;
  v6 = *(_QWORD *)(a1 + 72);
  v14 = 1LL;
  v15 = v6 + 144;
  v16 = 4LL;
  return EtwWrite(RegHandle, &CiSchedulerPriorityEvent, 0LL, 4u, &UserData);
}
