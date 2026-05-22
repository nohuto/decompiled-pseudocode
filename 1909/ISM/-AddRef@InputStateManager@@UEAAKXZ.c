/*
 * XREFs of ?AddRef@InputStateManager@@UEAAKXZ @ 0x18000E8A0
 * Callers:
 *     ?AddRef@DWMLegacyInputTarget@@W7EAAKXZ @ 0x1800382D0 (-AddRef@DWMLegacyInputTarget@@W7EAAKXZ.c)
 *     ?AddRef@InputStateManager@@WBA@EAAKXZ @ 0x1800382E0 (-AddRef@InputStateManager@@WBA@EAAKXZ.c)
 *     ?AddRef@ContextualProcessorBuffer@@WBI@EAAKXZ @ 0x1800382F0 (-AddRef@ContextualProcessorBuffer@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InputStateManager::AddRef(InputStateManager *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 8);
}
