/*
 * XREFs of ?ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ @ 0x18021F7BC
 * Callers:
 *     ?SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x1801DCC1C (-SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x1801DCE30 (-SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampingOption@@@Z @ 0x1801DD3C0 (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampi.c)
 *     ?OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x18021F0C4 (-OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z.c)
 *     ?OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipulation@@@Z @ 0x18021F36C (-OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipu.c)
 *     ?ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBUMarshaledManipulationInfo@@@Z @ 0x18021F4B8 (-ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERA.c)
 * Callees:
 *     CChainingHelper::RunForAllAxes__lambda_1efee0dcf62ca9ca30779b989cdda83e___ @ 0x180220840 (CChainingHelper--RunForAllAxes__lambda_1efee0dcf62ca9ca30779b989cdda83e___.c)
 *     ?UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ @ 0x180220C3C (-UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ.c)
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
