/*
 * XREFs of PpmIdleEvaluateConstraints @ 0x14018A27C
 * Callers:
 *     PpmIdleSelectStates @ 0x140189C30 (PpmIdleSelectStates.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1400BE8C0 (RtlGetInterruptTimePrecise.c)
 *     PoAllProcessorsDeepIdle @ 0x140112CD0 (PoAllProcessorsDeepIdle.c)
 */

LARGE_INTEGER __fastcall PpmIdleEvaluateConstraints(__int64 a1, LARGE_INTEGER *a2)
{
  __int64 v2; // rsi
  char v4; // r11
  int v5; // eax
  char v6; // al
  LARGE_INTEGER PerformanceCounter; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 23808);
  *a2 = RtlGetInterruptTimePrecise(&PerformanceCounter);
  v4 = 0;
  *(LARGE_INTEGER *)(v2 + 496) = PerformanceCounter;
  *(_QWORD *)(v2 + 504) = *(_QWORD *)(a1 + 23832) + *(_QWORD *)(a1 + 24008);
  *(_BYTE *)(v2 + 538) = *(_BYTE *)(a1 + 24228);
  *(_BYTE *)(v2 + 536) = *(_BYTE *)(a1 + 23864);
  *(_BYTE *)(v2 + 537) = *(_BYTE *)(a1 + 23865);
  *(_BYTE *)(v2 + 539) = 1;
  if ( *(_BYTE *)(a1 + 33) && PoAllProcessorsDeepIdle() )
  {
    *(_BYTE *)(v2 + 540) = 1;
    *(_WORD *)(v2 + 48) |= 0x80u;
  }
  else
  {
    *(_BYTE *)(v2 + 540) = v4;
  }
  if ( *(_BYTE *)(v2 + 1) == v4 )
  {
    v5 = -1;
  }
  else
  {
    *(_WORD *)(v2 + 48) |= 0x100u;
    v5 = *(_DWORD *)(v2 + 28);
  }
  *(_DWORD *)(v2 + 528) = v5;
  if ( PpmIdleRespectIdleStateMax == v4 )
  {
    *(_BYTE *)(v2 + 542) = v4;
  }
  else
  {
    v6 = BYTE2(PpmCurrentProfile[341 * dword_140443ACC + 24]);
    *(_BYTE *)(v2 + 542) = v6;
    if ( v6 )
      *(_WORD *)(v2 + 48) |= 0x4000u;
  }
  return PerformanceCounter;
}
