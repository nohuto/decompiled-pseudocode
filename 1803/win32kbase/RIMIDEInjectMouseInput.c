/*
 * XREFs of RIMIDEInjectMouseInput @ 0x1C00F4BCC
 * Callers:
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C00F4980 (RIMIDEInjectMouseFromMouseInputStruct.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00F1E10 (RawInputManagerDeviceObjectResolveHandle.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C00FEE14 (rimProcessDeviceBufferAndStartRead.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDEInjectMouseInput(char *a1, const void *a2, unsigned int a3)
{
  __int64 v4; // rbx
  int v5; // r14d
  char *v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  v4 = a3;
  v5 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v5 >= 0 )
  {
    v6 = (char *)Object;
    v7 = *((_QWORD *)Object + 52);
    RIMLockExclusive(v7 + 96);
    if ( *(_BYTE *)(v7 + 73) )
    {
      v5 = -1073741637;
    }
    else
    {
      if ( (*((_DWORD *)v6 + 66) & 0x1000) == 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8);
      RIMLockExclusive(v7 + 552);
      if ( (unsigned int)v4 > 0xA )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
      *((_DWORD *)v6 + 84) = 0;
      *((_QWORD *)v6 + 43) = 24 * v4;
      memset(v6 + 556, 0, 0xF0uLL);
      memmove(v6 + 556, a2, *((_QWORD *)v6 + 43));
      rimProcessDeviceBufferAndStartRead(v7, v6 + 80);
      *(_QWORD *)(v7 + 560) = 0LL;
      ExReleasePushLockExclusiveEx(v7 + 552, 0LL);
      KeLeaveCriticalRegion();
    }
    *(_QWORD *)(v7 + 104) = 0LL;
    ExReleasePushLockExclusiveEx(v7 + 96, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v6);
  }
  return (unsigned int)v5;
}
