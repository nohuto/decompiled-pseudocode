/*
 * XREFs of HasInputTransform @ 0x1C01E0700
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 */

bool __fastcall HasInputTransform(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  bool result; // al

  LOBYTE(a2) = 1;
  v2 = HMValidateHandleNoSecure(a1, a2);
  result = 0;
  if ( v2 )
    return *(_QWORD *)(v2 + 256) != 0LL;
  return result;
}
