/*
 * XREFs of sub_1800BB0EC @ 0x1800BB0EC
 * Callers:
 *     sub_1800C00D0 @ 0x1800C00D0 (sub_1800C00D0.c)
 *     sub_1800C1340 @ 0x1800C1340 (sub_1800C1340.c)
 *     sub_1800C1FE0 @ 0x1800C1FE0 (sub_1800C1FE0.c)
 *     sub_1800C21A0 @ 0x1800C21A0 (sub_1800C21A0.c)
 *     sub_1800C32B0 @ 0x1800C32B0 (sub_1800C32B0.c)
 *     sub_1800C35AC @ 0x1800C35AC (sub_1800C35AC.c)
 *     sub_1800C3634 @ 0x1800C3634 (sub_1800C3634.c)
 *     sub_1800C7110 @ 0x1800C7110 (sub_1800C7110.c)
 *     sub_1800C80F8 @ 0x1800C80F8 (sub_1800C80F8.c)
 *     sub_1800C9428 @ 0x1800C9428 (sub_1800C9428.c)
 *     sub_1800CA73C @ 0x1800CA73C (sub_1800CA73C.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_1800634AC @ 0x1800634AC (sub_1800634AC.c)
 *     sub_180074178 @ 0x180074178 (sub_180074178.c)
 *     sub_18007F4DC @ 0x18007F4DC (sub_18007F4DC.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800BB0EC(__int64 a1, __int64 a2)
{
  __int64 v4; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v5[2]; // [rsp+28h] [rbp-80h] BYREF
  _QWORD v6[5]; // [rsp+38h] [rbp-70h] BYREF
  _BYTE pExceptionObject[72]; // [rsp+60h] [rbp-48h] BYREF

  v5[1] = -2LL;
  sub_1800634AC(a1 + 16, a2);
  v5[0] = &Spectre::Engine::ViewerEngine::ViewerSceneData `RTTI Type Descriptor';
  v4 = 0LL;
  sub_18007F4DC((__int64 *)(a1 + 200), &v4, v5);
  if ( v4 == *(_QWORD *)(a1 + 200) )
  {
    sub_18000E498(v6);
    sub_180074178(pExceptionObject, v6, 0LL);
    throw (Spectre::Utils::SpectreInvalidArgException *)pExceptionObject;
  }
  return *(_QWORD *)(v4 + 40);
}
