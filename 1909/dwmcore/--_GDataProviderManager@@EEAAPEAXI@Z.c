/*
 * XREFs of ??_GDataProviderManager@@EEAAPEAXI@Z @ 0x180187F50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1DataProviderManager@@EEAA@XZ @ 0x180187E38 (--1DataProviderManager@@EEAA@XZ.c)
 */

DataProviderManager *__fastcall DataProviderManager::`scalar deleting destructor'(DataProviderManager *this, char a2)
{
  DataProviderManager::~DataProviderManager(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
