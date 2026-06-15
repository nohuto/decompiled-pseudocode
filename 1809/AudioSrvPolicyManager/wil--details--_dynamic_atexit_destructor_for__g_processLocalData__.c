/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_processLocalData__ @ 0x18003A400
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180007824 (-Release@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 */

void wil::details::_dynamic_atexit_destructor_for__g_processLocalData__()
{
  if ( qword_18004F1A8 )
    wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Release(qword_18004F1A8);
}
