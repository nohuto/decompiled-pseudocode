/*
 * XREFs of IoPropagateIrpExtension @ 0x140095210
 * Callers:
 *     <none>
 * Callees:
 *     IoPropagateIrpExtensionEx @ 0x140095230 (IoPropagateIrpExtensionEx.c)
 */

__int64 __fastcall IoPropagateIrpExtension(__int64 a1, __int64 a2, unsigned int a3)
{
  return IoPropagateIrpExtensionEx(a1, a2, 0LL, a3);
}
