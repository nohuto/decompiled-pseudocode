/*
 * XREFs of PopCreatePowerRequestObject @ 0x140589F40
 * Callers:
 *     PopCreateUserPowerRequest @ 0x140589C2C (PopCreateUserPowerRequest.c)
 *     PopCreateKernelPowerRequest @ 0x1407024B4 (PopCreateKernelPowerRequest.c)
 * Callees:
 *     PsGetCurrentProcessSessionId @ 0x140002AA0 (PsGetCurrentProcessSessionId.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     RtlDeleteElementGenericTableAvl @ 0x140006CA0 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x140006F00 (RtlInsertElementGenericTableAvl.c)
 *     PsGetProcessId @ 0x1400A5650 (PsGetProcessId.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PopStatsCreatePowerRequest @ 0x14058A234 (PopStatsCreatePowerRequest.c)
 *     PopAcquirePowerRequestPushLock @ 0x14058AD50 (PopAcquirePowerRequestPushLock.c)
 *     ObCreateObjectEx @ 0x1405E15E0 (ObCreateObjectEx.c)
 */

__int64 __fastcall PopCreatePowerRequestObject(_QWORD *a1, _DWORD *a2)
{
  _QWORD *v3; // r12
  char v4; // bl
  unsigned int ProcessId; // r15d
  signed __int32 v6; // esi
  _DWORD *inserted; // rdi
  int v8; // r9d
  __int64 v9; // rcx
  int Object; // ebp
  _BYTE Buffer[8]; // [rsp+50h] [rbp-68h] BYREF
  signed __int32 v13; // [rsp+58h] [rbp-60h]
  int v14; // [rsp+60h] [rbp-58h] BYREF
  __int64 v15; // [rsp+68h] [rbp-50h]
  __int64 v16; // [rsp+70h] [rbp-48h]
  int v17; // [rsp+78h] [rbp-40h]
  __int128 v18; // [rsp+80h] [rbp-38h]

  v3 = a1;
  if ( *a2 )
  {
    v4 = 1;
    ProcessId = (unsigned int)PsGetProcessId(KeGetCurrentThread()->ApcState.Process);
  }
  else
  {
    v4 = 0;
    ProcessId = 0;
  }
  v6 = _InterlockedIncrement(&PopPowerRequestId);
  LOBYTE(a1) = 1;
  v13 = v6;
  PopAcquirePowerRequestPushLock(a1);
  inserted = RtlInsertElementGenericTableAvl(&PopPowerRequestTable, Buffer, 0x10u, 0LL);
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
  if ( inserted )
  {
    v15 = 0LL;
    v16 = 0LL;
    LOBYTE(v8) = v4;
    v14 = 48;
    v17 = 32;
    v18 = 0LL;
    Object = ObCreateObjectEx(0, PopPowerRequestObjectType, (unsigned int)&v14, v8);
    if ( Object >= 0 )
    {
      memset(0LL, 0, 0x90uLL);
      MEMORY[0x10] = PsGetCurrentProcessSessionId();
      MEMORY[0x58] = ProcessId;
      MEMORY[0x50] = a2;
      MEMORY[0x1C] = v6;
      inserted[2] = v6;
      *(_QWORD *)inserted = 0LL;
      inserted = 0LL;
      PopStatsCreatePowerRequest(0LL);
      *v3 = 0LL;
    }
    if ( inserted )
    {
      LOBYTE(v9) = 1;
      PopAcquirePowerRequestPushLock(v9);
      RtlDeleteElementGenericTableAvl(&PopPowerRequestTable, inserted);
      PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Object;
}
