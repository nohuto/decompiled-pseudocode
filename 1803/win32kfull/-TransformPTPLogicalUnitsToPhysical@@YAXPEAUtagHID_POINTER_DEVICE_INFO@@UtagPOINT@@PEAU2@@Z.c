/*
 * XREFs of ?TransformPTPLogicalUnitsToPhysical@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z @ 0x1C019A988
 * Callers:
 *     ApplyPTPTranslation @ 0x1C019AA00 (ApplyPTPTranslation.c)
 * Callees:
 *     ConvertPointCoordinates @ 0x1C019DA58 (ConvertPointCoordinates.c)
 */

void __fastcall TransformPTPLogicalUnitsToPhysical(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        struct tagPOINT a2,
        struct tagPOINT *a3)
{
  if ( !(unsigned int)ConvertPointCoordinates(a2.x) )
  {
    a3->x = 0;
    a3->y = 0;
  }
}
