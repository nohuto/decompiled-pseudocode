/*
 * XREFs of TpWaitForIoCompletion @ 0x180062640
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_180062970 @ 0x180062970 (sub_180062970.c)
 *     sub_180066BBC @ 0x180066BBC (sub_180066BBC.c)
 *     sub_18010F080 @ 0x18010F080 (sub_18010F080.c)
 */

unsigned int *__fastcall TpWaitForIoCompletion(__int64 a1, __int32 a2)
{
  unsigned int *result; // rax
  __int64 v5; // rcx

  result = (unsigned int *)sub_180062970(a1, 0LL, 0LL);
  if ( (_DWORD)result )
  {
    if ( a2 )
      a2 = _InterlockedExchange((volatile __int32 *)(a1 + 280), 0);
    result = (unsigned int *)sub_180066BBC(a1 + 56, (unsigned int)-a2);
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
        return (unsigned int *)sub_18010F080(
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
