/*
 * XREFs of EtwpSetPmcProfileSource @ 0x1408B9DB8
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x1408BAD0C (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     KeReleaseMutex @ 0x140006340 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     KeInitializeProfileCallback @ 0x14084578C (KeInitializeProfileCallback.c)
 */

__int64 __fastcall EtwpSetPmcProfileSource(_DWORD *a1, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  __int64 v6; // r14
  _DWORD *v7; // rsi

  v2 = a2;
  v3 = 0;
  if ( a2 - 1 > 7 )
    return 3221225485LL;
  KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
  if ( (WORD2(PerfGlobalGroupMask[0]) & 0x400) != 0 )
  {
    v3 = -1073741053;
  }
  else
  {
    if ( qword_14040B408 )
    {
      ExFreePoolWithTag(qword_14040B408, 0);
      qword_14040B408 = 0LL;
      EtwpPmcProfile = 0;
    }
    v6 = v2;
    qword_14040B408 = ExAllocatePoolWithTag(NonPagedPoolNx, 248 * v2, 0x58777445u);
    v7 = qword_14040B408;
    if ( qword_14040B408 )
    {
      EtwpPmcProfile = v2;
      if ( (_DWORD)v2 )
      {
        do
        {
          KeInitializeProfileCallback(v7, (__int64)EtwpPmcInterrupt, (unsigned int)*a1, *a1);
          v7 += 62;
          ++a1;
          --v6;
        }
        while ( v6 );
      }
    }
    else
    {
      v3 = -1073741801;
    }
  }
  KeReleaseMutex(&EtwpGroupMaskMutex, 0);
  return v3;
}
