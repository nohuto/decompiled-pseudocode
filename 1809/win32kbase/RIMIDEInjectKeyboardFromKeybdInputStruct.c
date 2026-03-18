/*
 * XREFs of RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C011F0A4
 * Callers:
 *     NtUserInjectKeyboardInput @ 0x1C00F0740 (NtUserInjectKeyboardInput.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00510B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@@Z @ 0x1C011CD70 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@@Z.c)
 *     RIMIDEInjectKeyboardInput @ 0x1C011F2F8 (RIMIDEInjectKeyboardInput.c)
 *     RIMIsRunningOnDesktop @ 0x1C012FA7C (RIMIsRunningOnDesktop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall RIMIDEInjectKeyboardFromKeybdInputStruct(char *a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // r8
  _DWORD *v10; // rsi
  __int64 v11; // r9
  unsigned int v12; // r15d
  _BYTE *v13; // r14
  int *v14; // rdi
  int v15; // eax
  unsigned __int64 v16; // rcx
  bool v17; // zf
  char v18; // al
  unsigned int v19; // ecx
  __int16 v20; // ax
  __int16 v21; // dx
  __int16 v22; // ax
  unsigned __int64 v23; // rcx
  PVOID Object; // [rsp+20h] [rbp-D8h] BYREF
  _BYTE v26[128]; // [rsp+30h] [rbp-C8h] BYREF

  memset(v26, 0, 0x78uLL);
  Object = 0LL;
  v8 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  if ( a3 > 0xA )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v9);
  if ( v8 >= 0 )
  {
    v10 = Object;
    if ( *((_BYTE *)Object + 136) == 1 )
    {
      InputTraceLogging::RIM::InjectInput((__int64)Object + 88, 2u);
      v12 = 0;
      if ( a3 )
      {
        v13 = &v26[4];
        v14 = (int *)(a2 + 4);
        while ( 1 )
        {
          v15 = *v14;
          v16 = 0xFFFFF78000000320uLL;
          if ( (*v14 & 4) != 0 && (*((_WORD *)v14 - 2) || (v15 & 0xFFFF7FF9) != 0) )
            break;
          if ( (v15 & 8) == 0 && *((_WORD *)v14 - 2) > 0xFEu )
            break;
          if ( v14[1] )
          {
            v10 = Object;
            v16 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
            if ( v14[1] > (unsigned int)v16 )
              break;
          }
          if ( *(_QWORD *)(v14 + 3) )
            break;
          if ( v10[122]
            || (v17 = (unsigned int)RIMIsRunningOnDesktop(v16, 0xFFFFF78000000004uLL, 1LL, v11) == 0, v18 = 0, v17) )
          {
            v18 = 1;
          }
          v19 = *v14;
          if ( (*v14 & 0x8000) == 0 || (v17 = v18 == 0, v20 = -3, v17) )
            v20 = -2;
          *((_WORD *)v13 - 2) = v20;
          v21 = 0;
          if ( (v19 & 4) != 0 )
          {
            v21 = 32;
          }
          else if ( *((_WORD *)v14 - 2) && (v19 & 8) == 0 )
          {
            v21 = 64;
          }
          *(_WORD *)v13 = v21 | (2 * (v19 & 1)) | (v19 >> 1) & 1;
          if ( (((unsigned __int8)v21 | (unsigned __int8)((2 * (v19 & 1)) | ((v19 & 2) != 0))) & 0x40) != 0 )
            v22 = *((_WORD *)v14 - 2);
          else
            v22 = *((_WORD *)v14 - 1);
          LODWORD(v23) = v14[1];
          *((_WORD *)v13 - 1) = v22;
          *((_WORD *)v13 + 1) = 0;
          if ( !(_DWORD)v23 )
          {
            v10 = Object;
            v23 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          }
          *((_DWORD *)v13 + 1) = v23;
          ++v12;
          v13 += 12;
          v14 += 6;
          if ( v12 >= a3 )
            goto LABEL_34;
        }
        v8 = -1073741811;
      }
LABEL_34:
      if ( v8 >= 0 )
        v8 = RIMIDEInjectKeyboardInput(a1, v26, a3);
    }
    ObfDereferenceObject(v10);
  }
  return v8 >= 0;
}
