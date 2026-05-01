/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_26b87ca59359fe239e5114e68fb2ebc3___::Run @ 0x180116DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?UAFireEvent@@YAJPEBU_GUID@@W4tagUAEVENT@@PEBGK@Z @ 0x18011AC6C (-UAFireEvent@@YAJPEBU_GUID@@W4tagUAEVENT@@PEBGK@Z.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_26b87ca59359fe239e5114e68fb2ebc3___::Run(
        __int64 a1,
        __int64 a2)
{
  UAFireEvent(a1, a2, *(_QWORD *)(a1 + 16));
  CoTaskMemFree(*(LPVOID *)(a1 + 16));
}
