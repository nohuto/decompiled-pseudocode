/*
 * XREFs of EtwpReadConfigParameters @ 0x1409D01B0
 * Callers:
 *     EtwpInitialize @ 0x1409D0620 (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B9A70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B8350 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B83B0 (ZwOpenKey.c)
 *     memmove @ 0x1401D1440 (memmove.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140623790 (RtlFreeAnsiString.c)
 *     RtlQueryRegistryValuesEx @ 0x1406C7660 (RtlQueryRegistryValuesEx.c)
 */

void EtwpReadConfigParameters()
{
  const WCHAR *v0; // rbx
  int v1; // eax
  int v2; // ecx
  WCHAR *PoolWithTag; // rax
  unsigned __int64 v4; // rax
  unsigned int v5; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v6; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v7; // [rsp+40h] [rbp-C8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-98h] BYREF
  int v12; // [rsp+A8h] [rbp-60h] BYREF
  UNICODE_STRING *p_UnicodeString; // [rsp+B0h] [rbp-58h]
  int v14; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int *v15; // [rsp+C0h] [rbp-48h]
  int v16; // [rsp+C8h] [rbp-40h] BYREF
  unsigned int *v17; // [rsp+D0h] [rbp-38h]
  _QWORD v18[28]; // [rsp+E8h] [rbp-20h] BYREF

  LOWORD(v7) = 0;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v0 = 0LL;
  v6 = 0;
  v5 = 10;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    goto LABEL_21;
  memset(v18, 0, sizeof(v18));
  v18[0] = EtwpQueryRegistryCallback;
  v18[7] = EtwpQueryRegistryCallback;
  v18[3] = &v12;
  v18[14] = EtwpQueryRegistryCallback;
  v18[2] = L"RTBacklogRoot";
  LODWORD(v18[4]) = 1;
  v18[5] = &v7;
  v12 = 1;
  p_UnicodeString = &UnicodeString;
  v18[10] = &v14;
  v18[9] = L"MaxNonPagedPoolUsage";
  v15 = &v5;
  v18[17] = &v16;
  v18[16] = L"StackCaptureTimeout";
  v17 = &v6;
  LODWORD(v18[11]) = 4;
  v14 = 4;
  LODWORD(v18[18]) = 4;
  v16 = 4;
  if ( (int)RtlQueryRegistryValuesEx(0x40000000LL, (const WCHAR *)KeyHandle, (__int64)v18, 0LL) < 0 )
  {
LABEL_21:
    v1 = v5;
    v2 = v6;
  }
  else
  {
    if ( UnicodeString.Buffer )
    {
      if ( UnicodeString.Length >= 4u )
      {
        PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, UnicodeString.MaximumLength + 2LL, 0x50777445u);
        v0 = PoolWithTag;
        if ( PoolWithTag )
        {
          memmove(PoolWithTag, UnicodeString.Buffer, UnicodeString.MaximumLength);
          v4 = (unsigned __int64)UnicodeString.Length >> 1;
          if ( v0[v4 - 1] != 92 )
          {
            v0[v4] = 92;
            v0[((unsigned __int64)UnicodeString.Length >> 1) + 1] = 0;
          }
        }
      }
    }
    v1 = 50;
    if ( v5 <= 0x32 )
    {
      v1 = v5;
      if ( v5 < 0xA )
        v1 = 10;
    }
    v2 = v6;
    v5 = v1;
    if ( v6 > 0x2BF20 )
      v2 = 180000;
    v6 = v2;
  }
  EtwpMaxNonPagedPoolUsage = v1;
  if ( v0 )
    EtwpRTBacklogFileRoot = v0;
  if ( v2 )
    EtwpStackCaptureTimeout = v2;
  if ( KeyHandle )
    ZwClose(KeyHandle);
  RtlFreeAnsiString(&UnicodeString);
}
