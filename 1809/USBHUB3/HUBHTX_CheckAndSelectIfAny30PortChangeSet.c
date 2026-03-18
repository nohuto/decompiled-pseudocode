/*
 * XREFs of HUBHTX_CheckAndSelectIfAny30PortChangeSet @ 0x1C000477C
 * Callers:
 *     HUBPSM30_CheckIfThereIsAPortChangeOnStartResumeOnGetPortStatus @ 0x1C00106C0 (HUBPSM30_CheckIfThereIsAPortChangeOnStartResumeOnGetPortStatus.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002C5A0 (HUBMISC_VerifierDbgBreak.c)
 */

__int64 __fastcall HUBHTX_CheckAndSelectIfAny30PortChangeSet(__int64 a1)
{
  unsigned __int16 v2; // ax
  int v3; // ecx
  unsigned int v4; // edi

  *(_WORD *)(a1 + 186) &= ~*(_WORD *)(a1 + 194);
  v2 = *(_WORD *)(a1 + 186);
  if ( (v2 & 1) != 0 )
  {
    v3 = 16;
    *(_WORD *)(a1 + 186) = v2 & 0xFFFE;
    *(_WORD *)(a1 + 194) |= 1u;
LABEL_13:
    *(_DWORD *)(a1 + 12) = v3;
    return 3089;
  }
  if ( (v2 & 8) != 0 )
  {
    v3 = 19;
    *(_WORD *)(a1 + 186) = v2 & 0xFFF7;
    *(_WORD *)(a1 + 194) |= 8u;
    *(_DWORD *)(a1 + 1424) = 4;
    goto LABEL_13;
  }
  if ( (v2 & 0x10) != 0 )
  {
    v3 = 20;
    *(_WORD *)(a1 + 186) = v2 & 0xFFEF;
    *(_WORD *)(a1 + 194) |= 0x10u;
    goto LABEL_13;
  }
  if ( (v2 & 0x40) != 0 )
  {
    v3 = 25;
    *(_WORD *)(a1 + 186) = v2 & 0xFFBF;
    *(_WORD *)(a1 + 194) |= 0x40u;
    goto LABEL_13;
  }
  if ( (v2 & 0x20) != 0 )
  {
    v3 = 29;
    *(_WORD *)(a1 + 186) = v2 & 0xFFDF;
    *(_WORD *)(a1 + 194) |= 0x20u;
    goto LABEL_13;
  }
  if ( (v2 & 0x80u) != 0 )
  {
    v3 = 26;
    *(_WORD *)(a1 + 186) = v2 & 0xFF7F;
    *(_WORD *)(a1 + 194) |= 0x80u;
    goto LABEL_13;
  }
  if ( v2 )
  {
    v4 = 3041;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 1432),
      2u,
      4u,
      0x53u,
      (__int64)&WPP_74185d68226e30ea568d483797443b73_Traceguids,
      v2);
    if ( (*(_DWORD *)(*(_QWORD *)a1 + 2592LL) & 0x10) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierInvalidPortStatus", *(_QWORD *)a1 + 1264LL);
  }
  else
  {
    return 3005;
  }
  return v4;
}
