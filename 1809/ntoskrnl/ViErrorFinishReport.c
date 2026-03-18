/*
 * XREFs of ViErrorFinishReport @ 0x140936178
 * Callers:
 *     ViErrorReport1 @ 0x14030AE3C (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x14030AEC0 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x14030AF54 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x14030AFF8 (ViErrorReport6.c)
 *     ViGenericVerifyIrpStackDownward @ 0x140926DB0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x140927080 (ViGenericVerifyNewIrp.c)
 *     VfIoDeleteDevice @ 0x140934128 (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x14093429C (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x140935FB8 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x140936050 (VfErrorReport8.c)
 *     VerifierNtCreateFile @ 0x140945530 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x1409456E0 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x140945830 (VerifierNtWriteFile.c)
 * Callees:
 *     DbgPrompt @ 0x1402EC890 (DbgPrompt.c)
 *     VfUtilDbgPrint @ 0x14030994C (VfUtilDbgPrint.c)
 *     VerifierBugCheckIfAppropriate @ 0x14092FD84 (VerifierBugCheckIfAppropriate.c)
 *     VfErrorStoreTriageInformation @ 0x1409360D8 (VfErrorStoreTriageInformation.c)
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
