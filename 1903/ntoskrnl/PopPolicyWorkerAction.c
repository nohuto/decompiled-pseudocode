/*
 * XREFs of PopPolicyWorkerAction @ 0x140725D10
 * Callers:
 *     PopPolicyWorkerThread @ 0x140131900 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopGetPolicyWorker @ 0x1400EE3BC (PopGetPolicyWorker.c)
 *     EtwTraceKernelEvent @ 0x140120D40 (EtwTraceKernelEvent.c)
 *     PopSetPowerActionState @ 0x14015E7AC (PopSetPowerActionState.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     PopReleasePolicyLock @ 0x140595780 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopCompleteAction @ 0x140724590 (PopCompleteAction.c)
 *     PopIssueActionRequest @ 0x140725EAC (PopIssueActionRequest.c)
 */

__int64 PopPolicyWorkerAction()
{
  char v0; // si
  __int64 v1; // r14
  unsigned int v2; // edi
  unsigned int v3; // ebx
  int v4; // ebp
  LONG v5; // edi
  __int64 *i; // rbx
  int v7; // ecx
  __int64 v9; // [rsp+30h] [rbp-38h] BYREF
  LONG v10; // [rsp+38h] [rbp-30h]
  int v11; // [rsp+3Ch] [rbp-2Ch]
  __int64 *v12; // [rsp+40h] [rbp-28h] BYREF
  int v13; // [rsp+48h] [rbp-20h]
  int v14; // [rsp+4Ch] [rbp-1Ch]

  v0 = 0;
  PopAcquirePolicyLock();
  qword_1404431E8 = (__int64)KeGetCurrentThread();
  if ( byte_140443041 == 1 )
  {
    v1 = (int)qword_140443044;
    v2 = HIDWORD(qword_140443044);
    v3 = dword_14044304C;
    PopSetPowerActionState(2);
    v4 = dword_140443054;
    v5 = PopIssueActionRequest(0LL, (unsigned int)v1, v2, v3);
    v0 = 1;
    if ( (PopAction & 2) != 0 )
    {
      if ( HIDWORD(qword_140443044) == 5 )
        v4 = 6;
      dword_140443054 = v4;
      dword_14044304C = dword_14044304C & 0x7FFFFFDC | 0x80000020;
      LOBYTE(PopAction) = PopAction & 0xFD;
      PopSetPowerActionState(1);
      v7 = 2;
    }
    else
    {
      if ( (xmmword_140572410 & 0x8000) != 0 )
      {
        v11 = 0;
        v14 = 0;
        v12 = &v9;
        v9 = v1;
        v10 = v5;
        v13 = 16;
        EtwTraceKernelEvent((__int64)&v12, 1u, 0x80008000, 0x1223u, 0x401802u);
      }
      dword_140443050 = v5;
      PopSetPowerActionState(0);
      for ( i = (__int64 *)PopActionWaiters; i != &PopActionWaiters; i = (__int64 *)*i )
        PopCompleteAction(i[2], v5);
      v7 = 1;
    }
    PopGetPolicyWorker(v7);
  }
  qword_1404431E8 = 0LL;
  PopReleasePolicyLock();
  if ( v0 && PoPdcCallbacks )
    PoPdcCallbacks();
  if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return 0LL;
}
