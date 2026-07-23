/*
 * XREFs of TpAllocTimer @ 0x180031BA0
 * Callers:
 *     RtlCreateTimer @ 0x180030E70 (RtlCreateTimer.c)
 *     sub_18007BDE0 @ 0x18007BDE0 (sub_18007BDE0.c)
 *     sub_18007D678 @ 0x18007D678 (sub_18007D678.c)
 * Callees:
 *     sub_180031AA0 @ 0x180031AA0 (sub_180031AA0.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     sub_18010EFC8 @ 0x18010EFC8 (sub_18010EFC8.c)
 */

NTSTATUS __cdecl TpAllocTimer(
        PTP_TIMER *Timer,
        PTP_TIMER_CALLBACK Callback,
        PVOID Context,
        PTP_CALLBACK_ENVIRON CallbackEnviron)
{
  int v5; // ebp
  PTP_TIMER *v7; // r14
  _TP_TIMER *Heap; // rax
  _TP_TIMER *v9; // rbx
  NTSTATUS result; // eax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v5 = (int)Context;
  v7 = Timer;
  if ( !Timer
    || !Callback
    || CallbackEnviron && (CallbackEnviron->u.Flags & 0xFFFFFFFC) != 0
    || (Timer = (PTP_TIMER *)NtCurrentPeb()->Ldr, *((_BYTE *)Timer + 72)) )
  {
    sub_18010EFC8(Timer, Callback, Context, CallbackEnviron);
    return -1073741811;
  }
  else
  {
    Heap = (_TP_TIMER *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (dword_180166080 + 0x100000) | 8, 0x168uLL);
    v9 = Heap;
    if ( Heap )
    {
      *((_QWORD *)Heap + 22) = retaddr;
      result = sub_180031AA0(
                 (__int64)Heap,
                 0,
                 v5,
                 (__int64)CallbackEnviron,
                 (__int64)off_180118370,
                 (__int64)&off_180118360);
      if ( result >= 0 )
      {
        *((_QWORD *)v9 + 10) = Callback;
        *v7 = v9;
      }
    }
    else
    {
      return -1073741801;
    }
  }
  return result;
}
