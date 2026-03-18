/*
 * XREFs of ?_OpenDeviceKey@InteractiveControlSettings@@IEAAJKHPEAPEAX@Z @ 0x1C00D9004
 * Callers:
 *     ?ReadSettings@InteractiveControlSettings@@QEAAJXZ @ 0x1C00D8EB8 (-ReadSettings@InteractiveControlSettings@@QEAAJXZ.c)
 *     ?WriteSettings@InteractiveControlSettings@@QEAAJXZ @ 0x1C0253004 (-WriteSettings@InteractiveControlSettings@@QEAAJXZ.c)
 * Callees:
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C00BA040 (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall InteractiveControlSettings::_OpenDeviceKey(
        InteractiveControlSettings *this,
        ACCESS_MASK a2,
        __int64 a3,
        void **a4)
{
  ULONG v6; // r8d
  int v7; // ecx
  PWSTR Buffer; // rbx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r11
  const wchar_t *v11; // r9
  __int64 v12; // r10
  __int16 v13; // dx
  unsigned __int64 v14; // r8
  char *v15; // rbx
  struct _UNICODE_STRING v17; // [rsp+40h] [rbp-C0h] BYREF
  void *KeyHandle; // [rsp+50h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  char v20; // [rsp+90h] [rbp-70h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  KeyHandle = 0LL;
  *(_DWORD *)(&v17.MaximumLength + 1) = 0;
  if ( !grpWinStaList )
    return (unsigned int)-1073741595;
  *(_DWORD *)&v17.Length = 45875200;
  v17.Buffer = (PWSTR)&v20;
  v7 = RtlUnicodeStringCopy(&v17, (const struct _UNICODE_STRING *)(grpWinStaList + 168LL), v6);
  if ( v7 >= 0 )
  {
    Buffer = 0LL;
    v9 = 0LL;
    v10 = 0LL;
    v7 = 0;
    if ( (v17.Length & 1) != 0
      || (v17.MaximumLength & 1) != 0
      || v17.Length > v17.MaximumLength
      || v17.MaximumLength == 0xFFFF )
    {
      v7 = -1073741811;
    }
    else
    {
      if ( !v17.Buffer && (v17.Length || v17.MaximumLength) )
      {
        v7 = -1073741811;
      }
      else
      {
        Buffer = v17.Buffer;
        v9 = (unsigned __int64)v17.MaximumLength >> 1;
        v10 = (unsigned __int64)v17.Length >> 1;
      }
      if ( v7 < 0 )
        return (unsigned int)v7;
      v11 = L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows\\InteractiveControl";
      v12 = 0x7FFFLL;
      v7 = 0;
      v13 = 0;
      v14 = v9 - v10;
      if ( !v14 )
        goto LABEL_28;
      v15 = (char *)Buffer
          + 2 * v10
          - (_QWORD)L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows\\InteractiveControl";
      do
      {
        if ( !v12 )
          break;
        if ( !*v11 )
          break;
        *(const wchar_t *)((char *)v11 + (_QWORD)v15) = *v11;
        --v12;
        ++v11;
        ++v13;
        --v14;
      }
      while ( v14 );
      if ( !v14 && v12 && *v11 )
LABEL_28:
        v7 = -2147483643;
      v17.Length = 2 * (v10 + v13);
    }
    if ( v7 >= 0 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &v17;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v7 = ZwOpenKey(&KeyHandle, a2, &ObjectAttributes);
      if ( v7 < 0 )
        v7 = ZwCreateKey(&KeyHandle, a2, &ObjectAttributes, 0, 0LL, 0, 0LL);
      *a4 = KeyHandle;
    }
  }
  return (unsigned int)v7;
}
