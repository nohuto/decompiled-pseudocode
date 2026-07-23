/*
 * XREFs of NtLockProductActivationKeys @ 0x1406BD2D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     wcscat_s @ 0x14019BD60 (wcscat_s.c)
 *     wcscpy_s @ 0x14019BE00 (wcscpy_s.c)
 *     wcsncat_s @ 0x14019BE90 (wcsncat_s.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x1401B8930 (ZwEnumerateKey.c)
 *     ZwLockRegistryKey @ 0x1401BA3B0 (ZwLockRegistryKey.c)
 *     IsRegistryKeyLocked @ 0x1406BD6A8 (IsRegistryKeyLocked.c)
 */

NTSTATUS __stdcall NtLockProductActivationKeys(PULONG pPrivateVer, PULONG pSafeMode)
{
  NTSTATUS v3; // ebx
  __int16 v4; // r8
  unsigned __int64 i; // rdx
  __int64 j; // r8
  unsigned int v7; // r9d
  unsigned int v8; // r10d
  unsigned int v9; // esi
  int v10; // r14d
  unsigned __int64 v11; // r11
  __int64 v12; // rcx
  NTSTATUS result; // eax
  NTSTATUS v14; // edi
  ULONG v15; // r14d
  NTSTATUS k; // eax
  NTSTATUS v17; // esi
  NTSTATUS v18; // esi
  NTSTATUS v19; // eax
  _BYTE v20[8]; // [rsp+30h] [rbp-908h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-900h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-8F8h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-8F0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-8E8h] BYREF
  UNICODE_STRING v25; // [rsp+60h] [rbp-8D8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-8C8h] BYREF
  OBJECT_ATTRIBUTES v27; // [rsp+A0h] [rbp-898h] BYREF
  WCHAR SourceString[8]; // [rsp+D0h] [rbp-868h] BYREF
  __int128 v29; // [rsp+E0h] [rbp-858h]
  __int128 v30; // [rsp+F0h] [rbp-848h]
  __int64 v31; // [rsp+100h] [rbp-838h]
  int v32; // [rsp+108h] [rbp-830h]
  _BYTE KeyInformation[12]; // [rsp+110h] [rbp-828h] BYREF
  unsigned int v34; // [rsp+11Ch] [rbp-81Ch]
  wchar_t Src[504]; // [rsp+120h] [rbp-818h] BYREF
  wchar_t Dst[512]; // [rsp+510h] [rbp-428h] BYREF

  v3 = 0;
  KeyHandle = 0LL;
  *(_OWORD *)SourceString = xmmword_14035DCC0;
  v29 = xmmword_14035DCD0;
  v30 = xmmword_14035DCE0;
  v31 = 0x2C7EFB57828734DALL;
  v32 = 593434642;
  v4 = -21647;
  for ( i = 0LL; i < 0x1E; ++i )
    v4 = SourceString[i] ^ (SourceString[i] + v4);
  if ( v4 != -18097 )
    return -1073741823;
  for ( j = 52LL; j >= 0; --j )
  {
    v7 = *(_DWORD *)((char *)SourceString + j);
    v8 = *(_DWORD *)((char *)&SourceString[2] + j);
    v9 = -957401312;
    v10 = 32;
    v11 = 3337565984LL;
    do
    {
      v8 -= (v9 + abWPAStringKey[(v11 >> 11) & 3]) ^ (v7 + ((16 * v7) ^ (v7 >> 5)));
      v9 += 1640531527;
      v11 = v9;
      v7 -= (v9 + abWPAStringKey[v9 & 3]) ^ (v8 + ((16 * v8) ^ (v8 >> 5)));
      --v10;
    }
    while ( v10 );
    *(_DWORD *)((char *)SourceString + j) = v7;
    *(_DWORD *)((char *)&SourceString[2] + j) = v8;
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( pSafeMode )
    {
      v12 = (__int64)pSafeMode;
      if ( (unsigned __int64)pSafeMode >= 0x7FFFFFFF0000LL )
        v12 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v12 = *(_DWORD *)v12;
      *pSafeMode = InitSafeBootMode;
    }
  }
  else if ( pSafeMode )
  {
    *pSafeMode = InitSafeBootMode;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v14 = result;
  if ( result >= 0 )
  {
    v15 = 0;
    for ( k = ZwEnumerateKey(KeyHandle, 0, KeyBasicInformation, KeyInformation, 0x400u, &ResultLength);
          ;
          k = ZwEnumerateKey(KeyHandle, v15, KeyBasicInformation, KeyInformation, 0x400u, &ResultLength) )
    {
      v18 = k;
      if ( k == -2147483622 )
        break;
      if ( k < 0 )
      {
        v14 = k;
        break;
      }
      if ( v34 + 64 > 0x400 )
      {
        v14 = -1073741801;
      }
      else
      {
        wcscpy_s(Dst, 0x200uLL, SourceString);
        wcsncat_s(Dst, 0x200uLL, Src, (unsigned __int64)v34 >> 1);
        wcscat_s(Dst, 0x200uLL, L"\\");
        RtlInitUnicodeString(&v25, Dst);
        v27.Length = 48;
        v27.RootDirectory = 0LL;
        v27.Attributes = 576;
        v27.ObjectName = &v25;
        *(_OWORD *)&v27.SecurityDescriptor = 0LL;
        v19 = ZwOpenKey(&Handle, 0x20019u, &v27);
        if ( v19 < 0 )
        {
          v14 = v19;
        }
        else
        {
          v17 = IsRegistryKeyLocked(Handle, v20);
          if ( v17 >= 0 && !v20[0] )
            v17 = ZwLockRegistryKey(Handle);
          ZwClose(Handle);
          if ( v17 >= 0 )
            v17 = v14;
          v14 = v17;
        }
        ++v15;
      }
    }
    ZwClose(KeyHandle);
    if ( v18 != -2147483622 )
      return v14;
    return v3;
  }
  return result;
}
