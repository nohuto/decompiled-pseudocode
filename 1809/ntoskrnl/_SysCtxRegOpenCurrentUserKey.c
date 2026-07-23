/*
 * XREFs of _SysCtxRegOpenCurrentUserKey @ 0x1409011E8
 * Callers:
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x14059C600 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1405C73A4 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1405C8030 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1406EB628 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x1408F76AC (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x1408F7CF4 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x1408F83AC (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x1408F9D10 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x1408FCB04 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x1408FD468 (_CmOpenDevicePanelRegKeyWorker.c)
 * Callees:
 *     RtlEqualSid @ 0x1400A7D30 (RtlEqualSid.c)
 *     RtlSubAuthoritySid @ 0x1400DCB70 (RtlSubAuthoritySid.c)
 *     RtlAppendUnicodeStringToString @ 0x1400F5250 (RtlAppendUnicodeStringToString.c)
 *     RtlUShortAdd @ 0x14011CE8C (RtlUShortAdd.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwQueryInformationToken @ 0x1401B8710 (ZwQueryInformationToken.c)
 *     ZwOpenThreadTokenEx @ 0x1401B88D0 (ZwOpenThreadTokenEx.c)
 *     ZwOpenProcessTokenEx @ 0x1401B88F0 (ZwOpenProcessTokenEx.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _SysCtxRegOpenKey @ 0x1405C8AFC (_SysCtxRegOpenKey.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     RtlInitializeSid @ 0x140656830 (RtlInitializeSid.c)
 *     RtlConvertSidToUnicodeString @ 0x14065B870 (RtlConvertSidToUnicodeString.c)
 *     _SysCtxGetCachedContextBaseKey @ 0x1406BD888 (_SysCtxGetCachedContextBaseKey.c)
 */

__int64 __fastcall SysCtxRegOpenCurrentUserKey(_QWORD *a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  wchar_t *v8; // rdi
  int appended; // ebx
  PSID v10; // rsi
  unsigned __int16 v11; // bx
  wchar_t *PoolWithTag; // rax
  __int64 v13; // rcx
  USHORT pusResult[2]; // [rsp+30h] [rbp-99h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+34h] [rbp-95h] BYREF
  int TokenInformation; // [rsp+3Ch] [rbp-8Dh] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-89h] BYREF
  int v19; // [rsp+48h] [rbp-81h] BYREF
  ULONG ReturnLength; // [rsp+4Ch] [rbp-7Dh] BYREF
  UNICODE_STRING Destination; // [rsp+50h] [rbp-79h] BYREF
  __int64 v22; // [rsp+60h] [rbp-69h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-61h] BYREF
  _BYTE Sid[16]; // [rsp+78h] [rbp-51h] BYREF
  PSID Sid2[11]; // [rsp+88h] [rbp-41h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  Handle = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v22 = 0LL;
  v8 = 0LL;
  appended = ZwOpenThreadTokenEx((HANDLE)0xFFFFFFFFFFFFFFFELL, 8u, 0, 0x200u, &Handle);
  if ( appended == -1073741700 )
    appended = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, 0x200u, &Handle);
  if ( appended >= 0 )
  {
    TokenInformation = 0;
    appended = ZwQueryInformationToken(Handle, TokenType, &TokenInformation, 4u, &ReturnLength);
    if ( appended >= 0 )
    {
      if ( TokenInformation == 2 )
      {
        v19 = 0;
        appended = ZwQueryInformationToken(Handle, TokenImpersonationLevel, &v19, 4u, &ReturnLength);
        if ( appended < 0 )
          goto LABEL_23;
        if ( v19 < 2 )
        {
          appended = -1073741790;
          goto LABEL_23;
        }
      }
      else if ( TokenInformation != 1 )
      {
        goto LABEL_10;
      }
      appended = ZwQueryInformationToken(Handle, TokenUser, Sid2, 0x54u, &ReturnLength);
      if ( appended < 0 )
        goto LABEL_23;
      v10 = Sid2[0];
      appended = RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
      if ( appended < 0 )
        goto LABEL_23;
      *RtlSubAuthoritySid(Sid, 0) = 18;
      if ( !RtlEqualSid(Sid, v10) )
      {
        appended = RtlConvertSidToUnicodeString(&UnicodeString, v10, 1u);
        if ( appended >= 0 )
        {
          appended = RtlUShortAdd(UnicodeString.Length, 0x1Eu, pusResult);
          if ( appended >= 0 )
          {
            appended = RtlUShortAdd(pusResult[0], 2u, pusResult);
            if ( appended >= 0 )
            {
              v11 = pusResult[0];
              PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, pusResult[0], 0x53504E50u);
              v8 = PoolWithTag;
              if ( PoolWithTag )
              {
                Destination.Length = 0;
                Destination.MaximumLength = v11;
                Destination.Buffer = PoolWithTag;
                appended = RtlAppendUnicodeStringToString(&Destination, &stru_140357448);
                if ( appended >= 0 )
                {
                  appended = RtlAppendUnicodeStringToString(&Destination, &UnicodeString);
                  if ( appended >= 0 )
                  {
                    appended = SysCtxGetCachedContextBaseKey(a1, 3, &v22);
                    if ( appended >= 0 )
                      appended = SysCtxRegOpenKey(v13, v22, (__int64)(Destination.Buffer + 15), a2, a3, a4);
                  }
                }
              }
              else
              {
                appended = -1073741801;
              }
            }
          }
        }
        goto LABEL_23;
      }
LABEL_10:
      appended = -1073741637;
    }
  }
LABEL_23:
  if ( Handle )
    ZwClose(Handle);
  RtlFreeAnsiString(&UnicodeString);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)appended;
}
