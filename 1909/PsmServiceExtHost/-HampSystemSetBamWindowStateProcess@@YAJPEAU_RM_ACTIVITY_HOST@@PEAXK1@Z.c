/*
 * XREFs of ?HampSystemSetBamWindowStateProcess@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x1800730A0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

NTSTATUS __fastcall HampSystemSetBamWindowStateProcess(struct _RM_ACTIVITY_HOST *a1, void *a2, int a3, void *a4)
{
  int v6; // ebx
  NTSTATUS result; // eax
  int v9; // [rsp+58h] [rbp-B0h] BYREF
  NTSTATUS v10; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v11; // [rsp+60h] [rbp-A8h] BYREF
  void *FileHandle; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v13; // [rsp+70h] [rbp-98h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-90h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-80h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-70h] BYREF
  _DWORD InputBuffer[2]; // [rsp+C8h] [rbp-40h] BYREF
  void *v18; // [rsp+D0h] [rbp-38h]
  int v19; // [rsp+D8h] [rbp-30h]
  int v20; // [rsp+DCh] [rbp-2Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E8h] [rbp-20h] BYREF
  NTSTATUS *v22; // [rsp+108h] [rbp+0h]
  int v23; // [rsp+110h] [rbp+8h]
  int v24; // [rsp+114h] [rbp+Ch]
  __int64 *v25; // [rsp+118h] [rbp+10h]
  int v26; // [rsp+120h] [rbp+18h]
  int v27; // [rsp+124h] [rbp+1Ch]
  __int64 *v28; // [rsp+128h] [rbp+20h]
  int v29; // [rsp+130h] [rbp+28h]
  int v30; // [rsp+134h] [rbp+2Ch]
  int *v31; // [rsp+138h] [rbp+30h]
  int v32; // [rsp+140h] [rbp+38h]
  int v33; // [rsp+144h] [rbp+3Ch]

  FileHandle = 0LL;
  v6 = (int)a4;
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
    InputBuffer[1] = 0;
    v20 = 0;
    InputBuffer[0] = 1;
    v18 = a2;
    v19 = v6;
    result = NtDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x220004u, InputBuffer, 0x18u, 0LL, 0);
    v10 = result;
  }
  if ( dword_1800AB2C0 > 4u )
  {
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v33 = 0;
    v22 = &v10;
    v25 = &v11;
    v13 = *((_QWORD *)a1 + 4);
    v28 = &v13;
    v31 = &v9;
    v23 = 4;
    LODWORD(v11) = a3;
    v26 = 4;
    v29 = 8;
    LOBYTE(v9) = v6;
    v32 = 1;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180096C8F, 0LL, 0LL, 6u, &pData);
    return v10;
  }
  return result;
}
