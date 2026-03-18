/*
 * XREFs of WheapAttemptArchitecturalErrorRecovery @ 0x14033FD40
 * Callers:
 *     WheapAttemptErrorRecovery @ 0x14033FDD8 (WheapAttemptErrorRecovery.c)
 * Callees:
 *     WheapGetErrorSourceFunction @ 0x14018BA58 (WheapGetErrorSourceFunction.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     WheaGetErrPacketFromErrRecord @ 0x14033F654 (WheaGetErrPacketFromErrRecord.c)
 *     WheapGetErrorSource @ 0x1403400FC (WheapGetErrorSource.c)
 */

__int64 __fastcall WheapAttemptArchitecturalErrorRecovery(__int64 a1)
{
  unsigned int v2; // ebx
  PWHEA_ERROR_PACKET ErrPacketFromErrRecord; // rax
  __int64 ErrorSource; // rax
  __int64 v5; // r10
  __int64 v6; // rdi
  __int64 (__fastcall *ErrorSourceFunction)(__int64, int *); // rax
  __int64 v8; // r11
  unsigned int v9; // eax
  int v11; // [rsp+38h] [rbp+10h] BYREF

  v2 = -1073741811;
  ErrPacketFromErrRecord = WheaGetErrPacketFromErrRecord((PWHEA_ERROR_RECORD)a1);
  if ( ErrPacketFromErrRecord )
  {
    if ( ErrPacketFromErrRecord->ErrorSourceType <= (unsigned int)WheaErrSrcTypeDeviceDriver )
    {
      ErrorSource = WheapGetErrorSource(&WheapErrorSourceTable, ErrPacketFromErrRecord->ErrorSourceId);
      v6 = ErrorSource;
      if ( ErrorSource )
      {
        if ( *(_QWORD *)(v5 + 48) )
        {
          ErrorSourceFunction = (__int64 (__fastcall *)(__int64, int *))WheapGetErrorSourceFunction(ErrorSource, 3, 0);
          if ( ErrorSourceFunction )
          {
            v9 = ErrorSourceFunction(v8, &v11);
            _InterlockedDecrement((volatile signed __int32 *)(v6 + 92));
            v2 = v9;
          }
          else
          {
            v2 = -1073741822;
          }
          *(_DWORD *)(a1 + 12) = v11;
        }
      }
    }
  }
  return v2;
}
