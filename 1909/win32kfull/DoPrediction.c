/*
 * XREFs of DoPrediction @ 0x1C01EF320
 * Callers:
 *     <none>
 * Callees:
 *     ?InitializeContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_INFO@@PEAU2@3@Z @ 0x1C01ED64C (-InitializeContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTI.c)
 *     ?UpdateContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_INFO@@PEAU2@3@Z @ 0x1C01EE1F0 (-UpdateContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_I.c)
 */

void __fastcall DoPrediction(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        struct tagPOINT a2,
        struct tagPOINT a3,
        int a4,
        struct tagHPD_PREDICTION_INFO *a5,
        struct tagPOINT *a6,
        struct tagPOINT *a7)
{
  if ( a4 )
    InitializeContactPrediction(a1, a2, a3, a5, a6, a7);
  else
    UpdateContactPrediction(a1, a2, a3, a5, a6, a7);
}
