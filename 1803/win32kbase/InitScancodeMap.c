/*
 * XREFs of InitScancodeMap @ 0x1C012F7F0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     OpenCacheKeyEx @ 0x1C003C8E0 (OpenCacheKeyEx.c)
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     RtlLoadStringOrError @ 0x1C0067F00 (RtlLoadStringOrError.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     FastGetProfileValue @ 0x1C00A84E0 (FastGetProfileValue.c)
 */

int InitScancodeMap()
{
  const WCHAR *v0; // rdi
  void *v1; // rbx
  NTSTATUS v2; // eax
  ULONG v3; // ebx
  void *v4; // rax
  __int64 v5; // rdi
  const WCHAR *v6; // rdi
  void *v7; // rax
  void *v8; // rbx
  ULONG v9; // ebx
  void *v10; // rdi
  ULONG Length; // [rsp+40h] [rbp-39h] BYREF
  int v13; // [rsp+44h] [rbp-35h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-31h] BYREF
  _BYTE KeyValueInformation[8]; // [rsp+58h] [rbp-21h] BYREF
  ULONG Size; // [rsp+60h] [rbp-19h]
  _BYTE Size_4[12]; // [rsp+64h] [rbp-15h] BYREF
  _WORD v18[40]; // [rsp+70h] [rbp-9h] BYREF

  if ( gpScancodeMap )
  {
    Win32FreePool(gpScancodeMap);
    gpScancodeMap = 0LL;
  }
  v13 = gdwPolicyFlags;
  v0 = L"Scancode Map";
  if ( ((unsigned __int64)L"Scancode Map" & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    v18[0] = 0;
    RtlLoadStringOrError((unsigned __int16)L"Scancode Map", v18, 40, 0);
    v0 = v18;
  }
  v1 = OpenCacheKeyEx(0LL, 8u, 0x20019u, &v13);
  if ( v1 )
  {
    while ( 1 )
    {
      Length = 16;
      RtlInitUnicodeString(&DestinationString, v0);
      v2 = ZwQueryValueKey(v1, &DestinationString, KeyValuePartialInformation, KeyValueInformation, Length, &Length);
      if ( v2 >= 0 )
        break;
      if ( v2 == -2147483643 )
      {
        ZwClose(v1);
        v3 = Size;
        goto LABEL_14;
      }
      if ( !v13 )
      {
        ZwClose(v1);
        goto LABEL_17;
      }
      ZwClose(v1);
      v1 = OpenCacheKeyEx(0LL, 8u, 0x20019u, &v13);
      if ( !v1 )
        goto LABEL_17;
    }
    Length = Size;
    memmove(0LL, Size_4, Size);
    ZwClose(v1);
    v3 = Length;
LABEL_14:
    if ( v3 - 13 <= 0xFFF1 )
    {
      v4 = Win32AllocPoolZInit(v3 + 8LL, 0x6D637355u);
      v5 = (__int64)v4;
      if ( v4 )
      {
        FastGetProfileValue(0LL, 8u, L"Scancode Map", 0LL, v4, v3, 0);
        gpScancodeMap = v5;
      }
    }
  }
LABEL_17:
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
  {
    Win32FreePool(*(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = 0LL;
    LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine) = 0;
  }
  v13 = gdwPolicyFlags;
  v6 = L"Scancode Map Ex";
  if ( ((unsigned __int64)L"Scancode Map Ex" & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    v18[0] = 0;
    RtlLoadStringOrError((unsigned __int16)L"Scancode Map Ex", v18, 40, 0);
    v6 = v18;
  }
  v7 = OpenCacheKeyEx(0LL, 8u, 0x20019u, &v13);
  v8 = v7;
  if ( v7 )
  {
    while ( 1 )
    {
      Length = 16;
      RtlInitUnicodeString(&DestinationString, v6);
      LODWORD(v7) = ZwQueryValueKey(
                      v8,
                      &DestinationString,
                      KeyValuePartialInformation,
                      KeyValueInformation,
                      Length,
                      &Length);
      if ( (int)v7 >= 0 )
        break;
      if ( (_DWORD)v7 == -2147483643 )
      {
        LODWORD(v7) = ZwClose(v8);
        v9 = Size;
        goto LABEL_31;
      }
      if ( !v13 )
      {
        if ( v8 )
          LODWORD(v7) = ZwClose(v8);
        return (int)v7;
      }
      ZwClose(v8);
      v7 = OpenCacheKeyEx(0LL, 8u, 0x20019u, &v13);
      v8 = v7;
      if ( !v7 )
        return (int)v7;
    }
    Length = Size;
    memmove(0LL, Size_4, Size);
    LODWORD(v7) = ZwClose(v8);
    v9 = Length;
LABEL_31:
    if ( v9 >= 0x10 && (v9 & 0xF) == 0 )
    {
      v7 = Win32AllocPoolZInit(v9, 0x6D637355u);
      v10 = v7;
      if ( v7 )
      {
        LODWORD(v7) = FastGetProfileValue(0LL, 8u, L"Scancode Map Ex", 0LL, v7, v9, 0);
        LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine) = v9 >> 4;
        *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = v10;
      }
    }
  }
  return (int)v7;
}
