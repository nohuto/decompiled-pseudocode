/*
 * XREFs of KCBNeedsVirtualImage @ 0x1401294EC
 * Callers:
 *     CmpVEExecuteCreateLogic @ 0x1406B1DD4 (CmpVEExecuteCreateLogic.c)
 *     CmKeyBodyRemapToVirtual @ 0x1407F1A1C (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1407F1C94 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     KCBIsVirtualizable @ 0x140129520 (KCBIsVirtualizable.c)
 *     CmpIsSystemEntity @ 0x1406B1FF4 (CmpIsSystemEntity.c)
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
