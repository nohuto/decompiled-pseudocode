/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140013B0C
 * Callers:
 *     _lambda_d1de4b53b525fd4013d62472baaa2c14_::operator() @ 0x14001367C (_lambda_d1de4b53b525fd4013d62472baaa2c14_--operator().c)
 *     ?ParseCommandLine@CAudioDGModule@@QEAA_NPEBGPEAJ@Z @ 0x1400139AC (-ParseCommandLine@CAudioDGModule@@QEAA_NPEBGPEAJ@Z.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x14002E288 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x14002E54C (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x14002F9B8 (-Release@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 *     ?InitializeEvents@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJXZ @ 0x14004BCF0 (-InitializeEvents@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x14002E520 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
        wil::details **a1,
        wil::details *a2)
{
  wil::details *v2; // rsi
  DWORD LastError; // ebx
  void *v6; // rdx

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    wil::details::CloseHandle(v2, v6);
    SetLastError(LastError);
  }
  *a1 = a2;
}
