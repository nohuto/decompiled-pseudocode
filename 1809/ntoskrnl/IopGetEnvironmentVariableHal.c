/*
 * XREFs of IopGetEnvironmentVariableHal @ 0x140823040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IopGetEnvironmentVariableHal(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  return HalGetEnvironmentVariableEx(a3, a4, a5, a6, a7);
}
