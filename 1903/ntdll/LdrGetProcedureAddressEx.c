/*
 * XREFs of LdrGetProcedureAddressEx @ 0x180069750
 * Callers:
 *     sub_180069410 @ 0x180069410 (sub_180069410.c)
 * Callees:
 *     LdrGetProcedureAddressForCaller @ 0x18001AEC0 (LdrGetProcedureAddressForCaller.c)
 */

__int64 __fastcall LdrGetProcedureAddressEx(unsigned __int64 a1, const void **a2, unsigned int a3, _QWORD *a4, char a5)
{
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  return LdrGetProcedureAddressForCaller(a1, a2, a3, a4, a5, retaddr);
}
