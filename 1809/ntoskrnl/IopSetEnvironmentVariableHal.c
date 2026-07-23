/*
 * XREFs of IopSetEnvironmentVariableHal @ 0x1408237C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IopSetEnvironmentVariableHal(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        int a7)
{
  return HalSetEnvironmentVariableEx(a3, a4, a5, a6, a7);
}
