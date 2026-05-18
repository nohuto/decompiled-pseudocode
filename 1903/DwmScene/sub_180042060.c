/*
 * XREFs of sub_180042060 @ 0x180042060
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_18006575C @ 0x18006575C (sub_18006575C.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
void __noreturn sub_180042060()
{
  unsigned int v0; // eax
  _QWORD v1[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v2[5]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[72]; // [rsp+80h] [rbp-48h] BYREF

  sub_18000E498(v2);
  v0 = (unsigned int)sub_18000E498(v1);
  sub_18006575C((unsigned int)pExceptionObject, v0, 34, (unsigned int)v2, 0);
  throw (Spectre::Engine::EngineException *)pExceptionObject;
}
