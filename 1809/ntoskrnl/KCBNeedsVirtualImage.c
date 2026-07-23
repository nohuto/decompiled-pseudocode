/*
 * XREFs of KCBNeedsVirtualImage @ 0x1401295DC
 * Callers:
 *     CmpVEExecuteCreateLogic @ 0x1406B3054 (CmpVEExecuteCreateLogic.c)
 *     CmKeyBodyRemapToVirtual @ 0x1407F2BFC (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1407F2E74 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     KCBIsVirtualizable @ 0x140129610 (KCBIsVirtualizable.c)
 *     CmpIsSystemEntity @ 0x1406B3274 (CmpIsSystemEntity.c)
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
