/*
 * XREFs of KeSetSystemTime @ 0x1401433CC
 * Callers:
 *     ExpSetSystemTime @ 0x140566AC8 (ExpSetSystemTime.c)
 *     ExpRefreshSystemTime @ 0x1407341C0 (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x1408CD2D0 (NtSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x1409B3E10 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeGenericCallDpc @ 0x1401203D0 (KeGenericCallDpc.c)
 */

char __fastcall KeSetSystemTime(struct _SINGLE_LIST_ENTRY *a1, struct _SINGLE_LIST_ENTRY *a2, int a3)
{
  struct _SINGLE_LIST_ENTRY v4[4]; // [rsp+20h] [rbp-38h] BYREF
  char v5; // [rsp+40h] [rbp-18h]

  v4[1].Next = a1;
  v4[2].Next = a2;
  LOBYTE(v4[0].Next) = 0;
  v5 = 0;
  HIDWORD(v4[0].Next) = a3;
  return KeGenericCallDpc((struct _SINGLE_LIST_ENTRY *)KiSetSystemTimeDpc, v4);
}
