/*
 * XREFs of FxUninitializeBugCheckDriverInfo @ 0x1C0092AB4
 * Callers:
 *     FxLibraryCommonDecommission @ 0x1C0043A5C (FxLibraryCommonDecommission.c)
 * Callees:
 *     <none>
 */

void FxUninitializeBugCheckDriverInfo()
{
  void (__fastcall *SystemRoutineAddress)(void *); // rax
  _UNICODE_STRING funcName; // [rsp+20h] [rbp-18h] BYREF

  if ( unk_1C00ABE30 )
  {
    RtlInitUnicodeString(&funcName, L"KeDeregisterBugCheckReasonCallback");
    SystemRoutineAddress = (void (__fastcall *)(void *))MmGetSystemRoutineAddress(&funcName);
    if ( SystemRoutineAddress )
    {
      SystemRoutineAddress(&unk_1C00ABE20);
      unk_1C00ABE30 = 0LL;
      if ( P )
      {
        dword_1C00ABE10 = 0;
        dword_1C00ABE14 = 0;
        ExFreePoolWithTag(P, 0);
        P = 0LL;
      }
    }
  }
}
