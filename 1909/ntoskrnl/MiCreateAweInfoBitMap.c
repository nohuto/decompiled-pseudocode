/*
 * XREFs of MiCreateAweInfoBitMap @ 0x140895A64
 * Callers:
 *     MiAllocateAweInfo @ 0x140895678 (MiAllocateAweInfo.c)
 *     MiResizeAweBitMap @ 0x1408963BC (MiResizeAweBitMap.c)
 * Callees:
 *     PsChargeProcessNonPagedPoolQuota @ 0x1400734A0 (PsChargeProcessNonPagedPoolQuota.c)
 *     RtlClearAllBitsEx @ 0x1400E85B0 (RtlClearAllBitsEx.c)
 *     ExGetCallBackBlockRoutine @ 0x14013D6E0 (ExGetCallBackBlockRoutine.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiGetAweInfoPartition @ 0x140896068 (MiGetAweInfoPartition.c)
 */

__int64 __fastcall MiCreateAweInfoBitMap(__int64 a1, __int64 a2, __int64 a3)
{
  _KPROCESS *Process; // r14
  __int64 v5; // rbx
  unsigned __int64 v6; // rax
  __int16 v7; // ax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 *PoolWithTag; // rax
  unsigned __int64 *v11; // rbp
  __int64 result; // rax
  int v13; // ebx
  _RTL_BITMAP_EX BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  v5 = *(_QWORD *)(MiGetAweInfoPartition(a1, a2, a3) + 7880);
  v6 = Process[1].ActiveProcessors.Bitmap[6];
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
  PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(
                                      NonPagedPoolNx,
                                      8 * ((v9 >> 6) + ((v9 & 0x3F) != 0)),
                                      0x4C646156u);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  BitMapHeader.SizeOfBitMap = v9;
  BitMapHeader.Buffer = PoolWithTag;
  RtlClearAllBitsEx(&BitMapHeader);
  if ( (*(_DWORD *)a1 & 1) != 0
    && (v13 = PsChargeProcessNonPagedPoolQuota((__int64)Process, 8 * ((v9 >> 6) + ((v9 & 0x3F) != 0))), v13 < 0) )
  {
    ExFreePoolWithTag(v11, 0);
    return (unsigned int)v13;
  }
  else
  {
    result = 0LL;
    *(_RTL_BITMAP_EX *)(a1 + 16) = BitMapHeader;
  }
  return result;
}
