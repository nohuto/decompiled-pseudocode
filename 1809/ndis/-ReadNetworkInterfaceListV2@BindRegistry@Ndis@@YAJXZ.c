/*
 * XREFs of ?ReadNetworkInterfaceListV2@BindRegistry@Ndis@@YAJXZ @ 0x1C00CB49C
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C001E9DC (-ndisInitializeNsiHelper@@YAJXZ.c)
 * Callees:
 *     netsetupEnumerateObjectIds__lambda_07fad1521ccbf9dcf92f4e848ce013d0___ @ 0x1C00B31A4 (netsetupEnumerateObjectIds__lambda_07fad1521ccbf9dcf92f4e848ce013d0___.c)
 */

__int64 __fastcall Ndis::BindRegistry::ReadNetworkInterfaceListV2(Ndis::BindRegistry *this)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = netsetupEnumerateObjectIds__lambda_07fad1521ccbf9dcf92f4e848ce013d0_((__int64)this, 0LL, 0);
  if ( (int)result >= 0 )
  {
    if ( !*((_BYTE *)P + 96) )
      return 0LL;
    result = netsetupEnumerateObjectIds__lambda_07fad1521ccbf9dcf92f4e848ce013d0_(v2, 1LL, 1);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
