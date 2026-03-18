/*
 * XREFs of NtSerializeBoot @ 0x140761F90
 * Callers:
 *     <none>
 * Callees:
 *     PnpSerializeBoot @ 0x140192D98 (PnpSerializeBoot.c)
 *     SeSinglePrivilegeCheck @ 0x140612160 (SeSinglePrivilegeCheck.c)
 */

NTSTATUS NtSerializeBoot()
{
  if ( KeGetCurrentThread()->PreviousMode != 1 )
    return -1073741790;
  if ( SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
    return PnpSerializeBoot();
  return -1073741727;
}
