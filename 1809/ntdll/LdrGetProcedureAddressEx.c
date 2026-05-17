/*
 * XREFs of LdrGetProcedureAddressEx @ 0x180070B10
 * Callers:
 *     LdrpGetShimEngineInterface @ 0x1800707C8 (LdrpGetShimEngineInterface.c)
 * Callees:
 *     LdrGetProcedureAddressForCaller @ 0x1800094D0 (LdrGetProcedureAddressForCaller.c)
 */

__int64 __fastcall LdrGetProcedureAddressEx(unsigned __int64 a1, const void **a2, int a3, _QWORD *a4, char a5)
{
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  return LdrGetProcedureAddressForCaller(a1, a2, a3, a4, a5, retaddr);
}
