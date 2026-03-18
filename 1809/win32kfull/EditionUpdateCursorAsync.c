/*
 * XREFs of EditionUpdateCursorAsync @ 0x1C0102020
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0163640 (memset.c)
 */

LONG_PTR __fastcall EditionUpdateCursorAsync(__int64 a1, __int64 a2)
{
  LONG_PTR result; // rax
  void *v3; // rbx
  _DWORD v4[14]; // [rsp+20h] [rbp-38h] BYREF

  result = ReferenceDwmApiPort(a1, a2);
  v3 = (void *)result;
  if ( result )
  {
    memset(v4, 0, 0x2CuLL);
    v4[0] = 2883588;
    LOWORD(v4[1]) = 0x8000;
    v4[10] = 1073741912;
    LpcRequestPort(v3, v4);
    return ObfDereferenceObject(v3);
  }
  return result;
}
