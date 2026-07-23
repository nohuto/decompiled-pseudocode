/*
 * XREFs of RtlGuardIsExportSuppressedAddress @ 0x18002B1C8
 * Callers:
 *     RtlGuardGrantSuppressedCallAccess @ 0x18002B1F4 (RtlGuardGrantSuppressedCallAccess.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x1800F98D0 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     RtlpGetTargetRvaFlag @ 0x18002B0A4 (RtlpGetTargetRvaFlag.c)
 */

bool __fastcall RtlGuardIsExportSuppressedAddress(void *a1)
{
  char v2; // [rsp+38h] [rbp+10h] BYREF

  return RtlpGetTargetRvaFlag(a1, &v2) && (v2 & 3) == 2;
}
