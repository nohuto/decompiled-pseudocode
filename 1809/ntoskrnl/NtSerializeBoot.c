/*
 * XREFs of NtSerializeBoot @ 0x140763160
 * Callers:
 *     <none>
 * Callees:
 *     PnpSerializeBoot @ 0x140192EF8 (PnpSerializeBoot.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 */

NTSTATUS NtSerializeBoot(void)
{
  if ( KeGetCurrentThread()->PreviousMode != 1 )
    return -1073741790;
  if ( SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
    return PnpSerializeBoot();
  return -1073741727;
}
