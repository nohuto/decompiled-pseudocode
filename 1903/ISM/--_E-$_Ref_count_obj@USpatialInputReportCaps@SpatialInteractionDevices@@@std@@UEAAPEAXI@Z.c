/*
 * XREFs of ??_E?$_Ref_count_obj@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@UEAAPEAXI@Z @ 0x1800DC2C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall std::_Ref_count_obj<SpatialInteractionDevices::SpatialInputReportCaps>::`vector deleting destructor'(
        void *a1,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0xC0);
  return a1;
}
