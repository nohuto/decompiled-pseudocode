/*
 * XREFs of NtDCompositionUpdatePointerCapture @ 0x1C0143CB0
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C003C070 (UserIsCurrentProcessDwm.c)
 *     ?UpdatePointerCapture@CInputManager@@SAJII@Z @ 0x1C015FC50 (-UpdatePointerCapture@CInputManager@@SAJII@Z.c)
 */

__int64 __fastcall NtDCompositionUpdatePointerCapture(unsigned int a1, unsigned int a2)
{
  unsigned int updated; // ebx

  if ( UserIsCurrentProcessDwm() )
  {
    KeEnterCriticalRegion();
    updated = CInputManager::UpdatePointerCapture(a1, a2);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return updated;
}
