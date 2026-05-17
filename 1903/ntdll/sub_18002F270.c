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
  __int64 v2; // r8
  void *v3; // rdx
  __int64 *v4; // rcx
  __int64 result; // rax

  v2 = qword_180166470;
  if ( !a1 )
  {
    if ( !a2 || (a1 = (volatile signed __int32 *)qword_180166458, (*(_BYTE *)(a2 + 56) & 2) == 0) )
      a1 = (volatile signed __int32 *)qword_180166470;
  }
  if ( a1 == (volatile signed __int32 *)qword_180166470 )
  {
    v3 = &unk_180166480;
    v4 = &qword_180166470;
    return sub_18002F2D4(v4, v3, qword_180166470);
  }
  if ( a1 == (volatile signed __int32 *)qword_180166458 )
  {
    v3 = &unk_180166468;
    v4 = &qword_180166458;
    return sub_18002F2D4(v4, v3, qword_180166470);
  }
  result = (unsigned int)_InterlockedExchangeAdd(a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return sub_180081630(a1, a2, v2);
  return result;
}
