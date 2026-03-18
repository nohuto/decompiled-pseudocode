/*
 * XREFs of xxxConnectService @ 0x1C022BD68
 * Callers:
 *     xxxResolveDesktop @ 0x1C00EF100 (xxxResolveDesktop.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     xxxCreateWindowStation @ 0x1C00EC474 (xxxCreateWindowStation.c)
 *     xxxCreateDesktopEx @ 0x1C00EFCF4 (xxxCreateDesktopEx.c)
 */

__int64 __fastcall xxxConnectService(struct _UNICODE_STRING *a1, HANDLE *a2, _QWORD *a3)
{
  __int64 result; // rax
  _QWORD *v4; // rsi
  __int64 v5; // r14
  __int64 SecurityDescriptor; // r15
  int Desktop; // ebx
  __int64 v8; // r13
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rdx
  HANDLE v15; // r12
  __int64 ThreadWin32Thread; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  HANDLE TokenHandle; // [rsp+50h] [rbp-F8h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-F0h] BYREF
  int v23; // [rsp+60h] [rbp-E8h] BYREF
  HANDLE v24; // [rsp+68h] [rbp-E0h]
  struct _UNICODE_STRING *p_DestinationString; // [rsp+70h] [rbp-D8h]
  int v26; // [rsp+78h] [rbp-D0h]
  __int128 v27; // [rsp+80h] [rbp-C8h]
  __int64 v28; // [rsp+90h] [rbp-B8h]
  _QWORD *v29; // [rsp+98h] [rbp-B0h]
  __int64 v30; // [rsp+A0h] [rbp-A8h]
  struct _UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-98h] BYREF
  _QWORD v32[3]; // [rsp+C0h] [rbp-88h] BYREF
  _QWORD v33[3]; // [rsp+D8h] [rbp-70h] BYREF
  _QWORD v34[11]; // [rsp+F0h] [rbp-58h] BYREF
  ULONG TokenInformationLength; // [rsp+168h] [rbp+20h] BYREF

  result = OpenEffectiveToken(&TokenHandle);
  if ( (int)result < 0 )
    return result;
  v4 = 0LL;
  v5 = 0LL;
  SecurityDescriptor = 0LL;
  Handle = 0LL;
  Desktop = ZwQueryInformationToken(TokenHandle, TokenUser, 0LL, 0, &TokenInformationLength);
  if ( (int)(Desktop + 0x80000000) < 0 || Desktop == -1073741789 )
  {
    v4 = (_QWORD *)Win32AllocPool(TokenInformationLength, 1869902677LL);
    v29 = v4;
    if ( v4 )
    {
      Desktop = ZwQueryInformationToken(TokenHandle, TokenUser, v4, TokenInformationLength, &TokenInformationLength);
      ZwClose(TokenHandle);
      if ( Desktop < 0 )
        goto LABEL_21;
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
              v28 = v13;
              SecurityDescriptor = CreateSecurityDescriptor(v13, TokenInformationLength, 0LL);
              v30 = SecurityDescriptor;
              if ( SecurityDescriptor )
              {
                PushW32ThreadLock((__int64)v4, v34, (__int64)Win32FreePool);
                PushW32ThreadLock(v5, v33, (__int64)Win32FreePool);
                PushW32ThreadLock(SecurityDescriptor, v32, (__int64)Win32FreePool);
                v23 = 48;
                v24 = 0LL;
                v26 = 128;
                p_DestinationString = a1;
                v27 = (unsigned __int64)SecurityDescriptor;
                Desktop = xxxCreateWindowStation((__int64)&v23, 0, 0x2000000u, 0LL, 0, 0, 0LL, 0LL, 0, &Handle);
                v15 = Handle;
                if ( Desktop < 0 )
                {
                  *a2 = 0LL;
                }
                else
                {
                  RtlInitUnicodeString(&DestinationString, L"Default");
                  v23 = 48;
                  v24 = v15;
                  v26 = 192;
                  p_DestinationString = &DestinationString;
                  v27 = 0LL;
                  Desktop = xxxCreateDesktopEx((__int64)&v23, 0, 0x2000000LL, 0, a2, 1);
                  if ( Desktop >= 0 )
                    *a3 = v15;
                  else
                    ObCloseHandle(v15, 1);
                }
                ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14);
                *(_QWORD *)(ThreadWin32Thread + 16) = v32[0];
                v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17);
                *(_QWORD *)(v18 + 16) = v33[0];
                v20 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19);
                *(_QWORD *)(v20 + 16) = v34[0];
                goto LABEL_21;
              }
            }
          }
        }
      }
    }
    else
    {
      ZwClose(TokenHandle);
    }
    Desktop = -1073741801;
  }
  else
  {
    ZwClose(TokenHandle);
  }
LABEL_21:
  if ( v4 )
    Win32FreePool(v4);
  if ( v5 )
    Win32FreePool(v5);
  if ( SecurityDescriptor )
    Win32FreePool(SecurityDescriptor);
  return (unsigned int)Desktop;
}
