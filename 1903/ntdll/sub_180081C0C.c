/*
 * XREFs of sub_180081C0C @ 0x180081C0C
 * Callers:
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x180015120 (RtlAppendUnicodeToString.c)
 *     LdrGetProcedureAddressForCaller @ 0x18001AEC0 (LdrGetProcedureAddressForCaller.c)
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 *     sub_180021798 @ 0x180021798 (sub_180021798.c)
 *     sub_180022180 @ 0x180022180 (sub_180022180.c)
 *     RtlAppendUnicodeStringToString @ 0x180026140 (RtlAppendUnicodeStringToString.c)
 *     RtlReleasePath @ 0x180032330 (RtlReleasePath.c)
 *     sub_180035F18 @ 0x180035F18 (sub_180035F18.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 */

__int64 __fastcall sub_180081C0C(__int16 *a1)
{
  int v1; // ebx
  unsigned int v2; // ebx
  const void ***v3; // rdi
  int ProcedureAddressForCaller; // esi
  char v6; // cl
  char v7; // al
  int v8; // [rsp+38h] [rbp-D0h]
  int v9; // [rsp+40h] [rbp-C8h]
  __int64 v10; // [rsp+48h] [rbp-C0h] BYREF
  char *v11; // [rsp+50h] [rbp-B8h]
  __int64 v12; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v13[15]; // [rsp+68h] [rbp-A0h] BYREF
  char v14; // [rsp+E4h] [rbp-24h]
  char v15; // [rsp+E8h] [rbp-20h] BYREF
  __int64 retaddr; // [rsp+320h] [rbp+218h]

  LODWORD(v10) = 34078720;
  v11 = &v15;
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v10, a1);
  RtlAppendUnicodeToString((unsigned __int16 *)&v10, L"wow64.dll");
  sub_180021798((__int64)v11, 16385LL, v13);
  v1 = sub_180022180((__int64)&v10, (int)v13, 2048, (__int64)&v12);
  if ( v14 )
    RtlReleasePath(v13[0]);
  if ( v1 < 0 )
  {
    v6 = dword_18015FAB0;
    if ( (dword_18015FAB0 & 3) != 0 )
    {
      v8 = v1;
      sub_1800CE318(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        3147,
        (unsigned int)"LdrpLoadWow64",
        0,
        (__int64)"Loading WOW64 image management DLL \"%wZ\" failed with status 0x%08lx\n",
        &v10,
        v8);
      v6 = dword_18015FAB0;
    }
    if ( (v6 & 0x10) != 0 )
      __debugbreak();
    return (unsigned int)v1;
  }
  else
  {
    sub_180035F18(0);
    v2 = 0;
    v3 = (const void ***)&off_180118DC0;
    while ( 1 )
    {
      ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(*(_QWORD *)(v12 + 48), *v3, 0, v3[1], 0, retaddr);
      if ( ProcedureAddressForCaller < 0 )
        break;
      ++v2;
      v3 += 2;
      if ( v2 >= 6 )
        goto LABEL_7;
    }
    v7 = dword_18015FAB0;
    if ( (dword_18015FAB0 & 3) != 0 )
    {
      v9 = ProcedureAddressForCaller;
      sub_1800CE318(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        3170,
        (unsigned int)"LdrpLoadWow64",
        0,
        (__int64)"Locating procedure \"%Z\" in WOW64 image management DLL \"%wZ\" failed with status 0x%08lx\n",
        *(&off_180118DC0 + 2 * v2),
        &v10,
        v9);
      v7 = dword_18015FAB0;
    }
    if ( (v7 & 0x10) != 0 )
      __debugbreak();
LABEL_7:
    sub_180035F18(1);
    sub_18001B678(v12);
    return (unsigned int)ProcedureAddressForCaller;
  }
}
