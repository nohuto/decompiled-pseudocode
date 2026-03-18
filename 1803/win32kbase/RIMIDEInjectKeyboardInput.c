/*
 * XREFs of RIMIDEInjectKeyboardInput @ 0x1C00F481C
 * Callers:
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C00F4600 (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00F1E10 (RawInputManagerDeviceObjectResolveHandle.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C00FEE14 (rimProcessDeviceBufferAndStartRead.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDEInjectKeyboardInput(char *a1, _QWORD *a2, unsigned int a3)
{
  __int64 v4; // rbp
  int v5; // edi
  _DWORD *v6; // r13
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // ecx
  __int64 v13; // rcx
  __int64 v14; // xmm0_8
  __int64 v15; // rax
  __int64 v16; // r8
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  v4 = a3;
  v5 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v5 >= 0 )
  {
    v6 = Object;
    v7 = *((_QWORD *)Object + 52);
    RIMLockExclusive(v7 + 96);
    if ( *(_BYTE *)(v7 + 73) )
    {
      v5 = -1073741637;
    }
    else
    {
      if ( (v6[66] & 0x1000) == 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8);
      RIMLockExclusive(v7 + 552);
      if ( (unsigned int)v4 > 0x10 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
      v12 = v6[175];
      if ( v12 + (unsigned int)v4 < v12 || v12 + (unsigned int)v4 > 0x10 )
      {
        v5 = -1073741789;
      }
      else
      {
        if ( (_DWORD)v4 )
        {
          v13 = v4;
          do
          {
            v14 = *a2;
            v15 = ((unsigned __int8)v6[176] + 1) & 0xF;
            a2 = (_QWORD *)((char *)a2 + 12);
            v6[176] = v15;
            v16 = 3 * v15;
            LODWORD(v15) = *((_DWORD *)a2 - 1);
            *(_QWORD *)&v6[v16 + 177] = v14;
            v6[v16 + 179] = v15;
            ++v6[175];
            --v13;
          }
          while ( v13 );
        }
        rimProcessDeviceBufferAndStartRead(v7, v6 + 20);
      }
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
