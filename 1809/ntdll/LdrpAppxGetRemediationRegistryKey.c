/*
 * XREFs of LdrpAppxGetRemediationRegistryKey @ 0x1800CDCB4
 * Callers:
 *     LdrAppxHandleIntegrityFailure @ 0x1800CD7D0 (LdrAppxHandleIntegrityFailure.c)
 * Callees:
 *     RtlGetPersistedStateLocation @ 0x1800296A0 (RtlGetPersistedStateLocation.c)
 *     RtlStringCbCatW @ 0x1800533D8 (RtlStringCbCatW.c)
 *     RtlStringLengthWorkerW @ 0x1800534A8 (RtlStringLengthWorkerW.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     NtOpenKeyEx @ 0x1800A2630 (NtOpenKeyEx.c)
 */

NTSTATUS __fastcall LdrpAppxGetRemediationRegistryKey(int a1, __int64 a2, HANDLE *a3)
{
  NTSTATUS result; // eax
  __int64 v7; // r11
  WCHAR *v8; // rcx
  __int64 v9; // r11
  __int64 v10; // rax
  char *v11; // rdx
  WCHAR v12; // r8
  WCHAR *v13; // rax
  int v14; // r8d
  ACCESS_MASK v15; // edx
  ULONG BufferLengthOut[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+48h] [rbp-B8h] BYREF
  WCHAR *v18; // [rsp+50h] [rbp-B0h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  WCHAR TargetPath[264]; // [rsp+90h] [rbp-70h] BYREF

  result = RtlGetPersistedStateLocation(
             L"AppxStateChange",
             L"TargetNtPath",
             L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AppModel\\StateChange",
             LocationTypeRegistry,
             TargetPath,
             0x20Au,
             BufferLengthOut);
  if ( result >= 0 )
  {
    if ( a1 != -1073740702 )
    {
      v17 = 0LL;
      v18 = 0LL;
      v14 = RtlStringLengthWorkerW(TargetPath, 0x7FFFLL, BufferLengthOut);
      if ( v14 >= 0 )
      {
        LOWORD(v17) = 2 * LOWORD(BufferLengthOut[0]);
        WORD1(v17) = 2 * LOWORD(BufferLengthOut[0]) + 2;
        v18 = TargetPath;
        v15 = 131097;
        goto LABEL_19;
      }
      return v14;
    }
    result = RtlStringLengthWorkerW(TargetPath, 261LL, BufferLengthOut);
    if ( result >= 0 )
    {
      v8 = &TargetPath[*(_QWORD *)BufferLengthOut];
      v9 = v7 - *(_QWORD *)BufferLengthOut;
      if ( v9 )
      {
        v10 = v9 + *(_QWORD *)BufferLengthOut + 2147483385LL;
        v11 = (char *)((char *)L"\\PackageList\\" - (char *)v8);
        do
        {
          if ( !v10 )
            break;
          v12 = *(WCHAR *)((char *)v8 + (_QWORD)v11);
          if ( !v12 )
            break;
          *v8 = v12;
          --v10;
          ++v8;
          --v9;
        }
        while ( v9 );
      }
      v13 = v8 - 1;
      if ( v9 )
        v13 = v8;
      *v13 = 0;
      result = -2147483643;
      if ( v9 )
        result = 0;
      if ( result >= 0 )
      {
        result = RtlStringCbCatW((__int64)TargetPath, 0x20AuLL, a2);
        if ( result >= 0 )
        {
          v17 = 0LL;
          v18 = 0LL;
          v14 = RtlStringLengthWorkerW(TargetPath, 0x7FFFLL, BufferLengthOut);
          if ( v14 >= 0 )
          {
            LOWORD(v17) = 2 * LOWORD(BufferLengthOut[0]);
            WORD1(v17) = 2 * LOWORD(BufferLengthOut[0]) + 2;
            v18 = TargetPath;
            v15 = 131353;
LABEL_19:
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&v17;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 64;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            return NtOpenKeyEx(a3, v15, &ObjectAttributes, 0);
          }
          return v14;
        }
      }
    }
  }
  return result;
}
