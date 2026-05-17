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

__int64 __fastcall LdrInitShimEngineDynamic(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int16 v5; // di
  int EntryForAddress; // eax
  __int64 v7; // rcx
  unsigned __int8 v8; // bl
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = 0LL;
  v3 = 4096LL;
  v5 = NtCurrentTeb()->SameTebFlags & 0x1000;
  if ( !v5 )
    sub_18002E73C(0);
  sub_18002D7BC(v3);
  if ( !qword_180165398 )
  {
    qword_180165398 = a1;
    sub_180069410();
  }
  EntryForAddress = LdrFindEntryForAddress(a1, &v10);
  if ( EntryForAddress >= 0 )
  {
    sub_18002EB1C(v10);
    v8 = sub_180069034(*(PCWSTR *)(a2 + 8));
  }
  else
  {
    v7 = (unsigned int)dword_18015FAB0;
    if ( (dword_18015FAB0 & 3) != 0 )
    {
      sub_1800CE318(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2690,
        (unsigned int)"LdrInitShimEngineDynamic",
        0,
        "Finding the shim engine entry failed with status 0x%08lx\n",
        EntryForAddress);
      v7 = (unsigned int)dword_18015FAB0;
    }
    if ( (v7 & 0x10) != 0 )
      __debugbreak();
    v8 = 0;
  }
  LOBYTE(v7) = -v8;
  sub_18002D75C(v7, 2, v8 == 0 ? 0xC0000001 : 0);
  if ( !v5 )
    sub_180073E1C();
  return v8;
}
