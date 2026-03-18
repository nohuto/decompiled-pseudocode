/*
 * XREFs of CmDoVirtualTest @ 0x1400F40D0
 * Callers:
 *     NtSetValueKey @ 0x140630190 (NtSetValueKey.c)
 *     NtDeleteKey @ 0x14063B0D0 (NtDeleteKey.c)
 *     NtDeleteValueKey @ 0x14063C850 (NtDeleteValueKey.c)
 *     NtSetInformationKey @ 0x1406B8050 (NtSetInformationKey.c)
 *     NtRenameKey @ 0x140823E80 (NtRenameKey.c)
 * Callees:
 *     CmpIsSystemEntity @ 0x1406A4374 (CmpIsSystemEntity.c)
 */

bool __fastcall CmDoVirtualTest(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx

  if ( !CmpVEEnabled )
    return 0;
  v3 = a1;
  LOBYTE(a1) = KeGetCurrentThread()->PreviousMode;
  return (unsigned __int8)CmpIsSystemEntity(a1, v3, a2) == 0;
}
