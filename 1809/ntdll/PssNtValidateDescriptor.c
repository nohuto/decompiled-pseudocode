/*
 * XREFs of PssNtValidateDescriptor @ 0x1800898B0
 * Callers:
 *     PssNtFreeSnapshot @ 0x180089530 (PssNtFreeSnapshot.c)
 *     PssNtQuerySnapshot @ 0x180089640 (PssNtQuerySnapshot.c)
 *     PssNtWalkSnapshot @ 0x1800897D0 (PssNtWalkSnapshot.c)
 *     PssNtDuplicateSnapshot @ 0x180111F60 (PssNtDuplicateSnapshot.c)
 * Callees:
 *     RtlRaiseException @ 0x1800087D0 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall PssNtValidateDescriptor(unsigned int *a1, void *a2)
{
  unsigned int v4; // ebx
  EXCEPTION_RECORD ExceptionRecord; // [rsp+60h] [rbp-C8h] BYREF

  if ( a1 )
  {
    v4 = *a1;
    if ( v4 == 1146311504 )
      return 0LL;
    memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
    ExceptionRecord.ExceptionCode = -1073741816;
    ExceptionRecord.ExceptionFlags = 0;
    ExceptionRecord.ExceptionRecord = 0LL;
    ExceptionRecord.ExceptionAddress = a2;
    ExceptionRecord.NumberParameters = 4;
    ExceptionRecord.ExceptionInformation[0] = (unsigned __int64)a1;
    ExceptionRecord.ExceptionInformation[1] = 0LL;
    ExceptionRecord.ExceptionInformation[2] = v4;
    ExceptionRecord.ExceptionInformation[3] = 1146311504LL;
    RtlRaiseException(&ExceptionRecord);
  }
  return 3221225480LL;
}
