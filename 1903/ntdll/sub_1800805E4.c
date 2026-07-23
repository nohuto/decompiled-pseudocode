/*
 * XREFs of sub_1800805E4 @ 0x1800805E4
 * Callers:
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     sub_180021798 @ 0x180021798 (sub_180021798.c)
 *     sub_180022180 @ 0x180022180 (sub_180022180.c)
 *     sub_18002D75C @ 0x18002D75C (sub_18002D75C.c)
 *     sub_18002D7BC @ 0x18002D7BC (sub_18002D7BC.c)
 *     sub_18002E73C @ 0x18002E73C (sub_18002E73C.c)
 *     RtlReleasePath @ 0x180032330 (RtlReleasePath.c)
 *     sub_180069778 @ 0x180069778 (sub_180069778.c)
 *     sub_180073E1C @ 0x180073E1C (sub_180073E1C.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 *     sub_1800CFD74 @ 0x1800CFD74 (sub_1800CFD74.c)
 *     sub_1800D538C @ 0x1800D538C (sub_1800D538C.c)
 */

__int64 sub_1800805E4()
{
  int v0; // ebx
  UNICODE_STRING *p_RedirectionDllName; // rdi
  char v3; // al
  __int64 v4; // rcx
  _BYTE v5[8]; // [rsp+38h] [rbp-49h] BYREF
  __int64 v6; // [rsp+40h] [rbp-41h] BYREF
  PWSTR Path[15]; // [rsp+48h] [rbp-39h] BYREF
  char v8; // [rsp+C4h] [rbp+43h]

  v0 = 0;
  p_RedirectionDllName = &NtCurrentPeb()->ProcessParameters->RedirectionDllName;
  if ( p_RedirectionDllName->Length )
  {
    if ( (dword_18015FAB0 & 5) != 0 )
      sub_1800CE318(
        (unsigned int)"minkernel\\ntdll\\ldrredirect.c",
        541,
        (unsigned int)"LdrpInitializeImportRedirection",
        2,
        (__int64)"Loading import redirection DLL: '%wZ'\n",
        p_RedirectionDllName);
    sub_180021798(0LL, 0LL, (__int64 *)Path);
    v0 = sub_180022180((__int64)p_RedirectionDllName, (__int64)Path, 16777217, (__int64)&v6);
    if ( v8 )
      RtlReleasePath(Path[0]);
    if ( v0 >= 0 )
    {
      v0 = sub_1800D538C(v6);
      if ( v0 >= 0 )
      {
        sub_18002E73C(0);
        sub_18002D7BC();
        v5[0] = 0;
        v0 = sub_180069778(*(__int64 **)(v6 + 152), 0LL, v5);
        sub_18002D75C(v4, 2, v0);
        sub_180073E1C();
        if ( v0 >= 0 )
        {
          *(_DWORD *)(*(_QWORD *)(v6 + 152) + 24LL) = -1;
          *(_WORD *)(**(_QWORD **)(v6 + 152) - 52LL) = -1;
          sub_1800CFD74(v6);
          byte_180165268 = 1;
        }
      }
      else
      {
        v3 = dword_18015FAB0;
        if ( (dword_18015FAB0 & 3) != 0 )
        {
          sub_1800CE318(
            (unsigned int)"minkernel\\ntdll\\ldrredirect.c",
            568,
            (unsigned int)"LdrpInitializeImportRedirection",
            0,
            (__int64)"Unable to build import redirection Table, Status = 0x%x\n",
            v0);
          v3 = dword_18015FAB0;
        }
        if ( (v3 & 0x10) != 0 )
          __debugbreak();
      }
    }
  }
  return (unsigned int)v0;
}
