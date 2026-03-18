/*
 * XREFs of InitClipboardILDef @ 0x1C0119A60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D084 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?GetClipILIndexFromName@@YAIPEAGI@Z @ 0x1C020D600 (-GetClipILIndexFromName@@YAIPEAGI@Z.c)
 */

int InitClipboardILDef()
{
  _DWORD *v0; // rbx
  int *v1; // rdi
  int v2; // edx
  int v3; // ecx
  int *v4; // rax
  NTSTATUS v5; // eax
  ULONG v6; // esi
  ULONG v7; // r14d
  __int64 v8; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG Length; // [rsp+A0h] [rbp+30h] BYREF
  void *KeyHandle; // [rsp+A8h] [rbp+38h] BYREF

  KeyHandle = 0LL;
  v0 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v1 = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System\\UIPI\\Clipboard\\IntegrityLevelDef");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    v5 = ZwQueryKey(KeyHandle, KeyFullInformation, 0LL, 0, &Length);
    if ( v5 == -2147483643 || v5 == -1073741789 )
    {
      v0 = (_DWORD *)Win32AllocPool(Length, 1650684757LL);
      if ( v0 )
      {
        if ( ZwQueryKey(KeyHandle, KeyFullInformation, v0, Length, &Length) >= 0 && (unsigned int)(v0[8] - 1) <= 4 )
        {
          v6 = v0[9] + 16;
          if ( v0[9] < 0xFFFFFFF0 )
          {
            v4 = (int *)Win32AllocPool(v6, 1650684757LL);
            v1 = v4;
            if ( v4 )
            {
              v7 = 0;
              if ( !v0[8] )
                goto LABEL_5;
              while ( 1 )
              {
                LODWORD(v4) = ZwEnumerateValueKey(KeyHandle, v7, KeyValueBasicInformation, v1, v6, &Length);
                if ( (int)v4 < 0 )
                  break;
                if ( v1[1] == 1 )
                {
                  LODWORD(v4) = GetClipILIndexFromName((wchar_t *)v1 + 6, v1[2]);
                  if ( (_DWORD)v4 != -1 )
                  {
                    v8 = 3LL * (unsigned int)v4;
                    v4 = dword_1C031F074;
                    dword_1C031F074[2 * v8] = 1;
                  }
                }
                if ( ++v7 >= v0[8] )
                  goto LABEL_5;
              }
            }
          }
        }
      }
    }
  }
  v4 = (int *)&WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    LODWORD(v4) = WPP_RECORDER_SF_(v3, v2, 17, 10, (__int64)&WPP_33030e437193318654ba3ddcf68d83d7_Traceguids);
  }
  dword_1C031F0BC = 0;
  dword_1C031F0A4 = 0;
  dword_1C031F074[0] = 0;
  dword_1C031F0D4 = 1;
  dword_1C031F08C = 1;
LABEL_5:
  dword_1C031F0EC = 1;
  if ( v1 )
    LODWORD(v4) = Win32FreePool(v1);
  if ( v0 )
    LODWORD(v4) = Win32FreePool(v0);
  if ( KeyHandle )
    LODWORD(v4) = ZwClose(KeyHandle);
  return (int)v4;
}
