/*
 * XREFs of ??1?$unique_ptr@$$BY0A@GU?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x180032F08
 * Callers:
 *     _ApplicationSpecificEndpointInfo::LoadApplicationDefaultEndpoints_::_1_::dtor$1 @ 0x180039EFA (_ApplicationSpecificEndpointInfo--LoadApplicationDefaultEndpoints_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall wistd::unique_ptr<unsigned short [0],wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<unsigned short [0],wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(
        LPVOID *a1)
{
  CoTaskMemFree(*a1);
}
