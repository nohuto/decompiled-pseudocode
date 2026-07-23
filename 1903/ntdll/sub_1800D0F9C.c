/*
 * XREFs of sub_1800D0F9C @ 0x1800D0F9C
 * Callers:
 *     sub_180071E6C @ 0x180071E6C (sub_180071E6C.c)
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     ZwQueryInformationThread @ 0x18009CB80 (ZwQueryInformationThread.c)
 */

NTSTATUS sub_1800D0F9C()
{
  NTSTATUS result; // eax
  char ThreadInformation; // [rsp+40h] [rbp+8h] BYREF

  result = ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadHideFromDebugger, &ThreadInformation, 1u, 0LL);
  if ( result >= 0 && !ThreadInformation )
    __debugbreak();
  return result;
}
