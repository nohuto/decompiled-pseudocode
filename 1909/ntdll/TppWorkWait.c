/*
 * XREFs of TppWorkWait @ 0x180031C98
 * Callers:
 *     TpWaitForWait @ 0x18002F0B0 (TpWaitForWait.c)
 *     TpWaitForTimer @ 0x180031D10 (TpWaitForTimer.c)
 *     TpWaitForWork @ 0x18007D810 (TpWaitForWork.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     TppBarrierAdjust @ 0x180066E0C (TppBarrierAdjust.c)
 *     TppETWCallbackCancel @ 0x18010F1B0 (TppETWCallbackCancel.c)
 */

struct _PEB *__fastcall TppWorkWait(_QWORD *a1, int a2)
{
  unsigned __int32 v3; // r8d
  unsigned __int32 v4; // ebx
  __int64 v5; // rcx
  struct _PEB *result; // rax
  __int64 v7; // rcx
  bool v8; // zf
  signed __int32 v9; // eax

  _m_prefetchw(a1 + 29);
  v3 = *((_DWORD *)a1 + 58);
  if ( a2 )
  {
    while ( 1 )
    {
      v4 = v3 >> 1;
      if ( v3 < 2 )
        break;
      v9 = _InterlockedCompareExchange((volatile signed __int32 *)a1 + 58, v3 & 1, v3);
      v8 = v3 == v9;
      v3 = v9;
      if ( v8 )
        goto LABEL_4;
    }
  }
  v4 = 0;
LABEL_4:
  TppBarrierAdjust(a1 + 7, -v4);
  result = (struct _PEB *)RtlGetCurrentServiceSessionId(v5);
  if ( (_DWORD)result )
  {
    result = NtCurrentPeb();
    v7 = (__int64)result->SharedData + 556;
  }
  else
  {
    v7 = 2147353478LL;
  }
  if ( *(_BYTE *)v7 )
  {
    if ( v4 )
      return (struct _PEB *)TppETWCallbackCancel(a1[18], (int)a1 + 200, a1[10], a1[11], a1[13], v4);
  }
  return result;
}
