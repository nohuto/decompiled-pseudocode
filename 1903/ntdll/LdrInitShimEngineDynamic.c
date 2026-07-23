/*
 * XREFs of LdrInitShimEngineDynamic @ 0x1800D0C70
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002D75C @ 0x18002D75C (sub_18002D75C.c)
 *     sub_18002D7BC @ 0x18002D7BC (sub_18002D7BC.c)
 *     sub_18002E73C @ 0x18002E73C (sub_18002E73C.c)
 *     sub_18002EB1C @ 0x18002EB1C (sub_18002EB1C.c)
 *     LdrFindEntryForAddress @ 0x180054D40 (LdrFindEntryForAddress.c)
 *     sub_180069034 @ 0x180069034 (sub_180069034.c)
 *     sub_180069410 @ 0x180069410 (sub_180069410.c)
 *     sub_180073E1C @ 0x180073E1C (sub_180073E1C.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 */

__int64 __fastcall LdrInitShimEngineDynamic(PVOID DllHandle, __int64 a2)
{
  __int16 v4; // di
  NTSTATUS EntryForAddress; // eax
  __int64 v6; // rcx
  unsigned __int8 v7; // bl
  PLDR_DATA_TABLE_ENTRY Entry; // [rsp+50h] [rbp+18h] BYREF

  Entry = 0LL;
  v4 = NtCurrentTeb()->SameTebFlags & 0x1000;
  if ( !v4 )
    sub_18002E73C(0);
  sub_18002D7BC();
  if ( !::DllHandle )
  {
    ::DllHandle = DllHandle;
    sub_180069410();
  }
  EntryForAddress = LdrFindEntryForAddress(DllHandle, &Entry);
  if ( EntryForAddress >= 0 )
  {
    sub_18002EB1C((__int64)Entry);
    v7 = sub_180069034(*(PCWSTR *)(a2 + 8));
  }
  else
  {
    v6 = (unsigned int)dword_18015FAB0;
    if ( (dword_18015FAB0 & 3) != 0 )
    {
      sub_1800CE318(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2690,
        (unsigned int)"LdrInitShimEngineDynamic",
        0,
        "Finding the shim engine entry failed with status 0x%08lx\n",
        EntryForAddress);
      v6 = (unsigned int)dword_18015FAB0;
    }
    if ( (v6 & 0x10) != 0 )
      __debugbreak();
    v7 = 0;
  }
  LOBYTE(v6) = -v7;
  sub_18002D75C(v6, 2, v7 == 0 ? 0xC0000001 : 0);
  if ( !v4 )
    sub_180073E1C();
  return v7;
}
