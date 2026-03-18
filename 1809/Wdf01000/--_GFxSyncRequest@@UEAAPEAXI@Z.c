/*
 * XREFs of ??_GFxSyncRequest@@UEAAPEAXI@Z @ 0x1C00937C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00054C8 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C000D038 (--1FxSyncRequest@@UEAA@XZ.c)
 */

FxSyncRequest *__fastcall FxSyncRequest::`scalar deleting destructor'(FxSyncRequest *this, char a2)
{
  FX_POOL_TRACKER *p_WaitListHead; // rcx

  FxSyncRequest::~FxSyncRequest(this);
  if ( (a2 & 1) != 0 )
  {
    p_WaitListHead = (FX_POOL_TRACKER *)&this[-1].m_DestroyedEvent.m_Event.m_Event.Header.WaitListHead;
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      p_WaitListHead = (FX_POOL_TRACKER *)this;
    FxPoolFree(p_WaitListHead);
  }
  return this;
}
