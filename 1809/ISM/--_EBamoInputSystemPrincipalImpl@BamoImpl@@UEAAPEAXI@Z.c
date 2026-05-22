/*
 * XREFs of ??_EBamoInputSystemPrincipalImpl@BamoImpl@@UEAAPEAXI@Z @ 0x18001C150
 * Callers:
 *     <none>
 * Callees:
 *     ??1BamoInputSystemPrincipalImpl@BamoImpl@@UEAA@XZ @ 0x18001B720 (--1BamoInputSystemPrincipalImpl@BamoImpl@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

BamoImpl::BamoInputSystemPrincipalImpl *__fastcall BamoImpl::BamoInputSystemPrincipalImpl::`vector deleting destructor'(
        BamoImpl::BamoInputSystemPrincipalImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char v4; // bl

  v4 = a2;
  BamoImpl::BamoInputSystemPrincipalImpl::~BamoInputSystemPrincipalImpl(this, a2, a3, a4);
  if ( (v4 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x70);
  return this;
}
