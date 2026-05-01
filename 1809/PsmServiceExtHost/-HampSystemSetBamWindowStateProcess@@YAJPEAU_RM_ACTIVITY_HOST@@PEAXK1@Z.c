/*
 * XREFs of ?HampSystemSetBamWindowStateProcess@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180065FA0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

NTSTATUS __fastcall HampSystemSetBamWindowStateProcess(struct _RM_ACTIVITY_HOST *a1, void *a2, int a3, void *a4)
{
  unsigned int v6; // ebx
  NTSTATUS result; // eax
  int v9; // [rsp+58h] [rbp-B0h] BYREF
  NTSTATUS v10; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v11; // [rsp+60h] [rbp-A8h] BYREF
  void *FileHandle; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v13; // [rsp+70h] [rbp-98h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-90h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-80h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-70h] BYREF
  _QWORD InputBuffer[4]; // [rsp+C8h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E8h] [rbp-20h] BYREF
  NTSTATUS *v19; // [rsp+108h] [rbp+0h]
  int v20; // [rsp+110h] [rbp+8h]
  int v21; // [rsp+114h] [rbp+Ch]
  __int64 *v22; // [rsp+118h] [rbp+10h]
  int v23; // [rsp+120h] [rbp+18h]
  int v24; // [rsp+124h] [rbp+1Ch]
  __int64 *v25; // [rsp+128h] [rbp+20h]
  int v26; // [rsp+130h] [rbp+28h]
  int v27; // [rsp+134h] [rbp+2Ch]
  int *v28; // [rsp+138h] [rbp+30h]
  int v29; // [rsp+140h] [rbp+38h]
  int v30; // [rsp+144h] [rbp+3Ch]

  FileHandle = 0LL;
  v6 = (unsigned int)a4;
  RtlInitUnicodeString(&DestinationString, L"\\Device\\Bam");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = NtOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u);
  v10 = result;
  if ( result >= 0 )
  {
    InputBuffer[0] = 1LL;
    InputBuffer[1] = a2;
    InputBuffer[2] = v6;
    result = NtDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x220004u, InputBuffer, 0x18u, 0LL, 0);
    v10 = result;
  }
  if ( hProvider > 4u )
  {
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v19 = &v10;
    v22 = &v11;
    v13 = *((_QWORD *)a1 + 4);
    v25 = &v13;
    v28 = &v9;
    v20 = 4;
    LODWORD(v11) = a3;
    v23 = 4;
    v26 = 8;
    LOBYTE(v9) = v6;
    v29 = 1;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180088F0D, 0LL, 0LL, 6u, &pData);
    return v10;
  }
  return result;
}
