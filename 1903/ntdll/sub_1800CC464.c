/*
 * XREFs of sub_1800CC464 @ 0x1800CC464
 * Callers:
 *     LdrAppxHandleIntegrityFailure @ 0x1800CBF80 (LdrAppxHandleIntegrityFailure.c)
 * Callees:
 *     sub_180003144 @ 0x180003144 (sub_180003144.c)
 *     sub_180003214 @ 0x180003214 (sub_180003214.c)
 *     RtlGetPersistedStateLocation @ 0x18006FCC0 (RtlGetPersistedStateLocation.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwOpenKeyEx @ 0x18009EA30 (ZwOpenKeyEx.c)
 */

__int64 __fastcall sub_1800CC464(int a1, __int64 a2, HANDLE *a3)
{
  signed int PersistedStateLocation; // ecx
  __int64 v7; // r11
  WCHAR *v8; // rcx
  __int64 v9; // r11
  __int64 v10; // rdx
  char *v11; // rax
  WCHAR v12; // r8
  WCHAR *v13; // rax
  ACCESS_MASK v14; // edx
  ULONG BufferLengthOut[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+48h] [rbp-B8h] BYREF
  WCHAR *v18; // [rsp+50h] [rbp-B0h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  WCHAR TargetPath[264]; // [rsp+90h] [rbp-70h] BYREF

  PersistedStateLocation = RtlGetPersistedStateLocation(
                             L"AppxStateChange",
                             L"TargetNtPath",
                             L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AppModel\\StateChange",
                             LocationTypeRegistry,
                             TargetPath,
                             0x20Au,
                             BufferLengthOut);
  if ( PersistedStateLocation >= 0 )
  {
    if ( a1 == -1073740702 )
    {
      PersistedStateLocation = sub_180003214(TargetPath, 261LL, BufferLengthOut);
      if ( PersistedStateLocation >= 0 )
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
        PersistedStateLocation = v9 == 0 ? 0x80000005 : 0;
        *v13 = 0;
      }
      if ( PersistedStateLocation >= 0 )
      {
        PersistedStateLocation = sub_180003144((__int64)TargetPath, 0x20AuLL, a2);
        if ( PersistedStateLocation >= 0 )
        {
          v17 = 0LL;
          v18 = 0LL;
          PersistedStateLocation = sub_180003214(TargetPath, 0x7FFFLL, BufferLengthOut);
          if ( PersistedStateLocation >= 0 )
          {
            LOWORD(v17) = 2 * LOWORD(BufferLengthOut[0]);
            WORD1(v17) = 2 * LOWORD(BufferLengthOut[0]) + 2;
            v18 = TargetPath;
            v14 = 131353;
LABEL_18:
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&v17;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 64;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            return (unsigned int)ZwOpenKeyEx(a3, v14, &ObjectAttributes, 0);
          }
        }
      }
    }
    else
    {
      v17 = 0LL;
      v18 = 0LL;
      PersistedStateLocation = sub_180003214(TargetPath, 0x7FFFLL, BufferLengthOut);
      if ( PersistedStateLocation >= 0 )
      {
        LOWORD(v17) = 2 * LOWORD(BufferLengthOut[0]);
        WORD1(v17) = 2 * LOWORD(BufferLengthOut[0]) + 2;
        v18 = TargetPath;
        v14 = 131097;
        goto LABEL_18;
      }
    }
  }
  return (unsigned int)PersistedStateLocation;
}
