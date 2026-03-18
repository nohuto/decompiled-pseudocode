/*
 * XREFs of CmDoVirtualTest @ 0x1401294AC
 * Callers:
 *     NtDeleteKey @ 0x1405A9940 (NtDeleteKey.c)
 *     NtDeleteValueKey @ 0x1405B6030 (NtDeleteValueKey.c)
 *     NtSetValueKey @ 0x1405CC8E0 (NtSetValueKey.c)
 *     NtSetInformationKey @ 0x140697000 (NtSetInformationKey.c)
 *     NtRenameKey @ 0x1407E9BA0 (NtRenameKey.c)
 * Callees:
 *     CmpIsSystemEntity @ 0x1406B1FF4 (CmpIsSystemEntity.c)
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
