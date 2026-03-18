/*
 * XREFs of HasInputTransform @ 0x1C01F6630
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall HasInputTransform(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v4; // ecx

  LOBYTE(a2) = 1;
  result = HMValidateHandleNoSecure(a1, a2, a3);
  v4 = 0;
  if ( result )
  {
    LOBYTE(v4) = *(_QWORD *)(result + 272) != 0LL;
    return v4;
  }
  return result;
}
