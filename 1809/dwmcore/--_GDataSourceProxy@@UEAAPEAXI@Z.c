/*
 * XREFs of ??_GDataSourceProxy@@UEAAPEAXI@Z @ 0x18016F510
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1DataSourceProxy@@UEAA@XZ @ 0x18016F39C (--1DataSourceProxy@@UEAA@XZ.c)
 */

DataSourceProxy *__fastcall DataSourceProxy::`scalar deleting destructor'(DataSourceProxy *this, char a2)
{
  DataSourceProxy::~DataSourceProxy(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
