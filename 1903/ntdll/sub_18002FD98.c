/*
 * XREFs of sub_18002FD98 @ 0x18002FD98
 * Callers:
 *     RtlQueueWorkItem @ 0x18002F7D0 (RtlQueueWorkItem.c)
 * Callees:
 *     sub_18002FBA8 @ 0x18002FBA8 (sub_18002FBA8.c)
 *     sub_180031620 @ 0x180031620 (sub_180031620.c)
 */

__int64 __fastcall sub_18002FD98(volatile signed __int32 *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int v4; // ebx
  __int64 *v6; // rcx
  volatile signed __int64 *v7; // rdx
  __int64 result; // rax
  volatile signed __int32 *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = a1;
  v4 = 0;
  if ( a1 )
  {
    _InterlockedIncrement(a1);
LABEL_6:
    sub_180031620(v9, a2 + 8, a2 + 12);
    return v4;
  }
  if ( a3 && (*(_BYTE *)(a3 + 56) & 2) != 0 )
  {
    v6 = &qword_180166458;
    v7 = (volatile signed __int64 *)&unk_180166468;
  }
  else
  {
    v6 = &qword_180166470;
    v7 = (volatile signed __int64 *)&unk_180166480;
  }
  result = sub_18002FBA8((volatile signed __int32 **)v6, v7, &v9, a4);
  v4 = result;
  if ( (int)result >= 0 )
    goto LABEL_6;
  return result;
}
