/*
 * XREFs of EditionUpdateCursorAsync @ 0x1C00E4F30
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0168440 (memset.c)
 */

LONG_PTR __fastcall EditionUpdateCursorAsync(__int64 a1, __int64 a2, __int64 a3)
{
  LONG_PTR result; // rax
  void *v4; // rbx
  _DWORD v5[14]; // [rsp+20h] [rbp-38h] BYREF

  result = ReferenceDwmApiPort(a1, a2, a3);
  v4 = (void *)result;
  if ( result )
  {
    memset(v5, 0, 0x2CuLL);
    v5[0] = 2883588;
    LOWORD(v5[1]) = 0x8000;
    v5[10] = 1073741912;
    LpcRequestPort(v4, v5);
    return ObfDereferenceObject(v4);
  }
  return result;
}
