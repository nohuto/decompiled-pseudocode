/*
 * XREFs of ObDrainDeferredObjectDeletion @ 0x14089DD9C
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400990A4 (CmpLoadKeyCommon.c)
 *     CmLoadKey @ 0x1406E94C4 (CmLoadKey.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x14010B950 (ExBlockOnAddressPushLock.c)
 */

__int64 ObDrainDeferredObjectDeletion()
{
  __int64 result; // rax
  __int64 v1; // [rsp+40h] [rbp+8h] BYREF

  while ( 1 )
  {
    result = ObpRemoveObjectList;
    v1 = ObpRemoveObjectList;
    if ( !ObpRemoveObjectList )
      break;
    ExBlockOnAddressPushLock((__int64)&ObpRemoveObjectWait, &ObpRemoveObjectList, &v1, 8uLL, 0LL);
  }
  return result;
}
