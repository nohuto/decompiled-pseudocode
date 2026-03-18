/*
 * XREFs of CitBackgroundMouseInput @ 0x1C0034310
 * Callers:
 *     ?OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z @ 0x1C00342D0 (-OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z.c)
 * Callees:
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C00336E8 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1C003370C (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x1C003382C (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 */

void __fastcall CitBackgroundMouseInput(struct _CIT_PROCESS **a1)
{
  struct _CIT_IMPACT_CONTEXT *v1; // rbx
  struct _CIT_PROCESS *v3; // rsi
  unsigned __int64 v4; // r8
  struct _CIT_INTERACTION_SUMMARY *v5; // rax

  v1 = qword_1C01D0CF0;
  if ( qword_1C01D0CF0 )
  {
    if ( *((struct _CIT_PROCESS ***)qword_1C01D0CF0 + 15) != a1 )
    {
      v3 = CitpProcessEnsureContext(a1);
      if ( v3 )
      {
        v4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        if ( (unsigned int)(v4 - *((_DWORD *)v3 + 19)) > 0x3E8 )
        {
          *((_DWORD *)v3 + 19) = v4;
          PsUpdateComponentPower(*a1, 9LL);
          v5 = CitpInteractionSummaryEnsure(v1, (struct tagPROCESSINFO **)v3, 8);
          if ( v5 )
            CitpStatIncrement((unsigned __int16 *)v5 + 45, 1);
        }
      }
    }
  }
}
