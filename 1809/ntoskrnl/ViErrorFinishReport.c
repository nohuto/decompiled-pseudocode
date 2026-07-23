/*
 * XREFs of ViErrorFinishReport @ 0x140937178
 * Callers:
 *     ViErrorReport1 @ 0x14030B12C (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x14030B1B0 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x14030B244 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x14030B2E8 (ViErrorReport6.c)
 *     ViGenericVerifyIrpStackDownward @ 0x140927DB0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x140928080 (ViGenericVerifyNewIrp.c)
 *     VfIoDeleteDevice @ 0x140935128 (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x14093529C (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x140936FB8 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x140937050 (VfErrorReport8.c)
 *     VerifierNtCreateFile @ 0x140946530 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x1409466E0 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x140946830 (VerifierNtWriteFile.c)
 * Callees:
 *     DbgPrompt @ 0x1402ECB80 (DbgPrompt.c)
 *     VfUtilDbgPrint @ 0x140309C3C (VfUtilDbgPrint.c)
 *     VerifierBugCheckIfAppropriate @ 0x140930D84 (VerifierBugCheckIfAppropriate.c)
 *     VfErrorStoreTriageInformation @ 0x1409370D8 (VfErrorStoreTriageInformation.c)
 */

__int64 __fastcall ViErrorFinishReport(int a1, ULONG_PTR a2, ULONG_PTR a3, __int64 a4)
{
  ULONG_PTR v4; // rsi
  __int64 result; // rax
  _DWORD *i; // r10

  v4 = a1;
  VfUtilDbgPrint("************************************************************\n\n");
  result = 0LL;
  for ( i = &ViErrorDescriptions; *i != (_DWORD)v4; i += 4 )
  {
    result = (unsigned int)(result + 1);
    if ( (unsigned int)result >= 0x3F )
      return result;
  }
  result = *((unsigned int *)&ViErrorDescriptions + 4 * result + 1);
  if ( (result & 1) == 0 )
  {
    if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
    {
      VfErrorStoreTriageInformation(201LL, v4, a2, a3, a4);
      __debugbreak();
    }
    result = (unsigned int)MmVerifierData;
    if ( (MmVerifierData & 0x10) != 0 )
      return VerifierBugCheckIfAppropriate(0xC9u, v4, a2, a3, a4);
  }
  return result;
}
