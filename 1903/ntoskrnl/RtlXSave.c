/*
 * XREFs of RtlXSave @ 0x14012E4A4
 * Callers:
 *     KeSaveExtendedAndSupervisorState @ 0x14012E2AC (KeSaveExtendedAndSupervisorState.c)
 *     RtlXSaveS @ 0x14012E47C (RtlXSaveS.c)
 *     KiSaveNpxState @ 0x1402B5678 (KiSaveNpxState.c)
 *     KiSwapToUmsThread @ 0x140880D60 (KiSwapToUmsThread.c)
 *     KiCaptureUmsThreadContext @ 0x140881F98 (KiCaptureUmsThreadContext.c)
 *     ViCtxCaptureInitialIsrState @ 0x140981510 (ViCtxCaptureInitialIsrState.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x1409815AC (ViCtxCheckAndReleaseIsrState.c)
 * Callees:
 *     XSaveCHelper @ 0x1401CC9B0 (XSaveCHelper.c)
 */

__int64 __fastcall RtlXSave(_DWORD *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // r8d
  int v6; // ecx

  if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    return XSaveCHelper(a1, a2, a3, a1);
  result = a2;
  if ( (a2 & 6) == 4 )
  {
    v5 = a1[6];
    v6 = a1[7];
    _xsave(a1, a2);
    a1[6] = v5;
    a1[7] = v6;
  }
  else
  {
    _xsave(a1, a2);
  }
  return result;
}
