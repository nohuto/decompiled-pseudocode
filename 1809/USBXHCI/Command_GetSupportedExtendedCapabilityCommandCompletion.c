/*
 * XREFs of Command_GetSupportedExtendedCapabilityCommandCompletion @ 0x1C0002070
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 */

LONG __fastcall Command_GetSupportedExtendedCapabilityCommandCompletion(__int64 a1, __int16 a2)
{
  __int64 *v2; // rbx
  char v3; // al
  __int64 v4; // r10
  __int16 v5; // dx
  char v7; // [rsp+28h] [rbp-10h]

  v2 = *(__int64 **)(a1 + 48);
  v3 = *(_BYTE *)(a1 + 60);
  v4 = *v2;
  if ( v3 == 1 )
  {
    v5 = *(_WORD *)(a1 + 64);
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 88LL) + 108LL) = v5;
    v7 = v5;
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_d(*(_QWORD *)(v4 + 16), v5, 7, 25, (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids, v7);
  }
  else
  {
    LOBYTE(a2) = 3;
    WPP_RECORDER_SF_d(*(_QWORD *)(v4 + 16), a2, 7, 26, (__int64)&WPP_6807f6924beb3ee6c5fb59b3efd77224_Traceguids, v3);
  }
  return KeSetEvent((PRKEVENT)(v2 + 13), 0, 0);
}
