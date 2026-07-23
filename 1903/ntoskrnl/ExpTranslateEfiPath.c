/*
 * XREFs of ExpTranslateEfiPath @ 0x140910080
 * Callers:
 *     NtTranslateFilePath @ 0x140913740 (NtTranslateFilePath.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     swprintf_s @ 0x1401A4BD0 (swprintf_s.c)
 *     wcscpy_s @ 0x1401A6530 (wcscpy_s.c)
 *     wcsncat_s @ 0x1401A65C0 (wcsncat_s.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlStringFromGUIDEx @ 0x1406A11E8 (RtlStringFromGUIDEx.c)
 *     ExpCreateOutputARC @ 0x14090D7D4 (ExpCreateOutputARC.c)
 *     ExpCreateOutputNT @ 0x14090DAA4 (ExpCreateOutputNT.c)
 *     ExpCreateOutputSIGNATURE @ 0x14090DB74 (ExpCreateOutputSIGNATURE.c)
 *     ExpFindDiskSignature @ 0x14090E024 (ExpFindDiskSignature.c)
 *     ExpGetDriveGeometry @ 0x14090E478 (ExpGetDriveGeometry.c)
 *     ExpParseEfiPath @ 0x14090E9E0 (ExpParseEfiPath.c)
 *     ExpTranslateSymbolicLink @ 0x140910A0C (ExpTranslateSymbolicLink.c)
 */

__int64 __fastcall ExpTranslateEfiPath(__int64 a1, int a2, _DWORD *a3, unsigned int *a4)
{
  __int64 result; // rax
  char *v6; // rdi
  unsigned int v7; // r14d
  unsigned int v8; // esi
  GUID *v9; // r13
  NTSTATUS DiskSignature; // ebx
  SIZE_T v11; // rbx
  wchar_t *PoolWithTag; // rax
  wchar_t *v13; // r15
  rsize_t v14; // rbx
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rbx
  int v17; // eax
  unsigned int v18; // ecx
  wchar_t *v19; // rbx
  int v20; // r15d
  PVOID v21; // rbx
  int OutputNT; // eax
  int DriveGeometry; // esi
  __int64 v24; // [rsp+20h] [rbp-69h]
  char v25; // [rsp+40h] [rbp-49h] BYREF
  char v26; // [rsp+41h] [rbp-48h]
  unsigned int v27; // [rsp+44h] [rbp-45h] BYREF
  PVOID P; // [rsp+48h] [rbp-41h] BYREF
  PVOID v29; // [rsp+50h] [rbp-39h] BYREF
  unsigned int v30; // [rsp+58h] [rbp-31h] BYREF
  UNICODE_STRING GuidString; // [rsp+60h] [rbp-29h] BYREF
  unsigned int *v32; // [rsp+70h] [rbp-19h]
  _DWORD *v33; // [rsp+78h] [rbp-11h]
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-9h] BYREF
  _QWORD v35[2]; // [rsp+90h] [rbp+7h] BYREF
  __int64 v36; // [rsp+A0h] [rbp+17h]

  v29 = 0LL;
  v32 = a4;
  v33 = a3;
  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v35[0] = 0LL;
  v35[1] = 0LL;
  v36 = 0LL;
  result = ExpParseEfiPath((char *)(a1 + 12), &v29, &P, &v25);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
    v6 = (char *)v29;
    v7 = 0;
    v30 = 0;
    v26 = 0;
    v8 = 1;
    if ( v25 == 1 && a2 != 2 )
    {
      v9 = (GUID *)((char *)v29 + 24);
      DiskSignature = RtlStringFromGUIDEx((PGUID)((char *)v29 + 24), &GuidString, 1u);
      if ( DiskSignature < 0 )
        goto LABEL_12;
      v11 = (unsigned int)GuidString.Length + 22;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x72766E45u);
      v13 = PoolWithTag;
      if ( !PoolWithTag )
      {
        ExFreePoolWithTag(GuidString.Buffer, 0);
LABEL_7:
        if ( P )
          ExFreePoolWithTag(P, 0);
        DiskSignature = -1073741670;
LABEL_42:
        ExFreePoolWithTag(v6, 0);
        return (unsigned int)DiskSignature;
      }
      v14 = v11 >> 1;
      wcscpy_s(PoolWithTag, v14, L"\\??\\Volume");
      wcsncat_s(v13, v14, GuidString.Buffer, GuidString.Length);
      ExFreePoolWithTag(GuidString.Buffer, 0);
      LODWORD(v14) = ExpTranslateSymbolicLink(v13);
      ExFreePoolWithTag(v13, 0);
      if ( (v14 & 0x80000000) == 0LL )
      {
LABEL_27:
        v21 = P;
        if ( a2 == 3 )
        {
          OutputNT = ExpCreateOutputNT((__int64)v33, v32, (const wchar_t **)&DestinationString, (const wchar_t *)P);
        }
        else if ( a2 == 2 )
        {
          if ( v26 == 1 )
          {
            DriveGeometry = ExpGetDriveGeometry(v7, v35);
            if ( DriveGeometry < 0 )
            {
LABEL_36:
              ExFreePoolWithTag(DestinationString.Buffer, 0);
              if ( v21 )
                ExFreePoolWithTag(v21, 0);
              DiskSignature = DriveGeometry;
              goto LABEL_42;
            }
            v8 = HIDWORD(v36);
          }
          v27 = *((_DWORD *)v6 + 1);
          v29 = (PVOID)(v8 * *((_QWORD *)v6 + 1));
          *(_QWORD *)&GuidString.Length = v8 * *((_QWORD *)v6 + 2);
          OutputNT = ExpCreateOutputSIGNATURE((__int64)v33, v32, v9, &v27, &v29, &GuidString, (wchar_t *)v21, v25);
        }
        else
        {
          OutputNT = ExpCreateOutputARC(v33, v32, (__int64)&DestinationString, (const wchar_t *)P);
        }
        DriveGeometry = OutputNT;
        goto LABEL_36;
      }
    }
    v9 = (GUID *)(v6 + 24);
    v27 = *((_DWORD *)v6 + 1);
    DiskSignature = ExpFindDiskSignature((__int64)(v6 + 24), &v27, &v30, &v29, &GuidString, v25);
    if ( DiskSignature < 0 )
    {
LABEL_12:
      if ( P )
        ExFreePoolWithTag(P, 0);
      goto LABEL_42;
    }
    if ( *((_DWORD *)v6 + 1) == v27 )
    {
      v15 = (unsigned __int64)v29;
      v7 = v30;
      v16 = *(_QWORD *)&GuidString.Length;
      if ( *((PVOID *)v6 + 1) == v29 && *((_QWORD *)v6 + 2) == *(_QWORD *)&GuidString.Length )
        goto LABEL_22;
      v17 = ExpGetDriveGeometry(v30, v35);
      v18 = HIDWORD(v36);
      if ( v17 < 0 )
        v18 = 1;
      HIDWORD(v36) = v18;
      if ( *((_QWORD *)v6 + 1) == v15 / v18 && *((_QWORD *)v6 + 2) == v16 / v18 )
      {
        v26 = 1;
LABEL_22:
        v19 = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x5EuLL, 0x72766E45u);
        if ( !v19 )
          goto LABEL_7;
        LODWORD(v24) = v27;
        swprintf_s(v19, 0x2FuLL, L"\\Device\\Harddisk%lu\\Partition%lu", v7, v24);
        v20 = ExpTranslateSymbolicLink(v19);
        ExFreePoolWithTag(v19, 0);
        if ( v20 < 0 )
        {
          if ( P )
            ExFreePoolWithTag(P, 0);
          DiskSignature = v20;
          goto LABEL_42;
        }
        goto LABEL_27;
      }
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    DiskSignature = -1073741811;
    goto LABEL_42;
  }
  return result;
}
