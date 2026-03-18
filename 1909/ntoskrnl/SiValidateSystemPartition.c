/*
 * XREFs of SiValidateSystemPartition @ 0x140129CE4
 * Callers:
 *     SiGetBootDeviceName @ 0x1406D2754 (SiGetBootDeviceName.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     SiGetDiskPartitionInformation @ 0x1406D2B6C (SiGetDiskPartitionInformation.c)
 *     SiIssueSynchronousIoctl @ 0x14093277C (SiIssueSynchronousIoctl.c)
 */

__int64 __fastcall SiValidateSystemPartition(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4, char a5)
{
  unsigned int DiskPartitionInformation; // edx
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // eax
  _QWORD v12[18]; // [rsp+30h] [rbp-81h] BYREF
  _DWORD v13[2]; // [rsp+C0h] [rbp+Fh] BYREF
  int v14; // [rsp+C8h] [rbp+17h]
  _BYTE v15[40]; // [rsp+D0h] [rbp+1Fh] BYREF

  memset(v12, 0, sizeof(v12));
  v14 = 0;
  DiskPartitionInformation = SiGetDiskPartitionInformation(a1, v12);
  if ( (DiskPartitionInformation & 0x80000000) != 0 )
    return DiskPartitionInformation;
  if ( a2 && LODWORD(v12[0]) != *a2 )
    return (unsigned int)-1073741823;
  DiskPartitionInformation = -1073741823;
  if ( LODWORD(v12[0]) != 1 )
  {
    if ( !LODWORD(v12[0]) )
      DiskPartitionInformation = BYTE1(v12[4]) == 0 ? 0xC0000001 : 0;
    if ( (DiskPartitionInformation & 0x80000000) != 0 )
      return DiskPartitionInformation;
LABEL_8:
    if ( a5 )
    {
      v14 = 0;
      memset(v15, 0, sizeof(v15));
      v13[0] = 0;
      v13[1] = 0;
      v11 = SiIssueSynchronousIoctl(a1, v10, v13);
      DiskPartitionInformation = v11;
      if ( v11 >= 0 )
      {
        if ( v15[10] )
          return (unsigned int)-1073741436;
      }
    }
    return DiskPartitionInformation;
  }
  v9 = v12[4] - *(_QWORD *)&PARTITION_SYSTEM_GUID.Data1;
  if ( v12[4] == *(_QWORD *)&PARTITION_SYSTEM_GUID.Data1 )
    v9 = v12[5] - *(_QWORD *)PARTITION_SYSTEM_GUID.Data4;
  if ( !v9 )
  {
    DiskPartitionInformation = 0;
    goto LABEL_8;
  }
  return DiskPartitionInformation;
}
