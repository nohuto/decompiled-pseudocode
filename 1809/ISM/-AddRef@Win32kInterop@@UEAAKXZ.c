/*
 * XREFs of ?AddRef@Win32kInterop@@UEAAKXZ @ 0x180052490
 * Callers:
 *     ?AddRef@InputStateManager@@WBA@EAAKXZ @ 0x180054530 (-AddRef@InputStateManager@@WBA@EAAKXZ.c)
 *     ?AddRef@TapProcessor@@WBI@EAAKXZ @ 0x180054580 (-AddRef@TapProcessor@@WBI@EAAKXZ.c)
 *     ?AddRef@DWMLegacyInputTarget@@W7EAAKXZ @ 0x1800545E0 (-AddRef@DWMLegacyInputTarget@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32kInterop::AddRef(Win32kInterop *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 8);
}
