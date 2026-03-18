/*
 * XREFs of RIMIDEInjectKeyboardInput @ 0x1C011F2F8
 * Callers:
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C011F0A4 (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00510B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0126BEC (rimProcessDeviceBufferAndStartRead.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDEInjectKeyboardInput(char *a1, _QWORD *a2, unsigned int a3)
{
  __int64 v4; // rbp
  int v5; // edi
  char *v6; // r13
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // ecx
  __int64 v15; // rcx
  __int64 v16; // xmm0_8
  __int64 v17; // rax
  __int64 v18; // r8
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  v4 = a3;
  v5 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v5 >= 0 )
  {
    v6 = (char *)Object;
    v7 = *((_QWORD *)Object + 53);
    RIMLockExclusive(v7 + 104);
    if ( *(_BYTE *)(v7 + 81) )
    {
      v5 = -1073741637;
    }
    else
    {
      if ( (*((_DWORD *)v6 + 68) & 0x2000) == 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
      RIMLockExclusive(v7 + 568);
      if ( (unsigned int)v4 > 0x10 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
      v14 = *((_DWORD *)v6 + 178);
      if ( v14 + (unsigned int)v4 < v14 || v14 + (unsigned int)v4 > 0x10 )
      {
        v5 = -1073741789;
      }
      else
      {
        if ( (_DWORD)v4 )
        {
          v15 = v4;
          do
          {
            v16 = *a2;
            v17 = ((unsigned __int8)*((_DWORD *)v6 + 179) + 1) & 0xF;
            a2 = (_QWORD *)((char *)a2 + 12);
            *((_DWORD *)v6 + 179) = v17;
            v18 = 3 * v17;
            LODWORD(v17) = *((_DWORD *)a2 - 1);
            *(_QWORD *)&v6[4 * v18 + 720] = v16;
            *(_DWORD *)&v6[4 * v18 + 728] = v17;
            ++*((_DWORD *)v6 + 178);
            --v15;
          }
          while ( v15 );
        }
        rimProcessDeviceBufferAndStartRead((struct RawInputManagerObject *)v7, (struct RIMDEV *)(v6 + 88));
      }
      *(_QWORD *)(v7 + 576) = 0LL;
      ExReleasePushLockExclusiveEx(v7 + 568, 0LL);
      KeLeaveCriticalRegion();
    }
    *(_QWORD *)(v7 + 112) = 0LL;
    ExReleasePushLockExclusiveEx(v7 + 104, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v6);
  }
  return (unsigned int)v5;
}
