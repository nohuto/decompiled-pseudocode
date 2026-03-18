/*
 * XREFs of NtDCompositionUpdatePointerCapture @ 0x1C0166C40
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C00339B0 (UserIsCurrentProcessDwm.c)
 *     ?UpdatePointerCapture@CInputManager@@SAJII@Z @ 0x1C01835EC (-UpdatePointerCapture@CInputManager@@SAJII@Z.c)
 */

__int64 __fastcall NtDCompositionUpdatePointerCapture(__int64 a1, unsigned int a2)
{
  unsigned int v3; // edi
  unsigned int updated; // ebx

  v3 = a1;
  if ( UserIsCurrentProcessDwm(a1) )
  {
    KeEnterCriticalRegion();
    updated = CInputManager::UpdatePointerCapture(v3, a2);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return updated;
}
