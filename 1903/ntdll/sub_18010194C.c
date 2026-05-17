/*
 * XREFs of sub_18010194C @ 0x18010194C
 * Callers:
 *     sub_180101010 @ 0x180101010 (sub_180101010.c)
 *     sub_1801016A0 @ 0x1801016A0 (sub_1801016A0.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_1800F9050 @ 0x1800F9050 (sub_1800F9050.c)
 */

void __fastcall sub_18010194C(void *a1)
{
  EXCEPTION_RECORD v2; // [rsp+20h] [rbp-B8h] BYREF

  memset(&v2, 0, sizeof(v2));
  v2.ExceptionRecord = 0LL;
  v2.ExceptionCode = qword_180162810;
  v2.ExceptionInformation[0] = dword_1801627F8;
  v2.ExceptionInformation[1] = qword_180162800;
  v2.ExceptionInformation[2] = qword_180162818;
  v2.ExceptionInformation[3] = qword_180162820;
  v2.ExceptionFlags = 1;
  v2.ExceptionAddress = a1;
  v2.NumberParameters = 4;
  sub_1800F9050(&v2);
}
