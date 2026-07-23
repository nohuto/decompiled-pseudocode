/*
 * XREFs of sub_18010F06C @ 0x18010F06C
 * Callers:
 *     sub_18010F9F4 @ 0x18010F9F4 (sub_18010F9F4.c)
 *     sub_18010FA78 @ 0x18010FA78 (sub_18010FA78.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall sub_18010F06C(NTSTATUS **a1)
{
  return ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, **a1);
}
