/*
 * XREFs of WinSqmAddToStream @ 0x1C00F4C10
 * Callers:
 *     <none>
 * Callees:
 *     WinSqmEventWrite @ 0x1C0090300 (WinSqmEventWrite.c)
 *     WinSqmEventEnabled @ 0x1C0098620 (WinSqmEventEnabled.c)
 *     ?IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z @ 0x1C0098678 (-IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

unsigned int __fastcall WinSqmAddToStream(struct _GUID *a1, int a2, unsigned int a3, __int64 a4)
{
  unsigned int result; // eax
  struct _GUID *v7; // rdi
  unsigned int v8; // r11d
  unsigned int v9; // r8d
  int v10; // r9d
  __int64 v11; // rcx
  ULONGLONG v12; // rdx
  int v13; // ebx
  void *v14; // r10
  __int64 v15; // rcx
  const wchar_t *v16; // r9
  __int64 v17; // rax
  ULONG v18; // edx
  unsigned int v19; // eax
  __int64 v20; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData[31]; // [rsp+20h] [rbp-E0h] BYREF
  int v22; // [rsp+258h] [rbp+158h] BYREF
  unsigned int v23; // [rsp+260h] [rbp+160h] BYREF

  v23 = a3;
  v22 = a2;
  result = (unsigned int)memset(UserData, 0, sizeof(UserData));
  if ( !a4 )
    result = MicrosoftTelemetryAssertTriggeredMsgKM("Invalid Stream entries");
  if ( a1 != (struct _GUID *)-1LL )
  {
    if ( (unsigned int)IsExtendedWinSqmHandle(a1) )
    {
      v7 = (struct _GUID *)((char *)a1 + 24);
    }
    else
    {
      v7 = (struct _GUID *)&unk_1C0194C08;
      if ( a1 )
        v7 = a1;
    }
    result = WinSqmEventEnabled(&SQM_ADD_LEGACYSTREAMROW, v7);
    if ( result )
    {
      v8 = v23;
      UserData[0].Ptr = (ULONGLONG)v7;
      *(_QWORD *)&UserData[0].Size = 16LL;
      v9 = 0;
      if ( v23 > 9 )
        v8 = 9;
      *(_QWORD *)&UserData[1].Size = 4LL;
      v23 = v8;
      UserData[1].Ptr = (ULONGLONG)&v22;
      UserData[2].Ptr = (ULONGLONG)&unk_1C01D0F44;
      UserData[3].Ptr = (ULONGLONG)&v23;
      *(_QWORD *)&UserData[2].Size = 4LL;
      *(_QWORD *)&UserData[3].Size = 4LL;
      if ( v8 )
      {
        while ( 1 )
        {
          v10 = 3 * v9;
          if ( 3 * v9 + 6 >= 0x1F )
            break;
          v11 = (unsigned int)(v10 + 4);
          v12 = a4 + 16LL * v9;
          UserData[v11].Ptr = v12;
          v13 = *(_DWORD *)v12;
          v14 = (void *)(v12 + 8);
          *(_QWORD *)&UserData[v11].Size = 4LL;
          if ( v13 != 1 )
            v14 = &unk_1C01A5724;
          v15 = (unsigned int)(v10 + 5);
          UserData[v15].Ptr = (ULONGLONG)v14;
          *(_QWORD *)&UserData[v15].Size = 4LL;
          if ( v13 == 2 )
            v16 = *(const wchar_t **)(v12 + 8);
          else
            v16 = L"0";
          v17 = -1LL;
          do
            ++v17;
          while ( v16[v17] );
          v18 = 2 * v17 + 2;
          v19 = v9 + 2;
          ++v9;
          v20 = 3LL * v19;
          UserData[v20].Ptr = (ULONGLONG)v16;
          UserData[v20].Size = v18;
          *(&UserData[0].Reserved + 1 * v20) = 0;
          if ( v9 >= v8 )
            return WinSqmEventWrite(&SQM_ADD_LEGACYSTREAMROW, 0x1Fu, UserData);
        }
        return MicrosoftTelemetryAssertTriggeredMsgKM("Data descriptor out of bounds when building stream entries.");
      }
      else
      {
        return WinSqmEventWrite(&SQM_ADD_LEGACYSTREAMROW, 0x1Fu, UserData);
      }
    }
  }
  return result;
}
