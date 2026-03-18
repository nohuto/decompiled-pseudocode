/*
 * XREFs of RIMIDEInjectMouseFromMouseInputStruct @ 0x1C011F47C
 * Callers:
 *     NtUserInjectMouseInput @ 0x1C00F0910 (NtUserInjectMouseInput.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00510B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@@Z @ 0x1C011CD70 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@@Z.c)
 *     RIMIDEBuildButtonFlagsFromRawButtonsAndMouseInputStruct @ 0x1C011D368 (RIMIDEBuildButtonFlagsFromRawButtonsAndMouseInputStruct.c)
 *     RIMIDEBuildRawButtonsFromMouseInputStruct @ 0x1C011D424 (RIMIDEBuildRawButtonsFromMouseInputStruct.c)
 *     RIMIDEInjectMouseInput @ 0x1C011F6B8 (RIMIDEInjectMouseInput.c)
 *     RIMIDEValidateMouseInputStruct @ 0x1C011FCA8 (RIMIDEValidateMouseInputStruct.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall RIMIDEInjectMouseFromMouseInputStruct(char *a1, __int64 a2, unsigned int a3)
{
  char *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int v9; // ebp
  int v10; // esi
  PVOID v11; // rbx
  char *v12; // r13
  char *v13; // r14
  __int16 *v14; // r15
  __int64 v15; // xmm1_8
  unsigned int v16; // edi
  int v17; // ebx
  __int16 v18; // dx
  __int16 v19; // cx
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // r8
  __int16 v23; // ax
  unsigned __int64 v24; // rcx
  PVOID Object; // [rsp+20h] [rbp-158h] BYREF
  __int64 v27; // [rsp+28h] [rbp-150h]
  char *v28; // [rsp+30h] [rbp-148h]
  __int64 v29; // [rsp+38h] [rbp-140h]
  _OWORD v30[15]; // [rsp+40h] [rbp-138h] BYREF

  v29 = a2;
  v28 = a1;
  v5 = a1;
  memset(v30, 0, sizeof(v30));
  v9 = 0;
  Object = 0LL;
  if ( a3 > 0xA )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  v10 = RawInputManagerDeviceObjectResolveHandle(v5, 3u, 1, &Object);
  if ( v10 >= 0 )
  {
    v11 = Object;
    if ( !*((_BYTE *)Object + 136) )
    {
      v12 = (char *)Object + 88;
      InputTraceLogging::RIM::InjectInput((__int64)Object + 88, 3u);
      if ( a3 )
      {
        v13 = (char *)v30 + 2;
        v14 = (__int16 *)(a2 + 8);
        while ( 1 )
        {
          if ( v9 )
          {
            v15 = *((_QWORD *)v30 + 3 * v9 - 1);
            *(_OWORD *)(v12 + 716) = *(_OWORD *)((char *)&v30[-1] + 24 * v9 - 8);
            *(_QWORD *)(v12 + 732) = v15;
          }
          v27 = v29 + 32LL * v9;
          if ( !(unsigned int)RIMIDEValidateMouseInputStruct(v27) )
            break;
          v16 = *((_DWORD *)v14 + 1);
          v17 = *((_DWORD *)v12 + 181);
          *((_WORD *)v13 - 1) = -2;
          v18 = (v16 >> 15) & 1 | 8;
          if ( (v16 & 0x2000) == 0 )
            v18 = (v16 >> 15) & 1;
          v19 = v18 | 2;
          if ( (v16 & 0x4000) == 0 )
            v19 = v18;
          v20 = v27;
          *(_WORD *)v13 = v19;
          v21 = RIMIDEBuildRawButtonsFromMouseInputStruct(v17, v20);
          v22 = v27;
          *(_DWORD *)(v13 + 6) = v21;
          *((_WORD *)v13 + 1) = RIMIDEBuildButtonFlagsFromRawButtonsAndMouseInputStruct(v17, v21, v22);
          v23 = 0;
          if ( (v16 & 0x1800) != 0 )
            v23 = *v14;
          LODWORD(v24) = *((_DWORD *)v14 + 2);
          *((_WORD *)v13 + 2) = v23;
          *(_DWORD *)(v13 + 10) = *((_DWORD *)v14 - 2);
          *(_DWORD *)(v13 + 14) = *((_DWORD *)v14 - 1);
          if ( !(_DWORD)v24 )
            v24 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          *(_DWORD *)(v13 + 18) = v24;
          ++v9;
          v13 += 24;
          v14 += 16;
          if ( v9 >= a3 )
            goto LABEL_21;
        }
        v10 = -1073741811;
LABEL_21:
        v5 = v28;
        v11 = Object;
      }
      if ( v10 >= 0 )
        v10 = RIMIDEInjectMouseInput(v5, v30, a3);
    }
    ObfDereferenceObject(v11);
  }
  return v10 >= 0;
}
