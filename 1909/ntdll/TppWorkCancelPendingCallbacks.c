/*
 * XREFs of TppWorkCancelPendingCallbacks @ 0x180084EB0
 * Callers:
 *     TppWorkCallbackPrologRelease @ 0x180032F0C (TppWorkCallbackPrologRelease.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     TppBarrierAdjust @ 0x180066E0C (TppBarrierAdjust.c)
 *     TppETWCallbackCancel @ 0x18010F1B0 (TppETWCallbackCancel.c)
 */

unsigned __int64 __fastcall TppWorkCancelPendingCallbacks(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 result; // rax
  int v6; // ett
  unsigned int v7; // edi
  __int64 v8; // rcx

  _m_prefetchw((const void *)(a1 + 232));
  result = *(unsigned int *)(a1 + 232);
  if ( (unsigned int)result >= 2 )
  {
    _m_prefetchw((const void *)(a1 + 232));
    LODWORD(result) = *(_DWORD *)(a1 + 232);
    do
    {
      v6 = result;
      result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 232), result & 1, result);
    }
    while ( v6 != (_DWORD)result );
    v7 = (unsigned int)result >> 1;
    if ( (unsigned int)result >> 1 )
    {
      TppBarrierAdjust((volatile signed __int64 *)(a1 + 56), -v7, 0LL, a4);
      result = (unsigned __int64)RtlGetCurrentServiceSessionId();
      if ( (_DWORD)result )
      {
        result = (unsigned __int64)NtCurrentPeb();
        v8 = *(_QWORD *)(result + 144) + 556LL;
      }
      else
      {
        v8 = 2147353478LL;
      }
      if ( *(_BYTE *)v8 )
        return TppETWCallbackCancel(
                 *(_QWORD *)(a1 + 144),
                 (int)a1 + 200,
                 *(_QWORD *)(a1 + 80),
                 *(_QWORD *)(a1 + 88),
                 *(_QWORD *)(a1 + 104),
                 v7);
    }
  }
  return result;
}
