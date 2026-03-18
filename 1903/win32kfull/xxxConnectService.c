/*
 * XREFs of xxxConnectService @ 0x1C00DC654
 * Callers:
 *     xxxResolveDesktop @ 0x1C00DD9A0 (xxxResolveDesktop.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     WPP_RECORDER_SF_ @ 0x1C0026C14 (WPP_RECORDER_SF_.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxCreateDesktopEx @ 0x1C00DE64C (xxxCreateDesktopEx.c)
 *     xxxCreateWindowStation @ 0x1C00DFC88 (xxxCreateWindowStation.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall xxxConnectService(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  _QWORD *v4; // rsi
  __int64 v5; // r14
  __int64 SecurityDescriptor; // r15
  NTSTATUS WindowStation; // ebx
  __int64 v8; // r12
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // r9
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  HANDLE v20; // r13
  __int64 ThreadWin32Thread; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  HANDLE TokenHandle; // [rsp+50h] [rbp-F8h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-F0h] BYREF
  _OWORD v32[3]; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v33; // [rsp+90h] [rbp-B8h]
  _QWORD *v34; // [rsp+98h] [rbp-B0h]
  __int64 v35; // [rsp+A0h] [rbp-A8h]
  struct _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-A0h] BYREF
  _QWORD v37[3]; // [rsp+B8h] [rbp-90h] BYREF
  _QWORD v38[3]; // [rsp+D0h] [rbp-78h] BYREF
  _QWORD v39[12]; // [rsp+E8h] [rbp-60h] BYREF
  ULONG TokenInformationLength; // [rsp+168h] [rbp+20h] BYREF

  memset(v32, 0, sizeof(v32));
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(v37, 0, sizeof(v37));
  memset(v38, 0, sizeof(v38));
  memset(v39, 0, 24);
  result = OpenEffectiveToken(&TokenHandle);
  if ( (int)result < 0 )
    return result;
  v4 = 0LL;
  v5 = 0LL;
  SecurityDescriptor = 0LL;
  Handle = 0LL;
  WindowStation = ZwQueryInformationToken(TokenHandle, TokenUser, 0LL, 0, &TokenInformationLength);
  if ( (int)(WindowStation + 0x80000000) >= 0 && WindowStation != -1073741789 )
  {
    ZwClose(TokenHandle);
    goto LABEL_19;
  }
  v4 = (_QWORD *)Win32AllocPool(TokenInformationLength, 1869902677LL);
  v34 = v4;
  if ( !v4 )
  {
    ZwClose(TokenHandle);
LABEL_30:
    WindowStation = -1073741801;
    goto LABEL_19;
  }
  WindowStation = ZwQueryInformationToken(TokenHandle, TokenUser, v4, TokenInformationLength, &TokenInformationLength);
  ZwClose(TokenHandle);
  if ( WindowStation >= 0 )
  {
    v8 = *v4;
    v5 = AllocAce(0LL, 0LL, 0LL, 983150LL, *v4, &TokenInformationLength);
    if ( v5 )
    {
      LOBYTE(v9) = 13;
      v10 = AllocAce(v5, 0LL, v9, 983247LL, v8, &TokenInformationLength);
      if ( v10 )
      {
        v5 = v10;
        v11 = AllocAce(v10, 0LL, 0LL, 256LL, SeExports->SeAliasAdminsSid, &TokenInformationLength);
        if ( v11 )
        {
          v5 = v11;
          LOBYTE(v12) = 13;
          v13 = AllocAce(v11, 0LL, v12, 193LL, SeExports->SeAliasAdminsSid, &TokenInformationLength);
          if ( v13 )
          {
            v5 = v13;
            v33 = v13;
            SecurityDescriptor = CreateSecurityDescriptor(v13, TokenInformationLength, 0LL);
            v35 = SecurityDescriptor;
            if ( SecurityDescriptor )
            {
              PushW32ThreadLock((__int64)v4, v39, (__int64)Win32FreePool, v14);
              PushW32ThreadLock(v5, v38, (__int64)Win32FreePool, v15);
              PushW32ThreadLock(SecurityDescriptor, v37, (__int64)Win32FreePool, v16);
              LODWORD(v32[0]) = 48;
              *((_QWORD *)&v32[0] + 1) = 0LL;
              DWORD2(v32[1]) = 128;
              *(_QWORD *)&v32[1] = a1;
              v32[2] = (unsigned __int64)SecurityDescriptor;
              WindowStation = xxxCreateWindowStation(
                                (unsigned int)v32,
                                0,
                                0x2000000,
                                0,
                                0,
                                0,
                                0LL,
                                0LL,
                                0,
                                (__int64)&Handle);
              v20 = Handle;
              if ( WindowStation < 0 )
              {
                *a2 = 0LL;
              }
              else
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v17) = 4;
                  WPP_RECORDER_SF_(
                    (unsigned int)&WPP_RECORDER_INITIALIZED,
                    v17,
                    3,
                    10,
                    (__int64)&WPP_cd7d0ce4bb433a49570c0819cd674cac_Traceguids);
                }
                RtlInitUnicodeString(&DestinationString, L"Default");
                LODWORD(v32[0]) = 48;
                *((_QWORD *)&v32[0] + 1) = v20;
                DWORD2(v32[1]) = 192;
                *(_QWORD *)&v32[1] = &DestinationString;
                v32[2] = 0LL;
                WindowStation = xxxCreateDesktopEx((unsigned int)v32, 0, 0x2000000, 0, (__int64)a2, 1);
                if ( WindowStation < 0 )
                {
                  ObCloseHandle(v20, 1);
                }
                else
                {
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v17) = 4;
                    WPP_RECORDER_SF_(
                      (unsigned int)&WPP_RECORDER_INITIALIZED,
                      v17,
                      3,
                      11,
                      (__int64)&WPP_cd7d0ce4bb433a49570c0819cd674cac_Traceguids);
                  }
                  *a3 = v20;
                }
              }
              ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v18, v19);
              *(_QWORD *)(ThreadWin32Thread + 16) = v37[0];
              v25 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v23, v24);
              *(_QWORD *)(v25 + 16) = v38[0];
              v29 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26, v27, v28);
              *(_QWORD *)(v29 + 16) = v39[0];
              goto LABEL_19;
            }
          }
        }
      }
    }
    goto LABEL_30;
  }
LABEL_19:
  if ( v4 )
    Win32FreePool(v4);
  if ( v5 )
    Win32FreePool(v5);
  if ( SecurityDescriptor )
    Win32FreePool(SecurityDescriptor);
  return (unsigned int)WindowStation;
}
