/*
 * XREFs of ?ApplySetupInfo@CInteractionContextWrapper@@UEAAJAEBUSetupInfo@@@Z @ 0x180232320
 * Callers:
 *     <none>
 * Callees:
 *     ?ConfigureInteractionContext@CInteractionContextWrapper@@AEAAJPEAUHINTERACTIONCONTEXT__@@AEBUSetupInfo@@@Z @ 0x1802324C4 (-ConfigureInteractionContext@CInteractionContextWrapper@@AEAAJPEAUHINTERACTIONCONTEXT__@@AEBUSet.c)
 *     ?EnsureInteractionContext@CInteractionContextWrapper@@AEAAJXZ @ 0x180232930 (-EnsureInteractionContext@CInteractionContextWrapper@@AEAAJXZ.c)
 */

__int64 __fastcall CInteractionContextWrapper::ApplySetupInfo(
        struct HINTERACTIONCONTEXT__ **this,
        const struct SetupInfo *a2)
{
  __int64 result; // rax

  result = CInteractionContextWrapper::EnsureInteractionContext((CInteractionContextWrapper *)this);
  if ( (int)result >= 0 )
    return CInteractionContextWrapper::ConfigureInteractionContext((CInteractionContextWrapper *)this, this[3], a2);
  return result;
}
