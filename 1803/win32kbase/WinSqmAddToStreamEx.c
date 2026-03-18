/*
 * XREFs of WinSqmAddToStreamEx @ 0x1C00BDC70
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     WinSqmEventEnabled @ 0x1C0068910 (WinSqmEventEnabled.c)
 *     ?IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z @ 0x1C0068960 (-IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     RtlStringCchCopyW @ 0x1C00A8900 (RtlStringCchCopyW.c)
 *     WinSqmEventWrite @ 0x1C00BE09C (WinSqmEventWrite.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall WinSqmAddToStreamEx(struct _GUID *a1, int a2, unsigned int a3, __int64 a4, char a5)
{
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _GUID *v10; // rdi
  __int64 v11; // rdx
  unsigned int v12; // r9d
  unsigned int v13; // r10d
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // rdi
  unsigned int v20; // r13d
  unsigned int v21; // r12d
  ULONG v22; // ecx
  __int64 v23; // r15
  ULONG v24; // ecx
  unsigned __int64 v25; // rdx
  NTSTATUS v26; // eax
  ULONG v27; // ecx
  ULONG v28; // [rsp+20h] [rbp-81h] BYREF
  unsigned __int64 v29; // [rsp+28h] [rbp-79h]
  struct _EVENT_DATA_DESCRIPTOR UserData[7]; // [rsp+30h] [rbp-71h] BYREF
  int v31; // [rsp+108h] [rbp+67h] BYREF
  unsigned int v32; // [rsp+110h] [rbp+6Fh] BYREF

  v32 = a3;
  v31 = a2;
  result = (__int64)memset(UserData, 0, sizeof(UserData));
  v28 = 0;
  if ( !a4 )
    result = MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8);
  if ( a1 != (struct _GUID *)-1LL )
  {
    if ( (unsigned int)IsExtendedWinSqmHandle(a1) )
    {
      v10 = (struct _GUID *)((char *)a1 + 24);
    }
    else
    {
      v10 = (struct _GUID *)&unk_1C017ACE8;
      if ( a1 )
        v10 = a1;
    }
    result = WinSqmEventEnabled(&SQM_ADD_STREAMROW, v10);
    if ( (_DWORD)result )
    {
      v12 = v32;
      result = 64LL;
      v13 = 0;
      if ( v32 > 0x40 )
        v12 = 64;
      v32 = v12;
      if ( v12 )
      {
        LODWORD(v14) = v28;
        do
        {
          v11 = (unsigned int)(*(_DWORD *)(a4 + 16LL * v13 + 4) - 1);
          if ( *(_DWORD *)(a4 + 16LL * v13 + 4) == 1 )
          {
            v15 = 19;
          }
          else
          {
            v11 = (unsigned int)(*(_DWORD *)(a4 + 16LL * v13 + 4) - 2);
            if ( *(_DWORD *)(a4 + 16LL * v13 + 4) == 2 )
            {
              v11 = *(_QWORD *)(a4 + 16LL * v13 + 8);
              v16 = -1LL;
              do
                ++v16;
              while ( *(_WORD *)(v11 + 2 * v16) );
              if ( (unsigned int)v16 > 0x80 )
                LODWORD(v16) = 128;
              v15 = 2 * v16 + 17;
            }
            else
            {
              if ( *(_DWORD *)(a4 + 16LL * v13 + 4) != 3 )
                return result;
              v15 = 23;
            }
          }
          result = v15 & 0xFFFFFFF8;
          ++v13;
          v14 = (unsigned int)(result + v14);
          v28 = v14;
        }
        while ( v13 < v12 );
      }
      else
      {
        v14 = v28;
      }
      if ( (unsigned int)v14 <= 0x4400
        || (result = MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v11), v14 = v28, v28 <= 0x4400) )
      {
        result = Win32AllocPool(v14, 0x6D715355u);
        v18 = result;
        if ( result )
        {
          UserData[0].Ptr = (ULONGLONG)v10;
          v19 = result;
          UserData[1].Ptr = (ULONGLONG)&v31;
          *(_QWORD *)&UserData[0].Size = 16LL;
          v20 = 0;
          UserData[2].Ptr = (ULONGLONG)&unk_1C01A62B4;
          *(_QWORD *)&UserData[1].Size = 4LL;
          UserData[3].Ptr = (ULONGLONG)&v32;
          UserData[4].Ptr = (ULONGLONG)&v28;
          *(_QWORD *)&UserData[2].Size = 4LL;
          *(_QWORD *)&UserData[3].Size = 4LL;
          for ( *(_QWORD *)&UserData[4].Size = 4LL; v20 < v32; v19 += v21 )
          {
            *(_DWORD *)v19 = *(_DWORD *)(a4 + 16LL * v20 + 4);
            switch ( *(_DWORD *)(a4 + 16LL * v20 + 4) )
            {
              case 1:
                v27 = v28;
                v21 = 16;
                if ( v19 + 16 > v18 + (unsigned __int64)v28 )
                {
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v17);
                  v27 = v28;
                }
                if ( v19 + 16 > v18 + (unsigned __int64)v27 )
                  return Win32FreePool(v18);
                *(_DWORD *)(v19 + 8) = *(_DWORD *)(a4 + 16LL * v20 + 8);
                break;
              case 2:
                v23 = -1LL;
                do
                  ++v23;
                while ( *(_WORD *)(*(_QWORD *)(a4 + 16LL * v20 + 8) + 2 * v23) );
                v24 = v28;
                if ( (unsigned int)v23 > 0x80 )
                  LODWORD(v23) = 128;
                v21 = (2 * v23 + 17) & 0xFFFFFFF8;
                v25 = v19 + v21;
                v29 = v25;
                if ( v25 > v18 + (unsigned __int64)v28 )
                {
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v25);
                  v24 = v28;
                  v25 = v29;
                }
                if ( v25 > v18 + (unsigned __int64)v24 )
                  return Win32FreePool(v18);
                v26 = RtlStringCchCopyW(
                        (NTSTRSAFE_PWSTR)(v19 + 8),
                        (unsigned int)(v23 + 1),
                        *(NTSTRSAFE_PCWSTR *)(a4 + 16LL * v20 + 8));
                v17 = 0x80000000LL;
                if ( (int)(v26 + 0x80000000) >= 0 && v26 != -2147483643 )
                  return Win32FreePool(v18);
                break;
              case 3:
                v21 = 16;
                v22 = v28;
                if ( v19 + 16 > v18 + (unsigned __int64)v28 )
                {
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v17);
                  v22 = v28;
                }
                if ( v19 + 16 > v18 + (unsigned __int64)v22 )
                  return Win32FreePool(v18);
                *(_QWORD *)(v19 + 8) = *(_QWORD *)(a4 + 16LL * v20 + 8);
                break;
              default:
                return Win32FreePool(v18);
            }
            *(_DWORD *)(v19 + 4) = v21;
            ++v20;
          }
          UserData[5].Size = v28;
          UserData[5].Ptr = v18;
          UserData[6].Ptr = (ULONGLONG)&a5;
          UserData[5].Reserved = 0;
          *(_QWORD *)&UserData[6].Size = 4LL;
          WinSqmEventWrite(&SQM_ADD_STREAMROW, 7u, UserData);
          return Win32FreePool(v18);
        }
      }
    }
  }
  return result;
}
