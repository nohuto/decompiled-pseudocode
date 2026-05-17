/*
 * XREFs of RtlpFreeHandleForAtom @ 0x180072CC8
 * Callers:
 *     RtlpFreeAllAtom @ 0x180072C48 (RtlpFreeAllAtom.c)
 *     RtlEmptyAtomTable @ 0x18008B660 (RtlEmptyAtomTable.c)
 * Callees:
 *     RtlIsValidIndexHandle @ 0x1800736C0 (RtlIsValidIndexHandle.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall RtlpFreeHandleForAtom(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v4; // rbx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  result = RtlIsValidIndexHandle(a1 + 16, *(unsigned __int16 *)(a2 + 8), &v5);
  if ( (_BYTE)result )
  {
    v4 = v5;
    memset(v5, 0, *(unsigned int *)(a1 + 20));
    result = *(_QWORD *)(a1 + 32);
    *v4 = result;
    *(_QWORD *)(a1 + 32) = v4;
  }
  return result;
}
