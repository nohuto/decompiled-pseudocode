/*
 * XREFs of LdrFindResourceEx_U @ 0x18007F660
 * Callers:
 *     <none>
 * Callees:
 *     sub_180018D8C @ 0x180018D8C (sub_180018D8C.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_1800E0820 @ 0x1800E0820 (sub_1800E0820.c)
 */

NTSTATUS __cdecl LdrFindResourceEx_U(
        ULONG Flags,
        PVOID DllHandle,
        PLDR_RESOURCE_INFO ResourceInfo,
        ULONG Level,
        PIMAGE_RESOURCE_DATA_ENTRY *ResourceDataEntry)
{
  __int64 v9; // rdi
  __int64 v10; // r10
  __int64 v11; // rbx
  NTSTATUS v12; // esi
  __int64 v14; // rcx

  v9 = 2147353477LL;
  if ( RtlGetCurrentServiceSessionId() )
    v10 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
  else
    v10 = 2147353477LL;
  v11 = 2147353476LL;
  if ( (*(_BYTE *)v10 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v14 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
    else
      v14 = 2147353476LL;
    sub_1800E0820(L"02", *(unsigned __int8 *)v14);
  }
  v12 = sub_180018D8C(DllHandle, (__int64)ResourceInfo, Level, Flags, (__int64)ResourceDataEntry);
  if ( RtlGetCurrentServiceSessionId() )
    v9 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
  if ( (*(_BYTE *)v9 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v11 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
    sub_1800E0820(L".0", *(unsigned __int8 *)v11);
  }
  return v12;
}
