/*
 * XREFs of WinSqmAddToStream @ 0x1C00BDA80
 * Callers:
 *     <none>
 * Callees:
 *     WinSqmEventEnabled @ 0x1C0068910 (WinSqmEventEnabled.c)
 *     ?IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z @ 0x1C0068960 (-IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     WinSqmEventWrite @ 0x1C00BE09C (WinSqmEventWrite.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void *__fastcall WinSqmAddToStream(struct _GUID *a1, int a2, unsigned int a3, __int64 a4)
{
  void *result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _GUID *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // r11d
  unsigned int v13; // r8d
  int v14; // r9d
  __int64 v15; // rcx
  ULONGLONG v16; // rdx
  int v17; // ebx
  void *v18; // r10
  const wchar_t *v19; // r9
  __int64 v20; // rax
  unsigned int v21; // eax
  __int64 v22; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData[31]; // [rsp+20h] [rbp-E0h] BYREF
  int v24; // [rsp+258h] [rbp+158h] BYREF
  unsigned int v25; // [rsp+260h] [rbp+160h] BYREF

  v25 = a3;
  v24 = a2;
  result = memset(UserData, 0, sizeof(UserData));
  if ( !a4 )
    result = (void *)MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7);
  if ( a1 != (struct _GUID *)-1LL )
  {
    if ( (unsigned int)IsExtendedWinSqmHandle(a1) )
    {
      v9 = (struct _GUID *)((char *)a1 + 24);
    }
    else
    {
      v9 = (struct _GUID *)&unk_1C017ACE8;
      if ( a1 )
        v9 = a1;
    }
    result = (void *)WinSqmEventEnabled(&SQM_ADD_LEGACYSTREAMROW, v9);
    if ( (_DWORD)result )
    {
      v12 = v25;
      UserData[0].Ptr = (ULONGLONG)v9;
      *(_QWORD *)&UserData[0].Size = 16LL;
      v13 = 0;
      if ( v25 > 9 )
        v12 = 9;
      *(_QWORD *)&UserData[1].Size = 4LL;
      v25 = v12;
      UserData[1].Ptr = (ULONGLONG)&v24;
      UserData[2].Ptr = (ULONGLONG)&unk_1C01A62B4;
      UserData[3].Ptr = (ULONGLONG)&v25;
      *(_QWORD *)&UserData[2].Size = 4LL;
      *(_QWORD *)&UserData[3].Size = 4LL;
      if ( v12 )
      {
        while ( 1 )
        {
          v14 = 3 * v13;
          if ( 3 * v13 + 6 >= 0x1F )
            break;
          v15 = (unsigned int)(v14 + 4);
          v16 = a4 + 16LL * v13;
          UserData[v15].Ptr = v16;
          v17 = *(_DWORD *)v16;
          v18 = (void *)(v16 + 8);
          *(_QWORD *)&UserData[v15].Size = 4LL;
          if ( v17 != 1 )
            v18 = &unk_1C0180D74;
          v11 = (unsigned int)(v14 + 5);
          UserData[v11].Ptr = (ULONGLONG)v18;
          *(_QWORD *)&UserData[v11].Size = 4LL;
          if ( v17 == 2 )
            v19 = *(const wchar_t **)(v16 + 8);
          else
            v19 = L"0";
          v20 = -1LL;
          do
            ++v20;
          while ( v19[v20] );
          v10 = (unsigned int)(2 * v20 + 2);
          v21 = v13 + 2;
          ++v13;
          v22 = 3LL * v21;
          UserData[v22].Ptr = (ULONGLONG)v19;
          UserData[v22].Size = v10;
          *(&UserData[0].Reserved + 1 * v22) = 0;
          if ( v13 >= v12 )
            return (void *)WinSqmEventWrite(&SQM_ADD_LEGACYSTREAMROW, 0x1Fu, UserData);
        }
        return (void *)MicrosoftTelemetryAssertTriggeredNoArgsKM(v11 * 2, v10);
      }
      else
      {
        return (void *)WinSqmEventWrite(&SQM_ADD_LEGACYSTREAMROW, 0x1Fu, UserData);
      }
    }
  }
  return result;
}
