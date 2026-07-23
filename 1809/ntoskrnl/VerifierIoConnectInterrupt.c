/*
 * XREFs of VerifierIoConnectInterrupt @ 0x140929A80
 * Callers:
 *     <none>
 * Callees:
 *     VfCtxHookAndConnectInterrupt @ 0x140942964 (VfCtxHookAndConnectInterrupt.c)
 */

__int64 __fastcall VerifierIoConnectInterrupt(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        char a6,
        char a7,
        int a8,
        char a9,
        __int64 a10,
        char a11)
{
  return VfCtxHookAndConnectInterrupt(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
