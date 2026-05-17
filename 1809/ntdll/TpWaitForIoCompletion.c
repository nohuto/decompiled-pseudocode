/*
 * XREFs of TpWaitForIoCompletion @ 0x180032880
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     TppIopValidateIo @ 0x1800311F0 (TppIopValidateIo.c)
 *     TppBarrierAdjust @ 0x180073CB8 (TppBarrierAdjust.c)
 *     TppETWCallbackCancel @ 0x1801109C0 (TppETWCallbackCancel.c)
 */

struct _PEB *__fastcall TpWaitForIoCompletion(__int64 a1, __int32 a2)
{
  struct _PEB *result; // rax
  __int64 v5; // rcx

  result = (struct _PEB *)TppIopValidateIo((_PEB_LDR_DATA *)a1, 0LL, 0LL);
  if ( (_DWORD)result )
  {
    if ( a2 )
      a2 = _InterlockedExchange((volatile __int32 *)(a1 + 280), 0);
    result = (struct _PEB *)TppBarrierAdjust(a1 + 56, (unsigned int)-a2);
    if ( a2 )
    {
      result = (struct _PEB *)RtlGetCurrentServiceSessionId();
      if ( (_DWORD)result )
      {
        result = NtCurrentPeb();
        v5 = (__int64)result->SharedData + 556;
      }
      else
      {
        v5 = 2147353478LL;
      }
      if ( *(_BYTE *)v5 )
        return (struct _PEB *)TppETWCallbackCancel(
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
