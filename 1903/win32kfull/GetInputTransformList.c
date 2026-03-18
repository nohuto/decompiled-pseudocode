/*
 * XREFs of GetInputTransformList @ 0x1C01F6870
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     ?GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPEAUtagINPUT_TRANSFORM@@D@Z @ 0x1C01F6654 (-GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPEAUtagINPUT_TRANSFORM@@D@Z.c)
 */

InputTransform *__fastcall GetInputTransformList(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 *a5)
{
  unsigned int v5; // esi
  char v6; // bl
  InputTransform *result; // rax
  struct tagINPUT_TRANSFORM *v9; // [rsp+20h] [rbp-38h]

  v5 = a2;
  v6 = a4;
  LOBYTE(a2) = 1;
  result = (InputTransform *)HMValidateHandleNoSecure(a1, a2, a3, a4);
  if ( result )
  {
    LOBYTE(v9) = v6;
    return (InputTransform *)InputTransform::GetTransformList(result, (struct tagWND *)v5, a3, a5, v9);
  }
  return result;
}
