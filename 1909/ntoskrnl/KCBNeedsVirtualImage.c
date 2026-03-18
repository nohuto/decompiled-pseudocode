/*
 * XREFs of KCBNeedsVirtualImage @ 0x1400F4110
 * Callers:
 *     CmpVEExecuteCreateLogic @ 0x1406A41B0 (CmpVEExecuteCreateLogic.c)
 *     CmKeyBodyRemapToVirtual @ 0x14082B3B4 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14082B648 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     KCBIsVirtualizable @ 0x1400F4144 (KCBIsVirtualizable.c)
 *     CmpIsSystemEntity @ 0x1406A4374 (CmpIsSystemEntity.c)
 */

char KCBNeedsVirtualImage()
{
  char result; // al
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8

  result = KCBIsVirtualizable();
  if ( result )
  {
    LOBYTE(v2) = KeGetCurrentThread()->PreviousMode;
    return (unsigned __int8)CmpIsSystemEntity(v2, v1, v3) == 0;
  }
  return result;
}
