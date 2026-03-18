/*
 * XREFs of PoSetDeviceBusyEx @ 0x1402F1BF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall PoSetDeviceBusyEx(PULONG IdlePointer)
{
  _InterlockedIncrement((volatile signed __int32 *)IdlePointer + 1);
}
