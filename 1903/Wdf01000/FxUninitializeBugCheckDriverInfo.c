/*
 * XREFs of FxUninitializeBugCheckDriverInfo @ 0x1C0094DB8
 * Callers:
 *     FxLibraryCommonDecommission @ 0x1C0042BE4 (FxLibraryCommonDecommission.c)
 * Callees:
 *     <none>
 */

void FxUninitializeBugCheckDriverInfo()
{
  void (__fastcall *SystemRoutineAddress)(void *); // rax
  _UNICODE_STRING funcName; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&funcName.Length = 0LL;
  funcName.Buffer = 0LL;
  if ( unk_1C00AEE60 )
  {
    RtlInitUnicodeString(&funcName, L"KeDeregisterBugCheckReasonCallback");
    SystemRoutineAddress = (void (__fastcall *)(void *))MmGetSystemRoutineAddress(&funcName);
    if ( SystemRoutineAddress )
    {
      SystemRoutineAddress(&unk_1C00AEE50);
      unk_1C00AEE60 = 0LL;
      if ( P )
      {
        dword_1C00AEE40 = 0;
        dword_1C00AEE44 = 0;
        ExFreePoolWithTag(P, 0);
        P = 0LL;
      }
    }
  }
}
