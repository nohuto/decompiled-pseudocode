/*
 * XREFs of ?default_error_condition@error_category@std@@UEBA?AVerror_condition@2@H@Z @ 0x1800051C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::error_category::default_error_condition(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  *(_DWORD *)a2 = a3;
  result = a2;
  *(_QWORD *)(a2 + 8) = a1;
  return result;
}
