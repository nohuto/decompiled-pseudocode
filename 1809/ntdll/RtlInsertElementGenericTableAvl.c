/*
 * XREFs of RtlInsertElementGenericTableAvl @ 0x18006B880
 * Callers:
 *     <none>
 * Callees:
 *     RtlInsertElementGenericTableFullAvl @ 0x18006B8F0 (RtlInsertElementGenericTableFullAvl.c)
 *     FindNodeOrParent @ 0x18006BA18 (FindNodeOrParent.c)
 */

__int64 __fastcall RtlInsertElementGenericTableAvl(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int NodeOrParent; // eax
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF

  NodeOrParent = FindNodeOrParent(a1, a2, v10);
  return RtlInsertElementGenericTableFullAvl(a1, a2, a3, a4, v10[0], NodeOrParent);
}
