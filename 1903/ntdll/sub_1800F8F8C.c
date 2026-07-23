/*
 * XREFs of sub_1800F8F8C @ 0x1800F8F8C
 * Callers:
 *     RtlRunOnceExecuteOnce @ 0x18000AFD0 (RtlRunOnceExecuteOnce.c)
 *     sub_18004A7A0 @ 0x18004A7A0 (sub_18004A7A0.c)
 *     sub_1801041A8 @ 0x1801041A8 (sub_1801041A8.c)
 * Callees:
 *     DbgPrintEx @ 0x180052780 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     sub_1800F8F3C @ 0x1800F8F3C (sub_1800F8F3C.c)
 *     sub_1800F9050 @ 0x1800F9050 (sub_1800F9050.c)
 */

__int64 __fastcall sub_1800F8F8C(int a1, __int64 a2, int a3)
{
  int v6; // ecx
  _DWORD v8[2]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v9; // [rsp+38h] [rbp-B0h]
  void (__stdcall *v10)(PEXCEPTION_RECORD); // [rsp+40h] [rbp-A8h]
  int v11; // [rsp+48h] [rbp-A0h]
  __int64 v12; // [rsp+50h] [rbp-98h]

  if ( sub_1800F8F3C() )
  {
    DbgPrintEx(0x65u, 0, "Critical error detected %lx\n", v6);
    if ( a3 )
      __debugbreak();
  }
  v8[0] = a1;
  v8[1] = 1;
  v9 = 0LL;
  v10 = RtlRaiseException;
  v11 = 1;
  v12 = a2;
  return sub_1800F9050(v8);
}
