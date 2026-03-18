/*
 * XREFs of PopCreatePowerRequestObject @ 0x14069F1D4
 * Callers:
 *     PopCreateUserPowerRequest @ 0x14069DFD4 (PopCreateUserPowerRequest.c)
 *     PopCreateKernelPowerRequest @ 0x140739C54 (PopCreateKernelPowerRequest.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140001CA0 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x140001F10 (RtlInsertElementGenericTableAvl.c)
 *     PsGetProcessId @ 0x1400045E0 (PsGetProcessId.c)
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     PsGetCurrentProcessSessionId @ 0x1400EC3B0 (PsGetCurrentProcessSessionId.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ObCreateObjectEx @ 0x1405D9340 (ObCreateObjectEx.c)
 *     PopStatsCreatePowerRequest @ 0x14069F4E4 (PopStatsCreatePowerRequest.c)
 *     PopAcquirePowerRequestPushLock @ 0x1406A0544 (PopAcquirePowerRequestPushLock.c)
 */

__int64 __fastcall PopCreatePowerRequestObject(_QWORD *a1, _DWORD *a2)
{
  _QWORD *v3; // r13
  unsigned __int8 v4; // bl
  unsigned int ProcessId; // r12d
  unsigned __int32 v6; // esi
  _DWORD *inserted; // rdi
  __int64 v8; // rcx
  int v9; // r14d
  _DWORD *v10; // rbx
  __int64 v12; // [rsp+28h] [rbp-39h]
  int v13; // [rsp+38h] [rbp-29h]
  _QWORD Buffer[2]; // [rsp+58h] [rbp-9h] BYREF
  _DWORD v15[2]; // [rsp+68h] [rbp+7h] BYREF
  __int64 v16; // [rsp+70h] [rbp+Fh]
  __int64 v17; // [rsp+78h] [rbp+17h]
  int v18; // [rsp+80h] [rbp+1Fh]
  int v19; // [rsp+84h] [rbp+23h]
  __int128 v20; // [rsp+88h] [rbp+27h]
  void *v21; // [rsp+D0h] [rbp+6Fh] BYREF

  v3 = a1;
  v15[1] = 0;
  v19 = 0;
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
  v21 = 0LL;
  v6 = _InterlockedIncrement(&PopPowerRequestId);
  LOBYTE(a1) = 1;
  Buffer[1] = v6;
  Buffer[0] = 0LL;
  PopAcquirePowerRequestPushLock(a1);
  inserted = RtlInsertElementGenericTableAvl(&PopPowerRequestTable, Buffer, 0x10u, 0LL);
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
  if ( inserted )
  {
    v13 = a2[6] + 32;
    v15[0] = 48;
    v16 = 0LL;
    v18 = 32;
    v17 = 0LL;
    v20 = 0LL;
    v9 = ObCreateObjectEx(0, (_DWORD *)PopPowerRequestObjectType, (int)v15, v4, v12, 144, v13, 0, &v21, 0LL);
    if ( v9 >= 0 )
    {
      v10 = v21;
      memset(v21, 0, 0x90uLL);
      v10[4] = PsGetCurrentProcessSessionId();
      v10[22] = ProcessId;
      *((_QWORD *)v10 + 10) = a2;
      v10[7] = v6;
      inserted[2] = v6;
      *(_QWORD *)inserted = v10;
      inserted = 0LL;
      PopStatsCreatePowerRequest(v10);
      *v3 = v10;
    }
    if ( inserted )
    {
      LOBYTE(v8) = 1;
      PopAcquirePowerRequestPushLock(v8);
      RtlDeleteElementGenericTableAvl(&PopPowerRequestTable, inserted);
      PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v9;
}
