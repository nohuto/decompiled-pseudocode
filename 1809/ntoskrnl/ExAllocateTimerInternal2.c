/*
 * XREFs of ExAllocateTimerInternal2 @ 0x14016BA50
 * Callers:
 *     ExAllocateTimer @ 0x14016BA20 (ExAllocateTimer.c)
 *     ExAllocateTimerInternal @ 0x14031C700 (ExAllocateTimerInternal.c)
 * Callees:
 *     ExpExTimerAttributesAreValid @ 0x1400FD508 (ExpExTimerAttributesAreValid.c)
 *     KiInitializeTimer2 @ 0x1400FD56C (KiInitializeTimer2.c)
 *     KeInitializeIRTimer @ 0x14013B020 (KeInitializeIRTimer.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

unsigned __int64 __fastcall ExAllocateTimerInternal2(__int64 a1, __int64 a2, _WORD *a3, unsigned int a4)
{
  ULONG_PTR v5; // rdi
  _WORD *PoolWithTag; // rax
  unsigned __int64 v9; // rbx
  __int64 v10; // rdx
  _WORD v12[20]; // [rsp+30h] [rbp-28h] BYREF

  v5 = a4;
  if ( !ExpExTimerAttributesAreValid(a4) || ((v5 & 2) != 0) != (a3 != 0LL) )
    KeBugCheckEx(0xC7u, 9uLL, 0LL, v5, 0LL);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xA0uLL, 0x6D547845u);
  v9 = (unsigned __int64)PoolWithTag;
  if ( PoolWithTag )
  {
    if ( (v5 & 2) != 0 )
    {
      v12[0] = *a3;
      v12[1] = a3[1];
      KeInitializeIRTimer((__int64)PoolWithTag, a1, a2, (unsigned __int8 *)v12, v5);
    }
    else
    {
      PoolWithTag[1] = 0;
      KiInitializeTimer2((__int64)PoolWithTag, a1, a2, v5);
    }
    *(_QWORD *)(v9 + 136) = KiWaitNever ^ __ROR8__(v9 ^ _byteswap_uint64(KiWaitAlways), KiWaitNever);
    v10 = KiWaitNever ^ __ROR8__(v9 ^ _byteswap_uint64(KiWaitAlways), KiWaitNever);
    *(_BYTE *)(v9 + 152) = ExpTimerFreedCookie;
    *(_QWORD *)(v9 + 144) = v10;
  }
  return v9;
}
