/*
 * XREFs of WinSqmAddToStreamEx @ 0x1C0120D10
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C0014930 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C003DFE4 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     WinSqmEventEnabled @ 0x1C0061FB4 (WinSqmEventEnabled.c)
 *     ?IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z @ 0x1C006200C (-IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z.c)
 *     WinSqmEventWrite @ 0x1C00A4150 (WinSqmEventWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall WinSqmAddToStreamEx(struct _GUID *a1, int a2, unsigned int a3, __int64 a4, char a5)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct _GUID *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned int v13; // r9d
  unsigned int v14; // r10d
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  ULONGLONG v21; // rbx
  __int64 v22; // rdi
  unsigned int v23; // r13d
  unsigned int v24; // r12d
  ULONG v25; // ecx
  __int64 v26; // r15
  ULONG v27; // ecx
  ULONGLONG v28; // rdx
  int v29; // eax
  ULONG v30; // ecx
  ULONG v31; // [rsp+20h] [rbp-81h] BYREF
  ULONGLONG v32; // [rsp+28h] [rbp-79h]
  struct _EVENT_DATA_DESCRIPTOR UserData[7]; // [rsp+30h] [rbp-71h] BYREF
  int v34; // [rsp+108h] [rbp+67h] BYREF
  unsigned int v35; // [rsp+110h] [rbp+6Fh] BYREF

  v35 = a3;
  v34 = a2;
  memset(UserData, 0, sizeof(UserData));
  v31 = 0;
  if ( !a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
  if ( a1 != (struct _GUID *)-1LL )
  {
    if ( (unsigned int)IsExtendedWinSqmHandle(a1) )
    {
      v10 = (struct _GUID *)((char *)a1 + 24);
    }
    else
    {
      v10 = (struct _GUID *)&unk_1C01D98B0;
      if ( a1 )
        v10 = a1;
    }
    if ( (unsigned int)WinSqmEventEnabled(&SQM_ADD_STREAMROW, v10) )
    {
      v13 = v35;
      v14 = 0;
      if ( v35 > 0x40 )
        v13 = 64;
      v35 = v13;
      if ( v13 )
      {
        LODWORD(v15) = v31;
        do
        {
          v12 = 2LL * v14;
          v11 = (unsigned int)(*(_DWORD *)(a4 + 16LL * v14 + 4) - 1);
          if ( *(_DWORD *)(a4 + 16LL * v14 + 4) == 1 )
          {
            v16 = 19;
          }
          else
          {
            v11 = (unsigned int)(*(_DWORD *)(a4 + 16LL * v14 + 4) - 2);
            if ( *(_DWORD *)(a4 + 16LL * v14 + 4) == 2 )
            {
              v11 = *(_QWORD *)(a4 + 16LL * v14 + 8);
              v17 = -1LL;
              do
                ++v17;
              while ( *(_WORD *)(v11 + 2 * v17) );
              if ( (unsigned int)v17 > 0x80 )
                LODWORD(v17) = 128;
              v16 = 2 * v17 + 17;
            }
            else
            {
              if ( *(_DWORD *)(a4 + 16LL * v14 + 4) != 3 )
                return;
              v16 = 23;
            }
          }
          ++v14;
          v15 = (v16 & 0xFFFFFFF8) + (unsigned int)v15;
          v31 = v15;
        }
        while ( v14 < v13 );
      }
      else
      {
        v15 = v31;
      }
      if ( (unsigned int)v15 <= 0x4400
        || (MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v11, v12), v15 = v31, v31 <= 0x4400) )
      {
        v18 = Win32AllocPool(v15, 0x6D715355u);
        v21 = v18;
        if ( v18 )
        {
          UserData[0].Ptr = (ULONGLONG)v10;
          v22 = v18;
          UserData[1].Ptr = (ULONGLONG)&v34;
          *(_QWORD *)&UserData[0].Size = 16LL;
          v23 = 0;
          UserData[2].Ptr = (ULONGLONG)&unk_1C0218554;
          *(_QWORD *)&UserData[1].Size = 4LL;
          UserData[3].Ptr = (ULONGLONG)&v35;
          UserData[4].Ptr = (ULONGLONG)&v31;
          *(_QWORD *)&UserData[2].Size = 4LL;
          *(_QWORD *)&UserData[3].Size = 4LL;
          for ( *(_QWORD *)&UserData[4].Size = 4LL; v23 < v35; v22 += v24 )
          {
            *(_DWORD *)v22 = *(_DWORD *)(a4 + 16LL * v23 + 4);
            switch ( *(_DWORD *)(a4 + 16LL * v23 + 4) )
            {
              case 1:
                v30 = v31;
                v24 = 16;
                if ( v22 + 16 > v21 + v31 )
                {
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v19, v20);
                  v30 = v31;
                }
                if ( v22 + 16 > v21 + v30 )
                  goto LABEL_53;
                *(_DWORD *)(v22 + 8) = *(_DWORD *)(a4 + 16LL * v23 + 8);
                break;
              case 2:
                v26 = -1LL;
                do
                  ++v26;
                while ( *(_WORD *)(*(_QWORD *)(a4 + 16LL * v23 + 8) + 2 * v26) );
                v27 = v31;
                if ( (unsigned int)v26 > 0x80 )
                  LODWORD(v26) = 128;
                v24 = (2 * v26 + 17) & 0xFFFFFFF8;
                v28 = v22 + v24;
                v32 = v28;
                if ( v28 > v21 + v31 )
                {
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v28, v20);
                  v27 = v31;
                  v28 = v32;
                }
                if ( v28 > v21 + v27 )
                  goto LABEL_53;
                v29 = RtlStringCchCopyW(
                        (unsigned __int16 *)(v22 + 8),
                        (unsigned int)(v26 + 1),
                        *(size_t **)(a4 + 16LL * v23 + 8));
                v19 = 0x80000000LL;
                if ( (int)(v29 + 0x80000000) >= 0 && v29 != -2147483643 )
                  goto LABEL_53;
                break;
              case 3:
                v24 = 16;
                v25 = v31;
                if ( v22 + 16 > v21 + v31 )
                {
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v19, v20);
                  v25 = v31;
                }
                if ( v22 + 16 > v21 + v25 )
                  goto LABEL_53;
                *(_QWORD *)(v22 + 8) = *(_QWORD *)(a4 + 16LL * v23 + 8);
                break;
              default:
                goto LABEL_53;
            }
            *(_DWORD *)(v22 + 4) = v24;
            ++v23;
          }
          UserData[5].Size = v31;
          UserData[5].Ptr = v21;
          UserData[6].Ptr = (ULONGLONG)&a5;
          UserData[5].Reserved = 0;
          *(_QWORD *)&UserData[6].Size = 4LL;
          WinSqmEventWrite(&SQM_ADD_STREAMROW, 7u, UserData);
LABEL_53:
          Win32FreePool(v21);
        }
      }
    }
  }
}
