/*
 * XREFs of ZwProtectVirtualMemory @ 0x18009D0E0
 * Callers:
 *     sub_1800184BC @ 0x1800184BC (sub_1800184BC.c)
 *     sub_180020514 @ 0x180020514 (sub_180020514.c)
 *     sub_18002088C @ 0x18002088C (sub_18002088C.c)
 *     sub_180020F00 @ 0x180020F00 (sub_180020F00.c)
 *     sub_180032A38 @ 0x180032A38 (sub_180032A38.c)
 *     sub_180040B50 @ 0x180040B50 (sub_180040B50.c)
 *     sub_180048320 @ 0x180048320 (sub_180048320.c)
 *     sub_18004AE3C @ 0x18004AE3C (sub_18004AE3C.c)
 *     sub_18004D024 @ 0x18004D024 (sub_18004D024.c)
 *     sub_18005547C @ 0x18005547C (sub_18005547C.c)
 *     sub_180055830 @ 0x180055830 (sub_180055830.c)
 *     sub_18008226C @ 0x18008226C (sub_18008226C.c)
 *     sub_1800CEDF8 @ 0x1800CEDF8 (sub_1800CEDF8.c)
 *     sub_1800DA634 @ 0x1800DA634 (sub_1800DA634.c)
 *     sub_1800DA8F4 @ 0x1800DA8F4 (sub_1800DA8F4.c)
 *     sub_1800DD668 @ 0x1800DD668 (sub_1800DD668.c)
 *     sub_180107868 @ 0x180107868 (sub_180107868.c)
 *     sub_18010A7B4 @ 0x18010A7B4 (sub_18010A7B4.c)
 *     sub_18010ACB4 @ 0x18010ACB4 (sub_18010ACB4.c)
 *     sub_18010B938 @ 0x18010B938 (sub_18010B938.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwProtectVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        ULONG NewProtect,
        PULONG OldProtect)
{
  NTSTATUS result; // eax

  result = 80;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
