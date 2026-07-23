/*
 * XREFs of SiValidateSystemPartition @ 0x140127BA4
 * Callers:
 *     SiGetBootDeviceName @ 0x1406AFB44 (SiGetBootDeviceName.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     SiGetDiskPartitionInformation @ 0x1406AFF44 (SiGetDiskPartitionInformation.c)
 *     SiIssueSynchronousIoctl @ 0x1408F6308 (SiIssueSynchronousIoctl.c)
 */

__int64 __fastcall SiValidateSystemPartition(PCWSTR SourceString, _DWORD *a2, __int64 a3, __int64 a4, char a5)
{
  unsigned int DiskPartitionInformation; // r8d
  __int64 v9; // rax
  int v10; // eax
  _DWORD OutputBuffer[8]; // [rsp+30h] [rbp-81h] BYREF
  __int64 v12; // [rsp+50h] [rbp-61h]
  __int64 v13; // [rsp+58h] [rbp-59h]
  __int64 v14; // [rsp+C0h] [rbp+Fh]
  int v15; // [rsp+C8h] [rbp+17h]
  _BYTE v16[40]; // [rsp+D0h] [rbp+1Fh] BYREF

  DiskPartitionInformation = SiGetDiskPartitionInformation(SourceString, OutputBuffer);
  if ( (DiskPartitionInformation & 0x80000000) != 0 )
    return DiskPartitionInformation;
  if ( a2 && OutputBuffer[0] != *a2 )
    return (unsigned int)-1073741823;
  DiskPartitionInformation = -1073741823;
  if ( OutputBuffer[0] != 1 )
  {
    if ( !OutputBuffer[0] )
      DiskPartitionInformation = BYTE1(v12) == 0 ? 0xC0000001 : 0;
    if ( (DiskPartitionInformation & 0x80000000) != 0 )
      return DiskPartitionInformation;
LABEL_8:
    if ( a5 )
    {
      v15 = 0;
      memset(v16, 0, sizeof(v16));
      v14 = 0LL;
      v10 = SiIssueSynchronousIoctl(SourceString, v16, 0x28u);
      DiskPartitionInformation = v10;
      if ( v10 >= 0 )
      {
        if ( v16[10] )
          return (unsigned int)-1073741436;
      }
    }
    return DiskPartitionInformation;
  }
  v9 = v12 - *(_QWORD *)&PARTITION_SYSTEM_GUID.Data1;
  if ( v12 == *(_QWORD *)&PARTITION_SYSTEM_GUID.Data1 )
    v9 = v13 - *(_QWORD *)PARTITION_SYSTEM_GUID.Data4;
  if ( !v9 )
  {
    DiskPartitionInformation = 0;
    goto LABEL_8;
  }
  return DiskPartitionInformation;
}
