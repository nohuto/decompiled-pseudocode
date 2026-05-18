/*
 * XREFs of sub_18006F084 @ 0x18006F084
 * Callers:
 *     sub_1800782CC @ 0x1800782CC (sub_1800782CC.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_1800635BC @ 0x1800635BC (sub_1800635BC.c)
 *     sub_180074288 @ 0x180074288 (sub_180074288.c)
 *     sub_18007F5EC @ 0x18007F5EC (sub_18007F5EC.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18006F084(__int64 a1, __int64 a2)
{
  __int64 v4; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v5[2]; // [rsp+28h] [rbp-80h] BYREF
  _QWORD v6[5]; // [rsp+38h] [rbp-70h] BYREF
  _BYTE pExceptionObject[72]; // [rsp+60h] [rbp-48h] BYREF

  v5[1] = -2LL;
  sub_1800635BC(a1 + 16, a2);
  v5[0] = &Spectre::Engine::Engine::EngineSceneData `RTTI Type Descriptor';
  v4 = 0LL;
  sub_18007F5EC(a1 + 200, &v4, v5);
  if ( v4 == *(_QWORD *)(a1 + 200) )
  {
    sub_18000E4E8(v6);
    sub_180074288(pExceptionObject, v6, 0LL);
    throw (Spectre::Utils::SpectreInvalidArgException *)pExceptionObject;
  }
  return *(_QWORD *)(v4 + 40);
}
