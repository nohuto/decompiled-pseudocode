/*
 * XREFs of ??1?$unique_ptr@$$BY0A@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x18012EAB4
 * Callers:
 *     _GetFxClsids_::_1_::dtor$3 @ 0x18006B780 (_GetFxClsids_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

void __fastcall wistd::unique_ptr<_GUID [0],wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<_GUID [0],wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(
        LPVOID *a1)
{
  CoTaskMemFree(*a1);
}
