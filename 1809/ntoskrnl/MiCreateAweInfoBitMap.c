/*
 * XREFs of MiCreateAweInfoBitMap @ 0x14084F8C4
 * Callers:
 *     MiAllocateAweInfo @ 0x14084F4DC (MiAllocateAweInfo.c)
 *     MiResizeAweBitMap @ 0x1408501F4 (MiResizeAweBitMap.c)
 * Callees:
 *     PsChargeProcessNonPagedPoolQuota @ 0x140076C10 (PsChargeProcessNonPagedPoolQuota.c)
 *     ExGetCallBackBlockRoutine @ 0x140088BB0 (ExGetCallBackBlockRoutine.c)
 *     RtlClearAllBitsEx @ 0x140110310 (RtlClearAllBitsEx.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     MiGetAweInfoPartition @ 0x14084FED0 (MiGetAweInfoPartition.c)
 */

__int64 __fastcall MiCreateAweInfoBitMap(__int64 a1, __int64 a2, __int64 a3)
{
  _KPROCESS *Process; // r14
  __int64 v5; // rbx
  unsigned __int64 v6; // rax
  __int16 v7; // ax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbx
  PVOID PoolWithTag; // rax
  void *v11; // rbp
  __int64 result; // rax
  int v13; // ebx
  __int128 v14; // [rsp+20h] [rbp-18h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  v5 = *(_QWORD *)(MiGetAweInfoPartition(a1, a2, a3) + 7112);
  v6 = Process[1].ActiveProcessors.Bitmap[7];
  if ( v6 )
  {
    v7 = *(_WORD *)(v6 + 8);
    if ( (v7 == 332 || v7 == 452) && (unsigned __int64)(v5 + 1) > 0x100000000LL )
      v5 = 0xFFFFFFFFLL;
  }
  v8 = ExGetCallBackBlockRoutine(a1);
  if ( v8 == 1 )
    v9 = v5 + 1;
  else
    v9 = (~(v8 - 1) & (v5 + v8 - 1)) / v8;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * ((v9 >> 6) + ((v9 & 0x3F) != 0)), 0x4C646156u);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *(_QWORD *)&v14 = v9;
  *((_QWORD *)&v14 + 1) = PoolWithTag;
  RtlClearAllBitsEx((__int64)&v14);
  if ( (*(_DWORD *)a1 & 1) != 0
    && (v13 = PsChargeProcessNonPagedPoolQuota((__int64)Process, 8 * ((v9 >> 6) + ((v9 & 0x3F) != 0))), v13 < 0) )
  {
    ExFreePoolWithTag(v11, 0);
    return (unsigned int)v13;
  }
  else
  {
    result = 0LL;
    *(_OWORD *)(a1 + 16) = v14;
  }
  return result;
}
