/*
 * XREFs of CmpValueEnumStackEntryCleanup @ 0x1402805A8
 * Callers:
 *     CmpValueEnumStackCleanup @ 0x14083A244 (CmpValueEnumStackCleanup.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CmpValueEnumStackEntryCleanup(_QWORD *a1)
{
  __int64 result; // rax

  if ( a1[1] )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*a1 + 16LL))(*a1, a1 + 2);
  return result;
}
