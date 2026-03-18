/*
 * XREFs of ?ApplySetupInfo@CInteractionContextWrapper@@UEAAJAEBUSetupInfo@@@Z @ 0x1801F3350
 * Callers:
 *     <none>
 * Callees:
 *     ?ConfigureInteractionContext@CInteractionContextWrapper@@AEAAJPEAUHINTERACTIONCONTEXT__@@AEBUSetupInfo@@@Z @ 0x1801F34F4 (-ConfigureInteractionContext@CInteractionContextWrapper@@AEAAJPEAUHINTERACTIONCONTEXT__@@AEBUSet.c)
 *     ?EnsureInteractionContext@CInteractionContextWrapper@@AEAAJXZ @ 0x1801F38F0 (-EnsureInteractionContext@CInteractionContextWrapper@@AEAAJXZ.c)
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
