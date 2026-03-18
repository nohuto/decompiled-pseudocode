/*
 * XREFs of ?ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ @ 0x1801E5D80
 * Callers:
 *     ?SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x1801A1FD0 (-SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x1801A21E4 (-SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampingOption@@@Z @ 0x1801A25EC (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampi.c)
 *     ?OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x1801E567C (-OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z.c)
 *     ?OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipulation@@@Z @ 0x1801E5924 (-OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipu.c)
 *     ?ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBUMarshaledManipulationInfo@@@Z @ 0x1801E5A7C (-ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTI.c)
 * Callees:
 *     CChainingHelper::RunForAllAxes__lambda_1efee0dcf62ca9ca30779b989cdda83e___ @ 0x1801E6F70 (CChainingHelper--RunForAllAxes__lambda_1efee0dcf62ca9ca30779b989cdda83e___.c)
 *     ?UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ @ 0x1801E7364 (-UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ.c)
 */

void __fastcall InteractionSourceManager::ReconfigureAllManipulations(InteractionSourceManager *this)
{
  _QWORD *v1; // rsi
  _QWORD *i; // rbx
  CChainingHelper *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD v7[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+60h] [rbp+8h] BYREF
  __int64 v9; // [rsp+68h] [rbp+10h] BYREF

  v1 = (_QWORD *)*((_QWORD *)this + 3);
  for ( i = (_QWORD *)*v1; i != v1; i = (_QWORD *)*i )
  {
    v4 = (CChainingHelper *)i[3];
    v9 = i[2];
    v5 = *((_QWORD *)this + 1);
    v7[1] = v4;
    v6 = *(_QWORD *)(v5 + 16);
    v7[0] = &v8;
    v8 = v6;
    v7[2] = &v9;
    CChainingHelper::RunForAllAxes__lambda_1efee0dcf62ca9ca30779b989cdda83e___(this, v7);
    CChainingHelper::UpdateConfigurationIfDirty(v4);
  }
}
