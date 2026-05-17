/*
 * XREFs of RtlReleaseRelativeName @ 0x180025F30
 * Callers:
 *     sub_180025E00 @ 0x180025E00 (sub_180025E00.c)
 *     sub_1800599C4 @ 0x1800599C4 (sub_1800599C4.c)
 *     sub_18005A624 @ 0x18005A624 (sub_18005A624.c)
 *     sub_1800711E8 @ 0x1800711E8 (sub_1800711E8.c)
 *     sub_180071730 @ 0x180071730 (sub_180071730.c)
 *     sub_1800E00A8 @ 0x1800E00A8 (sub_1800E00A8.c)
 *     sub_1800E2674 @ 0x1800E2674 (sub_1800E2674.c)
 *     sub_1800ED05C @ 0x1800ED05C (sub_1800ED05C.c)
 * Callees:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 */

__int64 __fastcall RtlReleaseRelativeName(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)v1, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      ZwClose(*(_QWORD *)(v1 + 8));
      result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v1);
    }
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  return result;
}
