/*
 * XREFs of EtwpSetPmcProfileSource @ 0x1408F563C
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x1408F6580 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x14006B9F0 (KeReleaseMutex.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     KeInitializeProfileCallback @ 0x14087F94C (KeInitializeProfileCallback.c)
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
    if ( qword_140432AE8 )
    {
      ExFreePoolWithTag(qword_140432AE8, 0);
      qword_140432AE8 = 0LL;
      EtwpPmcProfile = 0;
    }
    v6 = v2;
    qword_140432AE8 = ExAllocatePoolWithTag(NonPagedPoolNx, 248 * v2, 0x58777445u);
    v7 = qword_140432AE8;
    if ( qword_140432AE8 )
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
