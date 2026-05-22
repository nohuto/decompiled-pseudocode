/*
 * XREFs of ??_E?$_Ref_count_obj@VSpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@@std@@UEAAPEAXI@Z @ 0x1800F3760
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall std::_Ref_count_obj<Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand>::`vector deleting destructor'(
        void *a1,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x190);
  return a1;
}
