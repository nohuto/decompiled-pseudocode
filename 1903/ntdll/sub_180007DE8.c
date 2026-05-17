/*
 * XREFs of sub_180007DE8 @ 0x180007DE8
 * Callers:
 *     sub_1800098D0 @ 0x1800098D0 (sub_1800098D0.c)
 *     sub_18007D494 @ 0x18007D494 (sub_18007D494.c)
 *     sub_1800827D0 @ 0x1800827D0 (sub_1800827D0.c)
 *     sub_180083E40 @ 0x180083E40 (sub_180083E40.c)
 *     sub_180084B70 @ 0x180084B70 (sub_180084B70.c)
 *     sub_1800D0B40 @ 0x1800D0B40 (sub_1800D0B40.c)
 * Callees:
 *     EtwEventSetInformation @ 0x18000A3E0 (EtwEventSetInformation.c)
 *     EtwEventRegister @ 0x18000A640 (EtwEventRegister.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180007DE8(_QWORD *a1)
{
  __int128 v2; // xmm0
  int v3; // eax
  unsigned int v4; // ebx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_OWORD *)(a1[1] - 16LL);
  a1[5] = 0LL;
  a1[6] = 0LL;
  v6 = v2;
  v3 = ((__int64 (__fastcall *)(__int128 *, __int64 (__fastcall *)(int, int, int, int, __int64, __int64, __int64), _QWORD *, _QWORD *))EtwEventRegister)(
         &v6,
         sub_180081820,
         a1,
         a1 + 4);
  v4 = v3;
  if ( v3 )
  {
    if ( v3 > 0 )
      return (unsigned __int16)v3 | 0x80070000;
  }
  else
  {
    EtwEventSetInformation(a1[4], 2LL, a1[1], *(unsigned __int16 *)a1[1]);
  }
  return v4;
}
