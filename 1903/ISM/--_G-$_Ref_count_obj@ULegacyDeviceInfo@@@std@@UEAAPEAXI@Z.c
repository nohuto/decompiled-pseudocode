/*
 * XREFs of ??_G?$_Ref_count_obj@ULegacyDeviceInfo@@@std@@UEAAPEAXI@Z @ 0x1800940B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall std::_Ref_count_obj<LegacyDeviceInfo>::`scalar deleting destructor'(void *a1, char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x630);
  return a1;
}
