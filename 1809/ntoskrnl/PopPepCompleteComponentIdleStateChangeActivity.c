/*
 * XREFs of PopPepCompleteComponentIdleStateChangeActivity @ 0x140172460
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     PopPepTryPowerDownComponent @ 0x1400FFFA4 (PopPepTryPowerDownComponent.c)
 *     PopPepUpdateIdleState @ 0x1400FFFE4 (PopPepUpdateIdleState.c)
 *     PopFxUpdateComponentAccountingEnhanced @ 0x140172524 (PopFxUpdateComponentAccountingEnhanced.c)
 *     PopPepUpdateIdleStateRefCount @ 0x1401725A8 (PopPepUpdateIdleStateRefCount.c)
 *     PopFxUpdateComponentPerfStateNominalChange @ 0x1402DA350 (PopFxUpdateComponentPerfStateNominalChange.c)
 */

void __fastcall PopPepCompleteComponentIdleStateChangeActivity(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r9

  if ( !a2 )
    return;
  *(_DWORD *)(*(_QWORD *)(a2 + 64) + 12LL) = 0;
  *(_BYTE *)(*(_QWORD *)(a2 + 64) + 16LL) = 0;
  if ( *(_BYTE *)(a2 + 184) && *(_BYTE *)(a1 + 124) )
  {
    v5 = *(_QWORD *)(a2 + 24);
    if ( (v5 & 4) != 0 )
    {
      v6 = *(unsigned int *)(a2 + 176);
LABEL_13:
      PopFxUpdateComponentPerfStateNominalChange(*(_QWORD *)(a1 + 32), *(unsigned int *)(a2 + 8), 0LL, v6);
      goto LABEL_3;
    }
    if ( *(_DWORD *)(a2 + 180) )
    {
      v6 = *(unsigned int *)(a2 + 176);
      if ( !(_DWORD)v6 && (v5 & 2) != 0 )
        goto LABEL_13;
    }
  }
LABEL_3:
  if ( !*(_DWORD *)(a2 + 176) )
    KeSetEvent((PRKEVENT)(a2 + 32), 0, 0);
  PopPepUpdateIdleState(a1, a2, 0);
  PopPepTryPowerDownComponent(a1, (_DWORD *)a2);
  v4 = *(unsigned int *)(a2 + 176);
  PopPepUpdateIdleStateRefCount(
    *(unsigned int *)(*(_QWORD *)(a2 + 192) + 24LL * *(unsigned int *)(a2 + 180) + 16),
    *(unsigned int *)(*(_QWORD *)(a2 + 192) + 24 * v4 + 16),
    0LL);
  PopFxUpdateComponentAccountingEnhanced(*(_QWORD *)(a1 + 32), *(unsigned int *)(a2 + 8), (unsigned int)v4, 1LL);
}
