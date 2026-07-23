/*
 * XREFs of MiReleaseDriverPtes @ 0x14074503C
 * Callers:
 *     MiUnloadSystemImage @ 0x1406A6338 (MiUnloadSystemImage.c)
 *     MiReturnSystemImageAddress @ 0x140745000 (MiReturnSystemImageAddress.c)
 *     MmUnmapLockedRestartPages @ 0x140887C70 (MmUnmapLockedRestartPages.c)
 *     MiReleaseSystemImageVa @ 0x140A3D2A8 (MiReleaseSystemImageVa.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x1400839F0 (RtlNumberOfSetBits.c)
 *     RtlClearBits @ 0x140091EF0 (RtlClearBits.c)
 *     MiReturnSystemVa @ 0x1400AB840 (MiReturnSystemVa.c)
 *     RtlAreBitsSet @ 0x140121B70 (RtlAreBitsSet.c)
 *     MiUnlockDriverMappings @ 0x140155724 (MiUnlockDriverMappings.c)
 *     MiLockDriverMappings @ 0x14015591C (MiLockDriverMappings.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseDriverPtes(unsigned int a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbx
  struct _KTHREAD *CurrentThread; // r15
  _RTL_BITMAP *v7; // r12
  unsigned __int64 v8; // rsi
  ULONG_PTR v9; // rbp
  _RTL_BITMAP *v10; // rbx
  unsigned int *Buffer; // rcx
  void *v12; // rax
  __int64 v13; // [rsp+30h] [rbp-48h]
  unsigned __int64 NumberToClear; // [rsp+88h] [rbp+10h]
  unsigned __int64 StartingIndex; // [rsp+98h] [rbp+20h]

  v3 = a3;
  v5 = a1;
  CurrentThread = KeGetCurrentThread();
  v7 = 0LL;
  v8 = 0LL;
  v9 = (__int64)(a2 << 25) >> 16;
  MiLockDriverMappings((__int64)CurrentThread);
  v13 = v5;
  v10 = (_RTL_BITMAP *)qword_140464928[v5];
  if ( !v10 )
    goto LABEL_16;
  do
  {
    Buffer = v10->Buffer;
    if ( a2 >= (unsigned __int64)Buffer )
    {
      v8 = (-(__int64)((*(&v10[2].SizeOfBitMap + 1) & 1) != 0) & 0xFFFFFFFFFFFFFFF1uLL) + 16;
      if ( a2 < (unsigned __int64)&Buffer[2 * v8 * v10[1].SizeOfBitMap] )
        break;
    }
    v7 = v10;
    v10 = *(_RTL_BITMAP **)&v10->SizeOfBitMap;
  }
  while ( v10 );
  if ( !v10 )
LABEL_16:
    KeBugCheckEx(0x1Au, 0x2102uLL, v9, (unsigned int)((_DWORD)v3 << 12), 0LL);
  NumberToClear = (~(v8 - 1) & (v8 + v3 - 1)) / v8;
  StartingIndex = ((__int64)(a2 - (unsigned __int64)v10->Buffer) >> 3) / v8;
  if ( !RtlAreBitsSet(v10 + 1, StartingIndex, NumberToClear) )
    KeBugCheckEx(0x1Au, 0x2103uLL, v9, (unsigned int)((_DWORD)v3 << 12), 0LL);
  if ( (*(&v10[2].SizeOfBitMap + 1) & 2) != 0
    || (RtlClearBits(v10 + 1, StartingIndex, NumberToClear), !RtlNumberOfSetBits(v10 + 1)) )
  {
    MiReturnSystemVa(
      (__int64)v10->Buffer << 25 >> 16,
      ((__int64)v10->Buffer << 25 >> 16) + (((unsigned int)v8 * v10[1].SizeOfBitMap) << 12),
      12 - (a1 != 0));
    v12 = *(void **)&v10->SizeOfBitMap;
    if ( v7 )
      *(_QWORD *)&v7->SizeOfBitMap = v12;
    else
      qword_140464928[v13] = v12;
    MiUnlockDriverMappings((__int64)CurrentThread);
    ExFreePoolWithTag(v10, 0);
  }
  else
  {
    MiUnlockDriverMappings((__int64)CurrentThread);
  }
}
