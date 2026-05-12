/*
 * XREFs of GetSrbScsiData @ 0x1C001F958
 * Callers:
 *     RaUnitAtaPassThroughMarshalResults @ 0x1C0001470 (RaUnitAtaPassThroughMarshalResults.c)
 *     RaidLogGetParm4 @ 0x1C0004EA0 (RaidLogGetParm4.c)
 *     RaidLogMiniportCompletion @ 0x1C00059C0 (RaidLogMiniportCompletion.c)
 *     RaidCompleteRequestEx @ 0x1C000A880 (RaidCompleteRequestEx.c)
 *     RaidUnitHandleSpecialErrorConditions @ 0x1C000BA5C (RaidUnitHandleSpecialErrorConditions.c)
 *     RaidUnitProcessBusyRequest @ 0x1C00116D8 (RaidUnitProcessBusyRequest.c)
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x1C00140B4 (RaidBusEnumeratorIssueSynchronousRequest.c)
 *     RaUnitSmartReturnStatus @ 0x1C0046AC0 (RaUnitSmartReturnStatus.c)
 *     RaidLogRequestComplete @ 0x1C0047D60 (RaidLogRequestComplete.c)
 *     StorEtwIORequestDispatch @ 0x1C004B6EC (StorEtwIORequestDispatch.c)
 *     StorEtwIORequestServiceTimeEventData @ 0x1C004B924 (StorEtwIORequestServiceTimeEventData.c)
 *     StorEtwLogoRequestServiceTimeEventData @ 0x1C004BC1C (StorEtwLogoRequestServiceTimeEventData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetSrbScsiData(__int64 a1, _BYTE *a2, _DWORD *a3, _BYTE *a4, _QWORD *a5, _BYTE *a6)
{
  __int64 v6; // r11
  char v7; // r15
  __int64 v10; // rbp
  __int64 v11; // rcx
  unsigned __int64 v12; // rdi
  __int64 v13; // rdx
  int v14; // ecx
  unsigned __int64 v15; // rcx
  __int64 v16; // rcx
  int v18; // ecx
  __int64 v19; // rcx

  v6 = 0LL;
  v7 = 0;
  if ( *(_BYTE *)(a1 + 2) == 40 && !*(_DWORD *)(a1 + 20) )
  {
    v10 = 0LL;
    if ( !*(_DWORD *)(a1 + 56) )
      return v6;
    while ( 1 )
    {
      v11 = *(unsigned int *)(a1 + 4 * v10 + 120);
      if ( (unsigned int)v11 >= 0x80 )
      {
        v12 = *(unsigned int *)(a1 + 16);
        if ( (unsigned int)v11 <= (unsigned int)v12 )
          break;
      }
LABEL_35:
      v10 = (unsigned int)(v10 + 1);
      if ( (unsigned int)v10 >= *(_DWORD *)(a1 + 56) )
        return v6;
    }
    v13 = (unsigned int)v11;
    v14 = *(_DWORD *)(v11 + a1) - 64;
    if ( v14 )
    {
      v18 = v14 - 1;
      if ( v18 )
      {
        if ( v18 == 1 && v13 + 40 <= v12 )
        {
          if ( a3 )
            *a3 = *(_DWORD *)(v13 + a1 + 12);
          v19 = v13 + a1 + 32;
          if ( !*(_DWORD *)(v13 + a1 + 12) )
            v19 = v6;
          v6 = v19;
          if ( a4 )
            *a4 = *(_BYTE *)(v13 + a1 + 8);
          if ( a5 )
            *a5 = *(_QWORD *)(v13 + a1 + 24);
          if ( a6 )
            *a6 = *(_BYTE *)(v13 + a1 + 9);
          return v6;
        }
        goto LABEL_19;
      }
      v15 = v13 + 56;
    }
    else
    {
      v15 = v13 + 40;
    }
    if ( v15 <= v12 )
    {
      v7 = 1;
      if ( a2 )
        *a2 = *(_BYTE *)(v13 + a1 + 10);
      v16 = v13 + a1 + 24;
      if ( !*(_BYTE *)(v13 + a1 + 10) )
        v16 = v6;
      v6 = v16;
      if ( a4 )
        *a4 = *(_BYTE *)(v13 + a1 + 8);
      if ( a5 )
        *a5 = *(_QWORD *)(v13 + a1 + 16);
      if ( !a6 )
        return v6;
      *a6 = *(_BYTE *)(v13 + a1 + 9);
    }
LABEL_19:
    if ( v7 )
      return v6;
    goto LABEL_35;
  }
  if ( a2 )
    *a2 = 0;
  if ( a3 )
    *a3 = 0;
  if ( a4 )
    *a4 = 0;
  if ( a5 )
    *a5 = 0LL;
  if ( a6 )
    *a6 = 0;
  return v6;
}
