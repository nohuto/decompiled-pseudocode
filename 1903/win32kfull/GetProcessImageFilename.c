/*
 * XREFs of GetProcessImageFileName @ 0x1C0009AF8
 * Callers:
 *     GetProcessImageFilename @ 0x1C0009A4C (GetProcessImageFilename.c)
 *     ?LogFontLoadAttempt@@YAXPEAXW4_W32KFontSourceType@@PEBGH@Z @ 0x1C026FE7C (-LogFontLoadAttempt@@YAXPEAXW4_W32KFontSourceType@@PEBGH@Z.c)
 * Callees:
 *     memset @ 0x1C0166840 (memset.c)
 */

void *__fastcall GetProcessImageFileName(HANDLE ProcessHandle)
{
  void *v1; // rbx
  void *v3; // rax
  ULONG ProcessInformationLength; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0LL;
  if ( ZwQueryInformationProcess(ProcessHandle, ProcessImageFileNameWin32, 0LL, 0, &ProcessInformationLength) == -1073741820
    && ProcessInformationLength >= 0x10 )
  {
    v3 = (void *)AllocFreeTmpBuffer(ProcessInformationLength + 2);
    v1 = v3;
    if ( v3 )
    {
      memset(v3, 0, ProcessInformationLength + 2LL);
      if ( ZwQueryInformationProcess(ProcessHandle, ProcessImageFileNameWin32, v1, ProcessInformationLength, 0LL) < 0 )
      {
        FreeTmpBuffer(v1);
        return 0LL;
      }
    }
  }
  return v1;
}
