/*
 * XREFs of ??_EDataProviderProxy@@UEAAPEAXI@Z @ 0x180198FA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1DataProviderProxy@@UEAA@XZ @ 0x180198E9C (--1DataProviderProxy@@UEAA@XZ.c)
 */

DataProviderProxy *__fastcall DataProviderProxy::`vector deleting destructor'(DataProviderProxy *this, char a2)
{
  DataProviderProxy::~DataProviderProxy(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
