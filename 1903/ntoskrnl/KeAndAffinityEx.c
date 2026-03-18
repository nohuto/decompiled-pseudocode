/*
 * XREFs of KeAndAffinityEx @ 0x1400BE320
 * Callers:
 *     PpmParkSteerInterrupts @ 0x1400BDBA0 (PpmParkSteerInterrupts.c)
 *     KiGetDeepIdleProcessors @ 0x1400F8F40 (KiGetDeepIdleProcessors.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1400FD290 (KeQueryLogicalProcessorRelationship.c)
 *     PpmParkReportParkedCores @ 0x14011E5D0 (PpmParkReportParkedCores.c)
 *     KeIsSubsetAffinityEx @ 0x1402A4EA0 (KeIsSubsetAffinityEx.c)
 *     PspSetEffectiveJobLimits @ 0x140697164 (PspSetEffectiveJobLimits.c)
 *     KeInitializeProfile @ 0x14087F8C4 (KeInitializeProfile.c)
 *     PspSetVmProcessorHostProcessWorkerRoutine @ 0x1408C9020 (PspSetVmProcessorHostProcessWorkerRoutine.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall KeAndAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2, _BYTE *a3)
{
  unsigned __int16 v6; // dx
  _BYTE *v7; // r9
  unsigned int v8; // r10d
  unsigned __int16 v9; // cx
  __int64 v10; // r8
  bool v11; // zf
  __int64 v12; // rdx
  _BYTE v14[176]; // [rsp+20h] [rbp-C8h] BYREF

  memset(v14, 0, 0xA8uLL);
  v6 = *a1;
  v7 = v14;
  if ( a3 )
    v7 = a3;
  v8 = 0;
  v9 = 0;
  if ( v6 >= *a2 )
    v6 = *a2;
  *(_WORD *)v7 = v6;
  if ( v6 )
  {
    do
    {
      v10 = 4LL * v9;
      v11 = (*(_QWORD *)&a2[v10 + 4] & *(_QWORD *)&a1[v10 + 4]) == 0LL;
      *(_QWORD *)&v7[v10 * 2 + 8] = *(_QWORD *)&a2[v10 + 4] & *(_QWORD *)&a1[v10 + 4];
      if ( !v11 )
        v8 = 1;
      ++v9;
    }
    while ( v9 < *(_WORD *)v7 );
  }
  if ( v7 != v14 )
  {
    *((_DWORD *)v7 + 1) = 0;
    *((_WORD *)v7 + 1) = 20;
    if ( v9 < 0x14u )
    {
      do
      {
        v12 = v9++;
        *(_QWORD *)&v7[8 * v12 + 8] = 0LL;
      }
      while ( v9 < *((_WORD *)v7 + 1) );
    }
  }
  return v8;
}
