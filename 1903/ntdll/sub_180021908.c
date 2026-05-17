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

__int64 __fastcall sub_180021908(__int64 a1, int a2, __int64 *a3)
{
  int v5; // ebx
  int v7; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v8[3]; // [rsp+34h] [rbp-CCh] BYREF
  int v9; // [rsp+40h] [rbp-C0h] BYREF
  _WORD *v10; // [rsp+48h] [rbp-B8h]
  _WORD v11[128]; // [rsp+50h] [rbp-B0h] BYREF

  v9 = 0x1000000;
  *a3 = 0LL;
  v7 = 0;
  v10 = v11;
  v11[0] = 0;
  v5 = sub_180025240(a1, &v9, 0LL, &v7);
  if ( v5 >= 0 )
  {
    v5 = sub_1800219E8((unsigned int)&v9, a2, (_DWORD)a3, (unsigned int)v8, v7);
    if ( v5 >= 0 && v8[0] < 6 && (NtCurrentTeb()->SameTebFlags & 0x1000) == 0 )
    {
      sub_18001B678(*a3);
      *a3 = 0LL;
      sub_18002E73C(0LL);
      v5 = sub_1800219E8((unsigned int)&v9, a2, (_DWORD)a3, (unsigned int)v8, v7);
      sub_180073E1C();
      if ( v5 >= 0 && v8[0] != 9 )
      {
        sub_18001B678(*a3);
        *a3 = 0LL;
        v5 = -1073741515;
      }
    }
  }
  if ( v11 != v10 )
    RtlDeleteBoundaryDescriptor(v10);
  return (unsigned int)v5;
}
