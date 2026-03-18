/*
 * XREFs of ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C002A4E0
 * Callers:
 *     ?DestroyEventHookIfSupported@@YAXPEAUtagEVENTHOOK@@@Z @ 0x1C0098F00 (-DestroyEventHookIfSupported@@YAXPEAUtagEVENTHOOK@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagDomLock::IsLockedExclusive(PERESOURCE *this)
{
  return ExIsResourceAcquiredExclusiveLite(*this) == 1;
}
