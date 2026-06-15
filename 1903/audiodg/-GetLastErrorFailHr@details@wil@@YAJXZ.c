/*
 * XREFs of ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x140027298
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1400265F8 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x1400268AC (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     _lambda_60fdbaca8c2c9d0ff58a3f8d500584e0_::operator() @ 0x140029EA8 (_lambda_60fdbaca8c2c9d0ff58a3f8d500584e0_--operator().c)
 *     ?CreateCrossProcessEvent@CStandardCrossProcessEventManager@@UEAAJPEAPEAUICrossProcessEvent@@@Z @ 0x140037650 (-CreateCrossProcessEvent@CStandardCrossProcessEventManager@@UEAAJPEAPEAUICrossProcessEvent@@@Z.c)
 *     ?InitializeEvents@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJXZ @ 0x140049600 (-InitializeEvents@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z @ 0x14002722C (-GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z.c)
 */

signed int __fastcall wil::details::GetLastErrorFailHr(wil::details *this, __int64 a2, __int64 a3, const char *a4)
{
  signed int result; // eax
  const char *v5; // [rsp+20h] [rbp-18h]
  const char *retaddr; // [rsp+38h] [rbp+0h]

  result = wil::details::GetLastErrorFail(0LL, 0LL, 0LL, a4, v5, retaddr);
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
