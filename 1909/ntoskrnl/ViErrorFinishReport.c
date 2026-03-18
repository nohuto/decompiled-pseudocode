/*
 * XREFs of ViErrorFinishReport @ 0x140975830
 * Callers:
 *     ViErrorReport1 @ 0x14032867C (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x140328700 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x140328794 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x140328838 (ViErrorReport6.c)
 *     ViGenericVerifyIrpStackDownward @ 0x1409652E0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x1409655B0 (ViGenericVerifyNewIrp.c)
 *     VfIoDetachDevice @ 0x140973840 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x1409755F8 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x140975690 (VfErrorReport8.c)
 *     VfErrorReport9 @ 0x140975718 (VfErrorReport9.c)
 *     VerifierNtCreateFile @ 0x140984F00 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x1409850B0 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x140985200 (VerifierNtWriteFile.c)
 * Callees:
 *     DbgPrompt @ 0x14030AC00 (DbgPrompt.c)
 *     VfUtilDbgPrint @ 0x140327014 (VfUtilDbgPrint.c)
 *     VerifierBugCheckIfAppropriate @ 0x14096E604 (VerifierBugCheckIfAppropriate.c)
 *     VfErrorStoreTriageInformation @ 0x140975790 (VfErrorStoreTriageInformation.c)
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
