/*
 * XREFs of sub_180021908 @ 0x180021908
 * Callers:
 *     LdrGetDllHandleEx @ 0x1800217F0 (LdrGetDllHandleEx.c)
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 *     sub_1800219E8 @ 0x1800219E8 (sub_1800219E8.c)
 *     sub_180025240 @ 0x180025240 (sub_180025240.c)
 *     sub_18002E73C @ 0x18002E73C (sub_18002E73C.c)
 *     RtlDeleteBoundaryDescriptor @ 0x18006D6E0 (RtlDeleteBoundaryDescriptor.c)
 *     sub_180073E1C @ 0x180073E1C (sub_180073E1C.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180021908(__int64 a1, __int64 a2, char **a3)
{
  int v4; // ebx
  int v6; // [rsp+30h] [rbp-D0h] BYREF
  int v7; // [rsp+34h] [rbp-CCh]
  _UNICODE_STRING v8; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v9[128]; // [rsp+50h] [rbp-B0h] BYREF

  *(_DWORD *)&v8.Length = 0x1000000;
  *a3 = 0LL;
  v6 = 0;
  v8.Buffer = v9;
  v9[0] = 0;
  v4 = sub_180025240(a1, &v8, 0LL, &v6);
  if ( v4 >= 0 )
  {
    v4 = sub_1800219E8(&v8, v6);
    if ( v4 >= 0 && v7 < 6 && (NtCurrentTeb()->SameTebFlags & 0x1000) == 0 )
    {
      sub_18001B678(*a3);
      *a3 = 0LL;
      sub_18002E73C(0LL);
      v4 = sub_1800219E8(&v8, v6);
      sub_180073E1C();
      if ( v4 >= 0 && v7 != 9 )
      {
        sub_18001B678(*a3);
        *a3 = 0LL;
        v4 = -1073741515;
      }
    }
  }
  if ( v9 != v8.Buffer )
    RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)v8.Buffer);
  return (unsigned int)v4;
}
