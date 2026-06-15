/*
 * XREFs of AudioDGSetStreamVpoPolicySchemas @ 0x14003A860
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioDGSetStreamVpoPolicySchemas(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)a2 + 32LL))(a2, a3, a4, a5);
}
