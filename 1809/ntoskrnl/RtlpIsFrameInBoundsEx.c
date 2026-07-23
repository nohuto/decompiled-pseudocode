/*
 * XREFs of RtlpIsFrameInBoundsEx @ 0x1400A0550
 * Callers:
 *     RtlpWalkFrameChain @ 0x14009EAD0 (RtlpWalkFrameChain.c)
 *     PspGetSetContextInternal @ 0x140620940 (PspGetSetContextInternal.c)
 * Callees:
 *     KeQueryCurrentStackInformation @ 0x1400CAC30 (KeQueryCurrentStackInformation.c)
 *     KeGetNextKernelStackSegment @ 0x14013D478 (KeGetNextKernelStackSegment.c)
 */

char __fastcall RtlpIsFrameInBoundsEx(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  __int64 v9; // r8
  int v10; // ecx
  _KTHREAD *CurrentThread; // r10
  unsigned int v12; // r9d
  char *v13; // rcx
  char *v14; // rdx
  char v15; // al
  char v16; // r8
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  char v19[8]; // [rsp+20h] [rbp-18h] BYREF
  char v20[16]; // [rsp+28h] [rbp-10h] BYREF
  unsigned int v21; // [rsp+48h] [rbp+10h] BYREF

  if ( (a2 & 7) != 0 )
    return 0;
  if ( a2 >= *a1 && a2 < *a3 )
    return 1;
  if ( *a1 < 0xFFFF800000000000uLL )
    return 0;
  KeQueryCurrentStackInformation(&v21, v20, v19);
  if ( v21 <= 9 )
  {
    v10 = 929;
    if ( _bittest(&v10, v21) )
      return 0;
  }
  CurrentThread = KeGetCurrentThread();
  v12 = v21;
  if ( v21 != 1 )
  {
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 && CurrentThread != KeGetCurrentPrcb()->IdleThread )
    {
      v13 = (char *)KeGetPcr()->Prcb.DpcStack + 80;
      v14 = &v13[-(unsigned int)KeKernelStackSize];
      if ( (unsigned __int64)v14 <= a2 && a2 < (unsigned __int64)v13 )
      {
        *a3 = (unsigned __int64)v13;
        *a1 = (unsigned __int64)v14;
        return 1;
      }
    }
    v12 = v21;
  }
  v15 = 0;
  if ( !*a4 )
  {
    LOBYTE(v9) = 1;
    KeGetNextKernelStackSegment(CurrentThread, a4, v9);
    v15 = v16;
  }
  if ( (v12 != 1 && v12 != 6 || !v15) && !(unsigned __int8)KeGetNextKernelStackSegment(CurrentThread, a4, 0LL) )
    return 0;
  v17 = a4[1];
  v18 = *a4;
  if ( a2 < v17 || a2 >= v18 )
    return 0;
  *a1 = v17;
  *a3 = v18;
  return 1;
}
