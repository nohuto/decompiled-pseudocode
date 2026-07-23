/*
 * XREFs of NtSerializeBoot @ 0x140788EC0
 * Callers:
 *     <none>
 * Callees:
 *     PnpSerializeBoot @ 0x14019D0C8 (PnpSerializeBoot.c)
 *     SeSinglePrivilegeCheck @ 0x140672D30 (SeSinglePrivilegeCheck.c)
 */

NTSTATUS NtSerializeBoot(void)
{
  if ( KeGetCurrentThread()->PreviousMode != 1 )
    return -1073741790;
  if ( SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
    return PnpSerializeBoot();
  return -1073741727;
}
