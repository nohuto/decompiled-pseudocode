/*
 * XREFs of sub_1800D4944 @ 0x1800D4944
 * Callers:
 *     sub_1800D16F0 @ 0x1800D16F0 (sub_1800D16F0.c)
 *     sub_1800D8B78 @ 0x1800D8B78 (sub_1800D8B78.c)
 * Callees:
 *     <none>
 */

char sub_1800D4944()
{
  char v0; // dl
  char v1; // r8
  char v2; // al

  v0 = 0;
  if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 20) & 3) == 1
    || (BYTE2(LdrSystemDllInitBlock.MitigationOptionsMap.Map[1]) & 3) == 1
    || (BYTE3(LdrSystemDllInitBlock.MitigationOptionsMap.Map[1]) & 3) == 1
    || ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 28) & 3) == 1
    || (BYTE4(LdrSystemDllInitBlock.MitigationOptionsMap.Map[1]) & 3) == 1
    || (v1 = 0, (BYTE5(LdrSystemDllInitBlock.MitigationOptionsMap.Map[1]) & 3) == 1) )
  {
    v1 = 1;
  }
  if ( ((LdrSystemDllInitBlock.MitigationAuditOptionsMap.Map[0] >> 20) & 3) == 1
    || (BYTE2(LdrSystemDllInitBlock.MitigationAuditOptionsMap.Map[0]) & 3) == 1
    || (BYTE3(LdrSystemDllInitBlock.MitigationAuditOptionsMap.Map[0]) & 3) == 1
    || ((LdrSystemDllInitBlock.MitigationAuditOptionsMap.Map[0] >> 28) & 3) == 1
    || (BYTE4(LdrSystemDllInitBlock.MitigationAuditOptionsMap.Map[0]) & 3) == 1
    || (v2 = 0, (BYTE5(LdrSystemDllInitBlock.MitigationAuditOptionsMap.Map[0]) & 3) == 1) )
  {
    v2 = 1;
  }
  if ( v1 || v2 )
    return 1;
  return v0;
}
