/*
 * XREFs of ?_ResetManipulationThreadDataIfNecessary@CManipulation@@AEAAXW4InteractionState@@@Z @ 0x1801E4024
 * Callers:
 *     ?UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@PEAUIManipulationTelemetryData@@@Z @ 0x1801E3960 (-UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@PEAUIManipul.c)
 *     ?UpdateOnManipulationThreadWithoutDelta@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadWithoutDeltaArgs@@@Z @ 0x1801E3C80 (-UpdateOnManipulationThreadWithoutDelta@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadWithou.c)
 * Callees:
 *     ?Reset@ManipulationData@@QEAAXXZ @ 0x1801E31C8 (-Reset@ManipulationData@@QEAAXXZ.c)
 *     ?_UpdateCaptureState@CManipulation@@AEAAX_N@Z @ 0x1801E4690 (-_UpdateCaptureState@CManipulation@@AEAAX_N@Z.c)
 */

void __fastcall CManipulation::_ResetManipulationThreadDataIfNecessary(__int64 a1, int a2)
{
  int v2; // eax
  int v3; // r9d
  char v4; // r8

  v2 = *(_DWORD *)(a1 + 228);
  v3 = a2;
  if ( a2 != v2 )
  {
    v4 = *(_BYTE *)(a1 + 440);
    if ( (v4 & 4) != 0 )
      goto LABEL_7;
    if ( (unsigned int)(v2 - 2) <= 2 && (unsigned int)(a2 - 2) > 2 )
    {
      CManipulation::_UpdateCaptureState((CManipulation *)a1, 0);
      v4 = *(_BYTE *)(a1 + 440);
    }
    if ( (v4 & 4) != 0 )
    {
LABEL_7:
      if ( (unsigned int)(*(_DWORD *)(a1 + 228) - 2) > 2 && (unsigned int)(v3 - 2) <= 2 )
        ManipulationData::Reset((ManipulationData *)(a1 + 72));
    }
  }
}
