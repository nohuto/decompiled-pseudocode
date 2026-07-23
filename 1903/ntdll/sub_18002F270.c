/*
 * XREFs of sub_18002F270 @ 0x18002F270
 * Callers:
 *     sub_18002F180 @ 0x18002F180 (sub_18002F180.c)
 *     RtlQueueWorkItem @ 0x18002F7D0 (RtlQueueWorkItem.c)
 * Callees:
 *     sub_18002F2D4 @ 0x18002F2D4 (sub_18002F2D4.c)
 */

__int64 __fastcall sub_18002F270(volatile signed __int32 *a1, __int64 a2)
{
  _RTL_SRWLOCK *v2; // rdx
  __int64 *v3; // rcx
  __int64 result; // rax

  if ( !a1 )
  {
    if ( !a2 || (a1 = (volatile signed __int32 *)qword_180166458, (*(_BYTE *)(a2 + 56) & 2) == 0) )
      a1 = (volatile signed __int32 *)qword_180166470;
  }
  if ( a1 == qword_180166470 )
  {
    v2 = &stru_180166480;
    v3 = (__int64 *)&qword_180166470;
    return sub_18002F2D4(v3, v2, qword_180166470);
  }
  if ( a1 == (volatile signed __int32 *)qword_180166458 )
  {
    v2 = (_RTL_SRWLOCK *)&unk_180166468;
    v3 = &qword_180166458;
    return sub_18002F2D4(v3, v2, qword_180166470);
  }
  result = (unsigned int)_InterlockedExchangeAdd(a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return sub_180081630((PVOID)a1);
  return result;
}
