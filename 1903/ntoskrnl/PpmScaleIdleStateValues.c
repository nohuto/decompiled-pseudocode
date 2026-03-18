/*
 * XREFs of PpmScaleIdleStateValues @ 0x140176108
 * Callers:
 *     PpmPerfApplyProcessorState @ 0x140175B70 (PpmPerfApplyProcessorState.c)
 *     PpmResetIdlePolicy @ 0x140195080 (PpmResetIdlePolicy.c)
 * Callees:
 *     HvlRegisterLogicalProcessorFrequency @ 0x14028B1CC (HvlRegisterLogicalProcessorFrequency.c)
 */

void __fastcall PpmScaleIdleStateValues(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  unsigned int v4; // eax
  int v5; // ecx

  if ( *(_BYTE *)(a1 + 60) )
  {
    v2 = *(_QWORD *)(a1 + 376);
    if ( v2 )
    {
      v3 = *(_QWORD *)(a1 + 368);
      if ( v3 )
      {
        v4 = *(_DWORD *)(v3 + 360);
        if ( *(_DWORD *)(v2 + 72) < v4 )
          LOBYTE(v4) = *(_BYTE *)(v2 + 72);
        v5 = *(unsigned __int8 *)(a1 + 59);
        *(_BYTE *)(a1 + 56) = (unsigned __int8)v4
                            * (unsigned __int8)v4
                            * (unsigned int)*(unsigned __int8 *)(a1 + 58)
                            / 0x2710;
        *(_BYTE *)(a1 + 57) = (unsigned __int8)v4 * (unsigned int)(unsigned __int8)v4 * v5 / 0x2710;
        if ( *(_DWORD *)(a1 + 216) == 3 )
          HvlRegisterLogicalProcessorFrequency(a1 - 23808, (unsigned __int8)v4);
      }
    }
  }
}
