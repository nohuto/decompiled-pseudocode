/*
 * XREFs of TppWorkWait @ 0x18002D368
 * Callers:
 *     TpWaitForWork @ 0x18002C690 (TpWaitForWork.c)
 *     TpWaitForTimer @ 0x18002C6D0 (TpWaitForTimer.c)
 *     TpWaitForWait @ 0x1800303D0 (TpWaitForWait.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     TppBarrierAdjust @ 0x180073CC8 (TppBarrierAdjust.c)
 *     TppETWCallbackCancel @ 0x1801109C0 (TppETWCallbackCancel.c)
 */

int __fastcall TppWorkWait(_QWORD *a1, int a2)
{
  unsigned __int32 v3; // r8d
  unsigned __int32 v4; // ebx
  struct _PEB *v5; // rax
  __int64 v6; // rcx
  bool v7; // zf
  signed __int32 v8; // eax

  _m_prefetchw(a1 + 29);
  v3 = *((_DWORD *)a1 + 58);
  if ( a2 )
  {
    while ( 1 )
    {
      v4 = v3 >> 1;
      if ( v3 < 2 )
        break;
      v8 = _InterlockedCompareExchange((volatile signed __int32 *)a1 + 58, v3 & 1, v3);
      v7 = v3 == v8;
      v3 = v8;
      if ( v7 )
        goto LABEL_4;
    }
  }
  v4 = 0;
LABEL_4:
  TppBarrierAdjust(a1 + 7, -v4);
  LODWORD(v5) = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)v5 )
  {
    v5 = NtCurrentPeb();
    v6 = (__int64)v5->SharedData + 556;
  }
  else
  {
    v6 = 2147353478LL;
  }
  if ( *(_BYTE *)v6 && v4 )
    LODWORD(v5) = TppETWCallbackCancel(a1[18], (int)a1 + 200, a1[10], a1[11], a1[13], v4);
  return (int)v5;
}
