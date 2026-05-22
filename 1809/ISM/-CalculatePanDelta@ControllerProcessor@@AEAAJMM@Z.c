/*
 * XREFs of ?CalculatePanDelta@ControllerProcessor@@AEAAJMM@Z @ 0x180035844
 * Callers:
 *     ?SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@Windows@@@Z @ 0x1800351D4 (-SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@W.c)
 * Callees:
 *     sqrtf_0 @ 0x18012DB2F (sqrtf_0.c)
 */

__int64 __fastcall ControllerProcessor::CalculatePanDelta(ControllerProcessor *this, float a2, float a3)
{
  float v3; // xmm6_4
  float v4; // xmm7_4
  float v6; // xmm0_4
  float v7; // xmm0_4
  float v8; // xmm6_4
  float v9; // xmm7_4
  float v10; // xmm4_4
  float v11; // xmm2_4
  float v12; // xmm7_4

  v3 = a2;
  v4 = a3;
  v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a3) & _xmm);
  if ( v6 > 0.00000011920929 || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a2) & _xmm) > 0.00000011920929 )
  {
    v7 = sqrtf_0((float)(a2 * a2) + (float)(a3 * a3));
    if ( v7 > 1.0 )
    {
      v3 = a2 / v7;
      v4 = a3 / v7;
    }
    v8 = v3 * -11.0;
    v9 = v4 * 11.0;
    if ( v8 == 0.0
      || (v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v9 / v8)) & _xmm), v9 == 0.0)
      || *(float *)&dword_1801937E0 >= v10
      || v10 >= (float)(1.0 / *(float *)&dword_1801937E0) )
    {
      v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v8) & _xmm);
      if ( v11 <= (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v9) & _xmm) )
        v8 = 0.0;
      else
        v9 = 0.0;
    }
    v12 = v9 + *((float *)this + 464);
    *((float *)this + 463) = v8 + *((float *)this + 463);
    *((float *)this + 464) = v12;
  }
  return 0LL;
}
