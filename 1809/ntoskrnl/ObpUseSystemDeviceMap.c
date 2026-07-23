/*
 * XREFs of ObpUseSystemDeviceMap @ 0x140583400
 * Callers:
 *     ObpLookupObjectName @ 0x1405E4BE0 (ObpLookupObjectName.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1405D6C10 (RtlUpcaseUnicodeChar.c)
 *     RtlGetNtSystemRoot @ 0x1406835D0 (RtlGetNtSystemRoot.c)
 */

bool __fastcall ObpUseSystemDeviceMap(__int64 a1)
{
  PWSTR NtSystemRoot; // rax
  WCHAR *v3; // rbx
  WCHAR *v4; // rdi
  WCHAR v5; // si
  bool result; // al

  result = 0;
  if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 8) != 0 && *(_WORD *)a1 >= 0xEu )
  {
    NtSystemRoot = RtlGetNtSystemRoot();
    v3 = *(WCHAR **)(a1 + 8);
    v4 = NtSystemRoot;
    v5 = RtlUpcaseUnicodeChar(v3[4]);
    if ( (ObpDriveRemappingMitigation & 1) != 0 && v3[5] == 58 && v3[6] == 92 && RtlUpcaseUnicodeChar(*v4) == v5 )
      return 1;
  }
  return result;
}
