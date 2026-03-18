/*
 * XREFs of rimObsPopInputMessage @ 0x1C010547C
 * Callers:
 *     rimObsObserveNextInput @ 0x1C01053C8 (rimObsObserveNextInput.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     rimObsCalculateObserverMessageSize @ 0x1C0104C94 (rimObsCalculateObserverMessageSize.c)
 *     rimObsCopyMessage @ 0x1C0104F50 (rimObsCopyMessage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimObsPopInputMessage(__int64 a1, __int64 a2, void **a3, unsigned int a4)
{
  __int64 v4; // rdi
  unsigned int v7; // r15d
  int v8; // ebx
  unsigned int v9; // esi
  __int64 v10; // rbx
  int v11; // eax
  unsigned int v12; // eax
  __int64 v13; // rax
  _QWORD *v14; // rcx
  _DWORD v16[12]; // [rsp+20h] [rbp-48h] BYREF

  v4 = a1 + 136;
  v7 = a2;
  if ( *(_DWORD *)(a1 + 152) == -1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  v8 = *(_DWORD *)(v4 + 20);
  if ( v8 )
  {
    memset(v16, 0, sizeof(v16));
    v16[0] = 1;
    v16[2] = 2;
    v16[3] = v8;
    v12 = rimObsCopyMessage((__int64)v16, v7, a3, a4);
    *(_DWORD *)(v4 + 20) = 0;
    return v12;
  }
  if ( !*(_DWORD *)(v4 + 16) )
    return (unsigned int)-2147483622;
  v10 = *(_QWORD *)v4;
  if ( *(_QWORD *)v4 == v4 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
    v10 = *(_QWORD *)v4;
  }
  v11 = rimObsCopyMessage(v10 + 16, v7, a3, a4);
  v9 = v11;
  if ( v11 == -1073741789 )
  {
    memset(v16, 0, sizeof(v16));
    v16[2] = 0;
    v16[0] = 1;
    v16[3] = rimObsCalculateObserverMessageSize((unsigned int *)(v10 + 16));
    return (unsigned int)rimObsCopyMessage((__int64)v16, v7, a3, a4);
  }
  if ( v11 >= 0 )
  {
    v13 = *(_QWORD *)v10;
    if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) != v10 || (v14 = *(_QWORD **)(v10 + 8), *v14 != v10) )
      __fastfail(3u);
    *v14 = v13;
    *(_QWORD *)(v13 + 8) = v14;
    Win32FreePool(v10);
    --*(_DWORD *)(v4 + 16);
  }
  return v9;
}
