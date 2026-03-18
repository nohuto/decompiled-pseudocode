/*
 * XREFs of PerformMutexDriverCallbacks @ 0x1C000FF18
 * Callers:
 *     FreeObjData @ 0x1C0002EB0 (FreeObjData.c)
 *     ParseRelease @ 0x1C0003260 (ParseRelease.c)
 *     ParseTerm @ 0x1C0006EE0 (ParseTerm.c)
 *     ParseAcquire @ 0x1C000A350 (ParseAcquire.c)
 *     Mutex @ 0x1C000FE70 (Mutex.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C00038B0 (DereferenceObjectEx.c)
 *     ConvertNtStatusToAMLIStatus @ 0x1C000FFCC (ConvertNtStatusToAMLIStatus.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

__int64 __fastcall PerformMutexDriverCallbacks(int a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int16 a5)
{
  unsigned __int64 v5; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ebx
  KIRQL i; // al
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  _QWORD v19[6]; // [rsp+30h] [rbp-30h] BYREF

  v5 = 0LL;
  if ( !gDeviceLockMutexSupported || !ghMutexObject )
  {
    v13 = 0;
    goto LABEL_6;
  }
  if ( a4 )
  {
    v5 = a4;
    for ( i = ExAcquireSpinLockShared(&ACPINamespaceLock); *(_WORD *)(v5 + 66) == 8; v5 = *(_QWORD *)(v5 + 16) )
      ;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 112));
    ExReleaseSpinLockShared(&ACPINamespaceLock, i);
    if ( *(_WORD *)(v5 + 66) != 6 )
    {
      v13 = -1072431089;
      goto LABEL_6;
    }
  }
  memset(v19, 0, sizeof(v19));
  LODWORD(v19[0]) = a1;
  v19[1] = a2 + 80;
  if ( a1 )
  {
    v16 = a1 - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          if ( v18 != 1 )
          {
            v13 = -1073741637;
LABEL_26:
            LogError(3222536195LL, v10, v11, v12);
            AcpiDiagTraceAmlError(a3, 3222536195LL);
            PrintDebugMessage(145, v13, 0, 0, 0LL);
            goto LABEL_6;
          }
          v19[2] = v5 + 120;
          v19[3] = *(_QWORD *)(a2 + 72);
          LODWORD(v19[4]) = *(_DWORD *)(a2 + 64);
        }
        else
        {
          v19[2] = a3;
        }
      }
      else
      {
        v19[3] = a3;
        v19[2] = v5 + 120;
        v19[4] = *(_QWORD *)(a2 + 72);
        LODWORD(v19[5]) = *(_DWORD *)(a2 + 64);
        WORD2(v19[5]) = a5;
      }
    }
  }
  v13 = ((__int64 (__fastcall *)(_QWORD *))ghMutexObject)(v19);
  if ( v13 < 0 && v13 != -1073741643 && v13 != -1073741536 )
    goto LABEL_26;
LABEL_6:
  if ( v5 )
    DereferenceObjectEx(v5);
  return ConvertNtStatusToAMLIStatus((unsigned int)v13);
}
