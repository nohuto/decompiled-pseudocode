/*
 * XREFs of sub_18000C440 @ 0x18000C440
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000C440(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  try
  {
    result = (**(__int64 (__fastcall ***)(__int64))a2)(a2);
  }
  catch ( ... )
  {
    return (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 8LL))(a2, a3);
  }
  return result;
}
