/*
 * XREFs of CmDoVirtualTest @ 0x14012959C
 * Callers:
 *     NtDeleteKey @ 0x1405AA940 (NtDeleteKey.c)
 *     NtDeleteValueKey @ 0x1405B7030 (NtDeleteValueKey.c)
 *     NtSetValueKey @ 0x1405CD8E0 (NtSetValueKey.c)
 *     NtSetInformationKey @ 0x1406981A0 (NtSetInformationKey.c)
 *     NtRenameKey @ 0x1407EAD80 (NtRenameKey.c)
 * Callees:
 *     CmpIsSystemEntity @ 0x1406B3274 (CmpIsSystemEntity.c)
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
