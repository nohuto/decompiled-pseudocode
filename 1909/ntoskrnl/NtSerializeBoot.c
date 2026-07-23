/*
 * XREFs of NtSerializeBoot @ 0x14078B320
 * Callers:
 *     <none>
 * Callees:
 *     PnpSerializeBoot @ 0x14019D848 (PnpSerializeBoot.c)
 *     SeSinglePrivilegeCheck @ 0x140678440 (SeSinglePrivilegeCheck.c)
 */

NTSTATUS NtSerializeBoot(void)
{
  if ( KeGetCurrentThread()->PreviousMode != 1 )
    return -1073741790;
  if ( SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
    return PnpSerializeBoot();
  return -1073741727;
}
