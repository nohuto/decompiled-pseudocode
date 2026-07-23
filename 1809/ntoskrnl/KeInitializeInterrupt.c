/*
 * XREFs of KeInitializeInterrupt @ 0x14016D960
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeInterruptEx @ 0x14016D9E8 (KeInitializeInterruptEx.c)
 */

__int64 __fastcall KeInitializeInterrupt(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        int a7,
        char a8,
        char a9,
        int a10,
        char a11,
        int a12)
{
  return KeInitializeInterruptEx(a1, a2, a3, a4, a5, a6, 0LL, a7, a8, a9, a10, a11, a12);
}
