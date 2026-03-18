/*
 * XREFs of ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagCLS@@PEAX@Z @ 0x1C001C0B4
 * Callers:
 *     InternalRegisterClassEx @ 0x1C001B870 (InternalRegisterClassEx.c)
 *     xxxCreateClassSmIcon @ 0x1C006BF64 (xxxCreateClassSmIcon.c)
 *     ReferenceClass @ 0x1C00F03B0 (ReferenceClass.c)
 *     xxxSetClassIcon @ 0x1C01FA014 (xxxSetClassIcon.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall LockPointer(_QWORD *a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // r9
  _QWORD *result; // rax

  v3 = 0LL;
  if ( a3 )
    v3 = *a3;
  *(_QWORD *)(*(_QWORD *)(a2 - 104) + 56LL) = v3;
  result = a1;
  *a1 = a2;
  a1[1] = a3;
  return result;
}
