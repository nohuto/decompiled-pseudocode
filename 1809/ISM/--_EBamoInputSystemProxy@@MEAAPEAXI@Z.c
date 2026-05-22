/*
 * XREFs of ??_EBamoInputSystemProxy@@MEAAPEAXI@Z @ 0x180016470
 * Callers:
 *     <none>
 * Callees:
 *     ??1BamoInputSystemProxyImpl@BamoImpl@@UEAA@XZ @ 0x1800164B0 (--1BamoInputSystemProxyImpl@BamoImpl@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

BamoInputSystemProxy *__fastcall BamoInputSystemProxy::`vector deleting destructor'(
        BamoInputSystemProxy *this,
        char a2)
{
  BamoImpl::BamoInputSystemProxyImpl::~BamoInputSystemProxyImpl((BamoInputSystemProxy *)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x78);
  return this;
}
