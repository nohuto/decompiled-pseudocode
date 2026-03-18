/*
 * XREFs of ??_GFxIoContext@@UEAAPEAXI@Z @ 0x1C00058C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00054C8 (-FxPoolFree@@YAXPEAX@Z.c)
 *     memset @ 0x1C001C1C0 (memset.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C0050A28 (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C0057098 (-FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C005ADBC (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C005E3C4 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 */

FxIoContext *__fastcall FxIoContext::`scalar deleting destructor'(FxIoContext *this, char a2)
{
  FX_POOL_TRACKER *m_BufferToFree; // rcx
  _MDL *m_MdlToFree; // rcx
  FX_POOL_TRACKER *v6; // rdi
  FxIoContext *v7; // rcx

  this->__vftable = (FxIoContext_vtbl *)FxIoContext::`vftable';
  m_BufferToFree = (FX_POOL_TRACKER *)this->m_BufferToFree;
  if ( m_BufferToFree )
  {
    FxPoolFree(m_BufferToFree);
    this->m_BufferToFree = 0LL;
  }
  m_MdlToFree = this->m_MdlToFree;
  this->m_BufferToFreeLength = 0LL;
  this->m_CopyBackToBuffer = 0;
  if ( m_MdlToFree )
  {
    if ( this->m_UnlockPages )
    {
      MmUnlockPages(m_MdlToFree);
      m_MdlToFree = this->m_MdlToFree;
      this->m_UnlockPages = 0;
    }
    if ( BYTE4(this->m_OriginalMdl[6].MappedSystemVa) )
      FxMdlFreeDebug(this->m_DriverGlobals, m_MdlToFree);
    else
      IoFreeMdl(m_MdlToFree);
    this->m_MdlToFree = 0LL;
  }
  this->__vftable = (FxIoContext_vtbl *)FxRequestContext::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( ((unsigned __int16)this & 0xFFF) != 0 )
    {
      v6 = *(FX_POOL_TRACKER **)&this[-1].m_CopyBackToBuffer;
      if ( LOBYTE(this[-1].m_OtherMemory[33].__vftable) )
      {
        if ( FxIsPagedPoolType(v6->PoolType) )
          FxPoolRemovePagedAllocateTracker(v6);
        else
          FxPoolRemoveNonPagedAllocateTracker(v6);
        memset(v6, 0, v6->Size + 64);
      }
      v7 = (FxIoContext *)v6;
    }
    else
    {
      v7 = this;
    }
    ExFreePoolWithTag(v7, 0);
  }
  return this;
}
