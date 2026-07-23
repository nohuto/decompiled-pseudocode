/*
 * XREFs of RtlLookupFirstMatchingElementGenericTableAvl @ 0x1800877E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180064148 @ 0x180064148 (sub_180064148.c)
 *     sub_1800644F8 @ 0x1800644F8 (sub_1800644F8.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 */

PVOID __cdecl RtlLookupFirstMatchingElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer, PVOID *RestartKey)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rsi
  void *v8; // rbp
  _QWORD *v9; // rax
  _QWORD *v11; // [rsp+50h] [rbp+18h] BYREF

  *RestartKey = 0LL;
  if ( (unsigned int)sub_180064148((__int64)Table, (__int64)Buffer, &v11) != 1 )
    return 0LL;
  v6 = v11;
  do
  {
    v7 = v6;
    v8 = v6;
    v9 = sub_1800644F8(v6);
    v6 = v9;
  }
  while ( v9
       && ((unsigned int (__fastcall *)(PRTL_AVL_TABLE, PVOID, _QWORD *))Table->CompareRoutine)(Table, Buffer, v9 + 4) == 2 );
  *RestartKey = v8;
  return v7 + 4;
}
