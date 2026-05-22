/*
 * XREFs of ?RegisterManipulationThread@@YAHP6AHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z1@Z @ 0x180005980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RegisterManipulationThread(int (*a1)(struct _MIT_INPUT_INTEROP_MESSAGE *, void *), void *a2)
{
  InitOnceExecuteOnce(&gInitOnce, (PINIT_ONCE_FN)InitEditionOnceCallback, 0LL, 0LL);
  Win32kInterop::s_pfnMTCallback = a1;
  return MITRegisterManipulationThread(0LL);
}
