/*
 * XREFs of RtlInsertElementGenericTableAvl @ 0x180063F60
 * Callers:
 *     <none>
 * Callees:
 *     RtlInsertElementGenericTableFullAvl @ 0x180063FD0 (RtlInsertElementGenericTableFullAvl.c)
 *     sub_180064148 @ 0x180064148 (sub_180064148.c)
 */

__int64 __fastcall RtlInsertElementGenericTableAvl(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v8; // eax
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF

  v8 = sub_180064148(a1, a2, v10);
  return RtlInsertElementGenericTableFullAvl(a1, a2, a3, a4, v10[0], v8);
}
