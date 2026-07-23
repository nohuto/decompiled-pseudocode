/*
 * XREFs of CmpComputeLogFillLevel @ 0x1406F9220
 * Callers:
 *     CmpTransWriteLog @ 0x1406F9138 (CmpTransWriteLog.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpComputeLogFillLevel(
        PLOG_FILE_OBJECT plfoLog,
        PCLFS_LSN plsnStart,
        PCLFS_LSN plsnFinish,
        ULONG cbContainer,
        int a5,
        _DWORD *a6)
{
  NTSTATUS LogFileInformation; // ebx
  unsigned __int64 v11; // r12
  CLFS_INFORMATION *PoolWithTag; // rax
  CLFS_INFORMATION *v13; // rdi
  unsigned __int64 v14; // rax
  ULONG pcbInfoBuffer; // [rsp+30h] [rbp-D8h] BYREF
  ULONG v17; // [rsp+34h] [rbp-D4h] BYREF
  LONGLONG pcbDifference; // [rsp+38h] [rbp-D0h] BYREF
  CLFS_INFORMATION pinfoBuffer; // [rsp+40h] [rbp-C8h] BYREF

  pcbDifference = 0LL;
  LogFileInformation = -1073741267;
  v11 = a5 * cbContainer / 0x64;
  if ( !ClfsLsnInvalid(plsnStart) && !ClfsLsnInvalid(plsnFinish) && !ClfsLsnEqual(plsnStart, plsnFinish) )
    LogFileInformation = ClfsLsnDifference(plsnStart, plsnFinish, cbContainer, 0x1000u, &pcbDifference);
  pcbInfoBuffer = 120;
  PoolWithTag = (CLFS_INFORMATION *)ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x20204D43u);
  v13 = PoolWithTag;
  if ( PoolWithTag )
  {
    ClfsGetLogFileInformation(plfoLog, PoolWithTag, &pcbInfoBuffer);
    ExFreePoolWithTag(v13, 0);
  }
  if ( LogFileInformation < 0 )
  {
    v17 = 120;
    LogFileInformation = ClfsGetLogFileInformation(plfoLog, &pinfoBuffer, &v17);
    if ( LogFileInformation < 0 )
      return (unsigned int)LogFileInformation;
    v14 = pinfoBuffer.TotalAvailable - pinfoBuffer.CurrentAvailable;
  }
  else
  {
    v14 = pcbDifference;
  }
  *a6 = v14 / v11;
  return (unsigned int)LogFileInformation;
}
