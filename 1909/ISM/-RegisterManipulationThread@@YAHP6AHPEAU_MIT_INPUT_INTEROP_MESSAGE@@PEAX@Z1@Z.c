/*
 * XREFs of ?RegisterManipulationThread@@YAHP6AHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z1@Z @ 0x18002AE60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RegisterManipulationThread(int (*a1)(struct _MIT_INPUT_INTEROP_MESSAGE *, void *), void *a2)
{
  Win32kInterop::s_pfnMTCallback = a1;
  return NtUserRegisterManipulationThread(0LL, a2);
}
