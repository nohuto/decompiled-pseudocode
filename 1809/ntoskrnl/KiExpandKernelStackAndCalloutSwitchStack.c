/*
 * XREFs of KiExpandKernelStackAndCalloutSwitchStack @ 0x1400C9BC0
 * Callers:
 *     KeExpandKernelStackAndCalloutInternal @ 0x1400C9AE0 (KeExpandKernelStackAndCalloutInternal.c)
 * Callees:
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1400C9D00 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     KeQueryCurrentStackInformation @ 0x1400CAC30 (KeQueryCurrentStackInformation.c)
 *     MmGrowKernelStackEx @ 0x140132FA0 (MmGrowKernelStackEx.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     KeGetCurrentStackPointer @ 0x1401BC400 (KeGetCurrentStackPointer.c)
 */

__int64 __fastcall KiExpandKernelStackAndCalloutSwitchStack(int a1, int a2, unsigned __int64 a3, int a4, __int64 a5)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 CurrentStackPointer; // rax
  signed __int64 StackLimit; // r12
  __int64 v12; // rbp
  unsigned __int64 v13; // rdi
  unsigned __int8 CurrentIrql; // cl
  unsigned __int64 v16; // [rsp+30h] [rbp-38h] BYREF
  char v17[8]; // [rsp+38h] [rbp-30h] BYREF
  int v18; // [rsp+80h] [rbp+18h] BYREF

  if ( a3 > 0x11800 )
    return 3221225713LL;
  CurrentThread = KeGetCurrentThread();
  CurrentStackPointer = KeGetCurrentStackPointer();
  StackLimit = (signed __int64)CurrentThread->StackLimit;
  v12 = CurrentStackPointer;
  v13 = *((_QWORD *)CurrentThread->InitialStack + 1) & 0xFFFFFFFFFFFFFFFEuLL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql == 2 )
  {
    if ( (a4 & 2) != 0 )
      return 3221225714LL;
    if ( !(unsigned __int8)KeQueryCurrentStackInformation(&v18, &v16, v17) )
      __fastfail(4u);
    if ( v18 == 1 )
    {
      StackLimit = v16;
      v13 = v16;
    }
  }
  else
  {
    if ( CurrentIrql > 2u )
      KeBugCheckEx(0xAu, 2uLL, CurrentIrql, 0LL, 0LL);
    if ( a3 == (unsigned int)KeKernelStackSize || a3 == 24576 && (unsigned int)KeKernelStackSize >= 0x6000 )
      a4 |= 5u;
  }
  if ( v12 - v13 < a3 || (a4 & 1) != 0 || v12 - StackLimit < a3 && (int)MmGrowKernelStackEx(v12, a3) < 0 )
    return KiExpandKernelStackAndCalloutOnStackSegment(a1, a2, a3, a4, a5);
  else
    return 3221226635LL;
}
