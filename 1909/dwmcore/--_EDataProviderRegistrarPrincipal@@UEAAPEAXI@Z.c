/*
 * XREFs of ??_EDataProviderRegistrarPrincipal@@UEAAPEAXI@Z @ 0x180194C60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800E3930 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 */

DataProviderRegistrarPrincipal *__fastcall DataProviderRegistrarPrincipal::`vector deleting destructor'(
        DataProviderRegistrarPrincipal *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char v5; // di
  Microsoft::BamoImpl::BamoImplObject *v6; // rcx

  *((_QWORD *)this + 7) = 0LL;
  *(_QWORD *)this = &DataProviderRegistrarPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v5 = a2;
  *((_QWORD *)this + 1) = &BamoDataProviderRegistrarPrincipal::`vftable'{for `IDataProviderRegistrarPrincipal'};
  v6 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 4);
  if ( v6 )
    Microsoft::BamoImpl::BamoImplObject::Release(v6, a2, a3, a4);
  if ( (v5 & 1) != 0 )
  {
    if ( (v5 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
