/*
 * XREFs of ??_GDataSourceProxy@@UEAAPEAXI@Z @ 0x180197C40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1DataSourceProxy@@UEAA@XZ @ 0x180197AD0 (--1DataSourceProxy@@UEAA@XZ.c)
 */

DataSourceProxy *__fastcall DataSourceProxy::`scalar deleting destructor'(DataSourceProxy *this, char a2)
{
  DataSourceProxy::~DataSourceProxy(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
