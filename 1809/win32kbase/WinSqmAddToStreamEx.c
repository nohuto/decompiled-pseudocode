/*
 * XREFs of WinSqmAddToStreamEx @ 0x1C00F4E10
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchCopyW @ 0x1C0013C98 (RtlStringCchCopyW.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     WinSqmEventWrite @ 0x1C0090300 (WinSqmEventWrite.c)
 *     WinSqmEventEnabled @ 0x1C0098620 (WinSqmEventEnabled.c)
 *     ?IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z @ 0x1C0098678 (-IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

void __fastcall WinSqmAddToStreamEx(struct _GUID *a1, int a2, unsigned int a3, __int64 a4, char a5)
{
  struct _GUID *v7; // rdi
  unsigned int v8; // r9d
  unsigned int v9; // r10d
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rax
  ULONGLONG v14; // rbx
  __int64 v15; // rdi
  unsigned int v16; // r13d
  unsigned int v17; // r12d
  ULONG v18; // ecx
  __int64 v19; // r15
  ULONG v20; // ecx
  ULONGLONG v21; // rdx
  NTSTATUS v22; // eax
  ULONG v23; // ecx
  ULONG v24; // [rsp+20h] [rbp-81h] BYREF
  ULONGLONG v25; // [rsp+28h] [rbp-79h]
  struct _EVENT_DATA_DESCRIPTOR UserData[7]; // [rsp+30h] [rbp-71h] BYREF
  int v27; // [rsp+108h] [rbp+67h] BYREF
  unsigned int v28; // [rsp+110h] [rbp+6Fh] BYREF

  v28 = a3;
  v27 = a2;
  memset(UserData, 0, sizeof(UserData));
  v24 = 0;
  if ( !a4 )
    MicrosoftTelemetryAssertTriggeredMsgKM("Invalid Stream entries");
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
    if ( (unsigned int)WinSqmEventEnabled(&SQM_ADD_STREAMROW, v7) )
    {
      v8 = v28;
      v9 = 0;
      if ( v28 > 0x40 )
        v8 = 64;
      v28 = v8;
      if ( v8 )
      {
        LODWORD(v10) = v24;
        do
        {
          switch ( *(_DWORD *)(a4 + 16LL * v9 + 4) )
          {
            case 1:
              v11 = 19;
              break;
            case 2:
              v12 = -1LL;
              do
                ++v12;
              while ( *(_WORD *)(*(_QWORD *)(a4 + 16LL * v9 + 8) + 2 * v12) );
              if ( (unsigned int)v12 > 0x80 )
                LODWORD(v12) = 128;
              v11 = 2 * v12 + 17;
              break;
            case 3:
              v11 = 23;
              break;
            default:
              return;
          }
          ++v9;
          v10 = (v11 & 0xFFFFFFF8) + (unsigned int)v10;
          v24 = v10;
        }
        while ( v9 < v8 );
      }
      else
      {
        v10 = v24;
      }
      if ( (unsigned int)v10 <= 0x4400
        || (MicrosoftTelemetryAssertTriggeredMsgKM("StreamEntries data exceeds max size"), v10 = v24, v24 <= 0x4400) )
      {
        v13 = Win32AllocPool(v10, 0x6D715355u);
        v14 = v13;
        if ( v13 )
        {
          UserData[0].Ptr = (ULONGLONG)v7;
          v15 = v13;
          UserData[1].Ptr = (ULONGLONG)&v27;
          *(_QWORD *)&UserData[0].Size = 16LL;
          v16 = 0;
          UserData[2].Ptr = (ULONGLONG)&unk_1C01D0F44;
          *(_QWORD *)&UserData[1].Size = 4LL;
          UserData[3].Ptr = (ULONGLONG)&v28;
          UserData[4].Ptr = (ULONGLONG)&v24;
          *(_QWORD *)&UserData[2].Size = 4LL;
          *(_QWORD *)&UserData[3].Size = 4LL;
          for ( *(_QWORD *)&UserData[4].Size = 4LL; v16 < v28; v15 += v17 )
          {
            *(_DWORD *)v15 = *(_DWORD *)(a4 + 16LL * v16 + 4);
            switch ( *(_DWORD *)(a4 + 16LL * v16 + 4) )
            {
              case 1:
                v23 = v24;
                v17 = 16;
                if ( v15 + 16 > v14 + v24 )
                {
                  MicrosoftTelemetryAssertTriggeredMsgKM("Data inconsistency when writing DWORD stream entry");
                  v23 = v24;
                }
                if ( v15 + 16 > v14 + v23 )
                  goto LABEL_53;
                *(_DWORD *)(v15 + 8) = *(_DWORD *)(a4 + 16LL * v16 + 8);
                break;
              case 2:
                v19 = -1LL;
                do
                  ++v19;
                while ( *(_WORD *)(*(_QWORD *)(a4 + 16LL * v16 + 8) + 2 * v19) );
                v20 = v24;
                if ( (unsigned int)v19 > 0x80 )
                  LODWORD(v19) = 128;
                v17 = (2 * v19 + 17) & 0xFFFFFFF8;
                v21 = v15 + v17;
                v25 = v21;
                if ( v21 > v14 + v24 )
                {
                  MicrosoftTelemetryAssertTriggeredMsgKM("Data inconsistency when writing String stream entry");
                  v20 = v24;
                  v21 = v25;
                }
                if ( v21 > v14 + v20 )
                  goto LABEL_53;
                v22 = RtlStringCchCopyW(
                        (NTSTRSAFE_PWSTR)(v15 + 8),
                        (unsigned int)(v19 + 1),
                        *(NTSTRSAFE_PCWSTR *)(a4 + 16LL * v16 + 8));
                if ( (int)(v22 + 0x80000000) >= 0 && v22 != -2147483643 )
                  goto LABEL_53;
                break;
              case 3:
                v17 = 16;
                v18 = v24;
                if ( v15 + 16 > v14 + v24 )
                {
                  MicrosoftTelemetryAssertTriggeredMsgKM("Data inconsistency when writing DWORD64 stream entry");
                  v18 = v24;
                }
                if ( v15 + 16 > v14 + v18 )
                  goto LABEL_53;
                *(_QWORD *)(v15 + 8) = *(_QWORD *)(a4 + 16LL * v16 + 8);
                break;
              default:
                goto LABEL_53;
            }
            *(_DWORD *)(v15 + 4) = v17;
            ++v16;
          }
          UserData[5].Size = v24;
          UserData[5].Ptr = v14;
          UserData[6].Ptr = (ULONGLONG)&a5;
          UserData[5].Reserved = 0;
          *(_QWORD *)&UserData[6].Size = 4LL;
          WinSqmEventWrite(&SQM_ADD_STREAMROW, 7u, UserData);
LABEL_53:
          Win32FreePool(v14);
        }
      }
    }
  }
}
