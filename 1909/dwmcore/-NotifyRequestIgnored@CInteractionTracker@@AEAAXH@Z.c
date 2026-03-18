/*
 * XREFs of ?NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z @ 0x1801D9834
 * Callers:
 *     ?ProcessApplyPositionImpulse@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_APPLYPOSITIONIMPULSE@@@Z @ 0x1801D9970 (-ProcessApplyPositionImpulse@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERAC.c)
 *     ?ProcessApplyScaleImpulse@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_APPLYSCALEIMPULSE@@@Z @ 0x1801D9A88 (-ProcessApplyScaleImpulse@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIO.c)
 *     ?ProcessSetRequestedDeltaPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDDELTAPOSITION@@@Z @ 0x1801DA230 (-ProcessSetRequestedDeltaPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_IN.c)
 *     ?ProcessSetRequestedPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITION@@@Z @ 0x1801DA2AC (-ProcessSetRequestedPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERAC.c)
 *     ?ProcessSetRequestedPositionAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITIONANIMATION@@@Z @ 0x1801DA328 (-ProcessSetRequestedPositionAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCM.c)
 *     ?ProcessSetRequestedScale@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALE@@@Z @ 0x1801DA414 (-ProcessSetRequestedScale@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIO.c)
 *     ?ProcessSetRequestedScaleAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALEANIMATION@@@Z @ 0x1801DA498 (-ProcessSetRequestedScaleAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_I.c)
 * Callees:
 *     ?ShouldNotify@CInteractionTracker@@AEAA_NI@Z @ 0x1801DC54C (-ShouldNotify@CInteractionTracker@@AEAA_NI@Z.c)
 */

void __fastcall CInteractionTracker::NotifyRequestIgnored(CInteractionTracker *this)
{
  bool ShouldNotify; // al
  __int64 v2; // rcx
  int v3; // r11d
  unsigned int v4; // r9d
  __int64 v5; // rax
  __int64 v6; // r10
  int v7; // [rsp+20h] [rbp-38h]
  __int64 v8; // [rsp+38h] [rbp-20h]
  _QWORD v9[3]; // [rsp+40h] [rbp-18h] BYREF

  ShouldNotify = CInteractionTracker::ShouldNotify(this, 0xBu);
  v4 = 0;
  if ( ShouldNotify )
  {
    v5 = *(_QWORD *)(v2 + 48);
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 1224LL) + 48LL);
    if ( v5 )
      v4 = *(_DWORD *)(v5 + 68);
    v9[0] = v4;
    v9[1] = *(unsigned int *)(v2 + 56);
    LOWORD(v7) = 2;
    CoreUICallSend(v6, v9, 2LL, 8LL, v7, &unk_1802B116E, v3, v8);
  }
}
