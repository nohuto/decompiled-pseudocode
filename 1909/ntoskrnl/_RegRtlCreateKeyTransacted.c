/*
 * XREFs of _RegRtlCreateKeyTransacted @ 0x1406F4448
 * Callers:
 *     _RegRtlCreateTreeTransacted @ 0x1406F4234 (_RegRtlCreateTreeTransacted.c)
 *     _PnpCtxRegCreateKey @ 0x1407091F8 (_PnpCtxRegCreateKey.c)
 *     _SysCtxOpenControlSet @ 0x140756088 (_SysCtxOpenControlSet.c)
 *     _RegRtlCopyTreeInternal @ 0x14093E36C (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwCreateKey @ 0x1401C0FF0 (ZwCreateKey.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     _RegRtlOpenPredefinedKey @ 0x1407869D4 (_RegRtlOpenPredefinedKey.c)
 *     NtCreateKeyTransacted_Stub @ 0x14093EA90 (NtCreateKeyTransacted_Stub.c)
 */

__int64 __fastcall RegRtlCreateKeyTransacted(
        char *a1,
        const WCHAR *a2,
        ULONG a3,
        ACCESS_MASK a4,
        void *a5,
        char a6,
        PHANDLE KeyHandle,
        PULONG Disposition,
        __int64 a9)
{
  char *v13; // rdi
  int inited; // ebx
  int v15; // r9d
  int v16; // ecx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  char *v20; // [rsp+B0h] [rbp+30h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v13 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v20 = 0LL;
  if ( (unsigned __int64)(a1 + 0x80000000) <= 7 )
  {
    inited = RegRtlOpenPredefinedKey(a1, &v20);
    if ( inited < 0 )
      goto LABEL_9;
    v13 = v20;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( inited < 0 )
    goto LABEL_10;
  ObjectAttributes.Length = 48;
  v16 = (32 * (a3 & 8 | 6)) | 2;
  if ( !a6 )
    v16 = 32 * (a3 & 8 | 6);
  if ( v13 )
    a1 = v13;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ObjectAttributes.Attributes = v16 | 0x200;
  ObjectAttributes.SecurityDescriptor = a5;
  ObjectAttributes.RootDirectory = a1;
  if ( a9 )
  {
    inited = NtCreateKeyTransacted_Stub((_DWORD)KeyHandle, a4, (unsigned int)&ObjectAttributes, v15);
    if ( inited == -1073741702 )
      inited = -1072103420;
  }
  else
  {
    inited = ZwCreateKey(KeyHandle, a4, &ObjectAttributes, 0, 0LL, a3, Disposition);
  }
LABEL_9:
  v13 = v20;
LABEL_10:
  if ( v13 )
    ZwClose(v13);
  return (unsigned int)inited;
}
