/*
 * XREFs of HasInputTransform @ 0x1C01F68E0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall HasInputTransform(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int v5; // ecx

  LOBYTE(a2) = 1;
  result = HMValidateHandleNoSecure(a1, a2, a3, a4);
  v5 = 0;
  if ( result )
  {
    LOBYTE(v5) = *(_QWORD *)(result + 272) != 0LL;
    return v5;
  }
  return result;
}
