/*
 * XREFs of sub_180030280 @ 0x180030280
 * Callers:
 *     <none>
 * Callees:
 *     sub_180031A74 @ 0x180031A74 (sub_180031A74.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 */

__int64 __fastcall sub_180030280(__int64 a1)
{
  sub_180031A74();
  ZwClose(*(_QWORD *)(a1 + 368));
  *(_QWORD *)(a1 + 448) = 0LL;
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(dword_180166080 + 1835008), a1);
}
