/*
 * XREFs of KiExpandKernelStackAndCalloutSwitchStack @ 0x1400A17E0
 * Callers:
 *     KeExpandKernelStackAndCalloutInternal @ 0x1400A1700 (KeExpandKernelStackAndCalloutInternal.c)
 * Callees:
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1400A1930 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     KeQueryCurrentStackInformationEx @ 0x1400A2E20 (KeQueryCurrentStackInformationEx.c)
 *     MmGrowKernelStackEx @ 0x140136780 (MmGrowKernelStackEx.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     KeGetCurrentStackPointer @ 0x1401C4D80 (KeGetCurrentStackPointer.c)
 */

__int64 __fastcall KiExpandKernelStackAndCalloutSwitchStack(int a1, int a2, unsigned __int64 a3, int a4, __int64 a5)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 CurrentStackPointer; // rax
  signed __int64 StackLimit; // r12
  __int64 v12; // rbp
  unsigned __int64 v13; // rdi
  unsigned __int8 CurrentIrql; // cl
  __int64 v16; // rax
  unsigned __int64 v17; // [rsp+30h] [rbp-38h] BYREF
  char v18[8]; // [rsp+38h] [rbp-30h] BYREF
  int v19; // [rsp+80h] [rbp+18h] BYREF

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
    v16 = KeGetCurrentStackPointer();
    if ( !(unsigned __int8)KeQueryCurrentStackInformationEx(v16, &v19, &v17, v18) )
      __fastfail(4u);
    if ( v19 == 1 || v19 == 10 )
    {
      StackLimit = v17;
      v13 = v17;
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
