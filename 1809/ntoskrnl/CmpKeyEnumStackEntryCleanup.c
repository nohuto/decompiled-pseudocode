/*
 * XREFs of CmpKeyEnumStackEntryCleanup @ 0x1407FF5C8
 * Callers:
 *     CmpKeyEnumStackCleanup @ 0x1407FF180 (CmpKeyEnumStackCleanup.c)
 *     CmpKeyEnumStackReset @ 0x1407FF980 (CmpKeyEnumStackReset.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CmpKeyEnumStackEntryCleanup(_QWORD *a1)
{
  __int64 result; // rax
  _QWORD *v3; // rdi
  __int64 v4; // rbp
  _QWORD *v5; // rsi

  if ( a1[1] )
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*a1 + 16LL))(*a1, a1 + 2);
  v3 = a1 + 10;
  v4 = 2LL;
  v5 = a1 + 12;
  do
  {
    if ( *(v3 - 5) )
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*a1 + 16LL))(*a1, v5 - 5);
    if ( *v3 )
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*a1 + 16LL))(*a1, v5);
    ++v5;
    ++v3;
    --v4;
  }
  while ( v4 );
  return result;
}
