/*
 * XREFs of InitializeEnergyEstimation @ 0x1C00323B0
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0026714 (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000DFB0 (_guard_dispatch_icall_nop.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C00324E8 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     RetrieveEfficiencyClassInformation @ 0x1C0032A90 (RetrieveEfficiencyClassInformation.c)
 */

__int64 InitializeEnergyEstimation()
{
  unsigned int v0; // ebx
  unsigned int i; // edx
  unsigned int v2; // r8d
  void *v3; // rcx
  __int64 v4; // r8
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  KeQueryPerformanceCounter(&PerformanceFrequency);
  qword_1C0013BD0 = PerformanceFrequency.QuadPart;
  HalPrivateDispatchTable[76]((__int64)&unk_1C0013BD8);
  RetrieveEfficiencyClassInformation();
  qword_1C00135F8 = 0LL;
  v0 = 0;
  qword_1C00135F0 = 0LL;
  for ( i = dword_1C00139BC; v0 < dword_1C00139BC; ++v0 )
  {
    InitializeEnergyEstimationForEfficiencyClass(v0);
    i = dword_1C00139BC;
  }
  v2 = 1;
  qword_1C00135F8 = qword_1C0013AC0[0];
  if ( i > 1 )
  {
    while ( Globals[32 * (unsigned __int64)v2 + 216] == qword_1C0013AC0[0] )
    {
      if ( ++v2 >= i )
        goto LABEL_8;
    }
    qword_1C00135F8 = (__int64)SnapEnergyCountersDispatch;
  }
LABEL_8:
  v3 = (void *)qword_1C0013AB8[0];
  v4 = 1LL;
  qword_1C00135F0 = qword_1C0013AB8[0];
  if ( i > 1 )
  {
    while ( Globals[32 * (unsigned __int64)(unsigned int)v4 + 215] == qword_1C0013AB8[0] )
    {
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= i )
        goto LABEL_13;
    }
    v3 = ComputeEnergyDispatch;
    qword_1C00135F0 = (__int64)ComputeEnergyDispatch;
  }
LABEL_13:
  if ( !v3 )
  {
    v3 = ComputeProcessorEnergy;
    qword_1C00135F0 = (__int64)ComputeProcessorEnergy;
  }
  return ((__int64 (__fastcall *)(void *, __int64, __int64, __int64 *))qword_1C00136E0)(
           v3,
           qword_1C00135F8,
           v4,
           Globals);
}
