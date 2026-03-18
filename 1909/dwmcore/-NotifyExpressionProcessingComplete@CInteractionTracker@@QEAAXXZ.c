/*
 * XREFs of ?NotifyExpressionProcessingComplete@CInteractionTracker@@QEAAXXZ @ 0x1801D97AC
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x1800757E0 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 * Callees:
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x1801D8334 (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ @ 0x1801D8424 (-CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ.c)
 *     ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x18021E1B4 (-TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ.c)
 *     ?UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ @ 0x18021F52C (-UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ.c)
 */

void __fastcall CInteractionTracker::NotifyExpressionProcessingComplete(CInteractionTracker *this)
{
  bool v1; // di
  CChainingHelper *ActiveChainingHelper; // rax

  v1 = 1;
  if ( (*((_BYTE *)this + 533) & 1) == 0 )
    v1 = *((_QWORD *)this + 79) == 0LL;
  if ( *((_DWORD *)this + 42) )
  {
    if ( !v1 )
      goto LABEL_7;
    CInteractionTracker::CheckForIdle(this);
  }
  if ( !v1 )
  {
LABEL_7:
    if ( (*((_BYTE *)this + 533) & 2) == 0 )
      goto LABEL_9;
  }
  CInteractionTracker::CheckForOutOfBounds(this);
LABEL_9:
  *((_BYTE *)this + 533) &= ~2u;
  ActiveChainingHelper = InteractionSourceManager::TryGetActiveChainingHelper((CInteractionTracker *)((char *)this + 192));
  if ( ActiveChainingHelper )
    CChainingHelper::UpdateConfigurationIfDirty(ActiveChainingHelper);
  CInteractionTracker::SendPendingCallbacks(this);
}
