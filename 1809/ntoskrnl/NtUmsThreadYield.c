/*
 * XREFs of NtUmsThreadYield @ 0x140845BF0
 * Callers:
 *     <none>
 * Callees:
 *     KiIsPrimaryPresent @ 0x14029D404 (KiIsPrimaryPresent.c)
 *     KiUmsExceptionFilter @ 0x140845BC4 (KiUmsExceptionFilter.c)
 */

__int64 __fastcall NtUmsThreadYield(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  struct _KTHREAD *v4; // rax
  __int64 result; // rax
  _DWORD *Object; // rdi
  __int64 v7; // rbx
  __int64 v8; // rsi

  CurrentThread = KeGetCurrentThread();
  v4 = CurrentThread;
  if ( !CurrentThread )
    v4 = KeGetCurrentThread();
  if ( (v4->Header.Reserved1 & 0x40) == 0 )
    return 3221225659LL;
  Object = CurrentThread->WaitBlock[3].Object;
  v7 = *(_QWORD *)Object;
  v8 = *(_QWORD *)(*(_QWORD *)Object + 1272LL);
  *(_QWORD *)(*(_QWORD *)Object + 1272LL) = 1LL;
  if ( KiIsPrimaryPresent(v7, a1, a3) )
  {
    Object[20] |= 1u;
    return 0LL;
  }
  else
  {
    result = 3221227292LL;
    *(_QWORD *)(v7 + 1272) = v8;
  }
  return result;
}
