/*
 * XREFs of sub_180101AD0 @ 0x180101AD0
 * Callers:
 *     sub_1801023D0 @ 0x1801023D0 (sub_1801023D0.c)
 * Callees:
 *     EtwEventWrite @ 0x180052CB0 (EtwEventWrite.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 */

ULONG __fastcall sub_180101AD0(int a1, int a2, int a3, __int64 a4)
{
  _QWORD v5[7]; // [rsp+20h] [rbp-50h] BYREF
  int v6; // [rsp+58h] [rbp-18h]
  int v7; // [rsp+5Ch] [rbp-14h]
  int v8; // [rsp+80h] [rbp+10h] BYREF
  int v9; // [rsp+88h] [rbp+18h] BYREF
  int v10; // [rsp+90h] [rbp+20h] BYREF

  v10 = a3;
  v9 = a2;
  v8 = a1;
  v6 = a3;
  v5[1] = 4LL;
  v5[3] = 4LL;
  v5[0] = &v8;
  v5[5] = 4LL;
  v5[2] = &v9;
  v5[6] = a4;
  v7 = 0;
  v5[4] = &v10;
  return EtwEventWrite(RegHandle, &stru_18012C220, 4u, (PEVENT_DATA_DESCRIPTOR)v5);
}
