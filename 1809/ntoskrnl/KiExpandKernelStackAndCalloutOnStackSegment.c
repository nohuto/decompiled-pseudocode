/*
 * XREFs of KiExpandKernelStackAndCalloutOnStackSegment @ 0x1400C9D00
 * Callers:
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x1400C9BC0 (KiExpandKernelStackAndCalloutSwitchStack.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeReleaseMutant @ 0x1400BF950 (KeReleaseMutant.c)
 *     MmCreateKernelStack @ 0x1400C9FF0 (MmCreateKernelStack.c)
 *     MmDeleteKernelStack @ 0x1400CA580 (MmDeleteKernelStack.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     KiSwitchKernelStackAndCallout @ 0x1401C03D0 (KiSwitchKernelStackAndCallout.c)
 */

__int64 __fastcall KiExpandKernelStackAndCalloutOnStackSegment(
        ULONG_PTR a1,
        ULONG_PTR a2,
        unsigned __int64 a3,
        char a4,
        __int64 a5)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int8 v6; // bl
  char v7; // r15
  unsigned int v8; // r13d
  __int64 v9; // r12
  unsigned int v10; // ebp
  int v11; // ecx
  int v12; // r15d
  __int64 KernelStack; // rax
  __int64 v14; // r14
  unsigned __int8 v16; // r8
  unsigned __int64 v17; // r8
  __int64 v18; // rcx
  int MiscFlags; // eax
  char v20; // bp
  unsigned int v21; // r15d
  bool v22; // zf
  unsigned __int8 v23; // al
  __int64 v24; // [rsp+30h] [rbp-58h] BYREF
  __int64 CurrentIrql; // [rsp+38h] [rbp-50h]
  LARGE_INTEGER *Timeout; // [rsp+A0h] [rbp+18h]
  unsigned int v29; // [rsp+A8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v6 = 0;
  v7 = a4;
  v8 = 0;
  Timeout = 0LL;
  v9 = a3;
  CurrentIrql = KeGetCurrentIrql();
  if ( (_BYTE)CurrentIrql == 2 )
  {
    v6 = 0;
    v24 = 0LL;
    if ( a5 )
      v6 = 16;
    Timeout = (LARGE_INTEGER *)&v24;
  }
  if ( (a4 & 8) != 0 && a5 )
    v6 = 16;
  v10 = 0;
  if ( a3 <= (unsigned int)KeKernelStackSize )
  {
    v7 = a4 | 4;
    v9 = 0LL;
  }
  else
  {
    v6 |= 1u;
    v10 = 1;
    v8 = 1;
    if ( a5 && *(_BYTE *)(a5 + 4) )
      v10 = 5;
  }
  v29 = v8;
  if ( (v6 & 0xF0) != 0 )
    goto LABEL_56;
  v11 = v10 | 2;
  if ( (v7 & 2) != 0 )
    v11 = v10;
  v10 = v11 | 0x10;
  v12 = v7 & 4;
  if ( !v12 )
    v10 = v11;
  KernelStack = MmCreateKernelStack(
                  v10,
                  *(unsigned __int8 *)(*(_QWORD *)(KiProcessorBlock[CurrentThread->IdealProcessor] + 192) + 146LL),
                  CurrentThread);
  v8 |= 4u;
  v14 = KernelStack;
  if ( !v12 )
    v8 = v29;
  if ( !KernelStack )
  {
LABEL_56:
    if ( !a5 || (v6 & 1) != 0 && !*(_BYTE *)(a5 + 4) )
      return 3221225495LL;
    if ( _bittestandset((signed __int32 *)&CurrentThread->116, 0xFu) )
      v6 |= 4u;
    if ( KeWaitForSingleObject((PVOID)(a5 + 8), WrCalloutStack, 0, 0, Timeout) == 258 )
    {
      CurrentThread->MiscFlags ^= (CurrentThread->MiscFlags ^ (v6 << 13)) & 0x8000;
      return 3221227272LL;
    }
    v16 = *(_BYTE *)(a5 + 6);
    if ( v16 >= *(_BYTE *)(a5 + 5) )
    {
      KeReleaseMutant((PRKMUTANT)(a5 + 8), 1, 0, 0);
      return 3221225495LL;
    }
    v6 |= 8u;
    v14 = *(_QWORD *)(a5 + 8LL * v16 + 64);
    *(_BYTE *)(a5 + 6) = v16 + 1;
    if ( (v6 & 1) == 0 && *(_BYTE *)(a5 + 4) )
    {
      LOBYTE(v10) = 5;
      v9 = 71680LL;
      v6 |= 1u;
    }
  }
  *(_QWORD *)(v14 - 48) = v14;
  v17 = v14 - 48;
  if ( (v6 & 1) != 0 )
    v18 = v14 - 73727;
  else
    v18 = v14 - (unsigned int)KeKernelStackSize + 1;
  *(_QWORD *)(v17 + 8) = v18;
  *(_QWORD *)(v17 + 16) = CurrentThread->StackBase;
  *(_QWORD *)(v17 + 40) = CurrentThread->InitialStack;
  if ( (v10 & 1) != 0 )
  {
    v17 |= 1uLL;
    if ( (v10 & 4) != 0 )
      v17 |= 2uLL;
  }
  MiscFlags = CurrentThread->MiscFlags;
  if ( (MiscFlags & 0x1000) != 0 )
  {
    v6 |= 2u;
    v20 = 2;
  }
  else
  {
    CurrentThread->MiscFlags = MiscFlags | 0x1000;
    v20 = 0;
  }
  v21 = KiSwitchKernelStackAndCallout(a2, a1, v17, v9);
  if ( (v6 & 8) != 0 )
  {
    v22 = (*(_BYTE *)(a5 + 6))-- == 1;
    if ( v22 && (v6 & 4) == 0 )
      CurrentThread->MiscFlags &= ~0x8000u;
    KeReleaseMutant((PRKMUTANT)(a5 + 8), 1, 0, 0);
  }
  else
  {
    MmDeleteKernelStack(v14, v8);
  }
  if ( !v20 )
    CurrentThread->MiscFlags &= ~0x1000u;
  if ( KeGetCurrentIrql() != (_BYTE)CurrentIrql )
  {
    v23 = KeGetCurrentIrql();
    KeBugCheckEx(0xC8u, (((unsigned __int8)CurrentIrql | ((unsigned __int64)v23 << 8)) << 8) | 2, a1, a2, 0LL);
  }
  return v21;
}
