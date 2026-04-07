/*
 * XREFs of ?AddSinusoidal@CAnimationResource@@UEAAJNMMMM@Z @ 0x1800B2620
 * Callers:
 *     <none>
 * Callees:
 *     ?_AddPrimitive@CAnimationResource@@IEAAJAEBUDwmAnimationPrimitive@@@Z @ 0x180039554 (-_AddPrimitive@CAnimationResource@@IEAAJAEBUDwmAnimationPrimitive@@@Z.c)
 *     ?_ConvertDoubleToQPC@CAnimationResource@@KA_KN@Z @ 0x1800396F8 (-_ConvertDoubleToQPC@CAnimationResource@@KA_KN@Z.c)
 *     ?ReleaseAnimationHandle@CAnimationResource@@QEAAXXZ @ 0x180039794 (-ReleaseAnimationHandle@CAnimationResource@@QEAAXXZ.c)
 */

__int64 __fastcall CAnimationResource::AddSinusoidal(
        CAnimationResource *this,
        double a2,
        float a3,
        float a4,
        float a5,
        float a6)
{
  float v7; // xmm0_4
  int v9; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-50h]
  float v11; // [rsp+30h] [rbp-48h]
  float v12; // [rsp+34h] [rbp-44h]
  float v13; // [rsp+38h] [rbp-40h]
  float v14; // [rsp+3Ch] [rbp-3Ch]

  if ( !_finite(a2) || a2 < 0.0 )
    return 2147942487LL;
  CAnimationResource::ReleaseAnimationHandle(this);
  v10 = CAnimationResource::_ConvertDoubleToQPC(a2);
  v9 = 2;
  v11 = a3;
  v12 = a4;
  v7 = (float)(a5 + a5) * 3.141592653589793;
  v13 = v7;
  v14 = a6 * 3.141592653589793 / 180.0;
  return CAnimationResource::_AddPrimitive(this, (const struct DwmAnimationPrimitive *)&v9);
}
