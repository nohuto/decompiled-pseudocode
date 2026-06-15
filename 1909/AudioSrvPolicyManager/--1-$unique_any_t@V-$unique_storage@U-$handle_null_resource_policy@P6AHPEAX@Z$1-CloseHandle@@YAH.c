/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180005D4C
 * Callers:
 *     _CProcess::CProcess_::_1_::dtor$5 @ 0x1800366B8 (_CProcess--CProcess_--_1_--dtor$5.c)
 *     _CProcess::CProcess_::_1_::dtor$18 @ 0x1800367FD (_CProcess--CProcess_--_1_--dtor$18.c)
 *     _CProcess::Initialize_::_1_::dtor$0 @ 0x180036852 (_CProcess--Initialize_--_1_--dtor$0.c)
 *     _CApplicationManager::RpcGetProcess_::_1_::dtor$3 @ 0x180036D30 (_CApplicationManager--RpcGetProcess_--_1_--dtor$3.c)
 *     _CApplicationManager::RpcGetProcess_::_1_::dtor$6 @ 0x180036D66 (_CApplicationManager--RpcGetProcess_--_1_--dtor$6.c)
 *     _CApplicationManager::RpcGetProcess_::_1_::dtor$9 @ 0x180036D9C (_CApplicationManager--RpcGetProcess_--_1_--dtor$9.c)
 * Callees:
 *     <none>
 */

int __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(
        void **a1)
{
  char *v1; // rcx
  int result; // eax

  v1 = (char *)*a1;
  result = (_DWORD)v1 - 1;
  if ( (unsigned __int64)(v1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return CloseHandle(v1);
  return result;
}
