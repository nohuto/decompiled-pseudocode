/*
 * XREFs of OpenCacheKeyEx @ 0x1C003C8E0
 * Callers:
 *     FastGetProfileDwordEx @ 0x1C003C690 (FastGetProfileDwordEx.c)
 *     FastGetProfileStringW @ 0x1C003C7A0 (FastGetProfileStringW.c)
 *     CheckDesktopPolicy @ 0x1C0067E40 (CheckDesktopPolicy.c)
 *     CheckDesktopPolicyChange @ 0x1C00A7E10 (CheckDesktopPolicyChange.c)
 *     FastGetProfileKeysW @ 0x1C00A8220 (FastGetProfileKeysW.c)
 *     FastGetProfileValue @ 0x1C00A84E0 (FastGetProfileValue.c)
 *     FastWriteProfileStringW @ 0x1C00A8740 (FastWriteProfileStringW.c)
 *     FastWriteProfileValue @ 0x1C00A87F0 (FastWriteProfileValue.c)
 *     InitializeWin32KSyscallFilter @ 0x1C00AA1B0 (InitializeWin32KSyscallFilter.c)
 *     W32kEtwEnableCallback @ 0x1C00B04E8 (W32kEtwEnableCallback.c)
 *     ?InitUIPI@@YAXXZ @ 0x1C00B1C50 (-InitUIPI@@YAXXZ.c)
 *     ?IsDesktopHeapLoggingOn@@YAHXZ @ 0x1C00B1E28 (-IsDesktopHeapLoggingOn@@YAHXZ.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C00B23A4 (-UserInitialize@@YAJXZ.c)
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C010BC40 (xxxUpdatePerUserAccessPackSettings.c)
 *     InitScancodeMap @ 0x1C012F7F0 (InitScancodeMap.c)
 *     InitCreateUserSubsystem @ 0x1C01F2710 (InitCreateUserSubsystem.c)
 *     Win32UserInitialize @ 0x1C01F2A58 (Win32UserInitialize.c)
 * Callees:
 *     ?InitPreviousUserString@@YAXXZ @ 0x1C003CB38 (-InitPreviousUserString@@YAXXZ.c)
 *     AccessCheckObject @ 0x1C0068590 (AccessCheckObject.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     RtlStringCchPrintfW @ 0x1C00A0A6C (RtlStringCchPrintfW.c)
 */

void *__fastcall OpenCacheKeyEx(const UNICODE_STRING *a1, unsigned int a2, ACCESS_MASK a3, int *a4)
{
  __int64 v4; // rdi
  __int64 v5; // r12
  const UNICODE_STRING *v8; // rbx
  PVOID v9; // r15
  int v10; // r14d
  const UNICODE_STRING *v11; // rdx
  int v12; // eax
  NTSTATUS v13; // eax
  int v14; // ebx
  NTSTATUS v16; // eax
  __int64 v17; // r8
  PVOID v18; // r15
  struct _UNICODE_STRING Destination; // [rsp+30h] [rbp-D0h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  __int64 CurrentProcess; // [rsp+48h] [rbp-B8h]
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  const UNICODE_STRING *v23; // [rsp+58h] [rbp-A8h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t pszDest[32]; // [rsp+90h] [rbp-70h] BYREF
  char v26; // [rsp+D0h] [rbp-30h] BYREF

  v4 = 0LL;
  v5 = a2;
  KeyHandle = 0LL;
  v23 = a1;
  v8 = a1;
  CurrentProcess = PsGetCurrentProcess();
  v9 = (PVOID)CurrentProcess;
  if ( a3 == 131097 && ((_DWORD)v5 == 4 || (_DWORD)v5 == 23) )
  {
    v10 = *a4;
    while ( 1 )
    {
LABEL_7:
      *(_DWORD *)&Destination.Length = 0x2000000;
      Destination.Buffer = (PWSTR)&v26;
      if ( (v10 & 4) != 0 )
      {
        RtlAppendUnicodeToString(&Destination, L"\\Registry\\Machine\\");
        RtlAppendUnicodeToString(&Destination, L"Software\\Policies\\Microsoft\\Windows\\");
        v12 = -5;
      }
      else
      {
        if ( *off_1C0172A60[dword_1C01726D0[4 * v5]] == 77 )
        {
          RtlAppendUnicodeToString(&Destination, L"\\Registry\\Machine\\");
        }
        else
        {
          if ( v8 )
          {
            v11 = v8;
          }
          else
          {
            InitPreviousUserString();
            v11 = &PreviousUserString;
          }
          RtlAppendUnicodeStringToString(&Destination, v11);
        }
        if ( (v10 & 2) != 0 )
        {
          RtlAppendUnicodeToString(&Destination, L"Software\\Policies\\Microsoft\\Windows\\");
          v12 = -3;
        }
        else if ( (v10 & 8) != 0 )
        {
          RtlAppendUnicodeToString(&Destination, L"Remote\\");
          RtlStringCchPrintfW(pszDest, 0x20uLL, L"%ld\\", gSessionId);
          RtlAppendUnicodeToString(&Destination, pszDest);
          v12 = -9;
        }
        else
        {
          if ( a4 && (*a4 & 0x10) != 0 )
            goto LABEL_30;
          v12 = -2;
        }
      }
      v10 &= v12;
      RtlAppendUnicodeToString(&Destination, off_1C0172A60[dword_1C01726D0[4 * v5]] + 1);
      RtlAppendUnicodeToString(&Destination, (&off_1C01726D8)[2 * v5]);
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &Destination;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v13 = ZwOpenKey(&KeyHandle, a3, &ObjectAttributes);
      v14 = v13;
      if ( a3 != 131097 && v9 != gpepCSRSS && v9 != (PVOID)gpepInit )
      {
        if ( v13 < 0 )
          goto LABEL_19;
        v16 = ObReferenceObjectByHandle(KeyHandle, a3, 0LL, 0, &Object, 0LL);
        v18 = Object;
        if ( v16 < 0 )
        {
          ZwClose(KeyHandle);
          v14 = -1073741790;
        }
        else
        {
          LOBYTE(v17) = 1;
          if ( !(unsigned int)AccessCheckObject(Object, a3, v17, &KeyMapping) )
          {
            ZwClose(KeyHandle);
            v14 = -1073741790;
          }
          ObfDereferenceObject(v18);
        }
        v9 = (PVOID)CurrentProcess;
      }
      if ( v14 >= 0 )
        goto LABEL_21;
LABEL_19:
      if ( !v10 )
      {
LABEL_21:
        if ( a4 )
          *a4 = v10;
        if ( v14 >= 0 )
          return KeyHandle;
        return (void *)v4;
      }
      v8 = v23;
    }
  }
  if ( !a4 || (*a4 & 0x10) == 0 )
  {
    v10 = 1;
    goto LABEL_7;
  }
LABEL_30:
  *a4 = 0;
  return 0LL;
}
