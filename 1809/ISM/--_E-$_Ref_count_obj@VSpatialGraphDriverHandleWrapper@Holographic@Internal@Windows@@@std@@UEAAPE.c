/*
 * XREFs of ??_E?$_Ref_count_obj@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@UEAAPEAXI@Z @ 0x18011CEB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall std::_Ref_count_obj<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>::`vector deleting destructor'(
        void *a1,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0xF8);
  return a1;
}
