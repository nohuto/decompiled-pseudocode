/*
 * XREFs of sub_18006EF74 @ 0x18006EF74
 * Callers:
 *     sub_1800781BC @ 0x1800781BC (sub_1800781BC.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_1800634AC @ 0x1800634AC (sub_1800634AC.c)
 *     sub_180074178 @ 0x180074178 (sub_180074178.c)
 *     sub_18007F4DC @ 0x18007F4DC (sub_18007F4DC.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18006EF74(__int64 a1, __int64 a2)
{
  __int64 v4; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v5[2]; // [rsp+28h] [rbp-80h] BYREF
  _QWORD v6[5]; // [rsp+38h] [rbp-70h] BYREF
  _BYTE pExceptionObject[72]; // [rsp+60h] [rbp-48h] BYREF

  v5[1] = -2LL;
  sub_1800634AC(a1 + 16, a2);
  v5[0] = &Spectre::Engine::Engine::EngineSceneData `RTTI Type Descriptor';
  v4 = 0LL;
  sub_18007F4DC(a1 + 200, &v4, v5);
  if ( v4 == *(_QWORD *)(a1 + 200) )
  {
    sub_18000E498(v6);
    sub_180074178(pExceptionObject, v6, 0LL);
    throw (Spectre::Utils::SpectreInvalidArgException *)pExceptionObject;
  }
  return *(_QWORD *)(v4 + 40);
}
