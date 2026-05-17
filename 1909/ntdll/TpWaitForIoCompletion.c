/*
 * XREFs of TpWaitForIoCompletion @ 0x1800626E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     TppIopValidateIo @ 0x180062A10 (TppIopValidateIo.c)
 *     TppBarrierAdjust @ 0x180066E0C (TppBarrierAdjust.c)
 *     TppETWCallbackCancel @ 0x18010F1B0 (TppETWCallbackCancel.c)
 */

unsigned int *__fastcall TpWaitForIoCompletion(__int64 a1, __int32 a2)
{
  unsigned int *result; // rax
  __int64 v5; // rcx

  result = (unsigned int *)TppIopValidateIo(a1, 0LL, 0LL);
  if ( (_DWORD)result )
  {
    if ( a2 )
      a2 = _InterlockedExchange((volatile __int32 *)(a1 + 280), 0);
    result = (unsigned int *)TppBarrierAdjust(a1 + 56, (unsigned int)-a2);
    if ( a2 )
    {
      result = RtlGetCurrentServiceSessionId();
      if ( (_DWORD)result )
      {
        result = (unsigned int *)NtCurrentPeb();
        v5 = *((_QWORD *)result + 18) + 556LL;
      }
      else
      {
        v5 = 2147353478LL;
      }
      if ( *(_BYTE *)v5 )
        return (unsigned int *)TppETWCallbackCancel(
                                 *(_QWORD *)(a1 + 144),
                                 (int)a1 + 200,
                                 (int)a1 + 80,
                                 *(_QWORD *)(a1 + 88),
                                 *(_QWORD *)(a1 + 104),
                                 a2);
    }
  }
  return result;
}
