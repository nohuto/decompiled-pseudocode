/*
 * XREFs of ??_EBamoInputSystemProxy@@MEAAPEAXI@Z @ 0x18005AED0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoInputSystemProxyImpl@BamoImpl@@UEAA@XZ @ 0x18005A810 (--1BamoInputSystemProxyImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoInputSystemProxy *__fastcall BamoInputSystemProxy::`vector deleting destructor'(
        BamoInputSystemProxy *this,
        char a2)
{
  BamoImpl::BamoInputSystemProxyImpl::~BamoInputSystemProxyImpl((BamoInputSystemProxy *)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x98);
  return this;
}
