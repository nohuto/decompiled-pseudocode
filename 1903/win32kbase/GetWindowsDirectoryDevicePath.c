/*
 * XREFs of GetWindowsDirectoryDevicePath @ 0x1C0070384
 * Callers:
 *     ?ConvertHandleAndVerifyLoc@@YAPEAXPEAX@Z @ 0x1C007010C (-ConvertHandleAndVerifyLoc@@YAPEAXPEAX@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0014930 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     ?GetSymbolicLink@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C00704CC (-GetSymbolicLink@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     wcsrchr @ 0x1C00BB3E8 (wcsrchr.c)
 */

__int64 __fastcall GetWindowsDirectoryDevicePath(PUNICODE_STRING DestinationString)
{
  WCHAR *v2; // rdi
  WCHAR *v3; // r14
  __int64 v4; // rax
  WCHAR *v5; // rsi
  int SymbolicLink; // ebx
  WCHAR *v7; // rbx
  wchar_t *v8; // rax
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-20h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+30h] [rbp-10h] BYREF

  *(_QWORD *)&SourceString.Length = 0LL;
  SourceString.Buffer = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  v2 = 0LL;
  v3 = (WCHAR *)Win32AllocPool(520LL, 0x626B7355u);
  v4 = Win32AllocPool(520LL, 0x626B7355u);
  v5 = (WCHAR *)v4;
  if ( v3 && v4 )
  {
    SourceString.Buffer = v3;
    *(_DWORD *)&SourceString.Length = 34078720;
    SymbolicLink = GetSymbolicLink(&SourceString, L"\\SystemRoot");
    if ( SymbolicLink >= 0 )
    {
      Destination.Buffer = v5;
      *(_DWORD *)&Destination.Length = 34078720;
      while ( 1 )
      {
        v7 = v2;
        v8 = wcsrchr(SourceString.Buffer, 0x5Cu);
        v2 = v8;
        if ( v7 )
          *v7 = 92;
        if ( !v8 )
          break;
        *v8 = 0;
        SymbolicLink = GetSymbolicLink(&Destination, SourceString.Buffer);
        if ( SymbolicLink >= 0 )
        {
          *v2 = 92;
          RtlAppendUnicodeToString(&Destination, v2);
          RtlCopyUnicodeString(DestinationString, &Destination);
          goto LABEL_10;
        }
      }
      RtlCopyUnicodeString(DestinationString, &SourceString);
      SymbolicLink = 0;
    }
  }
  else
  {
    SymbolicLink = -1073741801;
  }
LABEL_10:
  if ( v3 )
    Win32FreePool((__int64)v3);
  if ( v5 )
    Win32FreePool((__int64)v5);
  return (unsigned int)SymbolicLink;
}
