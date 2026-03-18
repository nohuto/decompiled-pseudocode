/*
 * XREFs of RIMIDEInjectKeyboardInput @ 0x1C014ABA0
 * Callers:
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C014A94C (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C008B464 (WPP_RECORDER_SF_ddd.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1C0147CE4 (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C01535B4 (rimProcessDeviceBufferAndStartRead.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDEInjectKeyboardInput(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 v5; // rdi
  unsigned int v7; // esi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // xmm0_8
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r9
  int v20; // edx

  v3 = *(_QWORD *)(a1 + 424);
  v4 = a1 + 88;
  v5 = a3;
  v7 = 0;
  RIMLockExclusive(v3 + 104);
  if ( *(_BYTE *)(v3 + 81) )
  {
    v7 = -1073741637;
  }
  else
  {
    if ( (*(_DWORD *)(v4 + 184) & 0x2000) == 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
    RIMLockExclusive(v3 + 568);
    if ( (unsigned int)v5 > 0x10 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
    v14 = *(_DWORD *)(v4 + 700);
    if ( v14 + (unsigned int)v5 < v14 || v14 + (unsigned int)v5 > 0x10 )
    {
      InputTraceLogging::RIM::DropInput(v4);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v20) = 2;
        WPP_RECORDER_SF_ddd(
          (_DWORD)gRimLog,
          v20,
          1,
          46,
          (__int64)&WPP_2b6b994a0a793843830e01c2639db3fc_Traceguids,
          *(_DWORD *)(v4 + 700),
          16,
          v5);
      }
      v7 = -1073741789;
    }
    else
    {
      if ( (_DWORD)v5 )
      {
        v15 = v5;
        do
        {
          v16 = *a2;
          v17 = *((_DWORD *)a2 + 2);
          a2 = (__int64 *)((char *)a2 + 12);
          v18 = ((unsigned __int8)*(_DWORD *)(v4 + 704) + 1) & 0xF;
          *(_DWORD *)(v4 + 704) = v18;
          v19 = 3 * (v18 + 59);
          *(_QWORD *)(v4 + 4 * v19) = v16;
          *(_DWORD *)(v4 + 4 * v19 + 8) = v17;
          ++*(_DWORD *)(v4 + 700);
          --v15;
        }
        while ( v15 );
      }
      rimProcessDeviceBufferAndStartRead((struct RawInputManagerObject *)v3, (struct RIMDEV *)v4);
    }
    *(_QWORD *)(v3 + 576) = 0LL;
    ExReleasePushLockExclusiveEx(v3 + 568, 0LL);
    KeLeaveCriticalRegion();
  }
  *(_QWORD *)(v3 + 112) = 0LL;
  ExReleasePushLockExclusiveEx(v3 + 104, 0LL);
  KeLeaveCriticalRegion();
  return v7;
}
