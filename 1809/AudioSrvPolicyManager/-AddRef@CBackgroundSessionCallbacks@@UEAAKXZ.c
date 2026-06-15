/*
 * XREFs of ?AddRef@CBackgroundSessionCallbacks@@UEAAKXZ @ 0x18000B2F0
 * Callers:
 *     ?AddRef@CPlaybackManager@@WBA@EAAKXZ @ 0x180010330 (-AddRef@CPlaybackManager@@WBA@EAAKXZ.c)
 *     ?AddRef@CDuckingManager@@WBI@EAAKXZ @ 0x180010340 (-AddRef@CDuckingManager@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBackgroundSessionCallbacks::AddRef(CBackgroundSessionCallbacks *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
