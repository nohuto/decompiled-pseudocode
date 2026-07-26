/*
 * XREFs of NdisSend @ 0x1C005F680
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NdisSend(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64, __int64))(a2 + 96))(a2, a3);
  *a1 = result;
  return result;
}
