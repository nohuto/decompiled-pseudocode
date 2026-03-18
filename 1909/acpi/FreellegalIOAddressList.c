/*
 * XREFs of FreellegalIOAddressList @ 0x1C00C078C
 * Callers:
 *     InitIllegalIOAddressListFromHAL @ 0x1C00BD00C (InitIllegalIOAddressListFromHAL.c)
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
