/*
 * XREFs of VfWmiDumpIrpStack @ 0x140941F20
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilDbgPrint @ 0x140309C3C (VfUtilDbgPrint.c)
 */

__int64 __fastcall VfWmiDumpIrpStack(__int64 a1)
{
  unsigned __int8 v2; // al
  const char *v4; // rcx

  VfUtilDbgPrint("IRP_MJ_SYSTEM_CONTROL.");
  v2 = *(_BYTE *)(a1 + 1);
  if ( v2 <= 9u )
    return VfUtilDbgPrint(WmiIrpNames[v2]);
  v4 = "IRP_MN_BOGUS";
  if ( v2 != 0xFF )
    v4 = "(Bogus)";
  return VfUtilDbgPrint(v4);
}
