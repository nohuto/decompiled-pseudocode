/*
 * XREFs of RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C00F4600
 * Callers:
 *     NtUserInjectKeyboardInput @ 0x1C00B8190 (NtUserInjectKeyboardInput.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00F1E10 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RIMIDEInjectKeyboardInput @ 0x1C00F481C (RIMIDEInjectKeyboardInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall RIMIDEInjectKeyboardFromKeybdInputStruct(char *a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebx
  unsigned int v9; // r11d
  int *v10; // rdx
  _BYTE *v11; // r9
  int v12; // eax
  unsigned __int64 v13; // r8
  unsigned int v14; // ecx
  __int16 v15; // ax
  __int16 v16; // r10
  __int16 v17; // ax
  PVOID Object; // [rsp+20h] [rbp-D8h] BYREF
  _BYTE v20[128]; // [rsp+30h] [rbp-C8h] BYREF

  memset(v20, 0, 0x78uLL);
  Object = 0LL;
  v8 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  if ( a3 > 0xA )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
  if ( v8 >= 0 && *((_BYTE *)Object + 128) == 1 )
  {
    v9 = 0;
    if ( a3 )
    {
      v10 = (int *)(a2 + 4);
      v11 = &v20[4];
      while ( 1 )
      {
        v12 = *v10;
        if ( (*v10 & 4) != 0 && (*((_WORD *)v10 - 2) || (v12 & 0xFFFF7FF9) != 0) )
          break;
        if ( (v12 & 8) == 0 && *((_WORD *)v10 - 2) > 0xFEu )
          break;
        LODWORD(v13) = v10[1];
        if ( (_DWORD)v13 )
        {
          LODWORD(v13) = v10[1];
          if ( (unsigned int)v13 > (unsigned int)((MEMORY[0xFFFFF78000000320]
                                                 * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) )
            break;
        }
        if ( *(_QWORD *)(v10 + 3) )
          break;
        v14 = *v10;
        if ( (*v10 & 0x8000) == 0 || (v15 = -3, !*((_DWORD *)Object + 120)) )
          v15 = -2;
        *((_WORD *)v11 - 2) = v15;
        v16 = 0;
        if ( (v14 & 4) != 0 )
        {
          v16 = 32;
        }
        else if ( *((_WORD *)v10 - 2) && (v14 & 8) == 0 )
        {
          v16 = 64;
        }
        *(_WORD *)v11 = v16 | (2 * (v14 & 1)) | (v14 >> 1) & 1;
        if ( (((unsigned __int8)v16 | (unsigned __int8)((2 * (v14 & 1)) | ((v14 & 2) != 0))) & 0x40) != 0 )
          v17 = *((_WORD *)v10 - 2);
        else
          v17 = *((_WORD *)v10 - 1);
        *((_WORD *)v11 - 1) = v17;
        *((_WORD *)v11 + 1) = 0;
        if ( !(_DWORD)v13 )
          v13 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        *((_DWORD *)v11 + 1) = v13;
        ++v9;
        v11 += 12;
        v10 += 6;
        if ( v9 >= a3 )
          goto LABEL_31;
      }
      v8 = -1073741811;
    }
LABEL_31:
    if ( v8 >= 0 )
      v8 = RIMIDEInjectKeyboardInput(a1, v20, a3);
    ObfDereferenceObject(Object);
  }
  return v8 >= 0;
}
