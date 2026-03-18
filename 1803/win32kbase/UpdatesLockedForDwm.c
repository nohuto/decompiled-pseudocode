/*
 * XREFs of UpdatesLockedForDwm @ 0x1C00637C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UpdatesLockedForDwm(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( g_bLockUpdatesForDwm )
    return PsGetCurrentProcess(a1) != (_QWORD)g_pepDwm;
  return v1;
}
