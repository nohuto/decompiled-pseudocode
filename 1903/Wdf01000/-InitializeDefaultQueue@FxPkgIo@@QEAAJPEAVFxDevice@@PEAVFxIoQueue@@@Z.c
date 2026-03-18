/*
 * XREFs of ?InitializeDefaultQueue@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxIoQueue@@@Z @ 0x1C0077BA8
 * Callers:
 *     imp_WdfIoQueueCreate @ 0x1C0076A20 (imp_WdfIoQueueCreate.c)
 * Callees:
 *     WPP_IFR_SF_qid @ 0x1C0030F38 (WPP_IFR_SF_qid.c)
 *     ?MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C003CD20 (-MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 */

__int64 __fastcall FxPkgIo::InitializeDefaultQueue(FxPkgIo *this, unsigned __int64 Device, FxIoQueue *Queue)
{
  unsigned __int16 v3; // ax
  unsigned __int64 _a2; // rdx
  FxIoQueue **m_DispatchTable; // rax
  __int64 v7; // r9

  if ( this->m_DefaultQueue )
  {
    v3 = *(_WORD *)(Device + 10);
    _a2 = Device ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !v3 )
      _a2 = 0LL;
    WPP_IFR_SF_qid(this->m_Globals, 2u, 0xDu, 0x11u, WPP_FxPkgIo_cpp_Traceguids, this, _a2, -1073741823);
    return 3221225473LL;
  }
  else
  {
    m_DispatchTable = this->m_DispatchTable;
    v7 = 28LL;
    do
    {
      if ( !*m_DispatchTable )
        *m_DispatchTable = Queue;
      ++m_DispatchTable;
      --v7;
    }
    while ( v7 );
    this->m_DefaultQueue = Queue;
    FxObject::MarkNoDeleteDDI(Queue, ObjectLock);
    return 0LL;
  }
}
