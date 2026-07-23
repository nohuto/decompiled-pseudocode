/*
 * XREFs of MiReleaseDriverPtes @ 0x14070F2DC
 * Callers:
 *     MiUnloadSystemImage @ 0x140652C64 (MiUnloadSystemImage.c)
 *     MiReturnSystemImageAddress @ 0x14070F2A0 (MiReturnSystemImageAddress.c)
 *     MmUnmapLockedRestartPages @ 0x14084D970 (MmUnmapLockedRestartPages.c)
 *     MiGetNewAddressForBootImage @ 0x1409B95F4 (MiGetNewAddressForBootImage.c)
 *     MiReleaseNewAddressForBootImage @ 0x1409F874C (MiReleaseNewAddressForBootImage.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x14000F440 (RtlNumberOfSetBits.c)
 *     RtlClearBits @ 0x140017890 (RtlClearBits.c)
 *     MiReturnSystemVa @ 0x14002840C (MiReturnSystemVa.c)
 *     MiUnlockDriverMappings @ 0x1400F6028 (MiUnlockDriverMappings.c)
 *     MiLockDriverMappings @ 0x1400F6228 (MiLockDriverMappings.c)
 *     RtlAreBitsSet @ 0x14011F4C0 (RtlAreBitsSet.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseDriverPtes(unsigned int a1, unsigned __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v4; // rdi
  ULONG v6; // r12d
  _QWORD *v8; // r15
  __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  ULONG v11; // ebp
  __int64 v12; // rax
  __int64 v14; // [rsp+88h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v4 = a1;
  v6 = (unsigned int)(a3 + 15) >> 4;
  v8 = 0LL;
  MiLockDriverMappings((__int64)CurrentThread);
  v14 = v4;
  v9 = qword_140439FC8[v4];
  if ( !v9 )
    goto LABEL_16;
  do
  {
    v10 = *(_QWORD *)(v9 + 8);
    if ( a2 >= v10 && a2 < v10 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v9 + 16) << 16) >> 12) )
      break;
    v8 = (_QWORD *)v9;
    v9 = *(_QWORD *)v9;
  }
  while ( v9 );
  if ( !v9 )
LABEL_16:
    KeBugCheckEx(0x1Au, 0x2102uLL, (__int64)(a2 << 25) >> 16, (unsigned int)(a3 << 12), 0LL);
  v11 = (unsigned int)((__int64)(a2 - *(_QWORD *)(v9 + 8)) >> 3) >> 4;
  if ( !RtlAreBitsSet((PRTL_BITMAP)(v9 + 16), v11, v6) )
    KeBugCheckEx(0x1Au, 0x2103uLL, (__int64)(a2 << 25) >> 16, (unsigned int)(a3 << 12), 0LL);
  if ( (*(_DWORD *)(v9 + 36) & 1) != 0
    || (RtlClearBits((PRTL_BITMAP)(v9 + 16), v11, v6), RtlNumberOfSetBits((PRTL_BITMAP)(v9 + 16))) )
  {
    MiUnlockDriverMappings((__int64)CurrentThread);
  }
  else
  {
    MiReturnSystemVa(
      (__int64)(*(_QWORD *)(v9 + 8) << 25) >> 16,
      ((__int64)(*(_QWORD *)(v9 + 8) << 25) >> 16) + (unsigned int)(*(_DWORD *)(v9 + 16) << 16),
      12 - (a1 != 0));
    v12 = *(_QWORD *)v9;
    if ( v8 )
      *v8 = v12;
    else
      qword_140439FC8[v14] = v12;
    MiUnlockDriverMappings((__int64)CurrentThread);
    ExFreePoolWithTag((PVOID)v9, 0);
  }
}
