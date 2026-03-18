/*
 * XREFs of ??KPrediction@@YA?AVCFixPred@0@AEBV10@0@Z @ 0x1C01ECB44
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01ECF88 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 *     ?UpdateContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_INFO@@PEAU2@3@Z @ 0x1C01EE1F0 (-UpdateContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_I.c)
 *     ?vInit@tagRlsFilter@Prediction@@QEAAXVCFixPred@2@000@Z @ 0x1C01EF244 (-vInit@tagRlsFilter@Prediction@@QEAAXVCFixPred@2@000@Z.c)
 * Callees:
 *     ?Div128by64@@YA_J_J_K0AEA_J@Z @ 0x1C01ECEE8 (-Div128by64@@YA_J_J_K0AEA_J@Z.c)
 */

_QWORD *__fastcall Prediction::operator/(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  *a1 = Div128by64(*a2 >> 32, *a2 << 32, *a3, &v5);
  return a1;
}
