/*
 * XREFs of sub_18002FD98 @ 0x18002FD98
 * Callers:
 *     RtlQueueWorkItem @ 0x18002F7D0 (RtlQueueWorkItem.c)
 * Callees:
 *     sub_18002FBA8 @ 0x18002FBA8 (sub_18002FBA8.c)
 *     sub_180031620 @ 0x180031620 (sub_180031620.c)
 */

NTSTATUS __fastcall sub_18002FD98(volatile signed __int32 *a1, __int64 a2, __int64 a3)
{
  NTSTATUS v3; // ebx
  volatile signed __int32 **v5; // rcx
  _RTL_SRWLOCK *v6; // rdx
  NTSTATUS result; // eax
  volatile signed __int32 *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a1;
  v3 = 0;
  if ( a1 )
  {
    _InterlockedIncrement(a1);
LABEL_6:
    sub_180031620(v8, a2 + 8, a2 + 12);
    return v3;
  }
  if ( a3 && (*(_BYTE *)(a3 + 56) & 2) != 0 )
  {
    v5 = (volatile signed __int32 **)&qword_180166458;
    v6 = (_RTL_SRWLOCK *)&unk_180166468;
  }
  else
  {
    v5 = (volatile signed __int32 **)&qword_180166470;
    v6 = &stru_180166480;
  }
  result = sub_18002FBA8(v5, v6, &v8);
  v3 = result;
  if ( result >= 0 )
    goto LABEL_6;
  return result;
}
