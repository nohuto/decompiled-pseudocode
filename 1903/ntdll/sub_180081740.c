/*
 * XREFs of sub_180081740 @ 0x180081740
 * Callers:
 *     sub_18002EB80 @ 0x18002EB80 (sub_18002EB80.c)
 *     sub_180081630 @ 0x180081630 (sub_180081630.c)
 * Callees:
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 */

NTSTATUS __fastcall sub_180081740(__int64 a1)
{
  void *v2; // rcx
  NTSTATUS result; // eax

  ZwClose(*(HANDLE *)(a1 + 32));
  v2 = *(void **)(a1 + 24);
  *(_QWORD *)(a1 + 96) = 0LL;
  result = ZwClose(v2);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  return result;
}
