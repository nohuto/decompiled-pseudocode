/*
 * XREFs of FreellegalIOAddressList @ 0x1C00BCB40
 * Callers:
 *     InitIllegalIOAddressListFromHAL @ 0x1C00B99F0 (InitIllegalIOAddressListFromHAL.c)
 * Callees:
 *     <none>
 */

void FreellegalIOAddressList()
{
  if ( gpBadIOAddressList )
  {
    ExFreePoolWithTag(gpBadIOAddressList, 0);
    gpBadIOAddressList = 0LL;
  }
  if ( gpBadIOErrorLogDoneList )
  {
    ExFreePoolWithTag(gpBadIOErrorLogDoneList, 0);
    gpBadIOErrorLogDoneList = 0LL;
  }
}
