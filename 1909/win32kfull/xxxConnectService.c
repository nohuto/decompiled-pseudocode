/*
 * XREFs of xxxConnectService @ 0x1C007C344
 * Callers:
 *     xxxResolveDesktop @ 0x1C007D690 (xxxResolveDesktop.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D084 (WPP_RECORDER_SF_.c)
 *     xxxCreateDesktopEx @ 0x1C007E33C (xxxCreateDesktopEx.c)
 *     xxxCreateWindowStation @ 0x1C007F978 (xxxCreateWindowStation.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     memset @ 0x1C0168440 (memset.c)
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
  int v14; // edx
  HANDLE v15; // r13
  int v16; // edx
  __int64 ThreadWin32Thread; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  HANDLE TokenHandle; // [rsp+50h] [rbp-F8h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-F0h] BYREF
  _OWORD v22[3]; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v23; // [rsp+90h] [rbp-B8h]
  _QWORD *v24; // [rsp+98h] [rbp-B0h]
  __int64 v25; // [rsp+A0h] [rbp-A8h]
  struct _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-A0h] BYREF
  _QWORD v27[3]; // [rsp+B8h] [rbp-90h] BYREF
  _QWORD v28[3]; // [rsp+D0h] [rbp-78h] BYREF
  _QWORD v29[12]; // [rsp+E8h] [rbp-60h] BYREF
  ULONG TokenInformationLength; // [rsp+168h] [rbp+20h] BYREF

  memset(v22, 0, sizeof(v22));
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(v27, 0, sizeof(v27));
  memset(v28, 0, sizeof(v28));
  memset(v29, 0, 24);
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
  v24 = v4;
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
            v23 = v13;
            SecurityDescriptor = CreateSecurityDescriptor(v13, TokenInformationLength, 0LL);
            v25 = SecurityDescriptor;
            if ( SecurityDescriptor )
            {
              PushW32ThreadLock((__int64)v4, v29, (__int64)Win32FreePool);
              PushW32ThreadLock(v5, v28, (__int64)Win32FreePool);
              PushW32ThreadLock(SecurityDescriptor, v27, (__int64)Win32FreePool);
              LODWORD(v22[0]) = 48;
              *((_QWORD *)&v22[0] + 1) = 0LL;
              DWORD2(v22[1]) = 128;
              *(_QWORD *)&v22[1] = a1;
              v22[2] = (unsigned __int64)SecurityDescriptor;
              WindowStation = xxxCreateWindowStation(
                                (unsigned int)v22,
                                0,
                                0x2000000,
                                0,
                                0,
                                0,
                                0LL,
                                0LL,
                                0,
                                (__int64)&Handle);
              v15 = Handle;
              if ( WindowStation < 0 )
              {
                *a2 = 0LL;
              }
              else
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v14) = 4;
                  WPP_RECORDER_SF_(
                    (unsigned int)&WPP_RECORDER_INITIALIZED,
                    v14,
                    3,
                    10,
                    (__int64)&WPP_cd7d0ce4bb433a49570c0819cd674cac_Traceguids);
                }
                RtlInitUnicodeString(&DestinationString, L"Default");
                LODWORD(v22[0]) = 48;
                *((_QWORD *)&v22[0] + 1) = v15;
                DWORD2(v22[1]) = 192;
                *(_QWORD *)&v22[1] = &DestinationString;
                v22[2] = 0LL;
                WindowStation = xxxCreateDesktopEx((unsigned int)v22, 0, 0x2000000, 0, (__int64)a2, 1);
                if ( WindowStation < 0 )
                {
                  ObCloseHandle(v15, 1);
                }
                else
                {
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v16) = 4;
                    WPP_RECORDER_SF_(
                      (unsigned int)&WPP_RECORDER_INITIALIZED,
                      v16,
                      3,
                      11,
                      (__int64)&WPP_cd7d0ce4bb433a49570c0819cd674cac_Traceguids);
                  }
                  *a3 = v15;
                }
              }
              ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
              *(_QWORD *)(ThreadWin32Thread + 16) = v27[0];
              v18 = W32GetThreadWin32Thread(KeGetCurrentThread());
              *(_QWORD *)(v18 + 16) = v28[0];
              v19 = W32GetThreadWin32Thread(KeGetCurrentThread());
              *(_QWORD *)(v19 + 16) = v29[0];
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
