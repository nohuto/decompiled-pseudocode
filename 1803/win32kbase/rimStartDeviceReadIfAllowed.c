/*
 * XREFs of rimStartDeviceReadIfAllowed @ 0x1C00FE20C
 * Callers:
 *     rimIssueReads @ 0x1C00FE140 (rimIssueReads.c)
 * Callees:
 *     RIMStartDeviceSpecificRead @ 0x1C00FDADC (RIMStartDeviceSpecificRead.c)
 */

__int64 __fastcall rimStartDeviceReadIfAllowed(struct _MCGEN_TRACE_CONTEXT *a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // r8d

  v2 = *(_DWORD *)(a2 + 184);
  v3 = 0;
  if ( (v2 & 0x100) == 0 && (v2 & 0x40) == 0 && (v2 & 0x200) == 0 && (v2 & 0x1000) == 0 )
    return (unsigned int)RIMStartDeviceSpecificRead(a1, a2, 0LL);
  return v3;
}
