/*
 * XREFs of rimObsPopInputMessage @ 0x1C0157E7C
 * Callers:
 *     rimObsObserveNextInput @ 0x1C0157DAC (rimObsObserveNextInput.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     rimObsCalculateObserverMessageSize @ 0x1C0157624 (rimObsCalculateObserverMessageSize.c)
 *     rimObsCopyMessage @ 0x1C0157900 (rimObsCopyMessage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimObsPopInputMessage(__int64 a1, __int64 a2, void **a3, unsigned int a4)
{
  __int64 v4; // rdi
  unsigned int v7; // r15d
  int v8; // ebx
  unsigned int v9; // esi
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // eax
  __int64 v15; // rax
  _QWORD *v16; // rcx
  _DWORD v18[12]; // [rsp+20h] [rbp-48h] BYREF

  v4 = a1 + 144;
  v7 = a2;
  if ( *(_DWORD *)(a1 + 160) == -1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v8 = *(_DWORD *)(v4 + 20);
  if ( v8 )
  {
    memset(v18, 0, sizeof(v18));
    v18[0] = 1;
    v18[2] = 2;
    v18[3] = v8;
    v14 = rimObsCopyMessage((__int64)v18, v7, a3, a4);
    *(_DWORD *)(v4 + 20) = 0;
    return v14;
  }
  if ( !*(_DWORD *)(v4 + 16) )
    return (unsigned int)-2147483622;
  v10 = *(_QWORD *)v4;
  if ( *(_QWORD *)v4 == v4 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    v10 = *(_QWORD *)v4;
  }
  v11 = rimObsCopyMessage(v10 + 16, v7, a3, a4);
  v9 = v11;
  if ( v11 == -1073741789 )
  {
    memset(v18, 0, sizeof(v18));
    v18[2] = 0;
    v18[0] = 1;
    v18[3] = rimObsCalculateObserverMessageSize((unsigned int *)(v10 + 16), v12, v13);
    return (unsigned int)rimObsCopyMessage((__int64)v18, v7, a3, a4);
  }
  if ( v11 >= 0 )
  {
    v15 = *(_QWORD *)v10;
    if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) != v10 || (v16 = *(_QWORD **)(v10 + 8), *v16 != v10) )
      __fastfail(3u);
    *v16 = v15;
    *(_QWORD *)(v15 + 8) = v16;
    Win32FreePool(v10);
    --*(_DWORD *)(v4 + 16);
  }
  return v9;
}
