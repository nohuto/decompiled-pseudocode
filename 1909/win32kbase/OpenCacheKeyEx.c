/*
 * XREFs of OpenCacheKeyEx @ 0x1C0015390
 * Callers:
 *     FastGetProfileStringW @ 0x1C0010150 (FastGetProfileStringW.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C005EBE8 (-UserInitialize@@YAJXZ.c)
 *     InitializeWin32KSyscallFilter @ 0x1C005F260 (InitializeWin32KSyscallFilter.c)
 *     W32kEtwEnableCallback @ 0x1C005F83C (W32kEtwEnableCallback.c)
 *     FastGetProfileDwordEx @ 0x1C005FC30 (FastGetProfileDwordEx.c)
 *     InitScancodeMap @ 0x1C0060090 (InitScancodeMap.c)
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C00604F0 (xxxUpdatePerUserAccessPackSettings.c)
 *     FastGetProfileValue @ 0x1C0060EF0 (FastGetProfileValue.c)
 *     CheckDesktopPolicy @ 0x1C00610D0 (CheckDesktopPolicy.c)
 *     Initialize @ 0x1C0061B30 (Initialize.c)
 *     ?IsDesktopHeapLoggingOn@@YAHXZ @ 0x1C0061C90 (-IsDesktopHeapLoggingOn@@YAHXZ.c)
 *     FastWriteProfileStringW @ 0x1C00A6660 (FastWriteProfileStringW.c)
 *     CheckDesktopPolicyChange @ 0x1C01085C0 (CheckDesktopPolicyChange.c)
 *     FastGetProfileKeysW @ 0x1C0108740 (FastGetProfileKeysW.c)
 *     FastWriteProfileValue @ 0x1C01089E0 (FastWriteProfileValue.c)
 *     Win32UserInitialize @ 0x1C0264310 (Win32UserInitialize.c)
 *     InitCreateUserSubsystem @ 0x1C02651A8 (InitCreateUserSubsystem.c)
 * Callees:
 *     ?InitPreviousUserString@@YAXXZ @ 0x1C0061828 (-InitPreviousUserString@@YAXXZ.c)
 *     AccessCheckObject @ 0x1C00953D0 (AccessCheckObject.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00A4FD4 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

void *__fastcall OpenCacheKeyEx(const UNICODE_STRING *a1, unsigned int a2, ACCESS_MASK a3, int *a4)
{
  __int64 v4; // r12
  const UNICODE_STRING *v6; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  PVOID v11; // r15
  int v12; // r14d
  const UNICODE_STRING *v13; // rdx
  int v14; // eax
  NTSTATUS v15; // eax
  int v16; // ebx
  NTSTATUS v18; // eax
  __int64 v19; // r8
  PVOID v20; // r15
  struct _UNICODE_STRING Destination; // [rsp+30h] [rbp-D0h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  __int64 CurrentProcess; // [rsp+48h] [rbp-B8h]
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  const UNICODE_STRING *v25; // [rsp+58h] [rbp-A8h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR Source[32]; // [rsp+90h] [rbp-70h] BYREF
  char v28; // [rsp+D0h] [rbp-30h] BYREF

  v4 = a2;
  v25 = a1;
  v6 = a1;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v8 = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  KeyHandle = 0LL;
  CurrentProcess = PsGetCurrentProcess(v10, v9);
  v11 = (PVOID)CurrentProcess;
  if ( a3 == 131097 && ((_DWORD)v4 == 4 || (_DWORD)v4 == 23) )
  {
    v12 = *a4;
    while ( 1 )
    {
LABEL_7:
      *(_DWORD *)&Destination.Length = 0x2000000;
      Destination.Buffer = (PWSTR)&v28;
      if ( (v12 & 4) != 0 )
      {
        RtlAppendUnicodeToString(&Destination, L"\\Registry\\Machine\\");
        RtlAppendUnicodeToString(&Destination, L"Software\\Policies\\Microsoft\\Windows\\");
        v14 = -5;
      }
      else
      {
        if ( *off_1C01D1A50[dword_1C01D16A0[4 * v4]] == 77 )
        {
          RtlAppendUnicodeToString(&Destination, L"\\Registry\\Machine\\");
        }
        else
        {
          if ( v6 )
          {
            v13 = v6;
          }
          else
          {
            InitPreviousUserString();
            v13 = &PreviousUserString;
          }
          RtlAppendUnicodeStringToString(&Destination, v13);
        }
        if ( (v12 & 2) != 0 )
        {
          RtlAppendUnicodeToString(&Destination, L"Software\\Policies\\Microsoft\\Windows\\");
          v14 = -3;
        }
        else if ( (v12 & 8) != 0 )
        {
          RtlAppendUnicodeToString(&Destination, L"Remote\\");
          RtlStringCchPrintfW(Source, 0x20uLL, L"%ld\\", gSessionId);
          RtlAppendUnicodeToString(&Destination, Source);
          v14 = -9;
        }
        else
        {
          if ( a4 && (*a4 & 0x10) != 0 )
            goto LABEL_41;
          v14 = -2;
        }
      }
      v12 &= v14;
      RtlAppendUnicodeToString(&Destination, off_1C01D1A50[dword_1C01D16A0[4 * v4]] + 1);
      RtlAppendUnicodeToString(&Destination, (&off_1C01D16A8)[2 * v4]);
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &Destination;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v15 = ZwOpenKey(&KeyHandle, a3, &ObjectAttributes);
      v16 = v15;
      if ( a3 != 131097 && v11 != gpepCSRSS && v11 != (PVOID)gpepInit )
      {
        if ( v15 < 0 )
          goto LABEL_19;
        v18 = ObReferenceObjectByHandle(KeyHandle, a3, 0LL, 0, &Object, 0LL);
        v20 = Object;
        if ( v18 < 0 )
        {
          ZwClose(KeyHandle);
          v16 = -1073741790;
        }
        else
        {
          LOBYTE(v19) = 1;
          if ( !(unsigned int)AccessCheckObject(Object, a3, v19, &KeyMapping) )
          {
            ZwClose(KeyHandle);
            v16 = -1073741790;
          }
          ObfDereferenceObject(v20);
        }
        v11 = (PVOID)CurrentProcess;
      }
      if ( v16 >= 0 )
        goto LABEL_21;
LABEL_19:
      if ( !v12 )
      {
LABEL_21:
        if ( a4 )
          *a4 = v12;
        if ( v16 >= 0 )
          return KeyHandle;
        return (void *)v8;
      }
      v6 = v25;
    }
  }
  if ( !a4 || (*a4 & 0x10) == 0 )
  {
    v12 = 1;
    goto LABEL_7;
  }
LABEL_41:
  *a4 = 0;
  return 0LL;
}
