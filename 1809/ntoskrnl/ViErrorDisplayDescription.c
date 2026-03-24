/*
 * XREFs of ViErrorDisplayDescription @ 0x140936124
 * Callers:
 *     ViErrorReport1 @ 0x14030AF3C (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x14030AFC0 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x14030B054 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x14030B0F8 (ViErrorReport6.c)
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
 *     VfUtilDbgPrint @ 0x140309A4C (VfUtilDbgPrint.c)
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
