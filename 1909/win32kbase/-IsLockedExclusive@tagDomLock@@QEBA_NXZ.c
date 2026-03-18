/*
 * XREFs of ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C002B0F0
 * Callers:
 *     ?DestroyEventHookIfSupported@@YAXPEAUtagEVENTHOOK@@@Z @ 0x1C0097560 (-DestroyEventHookIfSupported@@YAXPEAUtagEVENTHOOK@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagDomLock::IsLockedExclusive(PERESOURCE *this)
{
  return ExIsResourceAcquiredExclusiveLite(*this) == 1;
}
