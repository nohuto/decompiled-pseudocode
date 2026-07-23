/*
 * XREFs of NtUmsThreadYield @ 0x140846E30
 * Callers:
 *     <none>
 * Callees:
 *     KiIsPrimaryPresent @ 0x14029D6F4 (KiIsPrimaryPresent.c)
 *     KiUmsExceptionFilter @ 0x140846E04 (KiUmsExceptionFilter.c)
 */

NTSTATUS __cdecl NtUmsThreadYield(PVOID SchedulerParam)
{
  __int64 v1; // r8
  struct _KTHREAD *CurrentThread; // rdi
  struct _KTHREAD *v3; // rax
  NTSTATUS result; // eax
  _DWORD *Object; // rdi
  __int64 v6; // rbx
  __int64 v7; // rsi

  CurrentThread = KeGetCurrentThread();
  v3 = CurrentThread;
  if ( !CurrentThread )
    v3 = KeGetCurrentThread();
  if ( (v3->Header.Reserved1 & 0x40) == 0 )
    return -1073741637;
  Object = CurrentThread->WaitBlock[3].Object;
  v6 = *(_QWORD *)Object;
  v7 = *(_QWORD *)(*(_QWORD *)Object + 1272LL);
  *(_QWORD *)(*(_QWORD *)Object + 1272LL) = 1LL;
  if ( KiIsPrimaryPresent(v6, (__int64)SchedulerParam, v1) )
  {
    Object[20] |= 1u;
    return 0;
  }
  else
  {
    result = -1073740004;
    *(_QWORD *)(v6 + 1272) = v7;
  }
  return result;
}
