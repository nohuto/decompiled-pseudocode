/*
 * XREFs of sub_1800D0FDC @ 0x1800D0FDC
 * Callers:
 *     sub_18002C6E4 @ 0x18002C6E4 (sub_18002C6E4.c)
 * Callees:
 *     sub_180021798 @ 0x180021798 (sub_180021798.c)
 *     sub_180022180 @ 0x180022180 (sub_180022180.c)
 *     sub_180025714 @ 0x180025714 (sub_180025714.c)
 *     RtlReleasePath @ 0x180032330 (RtlReleasePath.c)
 *     sub_180069410 @ 0x180069410 (sub_180069410.c)
 *     RtlDeleteBoundaryDescriptor @ 0x18006D6E0 (RtlDeleteBoundaryDescriptor.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 */

__int64 __fastcall sub_1800D0FDC(_QWORD *a1)
{
  unsigned int v1; // edi
  __int64 v3; // r8
  int v4; // ebx
  char v5; // al
  __int64 v6; // rdx
  __int64 v8; // [rsp+40h] [rbp-C0h] BYREF
  int v9; // [rsp+48h] [rbp-B8h] BYREF
  const wchar_t *v10; // [rsp+50h] [rbp-B0h]
  int v11; // [rsp+60h] [rbp-A0h] BYREF
  POBJECT_BOUNDARY_DESCRIPTOR BoundaryDescriptor; // [rsp+68h] [rbp-98h]
  _WORD v13[128]; // [rsp+70h] [rbp-90h] BYREF
  PWSTR Path[15]; // [rsp+170h] [rbp+70h] BYREF
  char v15; // [rsp+1ECh] [rbp+ECh]

  v1 = 0;
  v10 = L"apphelp.dll";
  v9 = 1572886;
  BoundaryDescriptor = (POBJECT_BOUNDARY_DESCRIPTOR)v13;
  v11 = 0x1000000;
  v13[0] = 0;
  if ( qword_18017A208 )
  {
    v3 = MEMORY[0x7FFE0330] ^ __ROR8__(qword_18017A208, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
    *a1 = v3;
    if ( !v3 )
      return (unsigned int)-1073741823;
    return v1;
  }
  v4 = sub_180025714(&v11, (__int64)&v9);
  if ( v4 >= 0 )
  {
    sub_180021798(0LL, 16385LL, (__int64 *)Path);
    v4 = sub_180022180((__int64)&v11, (__int64)Path, 0, (__int64)&v8);
    if ( v15 )
      RtlReleasePath(Path[0]);
    if ( v4 >= 0 )
    {
      *(_DWORD *)(v8 + 104) |= 0x100u;
      DllHandle = *(PVOID *)(v8 + 48);
      v4 = sub_180069410();
      if ( v4 >= 0 )
      {
        v4 = 0;
        v6 = MEMORY[0x7FFE0330] ^ __ROR8__(qword_18017A208, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
        *a1 = v6;
        if ( !v6 )
          v4 = -1073741823;
        goto LABEL_19;
      }
      v5 = dword_18015FAB0;
      if ( (dword_18015FAB0 & 3) == 0 )
        goto LABEL_12;
      sub_1800CE318(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2881,
        (unsigned int)"LdrpGetProcApphelpCheckModule",
        0,
        "Getting the shim engine exports failed with status 0x%08lx\n",
        v4);
    }
    else
    {
      v5 = dword_18015FAB0;
      if ( (dword_18015FAB0 & 3) == 0 )
        goto LABEL_12;
      sub_1800CE318(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2870,
        (unsigned int)"LdrpGetProcApphelpCheckModule",
        0,
        "Loading the shim engine DLL \"%wZ\" failed with status 0x%08lx\n",
        &v11,
        v4);
    }
    v5 = dword_18015FAB0;
LABEL_12:
    if ( (v5 & 0x10) != 0 )
      __debugbreak();
  }
LABEL_19:
  if ( v13 != (_WORD *)BoundaryDescriptor )
    RtlDeleteBoundaryDescriptor(BoundaryDescriptor);
  return (unsigned int)v4;
}
