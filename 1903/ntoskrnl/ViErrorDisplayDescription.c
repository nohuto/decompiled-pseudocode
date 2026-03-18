/*
 * XREFs of ViErrorDisplayDescription @ 0x1409757DC
 * Callers:
 *     ViErrorReport1 @ 0x140328C2C (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x140328CB0 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x140328D44 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x140328DE8 (ViErrorReport6.c)
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
 *     VfUtilDbgPrint @ 0x1403275C4 (VfUtilDbgPrint.c)
 */

__int64 __fastcall ViErrorDisplayDescription(int a1)
{
  __int64 result; // rax
  _DWORD *i; // rdx

  VfUtilDbgPrint("************************************************************\nDriver Verifier detected violation:\n\n");
  LODWORD(result) = 0;
  for ( i = &ViErrorDescriptions; *i != a1; i += 4 )
  {
    result = (unsigned int)(result + 1);
    if ( (unsigned int)result >= 0x3F )
      return result;
  }
  return VfUtilDbgPrint("%s\n\n", *((const char **)&ViErrorDescriptions + 2 * (unsigned int)result + 1));
}
