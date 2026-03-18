/*
 * XREFs of ?HimetricToScreen@CInteractionContextTransformHelper@@SAXAEBUtagRECT@@0PEAUINTERACTION_UPDATE@@PEAUINTERACTION_VELOCITY@@1121@Z @ 0x180221158
 * Callers:
 *     ?TransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUINTERACTION_CHANGESET@@AEBUtagRECT@@1K_NPEAU2@@Z @ 0x180221640 (-TransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUINTERACTION_CHANGESET@@AEBUtagRECT.c)
 * Callees:
 *     ?TransformCoordinateSpace@CInteractionContextTransformHelper@@SAJPEBUtagRECT@@0PEAUINTERACTION_UPDATE@@1@Z @ 0x180221270 (-TransformCoordinateSpace@CInteractionContextTransformHelper@@SAJPEBUtagRECT@@0PEAUINTERACTION_U.c)
 *     ?TransformCoordinateSpace@CInteractionContextTransformHelper@@SAJPEBUtagRECT@@0PEAUINTERACTION_VELOCITY@@1@Z @ 0x1802213D0 (-TransformCoordinateSpace@CInteractionContextTransformHelper@@SAJPEBUtagRECT@@0PEAUINTERACTION_V.c)
 */

void __fastcall CInteractionContextTransformHelper::HimetricToScreen(
        const struct tagRECT *a1,
        const struct tagRECT *a2,
        struct INTERACTION_UPDATE *a3,
        struct INTERACTION_VELOCITY *a4,
        struct INTERACTION_UPDATE *a5,
        struct INTERACTION_UPDATE *a6,
        struct INTERACTION_VELOCITY *a7,
        struct INTERACTION_UPDATE *a8)
{
  int v8; // eax

  v8 = 0;
  if ( a3 )
  {
    if ( a6 )
    {
      v8 = CInteractionContextTransformHelper::TransformCoordinateSpace(a1, a2, a3, a6);
      if ( v8 < 0 )
        goto LABEL_12;
    }
  }
  if ( a4 && a7 )
    v8 = CInteractionContextTransformHelper::TransformCoordinateSpace(a1, a2, a4, a7);
  if ( v8 < 0 )
    goto LABEL_12;
  if ( a5 && a8 )
    v8 = CInteractionContextTransformHelper::TransformCoordinateSpace(a1, a2, a5, a8);
  if ( v8 < 0 )
  {
LABEL_12:
    if ( a6 )
      *(_QWORD *)a6 = 0LL;
    if ( a7 )
      *(_QWORD *)a7 = 0LL;
    if ( a8 )
      *(_QWORD *)a8 = 0LL;
  }
}
