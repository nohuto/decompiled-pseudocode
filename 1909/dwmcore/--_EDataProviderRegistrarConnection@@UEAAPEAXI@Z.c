/*
 * XREFs of ??_EDataProviderRegistrarConnection@@UEAAPEAXI@Z @ 0x1801A22A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ @ 0x180188AE8 (--1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ.c)
 */

DataProviderRegistrarConnection *__fastcall DataProviderRegistrarConnection::`vector deleting destructor'(
        DataProviderRegistrarConnection *this,
        char a2)
{
  *((_QWORD *)this + 19) = 0LL;
  *(_QWORD *)this = &DataProviderRegistrarConnection::`vftable';
  Microsoft::BamoImpl::BaseBamoConnectionImpl::~BaseBamoConnectionImpl((DataProviderRegistrarConnection *)((char *)this + 8));
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
