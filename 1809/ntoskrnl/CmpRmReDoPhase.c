/*
 * XREFs of CmpRmReDoPhase @ 0x1407FA3E4
 * Callers:
 *     CmpStartRMLog @ 0x14070F5B4 (CmpStartRMLog.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     CmpVerifyLogRecord @ 0x140581E30 (CmpVerifyLogRecord.c)
 *     CmpTransSearchAddTransFromRm @ 0x1406FB8F0 (CmpTransSearchAddTransFromRm.c)
 *     CmpDoReadTxRBigLogRecord @ 0x1407F9F54 (CmpDoReadTxRBigLogRecord.c)
 *     CmpRealignLogBuffers @ 0x1407FA0D4 (CmpRealignLogBuffers.c)
 *     CmpDoReDoRecord @ 0x140808534 (CmpDoReDoRecord.c)
 */

int __fastcall CmpRmReDoPhase(__int64 a1, CLFS_LSN a2)
{
  _QWORD *v2; // rax
  ULONG idxRecord; // edx
  struct _PRIVILEGE_SET *v5; // rdi
  int v6; // eax
  PVOID ppvReadBuffer; // [rsp+58h] [rbp+7h] BYREF
  PVOID pvReadContext; // [rsp+60h] [rbp+Fh] BYREF
  struct _PRIVILEGE_SET *v10; // [rsp+68h] [rbp+17h] BYREF
  __int64 v11; // [rsp+70h] [rbp+1Fh] BYREF
  CLFS_LSN plsnPrevious; // [rsp+78h] [rbp+27h] BYREF
  CLFS_LSN plsnUndoNext; // [rsp+80h] [rbp+2Fh] BYREF
  CLFS_LSN plsnRecord; // [rsp+88h] [rbp+37h] BYREF
  CLS_RECORD_TYPE peRecordType; // [rsp+B8h] [rbp+67h] BYREF
  CLFS_LSN plsnFirst; // [rsp+C0h] [rbp+6Fh] BYREF
  CLFS_LSN plsnUser; // [rsp+C8h] [rbp+77h] BYREF
  ULONG pcbBuffer; // [rsp+D0h] [rbp+7Fh] BYREF

  plsnFirst = a2;
  pvReadContext = 0LL;
  v2 = (_QWORD *)(a1 + 16);
  peRecordType = 0;
  if ( (_QWORD *)*v2 != v2 )
  {
    LODWORD(v2) = ClfsReadLogRecord(
                    *(PVOID *)(a1 + 96),
                    &plsnFirst,
                    ClfsContextForward,
                    &ppvReadBuffer,
                    &pcbBuffer,
                    &peRecordType,
                    &plsnUndoNext,
                    &plsnPrevious,
                    &pvReadContext);
    do
    {
      if ( (int)v2 < 0 )
        break;
      if ( (peRecordType & 1) != 0 )
      {
        LODWORD(v2) = CmpTransSearchAddTransFromRm((_QWORD *)a1, 0LL, (__int64)ppvReadBuffer + 16, 0, (__int64)&v11);
        if ( (int)v2 >= 0 )
        {
          idxRecord = pcbBuffer;
          v5 = (struct _PRIVILEGE_SET *)ppvReadBuffer;
          v10 = (struct _PRIVILEGE_SET *)ppvReadBuffer;
          plsnUser.offset.idxRecord = pcbBuffer;
          if ( pcbBuffer < 0x30 )
            break;
          if ( *((int *)ppvReadBuffer + 3) < 0 )
          {
            LODWORD(v2) = CmpDoReadTxRBigLogRecord(
                            pvReadContext,
                            (unsigned int *)ppvReadBuffer,
                            pcbBuffer,
                            &v10,
                            &plsnUser);
            if ( (int)v2 < 0 )
              break;
            v5 = v10;
            idxRecord = plsnUser.offset.idxRecord;
          }
          v6 = CmpVerifyLogRecord((__int64)v5, idxRecord);
          if ( v6 >= 0 )
          {
            CmpRealignLogBuffers((__int64)v5);
            v6 = CmpDoReDoRecord(v11, v5);
          }
          else if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
          {
            __debugbreak();
          }
          if ( v6 < 0 )
            *(_DWORD *)(v11 + 48) |= 2u;
          if ( *((int *)ppvReadBuffer + 3) < 0 )
            CmSiFreeMemory(v5);
        }
      }
      peRecordType = 1;
      LODWORD(v2) = ClfsReadNextLogRecord(
                      pvReadContext,
                      &ppvReadBuffer,
                      &pcbBuffer,
                      &peRecordType,
                      0LL,
                      &plsnUndoNext,
                      &plsnPrevious,
                      &plsnRecord);
    }
    while ( (_DWORD)v2 != -1073741807 );
    if ( pvReadContext )
      LODWORD(v2) = ClfsTerminateReadLog(pvReadContext);
  }
  return (int)v2;
}
