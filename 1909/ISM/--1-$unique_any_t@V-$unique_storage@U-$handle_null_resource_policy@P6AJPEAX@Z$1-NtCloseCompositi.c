/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18002EE70
 * Callers:
 *     _InputSiteManager::GetInputSiteFromInputSinkHandle_::_1_::dtor$0 @ 0x18002F2FC (_InputSiteManager--GetInputSiteFromInputSinkHandle_--_1_--dtor$0.c)
 *     _LegacyInputSinkData::LegacyInputSinkData_::_1_::dtor$0 @ 0x18003A3C0 (_LegacyInputSinkData--LegacyInputSinkData_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  result = v1 - 1;
  if ( (unsigned __int64)(v1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return NtCloseCompositionInputSink(v1);
  return result;
}
