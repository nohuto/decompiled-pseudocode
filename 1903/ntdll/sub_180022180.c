/*
 * XREFs of sub_180022180 @ 0x180022180
 * Callers:
 *     LdrLoadDll @ 0x180021600 (LdrLoadDll.c)
 *     sub_180068E90 @ 0x180068E90 (sub_180068E90.c)
 *     sub_180069034 @ 0x180069034 (sub_180069034.c)
 *     sub_1800805E4 @ 0x1800805E4 (sub_1800805E4.c)
 *     sub_180081070 @ 0x180081070 (sub_180081070.c)
 *     sub_180081C0C @ 0x180081C0C (sub_180081C0C.c)
 *     sub_1800D0FDC @ 0x1800D0FDC (sub_1800D0FDC.c)
 *     sub_1800D9FD0 @ 0x1800D9FD0 (sub_1800D9FD0.c)
 * Callees:
 *     sub_180022378 @ 0x180022378 (sub_180022378.c)
 *     sub_180025240 @ 0x180025240 (sub_180025240.c)
 *     sub_1800255A8 @ 0x1800255A8 (sub_1800255A8.c)
 *     RtlDeleteBoundaryDescriptor @ 0x18006D6E0 (RtlDeleteBoundaryDescriptor.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180022180(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v7; // [rsp+40h] [rbp-C0h] BYREF
  int v8; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING v9; // [rsp+50h] [rbp-B0h] BYREF
  _WORD v10[128]; // [rsp+60h] [rbp-A0h] BYREF

  v7 = a3;
  sub_1800255A8(0LL, a1, 5288LL);
  *(_DWORD *)&v9.Length = 0x1000000;
  v9.Buffer = v10;
  v10[0] = 0;
  v8 = sub_180025240(a1, &v9, 0LL, &v7);
  if ( v8 >= 0 )
    sub_180022378(&v9, 0LL, 0LL, a4, (__int64)&v8);
  if ( v10 != v9.Buffer )
    RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)v9.Buffer);
  *(_DWORD *)&v9.Length = 0x1000000;
  v9.Buffer = v10;
  v10[0] = 0;
  sub_1800255A8(0LL, a1, 5289LL);
  return (unsigned int)v8;
}
