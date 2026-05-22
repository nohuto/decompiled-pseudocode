/*
 * XREFs of ?AddRef@DWMFocusedInputTarget@@UEAAKXZ @ 0x18008DF90
 * Callers:
 *     ?AddRef@GazeProcessor@@WBA@EAAKXZ @ 0x18008EA00 (-AddRef@GazeProcessor@@WBA@EAAKXZ.c)
 *     ?AddRef@GazeProcessor@@WBI@EAAKXZ @ 0x18008EA40 (-AddRef@GazeProcessor@@WBI@EAAKXZ.c)
 *     ?AddRef@GazeProcessor@@WCA@EAAKXZ @ 0x18008EA80 (-AddRef@GazeProcessor@@WCA@EAAKXZ.c)
 *     ?AddRef@GazeProcessor@@W7EAAKXZ @ 0x18008EAB0 (-AddRef@GazeProcessor@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMFocusedInputTarget::AddRef(DWMFocusedInputTarget *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 10);
}
