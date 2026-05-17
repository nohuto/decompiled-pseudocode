/*
 * XREFs of sub_180081070 @ 0x180081070
 * Callers:
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     RtlQueryEnvironmentVariable @ 0x18001A270 (RtlQueryEnvironmentVariable.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 *     sub_18001C2B0 @ 0x18001C2B0 (sub_18001C2B0.c)
 *     sub_180021798 @ 0x180021798 (sub_180021798.c)
 *     sub_180022180 @ 0x180022180 (sub_180022180.c)
 *     sub_180025714 @ 0x180025714 (sub_180025714.c)
 *     sub_18002F3D8 @ 0x18002F3D8 (sub_18002F3D8.c)
 *     RtlReleasePath @ 0x180032330 (RtlReleasePath.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlDeleteBoundaryDescriptor @ 0x18006D6E0 (RtlDeleteBoundaryDescriptor.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180081070(_QWORD *a1)
{
  bool v2; // bl
  int v3; // ebx
  int *v4; // rdi
  __int64 v5; // rcx
  __int64 v7; // [rsp+30h] [rbp-1B8h] BYREF
  unsigned __int64 v8; // [rsp+38h] [rbp-1B0h] BYREF
  int v9; // [rsp+40h] [rbp-1A8h] BYREF
  _WORD *v10; // [rsp+48h] [rbp-1A0h]
  _WORD v11[128]; // [rsp+50h] [rbp-198h] BYREF
  __int64 v12[15]; // [rsp+150h] [rbp-98h] BYREF
  char v13; // [rsp+1CCh] [rbp-1Ch]

  v2 = 1;
  RtlEnterCriticalSection((__int64)&unk_180164FE0);
  if ( (unsigned int)RtlQueryEnvironmentVariable(0LL, L"COMPLUS_InstallRoot", 0x13uLL, 0LL, 0LL, (__int64)&v8) == -1073741789 )
    v2 = (unsigned int)RtlQueryEnvironmentVariable(0LL, L"COMPLUS_Version", 0xFuLL, 0LL, 0LL, (__int64)&v8) != -1073741789;
  RtlLeaveCriticalSection((__int64)&unk_180164FE0);
  v10 = v11;
  v9 = 0x1000000;
  v11[0] = 0;
  if ( v2 )
  {
    v3 = sub_180025714(&v9, (__int64)&unk_180118888);
    v4 = &v9;
  }
  else
  {
    v4 = (int *)&unk_180118888;
    v3 = 0;
  }
  if ( v3 >= 0 )
  {
    sub_180021798(0LL, 0LL, v12);
    v3 = sub_180022180((__int64)v4, (int)v12, 1, (__int64)&v7);
    if ( v13 )
      RtlReleasePath(v12[0]);
    if ( v3 >= 0 )
    {
      v3 = sub_18001C2B0(*(_QWORD *)(v7 + 48), "_CorExeMain", 0, (char **)&v8);
      if ( v3 < 0 )
      {
        sub_18002F3D8(v7, 0);
        v5 = v7;
      }
      else
      {
        qword_180165438 = __ROR8__(v8 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
        v5 = v7;
        *a1 = v7;
      }
      sub_18001B678(v5);
    }
  }
  if ( v11 != v10 )
    RtlDeleteBoundaryDescriptor((__int64)v10);
  return (unsigned int)v3;
}
