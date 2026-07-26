/*
 * XREFs of ?ReadNetworkInterfaceListV2@BindRegistry@Ndis@@YAJXZ @ 0x1C0109000
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C0035FB0 (-ndisInitializeNsiHelper@@YAJXZ.c)
 * Callees:
 *     netsetupEnumerateObjectIds__lambda_74aaa7089007ee3601df5827111bc2b5___ @ 0x1C00F9008 (netsetupEnumerateObjectIds__lambda_74aaa7089007ee3601df5827111bc2b5___.c)
 */

__int64 __fastcall Ndis::BindRegistry::ReadNetworkInterfaceListV2(Ndis::BindRegistry *this)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = netsetupEnumerateObjectIds__lambda_74aaa7089007ee3601df5827111bc2b5_((__int64)this, 0LL, 0);
  if ( (int)result >= 0 )
  {
    if ( !*((_BYTE *)P + 96) )
      return 0LL;
    result = netsetupEnumerateObjectIds__lambda_74aaa7089007ee3601df5827111bc2b5_(v2, 1LL, 1);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
