/*
 * XREFs of RIMIDEInjectMouseFromMouseInputStruct @ 0x1C00F4980
 * Callers:
 *     NtUserInjectMouseInput @ 0x1C00B8340 (NtUserInjectMouseInput.c)
 * Callees:
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00F1E10 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RIMIDEBuildButtonFlagsFromRawButtonsAndMouseInputStruct @ 0x1C00F2908 (RIMIDEBuildButtonFlagsFromRawButtonsAndMouseInputStruct.c)
 *     RIMIDEBuildRawButtonsFromMouseInputStruct @ 0x1C00F29C4 (RIMIDEBuildRawButtonsFromMouseInputStruct.c)
 *     RIMIDEInjectMouseInput @ 0x1C00F4BCC (RIMIDEInjectMouseInput.c)
 *     RIMIDEValidateMouseInputStruct @ 0x1C00F51B8 (RIMIDEValidateMouseInputStruct.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall RIMIDEInjectMouseFromMouseInputStruct(char *a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdi
  char *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // esi
  char *v10; // rbp
  unsigned int v11; // r13d
  char *v12; // r14
  __int16 *v13; // r15
  __int64 v14; // xmm1_8
  unsigned int v15; // edi
  int v16; // ebx
  __int16 v17; // dx
  __int16 v18; // cx
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // r8
  __int16 v22; // ax
  unsigned __int64 v23; // rcx
  PVOID Object; // [rsp+20h] [rbp-158h] BYREF
  __int64 v26; // [rsp+28h] [rbp-150h]
  char *v27; // [rsp+30h] [rbp-148h]
  __int64 v28; // [rsp+38h] [rbp-140h]
  _OWORD v29[15]; // [rsp+40h] [rbp-138h] BYREF

  v28 = a2;
  v4 = a2;
  v27 = a1;
  v5 = a1;
  memset(v29, 0, sizeof(v29));
  Object = 0LL;
  if ( a3 > 0xA )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
  v9 = RawInputManagerDeviceObjectResolveHandle(v5, 3u, 1, &Object);
  if ( v9 >= 0 )
  {
    v10 = (char *)Object;
    if ( !*((_BYTE *)Object + 128) )
    {
      if ( (*((_DWORD *)Object + 66) & 0x100) != 0 )
      {
        UserSetLastError(21);
        v9 = -2147483631;
      }
      else
      {
        v11 = 0;
        if ( a3 )
        {
          v12 = (char *)v29 + 2;
          v13 = (__int16 *)(v4 + 8);
          while ( 1 )
          {
            if ( v11 )
            {
              v14 = *((_QWORD *)v29 + 3 * v11 - 1);
              *(_OWORD *)(v10 + 796) = *(_OWORD *)((char *)&v29[-1] + 24 * v11 - 8);
              *(_QWORD *)(v10 + 812) = v14;
            }
            v26 = v4 + 32LL * v11;
            if ( !(unsigned int)RIMIDEValidateMouseInputStruct(v26, v8, 0LL) )
              break;
            v15 = *((_DWORD *)v13 + 1);
            v16 = *((_DWORD *)v10 + 201);
            *((_WORD *)v12 - 1) = -2;
            v17 = (v15 >> 15) & 1 | 8;
            if ( (v15 & 0x2000) == 0 )
              v17 = (v15 >> 15) & 1;
            v18 = v17 | 2;
            if ( (v15 & 0x4000) == 0 )
              v18 = v17;
            v19 = v26;
            *(_WORD *)v12 = v18;
            v20 = RIMIDEBuildRawButtonsFromMouseInputStruct(v16, v19);
            v21 = v26;
            *(_DWORD *)(v12 + 6) = v20;
            *((_WORD *)v12 + 1) = RIMIDEBuildButtonFlagsFromRawButtonsAndMouseInputStruct(v16, v20, v21);
            v22 = 0;
            if ( (v15 & 0x1800) != 0 )
              v22 = *v13;
            LODWORD(v23) = *((_DWORD *)v13 + 2);
            *((_WORD *)v12 + 2) = v22;
            *(_DWORD *)(v12 + 10) = *((_DWORD *)v13 - 2);
            *(_DWORD *)(v12 + 14) = *((_DWORD *)v13 - 1);
            if ( !(_DWORD)v23 )
              v23 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
            v4 = v28;
            ++v11;
            *(_DWORD *)(v12 + 18) = v23;
            v13 += 16;
            v12 += 24;
            if ( v11 >= a3 )
              goto LABEL_23;
          }
          v9 = -1073741811;
LABEL_23:
          v5 = v27;
          v10 = (char *)Object;
        }
        if ( v9 >= 0 )
          v9 = RIMIDEInjectMouseInput(v5, v29, a3);
      }
      ObfDereferenceObject(v10);
    }
  }
  return v9 >= 0;
}
