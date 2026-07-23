/*
 * XREFs of LdrUnloadDll @ 0x18002F330
 * Callers:
 *     sub_18002F180 @ 0x18002F180 (sub_18002F180.c)
 *     sub_18002F4F0 @ 0x18002F4F0 (sub_18002F4F0.c)
 *     RtlQueueWorkItem @ 0x18002F7D0 (RtlQueueWorkItem.c)
 *     sub_1800351D0 @ 0x1800351D0 (sub_1800351D0.c)
 *     sub_180069410 @ 0x180069410 (sub_180069410.c)
 *     sub_18007A3BC @ 0x18007A3BC (sub_18007A3BC.c)
 *     RtlWnfDllUnloadCallback @ 0x180084F60 (RtlWnfDllUnloadCallback.c)
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 *     RtlWow64LogMessageInEventLogger @ 0x1800D6B70 (RtlWow64LogMessageInEventLogger.c)
 * Callees:
 *     sub_18001869C @ 0x18001869C (sub_18001869C.c)
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 *     sub_18002E73C @ 0x18002E73C (sub_18002E73C.c)
 *     sub_18002F3D8 @ 0x18002F3D8 (sub_18002F3D8.c)
 *     sub_180073E1C @ 0x180073E1C (sub_180073E1C.c)
 */

NTSTATUS __cdecl LdrUnloadDll(PVOID DllHandle)
{
  NTSTATUS v1; // ebx
  char *v2; // rdi
  __int16 v4; // bx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // [rsp+38h] [rbp+10h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp+18h] BYREF

  v1 = 0;
  if ( !byte_180165408 )
  {
    v1 = sub_18001869C((unsigned __int64)DllHandle, (__int64 *)&BaseAddress, &v9);
    if ( v1 >= 0 )
    {
      v2 = (char *)BaseAddress;
      v1 = sub_18002F3D8(BaseAddress, 1LL);
      if ( v1 == -1073741267 )
      {
        v4 = NtCurrentTeb()->SameTebFlags & 0x1000;
        if ( !v4 )
          sub_18002E73C(0);
        v2 = (char *)BaseAddress;
        sub_18002F3D8(BaseAddress, 0LL);
        if ( !v4 )
          sub_180073E1C(v6, v5, v7, v8);
        v1 = 0;
      }
      sub_18001B678(v2);
    }
  }
  return v1;
}
