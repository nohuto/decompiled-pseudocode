/*
 * XREFs of ??_EBamoConnection@dataprovider_AutoBamos@@UEAAPEAXI@Z @ 0x180188C10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ @ 0x180188AE8 (--1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ.c)
 */

dataprovider_AutoBamos::BamoConnection *__fastcall dataprovider_AutoBamos::BamoConnection::`vector deleting destructor'(
        dataprovider_AutoBamos::BamoConnection *this,
        char a2)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::~BaseBamoConnectionImpl((dataprovider_AutoBamos::BamoConnection *)((char *)this + 8));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
