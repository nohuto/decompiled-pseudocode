/*
 * XREFs of IoCheckDesiredAccess @ 0x14081BF00
 * Callers:
 *     <none>
 * Callees:
 *     RtlMapGenericMask @ 0x14063ED30 (RtlMapGenericMask.c)
 */

NTSTATUS __stdcall IoCheckDesiredAccess(PACCESS_MASK DesiredAccess, ACCESS_MASK GrantedAccess)
{
  RtlMapGenericMask(DesiredAccess, (PGENERIC_MAPPING)((char *)IoFileObjectType + 76));
  return (*DesiredAccess & ~GrantedAccess) != 0 ? 0xC0000022 : 0;
}
