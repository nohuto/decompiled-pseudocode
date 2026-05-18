/*
 * XREFs of sub_180065610 @ 0x180065610
 * Callers:
 *     sub_180024CC0 @ 0x180024CC0 (sub_180024CC0.c)
 *     sub_180064C9C @ 0x180064C9C (sub_180064C9C.c)
 *     sub_180068EC4 @ 0x180068EC4 (sub_180068EC4.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_18006575C @ 0x18006575C (sub_18006575C.c)
 *     sub_18009ECD4 @ 0x18009ECD4 (sub_18009ECD4.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180065610(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  _QWORD v3[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v4[4]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE pExceptionObject[72]; // [rsp+80h] [rbp-48h] BYREF

  if ( *(float *)&a2 < 0.0 || *((float *)&a2 + 1) < 0.0 )
  {
    sub_18000E498(v4);
    v2 = (unsigned int)sub_18000E498(v3);
    sub_18006575C((unsigned int)pExceptionObject, v2, 70, (unsigned int)v4, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( *(_QWORD *)(a1 + 136) )
    sub_18009ECD4();
}
