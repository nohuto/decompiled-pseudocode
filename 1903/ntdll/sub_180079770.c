/*
 * XREFs of sub_180079770 @ 0x180079770
 * Callers:
 *     <none>
 * Callees:
 *     ZwReadVirtualMemory @ 0x18009CEC0 (ZwReadVirtualMemory.c)
 */

NTSTATUS __fastcall sub_180079770(void *a1, void *a2, void *a3, SIZE_T a4, PSIZE_T NumberOfBytesRead)
{
  NTSTATUS result; // eax

  result = ZwReadVirtualMemory(a1, a2, a3, a4, NumberOfBytesRead);
  if ( result >= 0 )
    return a4 != *NumberOfBytesRead ? 0x8000000D : 0;
  *NumberOfBytesRead = 0LL;
  return result;
}
