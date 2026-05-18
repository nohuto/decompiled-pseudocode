/*
 * XREFs of sub_1800D2500 @ 0x1800D2500
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800D21A0 @ 0x1800D21A0 (sub_1800D21A0.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

__int64 *sub_1800D2500(__int64 a1, __int64 *a2, int a3, int a4, ...)
{
  int v6; // [rsp+30h] [rbp-28h] BYREF
  int v7[2]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v8; // [rsp+80h] [rbp+28h] BYREF
  va_list va; // [rsp+80h] [rbp+28h]
  __int64 v10; // [rsp+88h] [rbp+30h] BYREF
  va_list va1; // [rsp+88h] [rbp+30h]
  va_list va2; // [rsp+90h] [rbp+38h] BYREF

  va_start(va2, a4);
  va_start(va1, a4);
  va_start(va, a4);
  v8 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v10 = va_arg(va2, _QWORD);
  v7[1] = HIDWORD(a2);
  v7[0] = a3;
  v6 = a4;
  sub_1800D21A0(a2, v7, &v6, (int *)va, (int *)va2, (int *)va1);
  return a2;
}
