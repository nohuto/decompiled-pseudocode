/*
 * XREFs of EtwpIncrementUmLoggerFile @ 0x18010F670
 * Callers:
 *     EtwProcessPrivateLoggerRequest @ 0x18004FE80 (EtwProcessPrivateLoggerRequest.c)
 * Callees:
 *     EtwpSynchronizeWithLogger @ 0x18004CFA0 (EtwpSynchronizeWithLogger.c)
 *     EtwpGetPrivateLoggerContext @ 0x18004D150 (EtwpGetPrivateLoggerContext.c)
 *     RtlNtStatusToDosError @ 0x18004EDE0 (RtlNtStatusToDosError.c)
 *     EtwpQueryUmLogger @ 0x180089394 (EtwpQueryUmLogger.c)
 */

__int64 __fastcall EtwpIncrementUmLoggerFile(unsigned int a1, _DWORD *a2, _DWORD *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v9; // rdi
  ULONG v10; // ebx
  NTSTATUS v11; // eax
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = 0LL;
  *a2 = 0;
  *a3 = 176;
  if ( a1 < 0xB0 )
    return 0LL;
  result = EtwpGetPrivateLoggerContext(a4, &v12);
  if ( !(_DWORD)result )
  {
    v9 = v12;
    if ( (*(_BYTE *)(v12 + 324) & 8) == 0 )
    {
      v10 = 87;
LABEL_10:
      _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(v9 + 20) + 8));
      return v10;
    }
    EtwpSynchronizeWithLogger(v12, 2);
    v11 = EtwpSynchronizeWithLogger(v9, 4);
    if ( v11 )
    {
      v10 = RtlNtStatusToDosError(v11);
      if ( v10 )
        goto LABEL_10;
    }
    else
    {
      v10 = 0;
    }
    EtwpQueryUmLogger(a1, a2, a3, a4);
    goto LABEL_10;
  }
  return result;
}
