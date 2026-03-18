/*
 * XREFs of FxInitializeBugCheckDriverInfo @ 0x1C00927B8
 * Callers:
 *     FxLibraryGlobalsCommission @ 0x1C00594FC (FxLibraryGlobalsCommission.c)
 * Callees:
 *     memset @ 0x1C001C1C0 (memset.c)
 *     RtlStringCopyWorkerA @ 0x1C0030264 (RtlStringCopyWorkerA.c)
 */

_QWORD *FxInitializeBugCheckDriverInfo()
{
  _QWORD *result; // rax
  __int64 (__fastcall *v1)(void *, _QWORD, __int64, const char *); // rbx
  unsigned __int64 v2; // rdx
  unsigned __int64 *v3; // r8
  _UNICODE_STRING funcName; // [rsp+30h] [rbp-18h] BYREF

  result = memset(&unk_1C00ABE20, 0, 0x30uLL);
  dword_1C00ABE14 = 0;
  dword_1C00ABE10 = 0;
  P = 0LL;
  if ( !unk_1C00ABE7A )
  {
    RtlInitUnicodeString(&funcName, L"KeRegisterBugCheckReasonCallback");
    result = MmGetSystemRoutineAddress(&funcName);
    v1 = (__int64 (__fastcall *)(void *, _QWORD, __int64, const char *))result;
    if ( result )
    {
      result = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x230uLL, 0x72447846u);
      P = result;
      if ( result )
      {
        dword_1C00ABE14 = 10;
        *result = 0LL;
        *((_DWORD *)P + 2) = 1;
        *((_DWORD *)P + 3) = 27;
        *((_DWORD *)P + 4) = 0;
        if ( (int)RtlStringCopyWorkerA((char *)P + 20, v2, v3, "Wdf01000") < 0 )
          *((_BYTE *)P + 20) = 0;
        ++dword_1C00ABE10;
        unk_1C00ABE4C = 0;
        return (_QWORD *)v1(&unk_1C00ABE20, FxpLibraryBugCheckCallback, 2LL, "Wdf01000");
      }
    }
  }
  return result;
}
