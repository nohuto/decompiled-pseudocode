/*
 * XREFs of Command_GetSupportedExtendedCapabilityCommandCompletion @ 0x1C0002220
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 */

LONG __fastcall Command_GetSupportedExtendedCapabilityCommandCompletion(__int64 a1, __int16 a2)
{
  __int64 *v2; // rbx
  __int64 v3; // r10
  __int16 v4; // dx
  char v5; // al

  v2 = *(__int64 **)(a1 + 48);
  v3 = *v2;
  if ( *(_BYTE *)(a1 + 60) == 1 )
  {
    v4 = *(_WORD *)(a1 + 64);
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 88LL) + 108LL) = v4;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = v4;
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_d(*(_QWORD *)(v3 + 16), v4, 7, 25, (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids, v5);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 3;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v3 + 16),
      a2,
      7,
      26,
      (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids,
      *(_BYTE *)(a1 + 60));
  }
  return KeSetEvent((PRKEVENT)(v2 + 13), 0, 0);
}
