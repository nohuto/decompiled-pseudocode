/*
 * XREFs of sub_180042170 @ 0x180042170
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_18006586C @ 0x18006586C (sub_18006586C.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
void __noreturn sub_180042170()
{
  unsigned int v0; // eax
  _QWORD v1[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v2[5]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[72]; // [rsp+80h] [rbp-48h] BYREF

  sub_18000E4E8(v2);
  v0 = (unsigned int)sub_18000E4E8(v1);
  sub_18006586C((unsigned int)pExceptionObject, v0, 34, (unsigned int)v2, 0);
  throw (Spectre::Engine::EngineException *)pExceptionObject;
}
