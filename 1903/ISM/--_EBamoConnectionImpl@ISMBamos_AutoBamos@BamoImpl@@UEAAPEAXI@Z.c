/*
 * XREFs of ??_EBamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@UEAAPEAXI@Z @ 0x18005AC50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ @ 0x18005A994 (--1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ.c)
 */

BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl *__fastcall BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl::`vector deleting destructor'(
        BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl *this,
        char a2)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::~BaseBamoConnectionImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x90);
  return this;
}
