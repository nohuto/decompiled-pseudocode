/*
 * XREFs of LdrLoadDll @ 0x180021600
 * Callers:
 *     sub_18007A3BC @ 0x18007A3BC (sub_18007A3BC.c)
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 *     RtlWow64LogMessageInEventLogger @ 0x1800D6B70 (RtlWow64LogMessageInEventLogger.c)
 *     sub_180110078 @ 0x180110078 (sub_180110078.c)
 * Callees:
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 *     sub_180021798 @ 0x180021798 (sub_180021798.c)
 *     sub_180022180 @ 0x180022180 (sub_180022180.c)
 *     RtlReleasePath @ 0x180032330 (RtlReleasePath.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 */

__int64 __fastcall LdrLoadDll(__int64 a1, int *a2, __int64 a3, _QWORD *a4)
{
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // r8d
  int v12; // ecx
  unsigned int v13; // ebx
  int v14; // ebx
  __int64 v15; // rcx
  __int64 v17; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v18[15]; // [rsp+40h] [rbp-A8h] BYREF
  char v19; // [rsp+BCh] [rbp-2Ch]

  if ( a2 )
  {
    v8 = *a2;
    v9 = 2 * (*a2 & 4);
    v10 = v9 | 0x40;
    if ( (v8 & 2) == 0 )
      v10 = v9;
    v11 = v10 | 0x80;
    if ( (*a2 & 0x800000) == 0 )
      v11 = v10;
    v12 = v11 | 0x100;
    if ( (*a2 & 0x1000) == 0 )
      v12 = v11;
    v13 = v12 | 0x400000;
    if ( *a2 >= 0 )
      v13 = v12;
  }
  else
  {
    v13 = 0;
  }
  if ( (dword_18015FAB0 & 9) != 0 )
    sub_1800CE318(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      151,
      (unsigned int)"LdrLoadDll",
      3,
      (__int64)"DLL name: %wZ\n",
      a3);
  if ( (dword_180162714 & 4) == 0 && (a1 & 0x401) == 0x401 )
    return 3221225485LL;
  if ( (v13 & 8) == 0 || (dword_180162714 & 8) != 0 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x2000) != 0 )
    {
      v14 = -1073740004;
    }
    else
    {
      sub_180021798(*(_QWORD *)(a3 + 8), a1, v18);
      v14 = sub_180022180(a3, v18, v13, &v17);
      if ( v19 )
        RtlReleasePath(v18[0]);
      if ( v14 >= 0 )
      {
        v15 = v17;
        *a4 = *(_QWORD *)(v17 + 48);
        sub_18001B678(v15);
      }
    }
  }
  else
  {
    if ( (dword_18015FAB0 & 3) != 0 )
      sub_1800CE318(
        (unsigned int)"minkernel\\ntdll\\ldrapi.c",
        172,
        (unsigned int)"LdrLoadDll",
        0,
        (__int64)"Nonpackaged process attempted to load a packaged DLL.\n");
    if ( (dword_18015FAB0 & 0x10) != 0 )
      __debugbreak();
    v14 = -1073741398;
  }
  if ( (dword_18015FAB0 & 9) != 0 )
    sub_1800CE318(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      204,
      (unsigned int)"LdrLoadDll",
      4,
      (__int64)"Status: 0x%08lx\n",
      v14);
  return (unsigned int)v14;
}
