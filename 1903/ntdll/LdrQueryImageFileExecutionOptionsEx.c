/*
 * XREFs of LdrQueryImageFileExecutionOptionsEx @ 0x1800799E0
 * Callers:
 *     LdrQueryImageFileExecutionOptions @ 0x1800799A0 (LdrQueryImageFileExecutionOptions.c)
 * Callees:
 *     sub_180073150 @ 0x180073150 (sub_180073150.c)
 *     sub_1800732AC @ 0x1800732AC (sub_1800732AC.c)
 *     LdrQueryImageFileKeyOption @ 0x180079A80 (LdrQueryImageFileKeyOption.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 */

NTSTATUS __cdecl LdrQueryImageFileExecutionOptionsEx(
        PUNICODE_STRING SubKey,
        PCWSTR ValueName,
        ULONG Type,
        PVOID Buffer,
        ULONG BufferSize,
        PULONG ReturnedLength,
        BOOLEAN Wow64)
{
  int v11; // eax
  NTSTATUS ImageFileKeyOption; // ebx
  HANDLE KeyHandle; // [rsp+50h] [rbp+8h] BYREF

  if ( SubKey )
    v11 = sub_180073150(&SubKey->Length, 9LL, 0, &KeyHandle);
  else
    v11 = sub_1800732AC(&KeyHandle);
  ImageFileKeyOption = v11;
  if ( v11 >= 0 )
  {
    ImageFileKeyOption = LdrQueryImageFileKeyOption(KeyHandle, ValueName, Type, Buffer, BufferSize, ReturnedLength);
    if ( SubKey )
      ZwClose(KeyHandle);
  }
  return ImageFileKeyOption;
}
