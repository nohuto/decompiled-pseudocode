/*
 * XREFs of ?IsValidBlock@DisplayID_ProductId_Parser@@QEBA_NXZ @ 0x1C00570BC
 * Callers:
 *     ?DisplayID_GetManufactureDate@@YAJPEAUDisplayIDObj@@PEAEPEAG@Z @ 0x1C0056B38 (-DisplayID_GetManufactureDate@@YAJPEAUDisplayIDObj@@PEAEPEAG@Z.c)
 *     ?DisplayID_GetManufacturerName@@YAJPEAUDisplayIDObj@@PEAG@Z @ 0x1C0056BAC (-DisplayID_GetManufacturerName@@YAJPEAUDisplayIDObj@@PEAG@Z.c)
 *     ?DisplayID_GetProductCode@@YAJPEAUDisplayIDObj@@PEAG@Z @ 0x1C0056C74 (-DisplayID_GetProductCode@@YAJPEAUDisplayIDObj@@PEAG@Z.c)
 *     ?DisplayID_GetSerialNumber@@YAJPEAUDisplayIDObj@@PEAG@Z @ 0x1C0056CEC (-DisplayID_GetSerialNumber@@YAJPEAUDisplayIDObj@@PEAG@Z.c)
 *     ?DisplayID_GetUserFriendlyName@@YAJPEAUDisplayIDObj@@PEAGEPEAE@Z @ 0x1C0056D78 (-DisplayID_GetUserFriendlyName@@YAJPEAUDisplayIDObj@@PEAGEPEAE@Z.c)
 *     ?DisplayID_UpdateForTelemetry@@YAJPEAUDisplayIDObj@@@Z @ 0x1C0056EC0 (-DisplayID_UpdateForTelemetry@@YAJPEAUDisplayIDObj@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DisplayID_ProductId_Parser::IsValidBlock(DisplayID_ProductId_Parser *this)
{
  return **(_BYTE **)this == 32 && (unsigned __int8)(*(_BYTE *)(*(_QWORD *)this + 2LL) - 12) <= 0xECu;
}
