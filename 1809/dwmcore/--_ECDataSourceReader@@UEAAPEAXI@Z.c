/*
 * XREFs of ??_ECDataSourceReader@@UEAAPEAXI@Z @ 0x180193F40
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResource@@MEAA@XZ @ 0x18004E218 (--1CResource@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ?RemoveReaderFromReadyList@DataProviderManager@@QEAAXPEAVCDataSourceReader@@@Z @ 0x1801544FC (-RemoveReaderFromReadyList@DataProviderManager@@QEAAXPEAVCDataSourceReader@@@Z.c)
 *     ?UnregisterReaderForDataSource@DataProviderManager@@QEAAJ_K0PEAVCDataSourceReader@@@Z @ 0x180154918 (-UnregisterReaderForDataSource@DataProviderManager@@QEAAJ_K0PEAVCDataSourceReader@@@Z.c)
 */

CDataSourceReader *__fastcall CDataSourceReader::`vector deleting destructor'(CDataSourceReader *this, char a2)
{
  char v4; // al

  *(_QWORD *)this = &CDataSourceReader::`vftable';
  v4 = *((_BYTE *)this + 72);
  if ( (v4 & 2) != 0 )
  {
    DataProviderManager::RemoveReaderFromReadyList(*(DataProviderManager **)(*((_QWORD *)this + 2) + 1216LL), this);
    *((_BYTE *)this + 72) &= ~2u;
    v4 = *((_BYTE *)this + 72);
  }
  if ( (v4 & 1) != 0 )
  {
    DataProviderManager::UnregisterReaderForDataSource(
      *(DataProviderManager **)(*((_QWORD *)this + 2) + 1216LL),
      *((_QWORD *)this + 7),
      *((_QWORD *)this + 8),
      this);
    *((_BYTE *)this + 72) &= ~1u;
  }
  CResource::~CResource(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
