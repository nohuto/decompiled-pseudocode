/*
 * XREFs of ??_EBamoPeer@dataprovider_AutoBamos@@UEAAPEAXI@Z @ 0x180188C90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800E3930 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 */

dataprovider_AutoBamos::BamoPeer *__fastcall dataprovider_AutoBamos::BamoPeer::`vector deleting destructor'(
        dataprovider_AutoBamos::BamoPeer *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char v5; // di
  Microsoft::BamoImpl::BamoImplObject *v6; // rcx

  v5 = a2;
  v6 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 4);
  if ( v6 )
    Microsoft::BamoImpl::BamoImplObject::Release(v6, a2, a3, a4);
  if ( (v5 & 1) != 0 )
    operator delete(this);
  return this;
}
