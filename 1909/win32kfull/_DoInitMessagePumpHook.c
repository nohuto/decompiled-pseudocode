/*
 * XREFs of _DoInitMessagePumpHook @ 0x1C0142F10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 DoInitMessagePumpHook()
{
  __int64 result; // rax

  result = 1LL;
  ++*(_DWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 20LL);
  return result;
}
