/*
 * XREFs of sub_180019C74 @ 0x180019C74
 * Callers:
 *     RtlUnlockHeap @ 0x180019BF0 (RtlUnlockHeap.c)
 *     RtlLockHeap @ 0x180019CB0 (RtlLockHeap.c)
 *     RtlValidateHeap @ 0x180070350 (RtlValidateHeap.c)
 *     sub_1801045B8 @ 0x1801045B8 (sub_1801045B8.c)
 *     sub_18010496C @ 0x18010496C (sub_18010496C.c)
 *     sub_180104DB4 @ 0x180104DB4 (sub_180104DB4.c)
 *     sub_180104EF8 @ 0x180104EF8 (sub_180104EF8.c)
 *     sub_180104FB8 @ 0x180104FB8 (sub_180104FB8.c)
 *     sub_1801052B0 @ 0x1801052B0 (sub_1801052B0.c)
 *     sub_180105454 @ 0x180105454 (sub_180105454.c)
 *     sub_1801055A0 @ 0x1801055A0 (sub_1801055A0.c)
 *     sub_180105AFC @ 0x180105AFC (sub_180105AFC.c)
 *     sub_180105CC8 @ 0x180105CC8 (sub_180105CC8.c)
 *     sub_180105E5C @ 0x180105E5C (sub_180105E5C.c)
 *     sub_180105FE0 @ 0x180105FE0 (sub_180105FE0.c)
 *     sub_18010606C @ 0x18010606C (sub_18010606C.c)
 * Callees:
 *     DbgPrint @ 0x180053DA0 (DbgPrint.c)
 *     sub_180106190 @ 0x180106190 (sub_180106190.c)
 */

char __fastcall sub_180019C74(_DWORD *a1, const char *a2)
{
  if ( a1[38] == -285217025 )
    return 1;
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint("Invalid heap signature for heap at %p", a1);
  if ( a2 )
    DbgPrint(", passed to %s", a2);
  DbgPrint("\n");
  sub_180106190();
  return 0;
}
